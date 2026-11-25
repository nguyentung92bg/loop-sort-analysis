import pathlib,json,sys
B=pathlib.Path(__file__).resolve().parents[1];W=B.parents[1];sys.path.insert(0,str(W/'Analysis/FoodiePop/.deps'));import UnityPy
r=json.load(open(B/'Data/asset-records.json'));ids=set()
def visit(v,k=''):
 if isinstance(v,dict):
  if v.get('m_FileID')==0 and v.get('m_PathID')and any(x in k.lower()for x in ['sprite','icon','background']):ids.add(v['m_PathID'])
  for key,x in v.items():visit(x,key)
 elif isinstance(v,list):
  for x in v:visit(x,k)
for name in ['ShopVoodoo','Boosters','Features v2','LiveOpsDataOffersV2','Colors','Avatars']:
 x=next(x for x in r if x['name']==name);visit(json.load(open(B/x['file'])))
e=UnityPy.load(str(W/'Imports/LoopSort-ReportAssets/data.unity3d'));images=json.load(open(B/'Data/images.json'));count=0
for o in e.objects:
 if o.assets_file.name=='resources.assets'and o.path_id in ids and o.type.name=='Sprite':
  try:
   d=o.read();f=f'Images/UI/resources.assets_{o.path_id}.png';im=d.image;im.thumbnail((420,420));im.save(B/f);images.append(dict(name=d.m_Name,file=f,asset=o.assets_file.name,path_id=o.path_id));count+=1
  except Exception as ex:print('IMAGE',o.path_id,str(ex)[:80])
(B/'Data/images.json').write_text(json.dumps(images,ensure_ascii=False,indent=2),encoding='utf-8');print('Added',count,'exact referenced UI images; total',len(images))
