(()=>{
const data=LOOP_VAULT_VIEW,atlas=new Image();atlas.src=data.atlasDataUrl;
function counter(value){let text=String(value),padding=data.atlasPadding,face=data.face,advance=[...text].reduce((n,c)=>n+data.digits[c].m_Metrics.m_HorizontalAdvance,0),width=Math.ceil(advance+padding*2),height=Math.ceil(face.m_AscentLine-face.m_DescentLine+padding*2),canvas=document.createElement('canvas');canvas.width=width;canvas.height=height;let ctx=canvas.getContext('2d'),texture=new THREE.CanvasTexture(canvas);texture.colorSpace=THREE.NoColorSpace;
function paint(){ctx.clearRect(0,0,width,height);let pen=padding;for(let c of text){let glyph=data.digits[c],r=glyph.m_GlyphRect,m=glyph.m_Metrics;ctx.drawImage(atlas,r.m_X-padding,data.atlasHeight-r.m_Y-r.m_Height-padding,r.m_Width+padding*2,r.m_Height+padding*2,pen+m.m_HorizontalBearingX-padding,padding+face.m_AscentLine-m.m_HorizontalBearingY-padding,r.m_Width+padding*2,r.m_Height+padding*2);pen+=m.m_HorizontalAdvance}texture.needsUpdate=true}
if(atlas.complete&&atlas.naturalWidth)paint();else atlas.addEventListener('load',paint,{once:true});
let outline=data.materialColors._OutlineColor||{r:0,g:0,b:0,a:1},material=new THREE.SpriteMaterial({map:texture,transparent:true,depthWrite:false,depthTest:true,toneMapped:false});material.extensions={derivatives:true};
material.onBeforeCompile=shader=>{shader.uniforms.vaultOutline={value:new THREE.Color(outline.r,outline.g,outline.b)};shader.uniforms.vaultOutlineWidth={value:data.materialFloats._OutlineWidth*data.materialFloats._ScaleRatioA};shader.fragmentShader='uniform vec3 vaultOutline; uniform float vaultOutlineWidth;\n'+shader.fragmentShader;shader.fragmentShader=shader.fragmentShader.replace('#include <map_fragment>',`float vaultDistance=texture2D(map,vMapUv).a;
float vaultSoftness=max(fwidth(vaultDistance),0.008);
float vaultFace=smoothstep(0.5-vaultSoftness,0.5+vaultSoftness,vaultDistance);
float vaultAlpha=smoothstep(0.5-vaultOutlineWidth*0.5-vaultSoftness,0.5-vaultOutlineWidth*0.5+vaultSoftness,vaultDistance);
diffuseColor.rgb=mix(vaultOutline,vec3(1.0),vaultFace);
diffuseColor.a*=vaultAlpha;`)};material.customProgramCacheKey=()=> 'vault-original-fredoka-counter-v1';let sprite=new THREE.Sprite(material),scale=data.textFontSize/face.m_PointSize;sprite.scale.set(width*scale,height*scale,1);sprite.position.set(data.position.x,data.position.y,data.position.z);sprite.userData.vaultCounter={value,font:data.fontName,fontSize:data.textFontSize,position:data.position,background:false};return sprite}
window.OriginalVaultCounter=counter;
})();
