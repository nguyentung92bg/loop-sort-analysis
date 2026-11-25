import pathlib,struct,json,re,sys
w=pathlib.Path.cwd();r=w/'Results/Run-20261123-162851-39ff5e';b=(r/'Inputs/libil2cpp.so').read_bytes();phoff=struct.unpack_from('<Q',b,32)[0];ents,num=struct.unpack_from('<HH',b,54);seg=[]
for i in range(num):
 p=struct.unpack_from('<IIQQQQQQ',b,phoff+i*ents)
 if p[0]==1:seg.append((p[3],p[2],p[5]))
def raw(a,n=8):
 for v,o,s in seg:
  if v<=a and a+n<=v+s:return b[o+a-v:o+a-v+n]
 return bytes(n)
shoff=struct.unpack_from('<Q',b,40)[0];ents,num=struct.unpack_from('<HH',b,58);rel={}
for i in range(num):
 p=struct.unpack_from('<IIQQQQIIQQ',b,shoff+i*ents)
 if p[1]==4:
  for at in range(p[4],p[4]+p[5],p[9] or 24):
   off,info,ad=struct.unpack_from('<QQq',b,at)
   if info&0xffffffff==1027:rel[off]=ad
lit={int(x['address'],16):x['value']for x in json.load(open(r/'stringliteral.json',encoding='utf-8-sig'))};print('REL',len(rel))
for x in ['049cbc28','049caef0']:
 v=rel.get(int(x,16)-0x100000);print(x,hex(v)if v else v,repr(lit.get(v)))
for x in ['013a9ff0','013a9950','013a9958','013a8550','013a7f58']:print(x,struct.unpack('<ii',raw(int(x,16)-0x100000)))
B=w/'Analysis/Loop Sort';m={}
for x in json.load(open(B/'Data/native-index.json')):
 p=B/x.get('evidence','none')
 if p.is_file():
  st=p.read_text();vals=[]
  for adr in set(re.findall(r'PTR_DAT_([0-9a-f]+)',st)):
   value=rel.get(int(adr,16)-0x100000,int.from_bytes(raw(int(adr,16)-0x100000),'little'));ss=lit.get(value)
   if ss:vals.append(ss)
  if vals:m[x['method']]=vals
(B/'Data/native-strings.json').write_text(json.dumps(m,ensure_ascii=False,indent=2),encoding='utf-8');print('NATIVE STRINGS',len(m));print('SHEETS',{k:v for k,v in m.items() if 'SheetInstaller' in k or 'SheetGroup' in k})
sys.path.insert(0,str(w/'Analysis/FoodiePop/.deps'));import UnityPy
e=UnityPy.load(str(w/'Imports/LoopSort-ReportAssets/data.unity3d'))
for o in e.objects:
 if o.type.name=='ResourceManager':
  t=o.read_typetree();(B/'Data/resource-manager.json').write_text(json.dumps(t,indent=2),encoding='utf-8');print('RESOURCE',str(t)[:250]);print([x for x in t.get('m_Container',[])if any(s in x[0].lower()for s in ['sheet','level','carrier','config'])][:45])

