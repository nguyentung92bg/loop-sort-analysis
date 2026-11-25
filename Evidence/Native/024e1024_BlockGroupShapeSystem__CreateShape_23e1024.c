/* IL2CPP: BlockGroupShapeSystem$$CreateShape
void BlockGroupShapeSystem__CreateShape (BlockGroupShapeSystem_o* __this, Carrier_o* carrier, UnityEngine_MeshRenderer_o* groupBlock, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BlockGroupShapeSystem$$CreateShape
   void BlockGroupShapeSystem__CreateShape (BlockGroupShapeSystem_o* __this, Carrier_o* carrier,
   UnityEngine_MeshRenderer_o* groupBlock, const MethodInfo* method); */

void BlockGroupShapeSystem__CreateShape_23e1024(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  
  if ((bRam0000000004f4b5d8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1660);
    FUN_021f03f8(PTR_DAT_049c1668);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c1670);
                    /* try { // try from 024e108c to 025e10b3 has its CatchHandler @ 024e1384 */
    FUN_021f03f8(PTR_DAT_049c1678);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c1688);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4b5d8 = 1;
  }
                    /* try { // try from 024e10c8 to 025e10d3 has its CatchHandler @ 024e136c */
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  auVar14 = ZEXT816(0);
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                      (*(long *)(param_1 + 0x70),param_3,*(undefined8 *)PTR_DAT_049c1660);
    auVar14._8_8_ = auStack_70._8_8_;
    auVar14._0_8_ = auStack_70._0_8_;
    if ((uVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 024e1020 with catch @ 024e1380 */
                    /* catch() { ... } // from try @ 024e108c with catch @ 024e1384 */
                    /* catch() { ... } // from try @ 024e0fb4 with catch @ 024e1388 */
                    /* catch() { ... } // from try @ 024e1340 with catch @ 024e138c */
                    /* catch() { ... } // from try @ 024e1338 with catch @ 024e1390 */
                    /* catch() { ... } // from try @ 024e114c with catch @ 024e1394 */
                    /* catch() { ... } // from try @ 024e11b0 with catch @ 024e1398 */
                    /* catch() { ... } // from try @ 024e111c with catch @ 024e139c */
                    /* catch() { ... } // from try @ 024e1230 with catch @ 024e13a0 */
      return;
    }
    if (param_3 != 0) {
      lVar10 = *(long *)(param_1 + 0x50);
      uVar4 = UnityEngine_Renderer__get_sharedMaterial_3bddc88(param_3,0);
      auVar14._8_8_ = auStack_70._8_8_;
      auVar14._0_8_ = auStack_70._0_8_;
      if (lVar10 != 0) {
        uVar4 = Colors__FindColorType_24f97a4(lVar10,uVar4,0);
        auVar14._8_8_ = auStack_70._8_8_;
        auVar14._0_8_ = auStack_70._0_8_;
        if ((int)uVar4 == 0) {
          return;
        }
                    /* try { // try from 024e111c to 025e1143 has its CatchHandler @ 024e139c */
        if (*(long *)(param_1 + 0x68) != 0) {
          uVar5 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 0x68),0);
          auVar14._8_8_ = auStack_70._8_8_;
          auVar14._0_8_ = auStack_70._0_8_;
          if (*(long *)(param_1 + 0x40) != 0) {
            lVar10 = PrefabModuleExtensions__Rent_object__269ee0c
                               (*(undefined8 *)(param_1 + 0x48),
                                *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x58),uVar5,
                                *(undefined8 *)PTR_DAT_049c1688);
            auVar14._8_8_ = auStack_70._8_8_;
            auVar14._0_8_ = auStack_70._0_8_;
                    /* try { // try from 024e114c to 025e115f has its CatchHandler @ 024e1394 */
            if (lVar10 != 0) {
              lVar6 = UnityEngine_Component__get_transform_3c18724(lVar10,0);
              auVar14._8_8_ = auStack_70._8_8_;
              auVar14._0_8_ = auStack_70._0_8_;
              if (param_2 != 0) {
                lVar7 = UnityEngine_Component__get_transform_3c18724(param_2,0);
                auVar14._8_8_ = auStack_70._8_8_;
                auVar14._0_8_ = auStack_70._0_8_;
                if (lVar7 != 0) {
                  UnityEngine_Transform__get_rotation_3c2d7a8(lVar7,0);
                  auVar14._8_8_ = auStack_70._8_8_;
                  auVar14._0_8_ = auStack_70._0_8_;
                  if (lVar6 != 0) {
                    UnityEngine_Transform__set_rotation_3c2d86c(lVar6,0);
                    auVar14._8_8_ = auStack_70._8_8_;
                    auVar14._0_8_ = auStack_70._0_8_;
                    if (*(long *)(param_1 + 0x70) != 0) {
                      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                                (*(long *)(param_1 + 0x70),param_3,lVar10,
                                 *(undefined8 *)PTR_DAT_049c1668);
                      auVar14._8_8_ = auStack_70._8_8_;
                      auVar14._0_8_ = auStack_70._0_8_;
                    /* try { // try from 024e11b0 to 025e11eb has its CatchHandler @ 024e1398 */
                      if (*(long *)(param_1 + 0x50) != 0) {
                        Colors__Get_24f5718(auStack_90,*(long *)(param_1 + 0x50),uVar4,0);
                        plVar8 = (long *)StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                                                   (lVar10,0x1a9a2c8b,0);
                        auVar14._8_8_ = auStack_70._8_8_;
                        auVar14._0_8_ = auStack_70._0_8_;
                        if (plVar8 != (long *)0x0) {
                          UnityEngine_UI_Image__set_sprite_3cee6e8(plVar8,uStack_88,0);
                          (**(code **)(*plVar8 + 0x2a8))
                                    (uStack_80,uStack_7c,uStack_78,uStack_74,plVar8,
                                     *(undefined8 *)(*plVar8 + 0x2b0));
                          lVar10 = BlockGroupShapeSystem__CancelAndGetMotions_23e1484
                                             (param_1,lVar10);
                          puVar2 = PTR_DAT_049c1690;
                    /* try { // try from 024e1230 to 025e1267 has its CatchHandler @ 024e13a0 */
                          lVar7 = *(long *)PTR_DAT_049c1690;
                          if (*(int *)(lVar7 + 0xe4) == 0) {
                            FUN_021f0574(lVar7);
                            lVar7 = *(long *)puVar2;
                          }
                          puVar9 = *(undefined4 **)(lVar7 + 0xb8);
                          uVar11 = *puVar9;
                          uVar12 = puVar9[1];
                          uVar13 = puVar9[2];
                          if (cRam0000000004f4a190 == '\0') {
                            FUN_021f03f8(PTR_DAT_049bbf90);
                            cRam0000000004f4a190 = '\x01';
                          }
                          uVar1 = _UNK_013aa62c;
                    /* try { // try from 024e1290 to 025e1293 has its CatchHandler @ 024e137c */
                          lVar7 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
                          auStack_70 = LitMotion_LMotion__Create_2eaa1b4
                                                 (uVar11,uVar12,uVar13,*(undefined4 *)(lVar7 + 0xc),
                                                  *(undefined4 *)(lVar7 + 0x10),
                                                  *(undefined4 *)(lVar7 + 0x14),_UNK_013aa62c,0);
                          auVar14 = FUN_024f4e50(auStack_70,0x1a,*(undefined8 *)PTR_DAT_049c1680);
                          auVar14 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                              (auVar14._0_8_,auVar14._8_8_,lVar6,
                                               *(undefined8 *)PTR_DAT_049c1670);
                    /* try { // try from 024e12e4 to 025e130b has its CatchHandler @ 024e1520 */
                          if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
                            FUN_021f0574();
                          }
                          auVar15 = Extensions__AddTo_24d83f4
                                              (auVar14._0_8_,auVar14._8_8_ & 0xffffffff,param_2,0);
                          auVar14 = auStack_70;
                          if (lVar10 != 0) {
                            LitMotion_CompositeMotionHandle__Add_2e8b150
                                      (lVar10,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,0);
                    /* try { // try from 024e1338 to 025e133b has its CatchHandler @ 024e1390 */
                    /* try { // try from 024e1340 to 025e1343 has its CatchHandler @ 024e138c */
                            auVar14 = LitMotion_LMotion__Create_2ea9f9c(0,uStack_74,uVar1,0);
                    /* try { // try from 024e1348 to 025e134b has its CatchHandler @ 024e1378 */
                    /* try { // try from 024e1350 to 025e1353 has its CatchHandler @ 024e1374 */
                            auVar14 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToColorA___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673a8c
                                                (auVar14._0_8_,auVar14._8_8_,plVar8,
                                                 *(undefined8 *)PTR_DAT_049c1678);
                    /* try { // try from 024e1358 to 025e135b has its CatchHandler @ 024e1370 */
                    /* try { // try from 024e135c to 025e13bf has its CatchHandler @ 024e04a4 */
                            auVar14 = Extensions__AddTo_24d83f4
                                                (auVar14._0_8_,auVar14._8_8_ & 0xffffffff,param_2,0)
                            ;
                    /* catch() { ... } // from try @ 024e10c8 with catch @ 024e136c */
                    /* catch() { ... } // from try @ 024e1358 with catch @ 024e1370 */
                    /* catch() { ... } // from try @ 024e1350 with catch @ 024e1374 */
                    /* catch() { ... } // from try @ 024e1348 with catch @ 024e1378 */
                    /* catch() { ... } // from try @ 024e1290 with catch @ 024e137c */
                            LitMotion_CompositeMotionHandle__Add_2e8b150
                                      (lVar10,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  auStack_70 = auVar14;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

