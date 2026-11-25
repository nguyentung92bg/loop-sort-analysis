/* IL2CPP: HandMonitor$$Render
void HandMonitor__Render (HandMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HandMonitor$$Render
   void HandMonitor__Render (HandMonitor_o* __this, const MethodInfo* method); */

void HandMonitor__Render_2443898
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  if ((bRam0000000004f4b856 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4188);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c2bc0);
    FUN_021f03f8(PTR_DAT_049c4190);
    FUN_021f03f8(PTR_DAT_049c2288);
    bRam0000000004f4b856 = 1;
  }
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  MonitorBase__Render_256c914(param_4,0);
  lVar3 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_4,0xcc7bdb6e,0)
  ;
  uVar4 = InputH__GetKeyDown_2508b18(0x20,0);
  auVar23._8_8_ = auStack_80._8_8_;
  auVar23._0_8_ = auStack_80._0_8_;
  if ((uVar4 & 1) == 0) {
    if (lVar3 == 0) goto LAB_02543dd0;
  }
  else {
    auStack_80 = auVar23;
    if (lVar3 == 0) goto LAB_02543dd0;
    uVar2 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar3,0);
    UnityEngine_GameObject__SetActive_3c1ce34(lVar3,(uVar2 ^ 0xffffffff) & 1,0);
    uVar4 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar3,0);
    if ((uVar4 & 1) != 0) {
      uVar8 = UnityEngine_Input__get_mousePosition_3c7b1e8(0);
      *(undefined4 *)(param_4 + 0xa0) = uVar8;
      *(undefined4 *)(param_4 + 0xa4) = param_2;
      *(undefined4 *)(param_4 + 0xa8) = param_3;
    }
  }
  uVar4 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar3,0);
  if ((uVar4 & 1) != 0) {
    fVar9 = (float)UnityEngine_Time__get_unscaledDeltaTime_3c29788(0);
    fVar14 = 0.0;
    fVar19 = *(float *)(param_4 + 0xa8);
    uVar21 = *(undefined8 *)(param_4 + 0xa0);
    fVar9 = fVar9 * 10.0;
    fVar18 = 1.0;
    if (fVar9 <= 1.0) {
      fVar18 = fVar9;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar9) {
      fVar10 = fVar18;
    }
    fVar9 = (float)UnityEngine_Input__get_mousePosition_3c7b1e8(0);
    fVar20 = (float)uVar21;
    fVar22 = (float)((ulong)uVar21 >> 0x20);
    *(float *)(param_4 + 0xa8) = fVar19 + fVar10 * (fVar14 - fVar19);
    *(ulong *)(param_4 + 0xa0) =
         CONCAT44(fVar22 + (fVar18 - fVar22) * fVar10,fVar20 + (fVar9 - fVar20) * fVar10);
    lVar3 = UnityEngine_GameObject__get_transform_3c1ca74(lVar3,0);
    lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                      (param_4,0x2d6d4683,0);
    if (lVar5 == 0) goto LAB_02543dd0;
    lVar5 = UnityEngine_Component__get_transform_3c18724(lVar5,0);
    uVar8 = *(undefined4 *)(param_4 + 0xa4);
    uVar15 = *(undefined4 *)(param_4 + 0xa8);
    MonitorBase__ScreenToCanvasSpace_256ce5c
              (*(undefined4 *)(param_4 + 0xa0),uVar8,uVar15,param_4,lVar3,0);
    uVar4 = UnityEngine_Input__GetMouseButtonDown_3c7aeb4(0,0);
    if ((uVar4 & 1) == 0) {
      uVar4 = UnityEngine_Input__GetMouseButtonUp_3c7aef0(0,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar6 = *(long *)(param_4 + 0x98);
      if (lVar6 == 0) goto LAB_02543dd0;
      LitMotion_CompositeMotionHandle__Cancel_2e8aef0(lVar6,0);
      if (lVar3 == 0) goto LAB_02543dd0;
      uVar12 = UnityEngine_Transform__get_localScale_3c2dd20(lVar3,0);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      lVar6 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      fVar18 = *(float *)(lVar6 + 0xc);
      auStack_80 = LitMotion_LMotion__Create_2eaa1b4
                             (uVar12,uVar8,uVar15,fVar18,*(undefined4 *)(lVar6 + 0x10),
                              *(undefined4 *)(lVar6 + 0x14),_UNK_013aa810,0);
      puVar1 = PTR_DAT_049c2288;
      lVar6 = *(long *)PTR_DAT_049c2288;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar1;
      }
      auVar23 = FUN_02526574(auStack_80,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60),
                             *(undefined8 *)PTR_DAT_049c2bc0);
      auVar23 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                          (auVar23._0_8_,auVar23._8_8_,lVar3,*(undefined8 *)PTR_DAT_049c1670);
      LitMotion_MotionHandleExtensions__AddTo_2eacb44
                (auVar23._0_8_,auVar23._8_8_ & 0xffffffff,*(long *)(param_4 + 0x98),0);
      if (lVar5 == 0) goto LAB_02543dd0;
      uVar12 = UnityEngine_Transform__get_localRotation_3c2d92c(lVar5,0);
      if (cRam0000000004f4a191 == '\0') {
        FUN_021f03f8(PTR_DAT_049bc158);
        cRam0000000004f4a191 = '\x01';
      }
      puVar7 = *(undefined4 **)(*(long *)PTR_DAT_049bc158 + 0xb8);
      uVar11 = *puVar7;
      uVar13 = puVar7[1];
      uVar16 = puVar7[2];
      uVar17 = puVar7[3];
    }
    else {
      lVar6 = *(long *)(param_4 + 0x98);
      if (lVar6 == 0) {
LAB_02543dd0:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      LitMotion_CompositeMotionHandle__Cancel_2e8aef0(lVar6,0);
      if (cRam0000000004f4a55a == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55a = '\x01';
      }
      puVar1 = PTR_DAT_049bbf90;
      lVar6 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      uVar13 = *(undefined4 *)(lVar6 + 0x48);
      uVar16 = *(undefined4 *)(lVar6 + 0x4c);
      uVar17 = *(undefined4 *)(lVar6 + 0x50);
      uVar11 = UnityEngine_Quaternion__AngleAxis_3c0a0a8(0x41480000,uVar13,uVar16,uVar17,0);
      if (lVar3 == 0) goto LAB_02543dd0;
      uVar8 = uVar13;
      uVar15 = uVar16;
      uVar12 = UnityEngine_Transform__get_localScale_3c2dd20(lVar3,0);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      uVar21 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc);
      fVar18 = (float)uVar21 * 0.85;
      auStack_80 = LitMotion_LMotion__Create_2eaa1b4
                             (uVar12,uVar8,uVar15,fVar18,(float)((ulong)uVar21 >> 0x20) * 0.85,
                              *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14) * _UNK_013aa540,
                              _UNK_013aa810,0);
      puVar1 = PTR_DAT_049c2288;
      lVar6 = *(long *)PTR_DAT_049c2288;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar1;
      }
      auVar23 = FUN_02526574(auStack_80,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60),
                             *(undefined8 *)PTR_DAT_049c2bc0);
      auVar23 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                          (auVar23._0_8_,auVar23._8_8_,lVar3,*(undefined8 *)PTR_DAT_049c1670);
      LitMotion_MotionHandleExtensions__AddTo_2eacb44
                (auVar23._0_8_,auVar23._8_8_ & 0xffffffff,*(long *)(param_4 + 0x98),0);
      if (lVar5 == 0) goto LAB_02543dd0;
      uVar12 = UnityEngine_Transform__get_localRotation_3c2d92c(lVar5,0);
    }
    auStack_90 = LitMotion_LMotion__Create_2eaa2a0
                           (uVar12,uVar8,uVar15,fVar18,uVar11,uVar13,uVar16,uVar17,0);
    auVar23 = FUN_02526574(auStack_90,
                           *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049c2288 + 0xb8) + 0x60),
                           *(undefined8 *)PTR_DAT_049c4190);
    auVar23 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalRotation___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2671eb4
                        (auVar23._0_8_,auVar23._8_8_,lVar5,*(undefined8 *)PTR_DAT_049c4188);
    LitMotion_MotionHandleExtensions__AddTo_2eacb44
              (auVar23._0_8_,auVar23._8_8_ & 0xffffffff,*(undefined8 *)(param_4 + 0x98),0);
  }
  return;
}

