import pathlib,sys,json,base64,io
B=pathlib.Path(__file__).resolve().parents[1]
scope={'__file__':str(B/'Scripts/export_original_models.py')};source=(B/'Scripts/export_original_models.py').read_text(encoding='utf-8').split("if '--inspect'in sys.argv:")[0];exec(compile(source,str(B/'Scripts/export_original_models.py'),'exec'),scope)
read=scope['read'];objects=scope['objects'];m=read(149);props=m['m_SavedProperties'];data=dict(name=m['m_Name'],materialPathId=149,colors=dict(props['m_Colors']),floats=dict(props['m_Floats']),source='Evidence/Assets/resources.assets_12789.json',textures={})
folder=B/'Images/Hidden';folder.mkdir(exist_ok=True)
for name,entry in props['m_TexEnvs']:
 i=entry['m_Texture']['m_PathID'];image=objects[i].read().image;image.save(folder/f'{i}.png');buf=io.BytesIO();image.save(buf,format='PNG');data['textures'][name]={'pathId':i,'file':f'Images/Hidden/{i}.png','dataUrl':'data:image/png;base64,'+base64.b64encode(buf.getvalue()).decode()}
(B/'Data/hidden-material.json').write_text(json.dumps(data,ensure_ascii=False,indent=2),encoding='utf-8');(B/'hidden-material.js').write_text('window.LOOP_HIDDEN='+json.dumps(data,separators=(',',':'))+';',encoding='utf-8');print('Exported original Hidden Blocker Block material and 2 textures')

