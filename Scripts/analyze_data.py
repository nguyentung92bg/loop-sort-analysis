import pathlib,json,re,csv,collections,struct,hashlib
B=pathlib.Path(__file__).resolve().parents[1];W=B.parents[1];R=W/'Results/Run-20261123-162851-39ff5e'
def load(n):return json.loads((B/n).read_text(encoding='utf-8-sig'))
def save(n,v):(B/n).parent.mkdir(parents=True,exist_ok=True);(B/n).write_text(json.dumps(v,ensure_ascii=False,indent=2),encoding='utf-8')
texts=load('Data/text-assets.json');recs=load('Data/asset-records.json');classes=load('Data/classes.json');native=load('Data/native-index.json');res=load('Data/resource-manager.json')['m_Container'];lookup={(x['asset'],x['path_id']):x for x in texts};registry={};tables={}
for path,ptr in res:
 if path.startswith('sheets/'):
  x=lookup.get(('resources.assets',ptr['m_PathID']))
  if not x:continue
  value=load(x['file']);dst='Data/Tables/'+path[7:]+'.json';save(dst,value);registry[path]={'file':dst,'source':x['file'],'rows':len(value),'path_id':ptr['m_PathID']};tables[path]=value
save('Data/table-registry.json',registry)
for name in ['PayoutsOffersV2','ShopVoodoo','ProductMasters','Boosters','Colors','Features v2','BlockConfig','CarrierConfig','ConveyorConfig','GridConfig','SandConfig','LiquidConfig','RocketConfig','LiveOpsDataOffersV2','Areas']:
 x=next(r for r in recs if r['name']==name);save('Data/Configs/'+re.sub(r'[^A-Za-z0-9]+','-',name)+'.json',dict(source=x['file'],data=load(x['file'])))
def enum(name):
 c=next(x for x in classes if x['name']==name);return {k:int(v)for k,v in re.findall(r'public const \S+ (\w+) = (-?\d+);',(B/c['file']).read_text())}
enums={n:enum(n)for n in ['FeatureType','BaseColor','ColorShade','Item','BoosterType','LiveOps','ThemeType']};save('Data/enums.json',enums)
def normcarrier(row):
 stacks={};inline=[];tokens={};groups=[];unparsed=[];featuremap={k.lower():v for k,v in enums['FeatureType'].items()}
 for col in row['ColorData'].split(':'):
  parts=col.split(';');key=parts[0].strip();items=[c for c in parts[1:]if c.strip()not in ['','-']];stacks[key]=items
  tokens[key]=[]
  for c in items:
   lines=c.splitlines();first=lines[0].split('_');parsed=[]
   for fields in [first[1:]]+[line.split('_')for line in lines[1:]]:
    if not fields or not fields[0]:continue
    code=fields[0];v=featuremap.get(code.lower())
    if v is not None:
     v=22 if v==1 else v;inline.append(v);parsed.append(dict(code=code,type=v,args='_'.join(fields[1:])))
   tokens[key].append(dict(raw=c,color=first[0].upper(),features=parsed))
 features=[]
 for line in (row.get('Features')or'').splitlines():
  for part in [line]:
   m=re.fullmatch(r'([A-Z]\d*(?:\s*,\s*[A-Z]\d*)*)\s*-\s*([A-Za-z]+)(?:_(.*))?',part.strip(),re.I)
   if m:
    v=featuremap.get(m[2].lower());members=[s.strip().upper()for s in m[1].split(',')];args=m[3]or'';v=21 if v==1 else v
    if len(members)>1:groups.append(dict(members=members,code=m[2],args=args,type=v,raw=part.strip()))
    for member in members:features.append(dict(carrier=member,code=m[2],args=args,type=v,group=members,raw=part.strip()))
   elif part.strip()not in ['','-']:unparsed.append(part.strip())
 return dict(stacks=stacks,tokens=tokens,features=features,groups=groups,unparsed=unparsed,featureIds=sorted(set(inline+[x['type']for x in features if x['type']is not None])),blocks=sum(map(len,stacks.values())))
def points(row):
 arr=[]
 for p in row.get('Spline','').split(':'):
  v=p.split(';')
  if len(v)<3:continue
  try:
   tag=v[0].strip();arr.append(dict(tag=tag.split('\n')[0],angle=float(tag.split('\n')[1])if'\n'in tag else 0,x=float(v[-2]),y=float(v[-1])))
  except ValueError:pass
 return arr
sets={};allstats={}
for ds,folder in [('local','sheets/local'),('v18','sheets/funnels/v18'),('statics','sheets/funnels/statics'),('staticring','sheets/funnels/staticring'),('daily','sheets/daily challenge')]:
 ls=tables[folder+'/levels'];car={x['Id']:x for x in tables[folder+'/carriers']};spl={x['Id']:x for x in tables[folder+'/splines']};rows=[];fc=collections.Counter();first={};missing=[]
 for idx,row in enumerate(ls):
  c=car.get(row['Carriers']);sp=spl.get(row['Spline']);parsed=normcarrier(c)if c else dict(stacks={},features=[],featureIds=[],blocks=0);pts=points(sp)if sp else[]
  d=dict(row,index=idx,display=idx+1,blocks=parsed['blocks'],filledCarriers=sum(bool(v)for v in parsed['stacks'].values()),carrierPositions=sum(not p['tag'].isdigit()and p['tag']!='Q'for p in pts),featureIds=parsed['featureIds']);rows.append(d)
  if not c or not sp:missing.append(row['Id'])
  for f in d['featureIds']:fc[str(f)]+=1;first.setdefault(str(f),idx+1)
 sets[ds]={'levels':rows,'carriers':{k:dict(v,parsed=normcarrier(v))for k,v in car.items()},'splines':{k:dict(v,points=points(v))for k,v in spl.items()},'folder':folder}
 allstats[ds]=dict(levels=len(ls),carriers=len(car),splines=len(spl),themes=dict(collections.Counter(x['Theme']for x in ls)),slots=dict(collections.Counter(x['SlotCount']for x in ls)),blocks=sum(x['blocks']for x in rows),features=dict(fc),firstFeature=first,missingReferences=missing)
 with (B/f'Data/{ds}-level-statistics.csv').open('w',encoding='utf-8-sig',newline='')as f:
  wr=csv.DictWriter(f,fieldnames=list(rows[0]));wr.writeheader();wr.writerows(rows)
save('Data/levels-normalized.json',sets);save('Data/level-summary.json',allstats);(B/'level-data.js').write_text('window.LOOP_LEVELS='+json.dumps(sets,ensure_ascii=False,separators=(',',':'))+';',encoding='utf-8')
# Product payout is resolved independently of the old Unity IAP catalog.
cat=load(next(x['file']for x in texts if x['name']=='IAPProductCatalog'))['products'];payout=load('Data/Configs/PayoutsOffersV2.json')['data']['Collection']['list'];masters=load('Data/Configs/ProductMasters.json')['data']['Collection']['list'];shop=load('Data/Configs/ShopVoodoo.json')['data'];catalog={x['id']:x for x in cat};pay={x['Key']:x['Value']for x in payout};master={x['Key']:x['Value']for x in masters};shopids={x['Id']for x in shop['Bundles']+shop['Products']};items={v:k for k,v in enums['Item'].items()};items[0]='None'
products=[]
for id in sorted(set(catalog)|set(pay)|set(master)|shopids):
 c=catalog.get(id);ps=pay.get(id);products.append(dict(id=id,activeShop=id in shopids,providerMaster=master.get(id),catalogPrice=c['googlePrice'].get('num')if c else None,catalogType=c['type']if c else None,catalogTitle=c['defaultDescription']['title']if c else None,catalogPayouts=c.get('payouts',[])if c else [],providerPayouts=[dict(type=items.get(x['Type'],str(x['Type'])),quantity=x['Quantity'])for x in ps]if ps is not None else None,catalogOnly=c is not None and id not in shopids and id not in master))
save('Data/products.json',products)
# Recover scalar constructor defaults, including packed stores and referenced rodata.
binary=(R/'Inputs/libil2cpp.so').read_bytes();po=struct.unpack_from('<Q',binary,32)[0];pe,pn=struct.unpack_from('<HH',binary,54);segs=[]
for i in range(pn):
 p=struct.unpack_from('<IIQQQQQQ',binary,po+i*pe)
 if p[0]==1:segs.append((p[3],p[2],p[5]))
def raw(a,n):
 for v,o,s in segs:
  if v<=a and a+n<=v+s:return binary[o+a-v:o+a-v+n]
 return bytes(n)
def ctor_defaults(c):
 source=next((x for x in native if x['method']==c['name']+'$$.ctor'),None)
 if not source:return None
 text=(B/source['evidence']).read_text();mem=bytearray(512);known=bytearray([1])*512;variables={}
 for v,adr in re.findall(r'(\w+) = _(?:UNK|DAT)_([0-9a-f]+);',text):variables[v]=int.from_bytes(raw(int(adr,16)-0x100000,8),'little')
 for size,off,val in re.findall(r'\*\(undefined([1248]) \*\)\(param_1 \+ (0x[0-9a-f]+)\) = ([\w]+);',text):
  n=int(size);a=int(off,16)
  if a+n>len(mem):continue
  try:v=int(val,0)
  except:v=variables.get(val)
  if v is not None:mem[a:a+n]=(v&((1<<(8*n))-1)).to_bytes(n,'little')
  else:known[a:a+n]=bytes(n)
 fields=[]
 for typ,name,off in re.findall(r'public (bool|int|float|string|int\[\]) (\w+); // (0x[0-9A-Fa-f]+)',(B/c['file']).read_text()):
  a=int(off,16);v=None
  if typ=='bool'and known[a]:v=bool(mem[a])
  elif typ in ['int','float']and all(known[a:a+4]):v=struct.unpack_from('<i'if typ=='int'else'<f',mem,a)[0]
  fields.append(dict(name=name,type=typ,offset=off,value=v,status='binary default'if v is not None else'not resolved / null reference'))
 return dict(name=c['name'],fields=fields,source=source['evidence'],schema=c['file'])
configs=[v for c in classes if c['name'].endswith('Config')and (v:=ctor_defaults(c))and v['fields']];save('Data/remote-defaults.json',configs)
strings=load('Data/native-strings.json');analytics=[dict(method=k,strings=v,source=next((x['evidence']for x in native if x['method']==k),None))for k,v in strings.items()if any(x in k for x in ['Analytics','Track','VoodooSauceProvider$$StartGame','VoodooSauceProvider$$FinishGame'])];save('Data/analytics-events.json',analytics)
summary=load('Data/run-summary.json');summary.update(assetRecords=len(recs),textAssets=len(texts),images=len(load('Data/images.json')),sheets=len(registry),localLevels=len(sets['local']['levels']),dailyLevels=len(sets['daily']['levels']),products=len(products),shopProducts=len(shopids),remoteConfigClasses=len(configs),nativeMethods=len(native),gameNativeMethods=len(native),gameNativeOK=sum(x.get('status','').lower()=='ok'for x in native));save('Data/summary.json',summary)
print('SUMMARY',summary);print('LEVELS',allstats);print('REMOTE',[ (x['name'],{f['name']:f['value']for f in x['fields']})for x in configs if x['name']in ['InterstitialAdsConfig','DailyChallengeConfig','RvMaxConfig']])
