/* IL2CPP: FulfillRewardMonitor$$ApplyElementMoveMotion
void FulfillRewardMonitor__ApplyElementMoveMotion (FulfillRewardMonitor_o* __this, int32_t idx, int32_t delayIdx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: FulfillRewardMonitor$$ApplyElementMoveMotion
   void FulfillRewardMonitor__ApplyElementMoveMotion (FulfillRewardMonitor_o* __this, int32_t idx,
   int32_t delayIdx, const MethodInfo* method); */

void FulfillRewardMonitor__ApplyElementMoveMotion_2441544
               (long param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  puVar2 = PTR_DAT_049c40f0;
  if ((bRam0000000004f4b84c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c40f8);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c20a0);
    FUN_021f03f8(PTR_DAT_049c2808);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c1fd0);
    FUN_021f03f8(PTR_DAT_049c2bc0);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c4100);
    FUN_021f03f8(PTR_DAT_049c40f0);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4b84c = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  lVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Object___ctor_3142338(lVar7,0);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar7 + 0x10),param_1);
    if (*(long *)(param_1 + 0xf8) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (*(long *)(param_1 + 0xf8),param_2,&lStack_c8,*(undefined8 *)PTR_DAT_049c40f8);
      plVar15 = (long *)(lVar7 + 0x28);
      *plVar15 = lStack_c8;
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      thunk_FUN_021f190c(plVar15);
      *(undefined8 *)(lVar7 + 0x20) = uStack_98;
      *(undefined8 *)(lVar7 + 0x18) = uStack_a0;
      puVar2 = PTR_DAT_049b3b98;
      if (*plVar15 != 0) {
        lVar8 = UnityEngine_Component__get_transform_3c18724(*plVar15,0);
        lVar9 = FulfillRewardMonitor__GetItemTarget_2441a5c(param_1,*(undefined4 *)(lVar7 + 0x18));
        plVar14 = (long *)(lVar7 + 0x30);
        *plVar14 = lVar9;
        thunk_FUN_021f190c(plVar14,lVar9);
        lVar9 = *plVar14;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar10 = UnityEngine_Object__op_Equality_3c1eeb4(lVar9,0,0);
        cVar6 = cRam0000000004f4a190;
        if ((uVar10 & 1) != 0) {
          return;
        }
        *(undefined1 *)(param_1 + 0xe8) = 1;
        if (cVar6 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a190 = '\x01';
        }
        puVar2 = PTR_DAT_049c1690;
        fVar1 = _UNK_013aa7f4;
        lVar9 = *(long *)PTR_DAT_049c1690;
        lVar12 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        uVar20 = *(undefined4 *)(lVar12 + 0xc);
        uVar21 = *(undefined4 *)(lVar12 + 0x10);
        uVar22 = *(undefined4 *)(lVar12 + 0x14);
        if (*(int *)(lVar9 + 0xe4) == 0) {
          FUN_021f0574();
          lVar9 = *(long *)puVar2;
        }
        fVar19 = _UNK_013aa62c;
        puVar13 = *(undefined4 **)(lVar9 + 0xb8);
        auStack_b0 = LitMotion_LMotion__Create_2eaa1b4
                               (uVar20,uVar21,uVar22,*puVar13,puVar13[1],puVar13[2],_UNK_013aa62c,0)
        ;
        puVar2 = PTR_DAT_049c2288;
        lVar9 = *(long *)PTR_DAT_049c2288;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          FUN_021f0574();
          lVar9 = *(long *)puVar2;
        }
        puVar5 = PTR_DAT_049c2bc0;
        auVar23 = FUN_02526574(auStack_b0,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x60),
                               *(undefined8 *)PTR_DAT_049c2bc0);
        puVar4 = PTR_DAT_049c2808;
        fVar19 = (float)param_3 * fVar1 + fVar19;
        auStack_b0 = auVar23;
        auVar23 = FUN_024f6e90(fVar19,auStack_b0,0,1,*(undefined8 *)PTR_DAT_049c2808);
        lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                          (*plVar15,0x9927ed9b,0);
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x38) != 0)) {
          uVar11 = TMPro_TMP_Text__get_transform_3b0c9d0(*(long *)(lVar9 + 0x38),0);
          puVar3 = PTR_DAT_049c1670;
          auVar23 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                              (auVar23._0_8_,auVar23._8_8_,uVar11,*(undefined8 *)PTR_DAT_049c1670);
          LitMotion_MotionHandleExtensions__AddTo_2eacb44
                    (auVar23._0_8_,auVar23._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 0xf0),0);
          if (lVar8 != 0) {
            uVar20 = UnityEngine_Transform__get_position_3c2d540(lVar8,0);
            if (*plVar14 != 0) {
              uVar17 = uVar21;
              uVar18 = uVar22;
              uVar16 = UnityEngine_Transform__get_position_3c2d540(*plVar14,0);
              auVar23 = LitMotion_LMotion__Create_2eaa1b4
                                  (uVar20,uVar21,uVar22,uVar16,uVar17,uVar18,0x3f000000,0);
              auStack_b0 = auVar23;
              auVar23 = FUN_02526574(auStack_b0,
                                     *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60),
                                     *(undefined8 *)puVar5);
              auStack_b0 = auVar23;
              auVar23 = FUN_024f6e90((float)param_3 * fVar1,auStack_b0,0,1,*(undefined8 *)puVar4);
              auStack_b0 = auVar23;
              auVar23 = FUN_024f4e50(auStack_b0,0x19,*(undefined8 *)PTR_DAT_049c1680);
              auStack_b0 = auVar23;
              uVar11 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
              System_Action___ctor_306b98c(uVar11,lVar7,*(undefined8 *)PTR_DAT_049c4100,0);
              auVar23 = FUN_024f6b84(auStack_b0,uVar11,*(undefined8 *)PTR_DAT_049c1fd0);
              auVar23 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                                  (auVar23._0_8_,auVar23._8_8_,lVar8,*(undefined8 *)PTR_DAT_049c20a0
                                  );
              LitMotion_MotionHandleExtensions__AddTo_2eacb44
                        (auVar23._0_8_,auVar23._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 0xf0),0)
              ;
              if (cRam0000000004f4a190 == '\0') {
                FUN_021f03f8(PTR_DAT_049bbf90);
                cRam0000000004f4a190 = '\x01';
              }
              auVar23 = LitMotion_LMotion__Create_2eaa1b4(0);
              auStack_b0 = auVar23;
              auVar23 = FUN_02526574(auStack_b0,
                                     *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60),
                                     *(undefined8 *)puVar5);
              auStack_b0 = auVar23;
              auVar23 = FUN_024f6e90(fVar19,auStack_b0,0,1,*(undefined8 *)puVar4);
              auVar23 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                  (auVar23._0_8_,auVar23._8_8_,lVar8,*(undefined8 *)puVar3);
              LitMotion_MotionHandleExtensions__AddTo_2eacb44
                        (auVar23._0_8_,auVar23._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 0xf0),0)
              ;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

