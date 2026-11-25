(()=>{
const src=window.LOOP_ORIGINAL;
const hiddenSource=window.LOOP_HIDDEN;
const hiddenTexture=hiddenSource?new THREE.TextureLoader().load(hiddenSource.textures._MainTex.dataUrl):null;
function hiddenMaterial(){
const c=hiddenSource.colors._Color,q=hiddenSource.colors._QuestionColor,p=hiddenSource.floats;
const base=new THREE.Color().setRGB(c.r,c.g,c.b,THREE.SRGBColorSpace),question=new THREE.Color().setRGB(q.r,q.g,q.b,THREE.SRGBColorSpace);
const m=new THREE.MeshStandardMaterial({color:base,roughness:1-p._Glossiness,metalness:p._Metallic});m.userData.hidden=true;
m.onBeforeCompile=shader=>{
Object.assign(shader.uniforms,{hiddenMap:{value:hiddenTexture},hiddenQuestionColor:{value:question},hiddenDensity:{value:Math.sqrt(p._Density)},hiddenScale:{value:p._Scale},hiddenScaleVariance:{value:p._ScaleVariance},hiddenRotationVariance:{value:p._RotationVariance*Math.PI/180}});
shader.vertexShader='varying vec3 hiddenPosition; varying float hiddenTop;\n'+shader.vertexShader;
shader.vertexShader=shader.vertexShader.replace('#include <begin_vertex>','#include <begin_vertex>\nhiddenPosition=(modelMatrix*vec4(position,1.0)).xyz; hiddenTop=normal.y;');
shader.fragmentShader='uniform sampler2D hiddenMap; uniform vec3 hiddenQuestionColor; uniform float hiddenDensity; uniform float hiddenScale; uniform float hiddenScaleVariance; uniform float hiddenRotationVariance; varying vec3 hiddenPosition; varying float hiddenTop; float hiddenHash(vec2 p){return fract(sin(dot(p,vec2(127.1,311.7)))*43758.5453);}\n'+shader.fragmentShader;
shader.fragmentShader=shader.fragmentShader.replace('#include <color_fragment>',`#include <color_fragment>
vec2 hiddenUV=hiddenPosition.xz*hiddenDensity;
vec2 hiddenCell=floor(hiddenUV), hiddenLocal=fract(hiddenUV)-0.5;
float hiddenSeed=hiddenHash(hiddenCell);
float hiddenAngle=(hiddenSeed-0.5)*hiddenRotationVariance;
mat2 hiddenRot=mat2(cos(hiddenAngle),-sin(hiddenAngle),sin(hiddenAngle),cos(hiddenAngle));
float markSize=hiddenScale+(hiddenHash(hiddenCell+17.0)-0.5)*hiddenScaleVariance;
vec2 markUV=hiddenRot*hiddenLocal/markSize+0.5;
float markBounds=step(0.0,markUV.x)*step(markUV.x,1.0)*step(0.0,markUV.y)*step(markUV.y,1.0);
float markMask=texture2D(hiddenMap,clamp(markUV,0.0,1.0)).r*markBounds*smoothstep(0.2,0.7,hiddenTop);
diffuseColor.rgb=mix(diffuseColor.rgb,hiddenQuestionColor,markMask);`);
};m.customProgramCacheKey=()=> 'loop-original-hidden-question-v1';return m;
}
const materialTextures=new Map();
function material(id){let d=src.materials[id],c=d?.colors?._BaseColor||d?.colors?._Color||{r:.5,g:.35,b:.7};let m=new THREE.MeshStandardMaterial({color:new THREE.Color().setRGB(c.r,c.g,c.b,THREE.SRGBColorSpace),roughness:.65,metalness:0,side:THREE.DoubleSide,transparent:(c.a??1)<1,opacity:c.a??1,depthWrite:(c.a??1)>=1});let mapEntry=d?.textures?.find(([name,v])=>name==='_BaseMap'&&v.m_Texture.m_PathID)||d?.textures?.find(([name,v])=>name==='_MainTex'&&v.m_Texture.m_PathID);if(mapEntry){let entry=mapEntry[1],tid=String(entry.m_Texture.m_PathID),url=src.textures?.[tid];if(url){let texture;if(materialTextures.has(tid))texture=materialTextures.get(tid).clone();else{texture=new THREE.TextureLoader().load(url);materialTextures.set(tid,texture)}texture.colorSpace=THREE.SRGBColorSpace;texture.wrapS=texture.wrapT=THREE.RepeatWrapping;texture.repeat.set(entry.m_Scale.x,entry.m_Scale.y);texture.offset.set(entry.m_Offset.x,entry.m_Offset.y);m.map=texture}}return m}

function geometry(id,weights=[]){let m=src.meshes[id],v=m.vertices.map(p=>p.slice()),s=m.shapes;
if(s?.channels)for(let i=0;i<s.channels.length;i++){let factor=(weights[i]||0)/(s.fullWeights[s.channels[i].frameIndex]||100),sh=s.shapes[s.channels[i].frameIndex];if(!factor||!sh)continue;for(let j=sh.firstVertex;j<sh.firstVertex+sh.vertexCount;j++){let a=s.vertices[j],p=v[a.index];p[0]+=a.vertex.x*factor;p[1]+=a.vertex.y*factor;p[2]+=a.vertex.z*factor}}
let g=new THREE.BufferGeometry();g.setAttribute('position',new THREE.Float32BufferAttribute(v.flat(),3));if(m.uv?.length)g.setAttribute('uv',new THREE.Float32BufferAttribute(m.uv.flatMap(p=>p.slice(0,2)),2));let indices=[],offset=0;for(let i=0;i<m.triangles.length;i++){let t=m.triangles[i].flat();g.addGroup(offset,t.length,i);indices.push(...t);offset+=t.length}g.setIndex(indices);if(m.normals?.length===v.length&&!weights.some(Boolean))g.setAttribute('normal',new THREE.Float32BufferAttribute(m.normals.flatMap(p=>p.slice(0,3)),3));else g.computeVertexNormals();return g}
function node(d,override){let g=new THREE.Group();g.name=d.name;g.userData.sourceId=d.id;g.userData.transformId=d.transformId;g.userData.rendererId=d.rendererId;g.userData.colorBindings=d.colorBindings||[];g.position.set(d.position.x,d.position.y,d.position.z);g.quaternion.set(d.rotation.x,d.rotation.y,d.rotation.z,d.rotation.w);g.scale.set(d.scale.x,d.scale.y,d.scale.z);if(d.mesh&&d.enabled!==false){let mesh=new THREE.Mesh(geometry(d.mesh,d.mesh==='411'?[0]:d.blendWeights),override?[override]:d.materials.map(material));mesh.castShadow=true;mesh.receiveShadow=true;g.add(mesh)}for(let a of d.children||[])if(a.active!==false)g.add(node(a,override));return g}
function carrier(key,curtainColor){let g=new THREE.Group();g.scale.z=-1;g.add(node(src.carriers[key]||src.carriers['0']));if(curtainColor){let code=curtainColor.toUpperCase(),hex=LOOP_RENDER_PALETTE[code];g.traverse(o=>{if(!/curtain/i.test(o.name))return;o.traverse(part=>{if(!part.isMesh||!hex)return;for(let m of Array.isArray(part.material)?part.material:[part.material])m.color.set(hex);part.userData.curtainColor=code;part.userData.curtainHex=hex})})}return g}
function blocks(stack){let g=new THREE.Group();g.scale.z=-1;let front=src.blocks.children[0],rear=src.blocks.children[3],step=4/Math.max(4,stack.length),y=src.blocks.position.y;
stack.forEach((t,i)=>{let d=structuredClone(i===0?front:i===stack.length-1?rear:src.blocks.children[1]);d.position={x:0,y,z:4.091-step*(i+.5)};d.scale.z=step;let hex=LOOP_RENDER_PALETTE[t.split('_')[0]]||'#8793aa',hidden=t.split('_').includes('H'),m=hidden?hiddenMaterial():new THREE.MeshStandardMaterial({color:hex,roughness:.4}),part=node(d,m);part.userData.hidden=hidden;part.userData.token=t;g.add(part)});return g}
function curve(points,closed,subdivide){let p=points.map(v=>v.clone());for(let k=0;k<Math.min(4,subdivide||0);k++){let a=[];p.forEach((v,i)=>{a.push(v);if(closed||i<p.length-1)a.push(v.clone().lerp(p[(i+1)%p.length],.5))});p=a}class BSpline extends THREE.Curve{getPoint(t,target=new THREE.Vector3()){let span=closed?p.length:p.length-1,u=Math.min(t,1-1e-9)*span,i=Math.floor(u),f=u-i,weights=[(1-f)**3/6,(3*f**3-6*f*f+4)/6,(-3*f**3+3*f*f+3*f+1)/6,f**3/6];target.set(0,0,0);for(let k=0;k<4;k++){let idx=i+k-1;idx=closed?(idx+p.length)%p.length:Math.max(0,Math.min(p.length-1,idx));target.addScaledVector(p[idx],weights[k])}return target}}return new BSpline()}
function road(path,height){let group=new THREE.Group(),template=src.road._channels[0].meshes[0],len=path.getLength(),count=Math.max(180,Math.ceil(len/.3)),positions=[],indices=[],groups=template.subMeshes.map(()=>[]);
for(let k=0;k<count;k++){let offset=positions.length/3;for(let v of template.vertices){let u=(k+(v.z+1)/2)/count,p=path.getPointAt(Math.min(1,u)),t=path.getTangentAt(Math.min(.999999,u)),n=new THREE.Vector3(-t.z,0,t.x).normalize();positions.push(p.x+n.x*v.x,height+v.y,p.z+n.z*v.x)}template.subMeshes.forEach((s,i)=>groups[i].push(...s.triangles.map(x=>x+offset)))}
let g=new THREE.BufferGeometry();g.setAttribute('position',new THREE.Float32BufferAttribute(positions,3));groups.forEach((a,i)=>{g.addGroup(indices.length,a.length,i);indices.push(...a)});g.setIndex(indices);g.computeVertexNormals();let mesh=new THREE.Mesh(g,src.road.materials.map(material));mesh.receiveShadow=true;mesh.castShadow=true;group.add(mesh);return group}
window.OriginalLoopModels={carrier,blocks,curve,road,source:src,node,material,geometry,hiddenMaterial};
})();
