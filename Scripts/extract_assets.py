import pathlib,zipfile,io,json,re,sys,collections,hashlib
sys.stdout.reconfigure(encoding='utf-8');B=pathlib.Path(__file__).resolve().parents[1];W=B.parents[1];R=W/'Results/Run-20261123-162851-39ff5e';C=W/'Imports/LoopSort-ReportAssets';C.mkdir(exist_ok=True)
sys.path.insert(0,str(W/'Analysis/FoodiePop/.deps'));import UnityPy
from UnityPy.helpers.TypeTreeGenerator import TypeTreeGenerator

def save(n,v):(B/n).write_text(json.dumps(v,ensure_ascii=False,indent=2,default=str),encoding='utf-8')
def clean(v):
 if isinstance(v,dict):return {k:('[REDACTED]'if re.search(r'api.?key|secret|password|access.?token|credential',k,re.I)and isinstance(x,str)else clean(x))for k,x in v.items()}
 if isinstance(v,list):return [clean(x)for x in v]
 return v
z=zipfile.ZipFile(W.parent/'Loop+Sort_4.12.0_APKPure.xapk');save('Data/package.json',json.loads(z.read('manifest.json')));(B/'Images/icon.png').write_bytes(z.read('icon.png'));a=zipfile.ZipFile(io.BytesIO(z.read('com.Garawell.LoopSort.apk')));env=UnityPy.Environment();sources=[]
for i in a.infolist():
 n=i.filename
 if n=='assets/bin/Data/data.unity3d' or n.endswith('.bundle')and 'homescenes_assets_'not in n:
  f=C/pathlib.PurePosixPath(n).name
  if not f.exists():f.write_bytes(a.read(n))
  env.load_file(str(f));sources.append({'archive':n,'file':f.name,'size':i.file_size})
print('Loaded',len(sources),'sources',len(list(env.objects)),'objects',flush=True)
gen=TypeTreeGenerator('6000.0.77f1');gen.load_local_dll_folder(str(R/'DummyDll'));env.typetree_generator=gen
save('Data/external-refs.json',{f.name:[x.path for x in f.externals]for f in env.assets});save('Data/asset-sources.json',sources)
records=[];texts=[];images=[];errors=[];counts=collections.Counter()
for o in env.objects:
 counts[o.type.name]+=1
 try:
  if o.type.name=='MonoBehaviour':
   t=o.read_typetree();name=t.get('m_Name','');script=''
   try:
    ss=o.read().m_Script.deref().read_typetree();script=ss.get('m_Namespace','')+'.'+ss.get('m_ClassName','')
   except:pass
   asset=o.assets_file.name;f=f'Evidence/Assets/{asset}_{o.path_id}.json';save(f,clean(t));records.append(dict(name=name,script=script,file=f,asset=asset,path_id=o.path_id,keys=list(t)))
  elif o.type.name=='TextAsset':
   t=o.read_typetree();name=t['m_Name'];raw=t['m_Script'];raw=raw.encode('utf-8',errors='surrogateescape')if isinstance(raw,str)else raw;asset=o.assets_file.name;f=f'Evidence/TextAssets/{asset}_{o.path_id}';kind='text'
   try:obj=json.loads(raw);f+='.json';save(f,clean(obj));kind='json'
   except: f+='.txt';(B/f).write_bytes(raw)
   texts.append(dict(name=name,file=f,asset=asset,path_id=o.path_id,length=len(raw),kind=kind))
  elif o.type.name=='Sprite':
   d=o.read();name=d.m_Name
   if re.search(r'coin|booster|capacity|shuffle|undo|select|conveyor|block|carrier|rocket|ice|rock|tag|chest|reward|daily|streak|tournament|battle|pass|live|heart|leader|league|event|offer|pack|ticket|gem|star|lava|tower|rush|bell|medal|gift',name,re.I)and len(images)<200:
    f=f'Images/UI/{o.assets_file.name}_{o.path_id}.png';im=d.image;im.thumbnail((320,320));im.save(B/f);images.append(dict(name=name,file=f,asset=o.assets_file.name,path_id=o.path_id))
  elif o.type.name=='PlayerSettings':save('Data/player-settings.json',clean(o.read_typetree()))
 except Exception as ex:errors.append(dict(type=o.type.name,asset=o.assets_file.name,path_id=o.path_id,error=str(ex)[:180]))
for n,v in [('asset-records',records),('text-assets',texts),('images',images)]:save('Data/'+n+'.json',v)
save('Data/asset-extraction.json',dict(types=dict(counts),errors=errors,records=len(records),texts=len(texts),images=len(images)));print('DONE',len(records),'records',len(texts),'texts',len(images),'images',len(errors),'errors');print('TEXTS',[(x['name'],x['length'],x['kind'])for x in texts][:60]);print('CONFIGS',[(x['name'],x['script'])for x in records if x['name']][:65])
