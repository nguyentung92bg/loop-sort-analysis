import pathlib,json,base64,io,zlib,math
B=pathlib.Path(__file__).resolve().parents[1];scope={'__file__':str(B/'Scripts/export_original_models.py')};source=(B/'Scripts/export_original_models.py').read_text(encoding='utf-8').split("if '--inspect'in sys.argv:")[0];exec(compile(source,str(B/'Scripts/export_original_models.py'),'exec'),scope)
read=scope['read'];E=scope['E'];font=next(o for o in E.objects if o.assets_file.name=='sharedassets0.assets'and o.path_id==83).read_typetree();atlas=next(o for o in E.objects if o.assets_file.name=='sharedassets0.assets'and o.path_id==font['m_AtlasTextures'][0]['m_PathID']).read().image;buf=io.BytesIO();atlas.save(buf,format='PNG');(B/'Images/Materials').mkdir(exist_ok=True);atlas.save(B/'Images/Materials/vault-font-atlas.png')
glyphs={g['m_Index']:g for g in font['m_GlyphTable']};digits={str(chr(c['m_Unicode'])):glyphs[c['m_GlyphIndex']]for c in font['m_CharacterTable']if 48<=c['m_Unicode']<=57};view=read(7853);text=read(12156);textRect=read(7754);mat=read(142)['m_SavedProperties'];controller=read(655);idle=read(614);q=view['m_LocalRotation'];angle=2*math.atan2(q['x'],q['w']);offset=textRect['m_AnchoredPosition'];position=dict(x=view['m_AnchoredPosition']['x']+offset['x'],y=view['m_AnchoredPosition']['y']+offset['y']*math.cos(angle),z=view['m_LocalPosition']['z']+offset['y']*math.sin(angle))
nodes=json.loads((B/'Data/original-models.json').read_text())['carriers']['29']['children'];model=next(n for n in nodes if n['id']==2588);paths={}
def walk(n,p=''):
 paths[zlib.crc32(p.encode())]=(p,n)
 for c in n['children']:walk(c,(p+'/'if p else'')+c['name'])
walk(model);values=idle['m_MuscleClip']['m_Clip']['data']['m_ConstantClip']['data'];offsetIndex=0;checks=[]
for binding in idle['m_ClipBindingConstant']['genericBindings']:
 p,n=paths[binding['path']];attr=binding['attribute'];value=values[offsetIndex:offsetIndex+3];offsetIndex+=3
 if attr==1:actual=[n['position'][k]for k in 'xyz']
 elif attr==3:actual=[n['scale'][k]for k in 'xyz']
 elif attr==4:
  assert all(abs(n['rotation'][k])<1e-5 for k in 'xyz');actual=[0,0,0]
 checks.append(dict(path=p,attribute=attr,idle=value,prefab=actual,matches=all(abs(a-b)<1e-5 for a,b in zip(value,actual))))
assert all(c['matches']for c in checks)
out=dict(name='Vault Carrier',controller='Vault Carrier',defaultState='Idle',idlePoseChecks=checks,position=position,view=view,textFontSize=text['m_fontSize'],textColor=text['m_fontColor'],fontName=font['m_Name'],face=font['m_FaceInfo'],atlasPadding=font['m_AtlasPadding'],atlasWidth=font['m_AtlasWidth'],atlasHeight=font['m_AtlasHeight'],digits=digits,materialFloats=dict(mat['m_Floats']),materialColors=dict(mat['m_Colors']),atlasDataUrl='data:image/png;base64,'+base64.b64encode(buf.getvalue()).decode(),sources=['resources.assets:655','resources.assets:614','resources.assets:7853','resources.assets:12156','sharedassets0.assets:83'])
(B/'Data/vault-view.json').write_text(json.dumps(out,ensure_ascii=False,indent=2),encoding='utf-8');(B/'vault-view.js').write_text('window.LOOP_VAULT_VIEW='+json.dumps(out,separators=(',',':'))+';',encoding='utf-8');print('Verified 6 Idle bindings; exported original Fredoka digits and counter position',position)
