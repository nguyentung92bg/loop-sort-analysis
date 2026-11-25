import pathlib,sys,json,collections,base64,io
B=pathlib.Path(__file__).resolve().parents[1];W=B.parents[1];sys.path.insert(0,str(W/'Analysis/FoodiePop/.deps'))
import UnityPy
import numpy as np
from UnityPy.helpers.TypeTreeGenerator import TypeTreeGenerator
from UnityPy.helpers.MeshHelper import MeshHandler
E=UnityPy.load(str(W/'Imports/LoopSort-ReportAssets/data.unity3d'));gen=TypeTreeGenerator('6000.0.77f1');gen.load_local_dll_folder(str(W/'Results/Run-20261123-162851-39ff5e/DummyDll'));E.typetree_generator=gen
objects={o.path_id:o for o in E.objects if o.assets_file.name=='resources.assets'};cache={}
def read(i):
 if i not in cache:cache[i]=objects[i].read_typetree()
 return cache[i]
def pid(p):return p.get('m_PathID',0)if isinstance(p,dict)else p
def comp(go):return [pid(x.get('component',x))for x in read(go)['m_Component']]
def tr(go):return next(i for i in comp(go)if objects[i].type.name in ['Transform','RectTransform'])
def relative_matrix(transform,pivot):
 chain=[]
 while transform and transform!=pivot:
  t=read(transform);chain.append(t);transform=pid(t['m_Father'])
 m=np.eye(4)
 for t in reversed(chain):
  q=t['m_LocalRotation'];x,y,z,w=[q[k]for k in 'xyzw'];a=np.eye(4);a[:3,:3]=np.array([[1-2*(y*y+z*z),2*(x*y-z*w),2*(x*z+y*w)],[2*(x*y+z*w),1-2*(x*x+z*z),2*(y*z-x*w)],[2*(x*z-y*w),2*(y*z+x*w),1-2*(x*x+y*y)]])@np.diag([t['m_LocalScale'][k]for k in 'xyz']);a[:3,3]=[t['m_LocalPosition'][k]for k in 'xyz'];m=m@a
 return m.flatten(order='F').tolist()
def walk(go,depth=0):
 t=read(tr(go));print(' '*depth,go,read(go)['m_Name'],'pos',t['m_LocalPosition'],'rot',t['m_LocalRotation'],'scale',t['m_LocalScale'],'comps',[(objects[i].type.name,i)for i in comp(go)],flush=True)
 for c in t['m_Children']:walk(pid(read(pid(c))['m_GameObject']),depth+1)
if '--inspect'in sys.argv:
 walk(3182)
 for go in [3024,3361,2218,2869]:walk(go)
 for i in [4687,5042,5039,4354,4192,4394,4652,4628]:print('OBJ',i,json.dumps(read(i))[:2300])
 sys.exit()
meshes={};materials={};errors=[]
def material(i):
 if str(i)in materials:return str(i)
 t=read(i);props=t.get('m_SavedProperties',{});materials[str(i)]=dict(name=t['m_Name'],colors=dict(props.get('m_Colors',[])),floats=dict(props.get('m_Floats',[])),textures=props.get('m_TexEnvs',[]));return str(i)
def mesh(i):
 if str(i)in meshes:return str(i)
 o=objects[i];h=MeshHandler(o.read());h.process();t=read(i)
 meshes[str(i)]=dict(name=t['m_Name'],vertices=h.m_Vertices,normals=h.m_Normals,uv=h.m_UV0,triangles=h.get_triangles(),shapes=t.get('m_Shapes'))
 return str(i)
def node(go,force=False):
 t=read(tr(go));g=read(go);name=g['m_Name'];n=dict(name=name,id=go,transformId=tr(go),active=g['m_IsActive'],position=t['m_LocalPosition'],rotation=t['m_LocalRotation'],scale=t['m_LocalScale'],children=[])
 if not force and any(s in name.lower()for s in ['highlight','shadow','trail','view','collider','block parent']):return None
 for i in comp(go):
  typ=objects[i].type.name;r=read(i)
  if typ in ['MeshRenderer','SkinnedMeshRenderer']:
   mi=pid(r.get('m_Mesh',{}))
   if not mi:
    mf=next((read(k)for k in comp(go)if objects[k].type.name=='MeshFilter'),None)
    if mf:mi=pid(mf['m_Mesh'])
   if mi:
    try:n['mesh']=mesh(mi);n['rendererId']=i;n['materials']=[material(pid(m))for m in r['m_Materials']];n['blendWeights']=r.get('m_BlendShapeWeights',[]);n['enabled']=r.get('m_Enabled',True)
    except Exception as ex:errors.append([go,mi,str(ex)])
  if typ=='MonoBehaviour'and 'PropertyDefinitions'in r and 'Renderers'in r:
   n['colorBindings']=[dict(nodeId=pid(read(pid(renderer))['m_GameObject']),materialIndex=p['MaterialIndex'],key=p['PropertyKey'],property=p['ShaderPropertyName'])for renderer in r['Renderers']if pid(renderer)for p in r['PropertyDefinitions']]
 for c in t['m_Children']:
  q=node(pid(read(pid(c))['m_GameObject']))
  if q:n['children'].append(q)
 return n
carriers={}
for a in read(9854)['Collection']['list']:
 co=read(pid(a['Value']['Prefab']));pivot=pid(co['<Pivot>k__BackingField']);go=pid(read(pivot)['m_GameObject']);n=node(go);n['position']={'x':0,'y':0,'z':0};n['carrierFields']=co;n['featureComponents']=[dict(id=i,data=read(i))for i in comp(pid(co['m_GameObject']))if objects[i].type.name=='MonoBehaviour'and i!=pid(a['Value']['Prefab'])];carriers[str(a['Key'])]=n
 n['blockSlots']=[]
 for renderer in co['<GroupBlocks>k__BackingField']:
  blockgo=pid(read(pid(renderer))['m_GameObject']);slot=node(blockgo,True);slot['slotMatrix']=relative_matrix(tr(blockgo),pivot);n['blockSlots'].append(slot)
camera=dict(transform=read(4426),lens=read(9945)['Lens'],framing=read(11051),config=read(9852),physical=read(4655))
blocks=node(1478,True)
road=read(10448);road['materials']=[]
for i in comp(3612):
 if objects[i].type.name=='MeshRenderer':road['materials']=[material(pid(p))for p in read(i)['m_Materials']]
extra={}
for i in [411,448,416,417,418,434,455,465,452]:
 try:mesh(i)
 except Exception as ex:errors.append([i,str(ex)])
features={}
for entry in read(9843)['Collection']['list']:
 i=pid(entry['Value']['Prefab'])
 if i:
  go=i if objects[i].type.name=='GameObject'else pid(read(i)['m_GameObject']);n=node(go,True);n['featureComponents']=[dict(id=k,data=read(k))for k in comp(go)if objects[k].type.name=='MonoBehaviour'];features[str(entry['Key'])]=n
for obj in objects.values():
 if obj.type.name=='MonoBehaviour':
  try:r=read(obj.path_id)
  except Exception:continue
  if any(k in r for k in ['MetalMaterial','SurpriseMaterial']):
   for k in ['MetalMaterial','SurpriseMaterial']:
    if pid(r.get(k,{})):material(pid(r[k]))
   for k in ['MetalMesh','MetalGroupMesh']:
    if pid(r.get(k,{})):mesh(pid(r[k]))
   extra['metal'if 'MetalMaterial'in r else'surprise']=r
textures={};(B/'Images/Materials').mkdir(exist_ok=True)
for m in materials.values():
 for name,entry in m['textures']:
  i=pid(entry['m_Texture'])
  if name not in ['_BaseMap','_MainTex']or not i or str(i)in textures:continue
  try:
   image=objects[i].read().image;buf=io.BytesIO();image.save(buf,format='PNG');image.save(B/f'Images/Materials/{i}.png');textures[str(i)]='data:image/png;base64,'+base64.b64encode(buf.getvalue()).decode()
  except Exception as ex:errors.append(['texture',i,str(ex)])
out=dict(carriers=carriers,featurePrefabs=features,blockFeatures=extra,blocks=blocks,road=road,colors=read(9842),meshes=meshes,materials=materials,textures=textures,camera=camera,configs={n:read(i)for n,i in [('carrier',9853),('conveyor',9855),('block',9850)]},errors=errors)
(B/'Data/original-models.json').write_text(json.dumps(out,default=lambda x:x.tolist()if hasattr(x,'tolist')else str(x),separators=(',',':')),encoding='utf-8');(B/'original-models.js').write_text('window.LOOP_ORIGINAL='+json.dumps(out,default=lambda x:x.tolist()if hasattr(x,'tolist')else str(x),separators=(',',':'))+';',encoding='utf-8')
print('Exported',len(carriers),'carrier prefabs',len(meshes),'meshes',len(materials),'materials; errors',errors,flush=True)
print('Material sample',str(materials)[:2100]);print('Shape sample',str(meshes.get('411',{}).get('shapes'))[:2100])
