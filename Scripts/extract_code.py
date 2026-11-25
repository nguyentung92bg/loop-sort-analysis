import pathlib,re,json,csv,shutil,collections
B=pathlib.Path('Analysis/Loop Sort');R=pathlib.Path('Results/Run-20261123-162851-39ff5e');s=(R/'dump.cs').read_text(encoding='utf-8-sig');game=[]
for p in re.split(r'(?=^// Namespace:)',s,flags=re.M):
 m=re.search(r'^.*?\b(class|struct|enum|interface)\s+(.+?)\s*// TypeDefIndex: (\d+)',p,re.M)
 if m and (4412<=int(m[3])<5603 or 14935<=int(m[3])<15009):
  name=m[2].split(' : ')[0];f=f'Evidence/Classes/{m[3]}.cs';(B/f).write_text(p,encoding='utf-8');game.append(dict(id=int(m[3]),name=name,kind=m[1],namespace=p.splitlines()[0].partition(':')[2].strip(),file=f))
(B/'Data/classes.json').write_text(json.dumps(game,ensure_ascii=False,indent=2),encoding='utf-8')
P=R/'Native-20261123-162934-eff74d/PseudoC';rows=list(csv.DictReader((P/'index.tsv').open(encoding='utf-8-sig'),delimiter='\t'));print('INDEX KEYS',list(rows[0]));names={(x['namespace']+'.'if x['namespace']else'')+x['name']for x in game if '<'not in x['name']};focus=[]
for r in rows:
 owner=r['method'].split('$$')[0]
 if owner in names:
  if r.get('status')=='OK' and r.get('file') and (P/r['file']).exists():
   r['evidence']='Evidence/Native/'+r['file'];shutil.copyfile(P/r['file'],B/r['evidence'])
  focus.append(r)
(B/'Data/native-index.json').write_text(json.dumps(focus,ensure_ascii=False,indent=2),encoding='utf-8');(B/'Data/run-summary.json').write_text(json.dumps(dict(run=str(R.resolve()),gameClasses=len(game),gameNativeMethods=len(focus),gameNativeOK=sum(r.get('status')=='OK'for r in focus),nativeTotal=len(rows),unity='6000.0.77f1',version='4.12.0',package='com.Garawell.LoopSort'),indent=2),encoding='utf-8');print('EXTRACTED',len(game),'classes;',len(focus),'native;',sum(r.get('status')=='OK'for r in focus),'OK')
