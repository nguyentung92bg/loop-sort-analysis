/* IL2CPP: FulfillRewardMonitor$$ApplyClaimMotion
void FulfillRewardMonitor__ApplyClaimMotion (FulfillRewardMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillRewardMonitor$$ApplyClaimMotion
   void FulfillRewardMonitor__ApplyClaimMotion (FulfillRewardMonitor_o* __this, const MethodInfo*
   method); */

void FulfillRewardMonitor__ApplyClaimMotion_24411d4(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  if ((bRam0000000004f4b84b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c40e8);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c2be8);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c2bf0);
    FUN_021f03f8(PTR_DAT_049c2bc0);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4b84b = 1;
  }
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  auVar17 = ZEXT816(0);
  auVar1 = ZEXT816(0);
  if (*(long *)(param_1 + 0xf8) != 0) {
    iVar13 = *(int *)(*(long *)(param_1 + 0xf8) + 0x18) + -1;
    if (-1 < iVar13) {
      iVar10 = 1;
      do {
        FulfillRewardMonitor__ApplyElementMoveMotion_2441544(param_1,iVar13,iVar10);
        iVar13 = iVar13 + -1;
        iVar10 = iVar10 + 1;
      } while (iVar13 != -1);
    }
    puVar4 = PTR_DAT_049c2bf0;
    puVar2 = PTR_DAT_049c2be8;
    puVar6 = PTR_DAT_049c2288;
    if (*(char *)(param_1 + 0xe8) == '\0') {
      return;
    }
    auStack_80 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0,0x3f000000,0);
    lVar8 = *(long *)puVar6;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar6;
    }
    puVar5 = PTR_DAT_049c1690;
    auVar17 = FUN_02526574(auStack_80,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x60),
                           *(undefined8 *)puVar4);
    auVar17 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                        (auVar17._0_8_,auVar17._8_8_,*(undefined8 *)(param_1 + 0xd8),
                         *(undefined8 *)puVar2);
    LitMotion_MotionHandleExtensions__AddTo_2eacb44
              (auVar17._0_8_,auVar17._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 0xf0),0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    puVar7 = PTR_DAT_049c2bc0;
    puVar4 = PTR_DAT_049c1680;
    puVar2 = PTR_DAT_049bbf90;
    lVar8 = *(long *)puVar5;
    lVar11 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    uVar14 = *(undefined4 *)(lVar11 + 0xc);
    uVar15 = *(undefined4 *)(lVar11 + 0x10);
    uVar16 = *(undefined4 *)(lVar11 + 0x14);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar5;
    }
    puVar12 = *(undefined4 **)(lVar8 + 0xb8);
    auStack_90 = LitMotion_LMotion__Create_2eaa1b4
                           (uVar14,uVar15,uVar16,*puVar12,puVar12[1],puVar12[2],0x3f000000,0);
    auVar17 = FUN_02526574(auStack_90,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x60),
                           *(undefined8 *)puVar7);
    auStack_90 = auVar17;
    auVar18 = FUN_024f4e50(auStack_90,0x19,*(undefined8 *)puVar4);
    lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc(param_1,0x91273900,0)
    ;
    puVar3 = PTR_DAT_049c1670;
    auVar17 = auStack_90;
    auVar1 = auStack_80;
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) {
      uVar9 = TMPro_TMP_Text__get_transform_3b0c9d0(*(long *)(lVar8 + 0x38),0);
      auVar17 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                          (auVar18._0_8_,auVar18._8_8_,uVar9,*(undefined8 *)puVar3);
      LitMotion_MotionHandleExtensions__AddTo_2eacb44
                (auVar17._0_8_,auVar17._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 0xf0),0);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
      puVar12 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
      auVar17 = LitMotion_LMotion__Create_2eaa1b4
                          (*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                           *(undefined4 *)(lVar8 + 0x14),*puVar12,puVar12[1],puVar12[2],0x3f000000,0
                          );
      auStack_90 = auVar17;
      auVar17 = FUN_02526574(auStack_90,*(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x60),
                             *(undefined8 *)puVar7);
      auStack_90 = auVar17;
      auVar18 = FUN_024f4e50(auStack_90,0x19,*(undefined8 *)puVar4);
      lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc
                        (param_1,0x39cfe44a,0);
      auVar17 = auStack_90;
      auVar1 = auStack_80;
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) {
        uVar9 = TMPro_TMP_Text__get_transform_3b0c9d0(*(long *)(lVar8 + 0x38),0);
        auVar17 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                            (auVar18._0_8_,auVar18._8_8_,uVar9,*(undefined8 *)puVar3);
        LitMotion_MotionHandleExtensions__AddTo_2eacb44
                  (auVar17._0_8_,auVar17._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 0xf0),0);
        return;
      }
    }
  }
  auStack_90 = auVar17;
  auStack_80 = auVar1;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

