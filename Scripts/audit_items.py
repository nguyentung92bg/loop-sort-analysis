import pathlib,json,collections,re
B=pathlib.Path(__file__).resolve().parents[1]
def load(p):return json.loads((B/p).read_text(encoding='utf-8-sig'))
sets=load('Data/levels-normalized.json');stats=load('Data/level-summary.json');models=load('Data/original-models.json');native=load('Data/native-index.json')
definitions=[
(22,'Khối ẩn','HiddenBlock','H/h trên token là HiddenCube; màu logic nằm trước dấu _.','Màu, texture dấu hỏi gốc; đọc được feature nhiều dòng và h viết thường.','Shader WebGL tĩnh; chưa có chuyển động dấu hỏi hoặc dissolve.'),
(21,'Xe ẩn / Curtain','HiddenCarrier','H trên xe: đối số là màu rèm, không phải màu khối bên trong.','Áp màu rèm theo args; level 20: C=Y, D/E=B.','Chưa chạy animation mở rèm và điều kiện reveal runtime.'),
(29,'Két / Vault','VaultCarrier','Đối số là số lượt hoàn thành xe: mỗi CarrierComplete giảm 1 trên tất cả két chưa mở; không chỉ định nhãn/màu xe. Parse không được thì mặc định 1.','Mesh gốc, pose Idle đối chiếu 6 binding Animator; số đếm đúng config, dùng glyph Fredoka-Bold SDF và vị trí RectTransform gốc.','Chưa animation damage/open hoặc giảm đếm theo phiên chơi; shader SDF/ánh sáng được chuyển sang WebGL, không khẳng định giống từng pixel.'),
(2,'Đá / Rock','RockCarrier','Rock khóa tương tác của xe; không phải màu xám thay thế toàn bộ ColorData.','Dùng prefab Rock gốc, giữ khối màu từ config.','Chưa vận hành barrier/chu kỳ nhận khối và hiệu ứng.'),
(28,'Nhóm dính / Sticky','StickyBlockGroupSystem','Feature gắn vào nhóm khối; nhận cả H kết hợp Sticky trên nhiều dòng.','Mesh dây/ốc gốc được đặt theo vị trí nhóm màu, sửa bond ở biên nhóm.','Bản tĩnh, chưa jiggle/complete animation; vị trí phụ kiện cần đối chiếu gameplay khi nhóm biến đổi.'),
(4,'Xe băng / Ice','IceCarrier','Đối số A/E là nhãn xe. Chỉ cần một xe trong danh sách hoàn thành (OR), không phải màu, số hit hay yêu cầu hoàn thành tất cả.','Prefab băng gốc; liệt kê đủ các xe điều kiện trên nhãn.','Chưa nứt/vỡ và cập nhật điều kiện theo gameplay.'),
(5,'Nhóm khóa','LockCarrierGroupSystem','Mỗi dòng có thể chứa nhiều nhãn xe; args là màu chìa tương ứng.','Đọc đủ thành viên, màu khóa; thêm các module mesh khóa gốc.','Căn module theo span xe là dựng lại; chưa mô phỏng trọn thuật toán cửa/co giãn/animation.'),
(6,'Chìa khóa','KeyBlockGroupSystem','R_K_G: khối R mang chìa G; hai màu có vai trò khác nhau.','Mesh chìa gốc và màu theo args, đặt trên vị trí khối gốc.','Chưa mô phỏng thu chìa, bay tới khóa và mở khóa.'),
(24,'Thẻ / Tag','TagCarrier','Args là màu yêu cầu của cờ; ProcessFeature bật scale model về 1.','Áp màu đúng RendererPropertyRegistry, bật scale và căn hướng cờ cho dễ đọc.','Hướng cờ là trạng thái tĩnh dựng lại; chưa chuyển active/inactive theo tương tác.'),
(25,'Xe liên kết / IceCon','ConnectedCarrierGroup','IceCon là alias của ConnectedIce/Connected (25); prefab gốc có Rope/Knot, khác Ice (4).','Đọc đủ nhóm; scale node cha Model = khoảng cách hai xe biên + WidthOffset (1,4), đặt hai đầu tại xe biên và lặp texture theo số xe + 1. Đã kiểm tra khe nối bằng bounds mesh.','Đã sửa dây liền mạch ở level 250; chưa tái hiện animation Complete và cập nhật nhóm trong phiên chơi.'),
(26,'Thảm / Carpet','CarpetCarrierGroupV2','Một dòng gắn thảm cho một hoặc nhiều xe; có Forward/BackOffset và WidthOffset.','Mesh + texture thảm/cuộn gốc, căn theo nhóm, áp texture tiling theo số thành viên.','Chưa dựng divider đầy đủ và animation cuốn/mở từng xe; căn cạnh nhóm còn là bản tái dựng.'),
(27,'Đường hầm / Tunnel','TunnelCarrier','Covers được bật scale 1; xe nhận customMaxBlockCount từ conveyor.','Prefab gốc và trạng thái cover đúng khởi tạo; ghi tham số cấu hình.','Chưa mô phỏng lượng chứa động, nhãn số và chuyển nhóm theo conveyor.'),
(33,'Xe dài','LongCarrier','Capacity parse từ args, giới hạn 5–12; cú pháp có thể capacity:màu.','Daily đóng gói dùng 12: đã dùng đúng 12 slot mesh/transform gốc.','Co giãn thân cho capacity khác 12 chưa xác nhận bằng level đóng gói; sẽ báo cảnh báo nếu gặp.'),
(30,'Xe kính','GlassCarrier','Material kính có alpha; không được ép toàn bộ thành opaque.','Bảo toàn alpha từ material và prefab kính.','Chưa thấy mã trực tiếp trong các bộ level đóng gói, chưa xác nhận runtime refraction.'),
(31,'Khối kim loại','MetalBlock','Dùng MetalMaterial/MetalGroupMesh riêng, không phải color token xám thường.','Đã trích và thêm nhánh mesh/material kim loại.','Không thấy mã trực tiếp trong bộ level; chưa xác nhận mô phỏng nam châm và pile.'),
(32,'Khối bất ngờ','SurpriseBlock','Dùng SurpriseMaterial riêng và nhánh xử lý chuyển nhóm.','Đã trích và thêm nhánh material gốc.','Không thấy mã trực tiếp trong bộ level; chưa shader/animation surprise.'),
(34,'Thang nâng','ElevatorHole','Hệ có hàng đợi carrier, platform và chu kỳ đổi xe.','Đã trích prefab và thông số; dữ liệu được ghi trong audit.','Chưa dựng hàng đợi thang nâng trong view; không có mã trực tiếp để kiểm chứng ở bộ level đóng gói.'),
(20,'Cổng / Portal','FeatureType','Có enum và icon; icon không chứng minh chế độ đang được bật.','Đã kiểm tra registry/prefab và độ phủ dữ liệu.','Không có prefab 3D gắn trực tiếp hoặc mã level để tái tạo chắc chắn; chưa dựng trong view.'),
(23,'Khóa–chìa tổng hợp','FeatureType','Phân biệt enum tổng hợp 23 với từng feature Lock 5 và Key 6.','Các trường hợp Lock/Key riêng đã được đối chiếu.','Chưa có dòng 23 trực tiếp trong bộ level; không tự tạo hiệu ứng tổng hợp.'),
(3,'Crate (enum)','FeatureType','Có enum Crate/Cr, không có nghĩa đã có màn triển khai.','Đã kiểm tra enum và nội dung đóng gói.','Chưa có dữ liệu level/prefab đủ chắc chắn để dựng.'),
]
records=[]
for fid,name,owner,meaning,implemented,limit in definitions:
 evidence=[x['evidence']for x in native if x['method'].startswith(owner+'$$')and any(k in x['method']for k in ['ProcessFeature','Create','Initialize','PlaceGroup','Handle','AdjustRotation'])][:5]
 records.append(dict(id=fid,name=name,firstLocal=stats['local']['firstFeature'].get(str(fid)),localLevels=stats['local']['features'].get(str(fid),0),firstDaily=stats['daily']['firstFeature'].get(str(fid)),meaning=meaning,implemented=implemented,limitation=limit,evidence=evidence))
records.sort(key=lambda r:(r['firstLocal']if r['firstLocal']is not None else 10**9,r['id']))
validation={}
for key,ds in sets.items():
 unparsed=[dict(carrierRow=c['Id'],raw=p)for c in ds['carriers'].values()for p in c['parsed']['unparsed']];unknownColors=[];unknownTokens=[]
 labels=load('Data/color-labels.json')
 for c in ds['carriers'].values():
  for truck,tokens in c['parsed']['tokens'].items():
   for t in tokens:
    if t['color']not in labels:unknownColors.append(t['raw'])
    for line in t['raw'].splitlines():
     a=line.split('_');tail=a[1:]if line==t['raw'].splitlines()[0]else a
     if tail and tail[0]and not any(f['code'].lower()==tail[0].lower()for f in t['features']):unknownTokens.append(t['raw'])
 validation[key]=dict(levels=len(ds['levels']),carrierRows=len(ds['carriers']),featureGroups=sum(len(c['parsed']['groups'])for c in ds['carriers'].values()),unparsedFeatureLines=unparsed,unknownColors=sorted(set(unknownColors)),unrecognizedInline=sorted(set(unknownTokens)))
out=dict(scope='Đối chiếu dữ liệu và bản xem trạng thái tĩnh; chưa chạy gameplay Unity',records=records,validation=validation,assets=dict(carrierPrefabs=len(models['carriers']),groupPrefabs=len(models['featurePrefabs']),meshes=len(models['meshes']),materials=len(models['materials']),textures=len(models['textures']),errors=models['errors']))
(B/'Data/item-audit.json').write_text(json.dumps(out,ensure_ascii=False,indent=2),encoding='utf-8');(B/'item-audit.js').write_text('window.LOOP_ITEM_AUDIT='+json.dumps(out,ensure_ascii=False,separators=(',',':'))+';',encoding='utf-8')
assert all(not v['unparsedFeatureLines']and not v['unknownColors']for v in validation.values());print('Audited',len(records),'item types;',out['assets']);print('Validation',validation)
