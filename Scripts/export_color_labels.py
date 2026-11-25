import pathlib,json
B=pathlib.Path(__file__).resolve().parents[1]
scope={'__file__':str(B/'Scripts/export_original_models.py')};source=(B/'Scripts/export_original_models.py').read_text(encoding='utf-8').split("if '--inspect'in sys.argv:")[0];exec(compile(source,str(B/'Scripts/export_original_models.py'),'exec'),scope)
read=scope['read'];labels={1:('R','Đỏ','Red'),2:('B','Xanh dương','Blue'),3:('G','Xanh lá','Green'),4:('Y','Vàng','Yellow'),5:('P','Tím','Purple'),6:('O','Cam','Orange'),7:('BR','Nâu','Brown'),8:('PNK','Hồng','Pink'),9:('C','Xanh ngọc','Cyan'),10:('M','Hồng tím','Magenta'),11:('GR','Xám','Grey'),12:('W','Trắng','White'),13:('BL','Đen','Black')};out={}
for entry in read(9842)['Collection']['list']:
 base=entry['Key']['<Base>k__BackingField'];shade=entry['Key']['<Shade>k__BackingField'];code,vi,en=labels[base];code=('L'if shade==1 else'D'if shade==2 else'')+code;color=entry['Value']['Color'];origin='Colors.Color';material=read(entry['Value']['Material']['m_PathID']);mc=dict(material['m_SavedProperties']['m_Colors'])
 if color['a']==0:color=mc.get('_BaseColor')or mc.get('_Color');origin='Material.'+('_BaseColor'if '_BaseColor'in mc else'_Color')
 hexcolor='#'+''.join(f'{max(0,min(255,round(color[c]*255))):02x}'for c in 'rgb')
 render=mc.get('_BaseColor')or mc.get('_Color');renderhex='#'+''.join(f'{max(0,min(255,round(render[c]*255))):02x}'for c in 'rgb')
 out[code]=dict(code=code,base=base,shade=shade,shadeLabel=['Chuẩn','Sáng','Tối'][shade],nameVi=vi+(' sáng'if shade==1 else' tối'if shade==2 else''),nameEn=('Light 'if shade==1 else'Dark 'if shade==2 else'')+en,hex=hexcolor,rgba=color,source=origin,material=material['m_Name'],materialHex=renderhex,materialRgba=render)
(B/'Data/color-labels.json').write_text(json.dumps(out,ensure_ascii=False,indent=2),encoding='utf-8');(B/'color-labels.js').write_text('window.LOOP_COLORS='+json.dumps(out,ensure_ascii=False,separators=(',',':'))+';window.LOOP_RENDER_PALETTE={};Object.values(LOOP_COLORS).forEach(c=>{LOOP_PALETTE[c.code]=c.hex;LOOP_RENDER_PALETTE[c.code]=c.materialHex;});',encoding='utf-8');print('Exported',len(out),'color labels and material-backed RGB values')
