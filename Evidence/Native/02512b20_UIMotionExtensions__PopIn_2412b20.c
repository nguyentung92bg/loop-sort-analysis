/* IL2CPP: UIMotionExtensions$$PopIn
LitMotion_MotionHandle_o UIMotionExtensions__PopIn (UnityEngine_Transform_o* target, float delay, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UIMotionExtensions$$PopIn
   LitMotion_MotionHandle_o UIMotionExtensions__PopIn (UnityEngine_Transform_o* target, float delay,
   float duration, const MethodInfo* method); */

void UIMotionExtensions__PopIn_2412b20(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_70 [16];
  
  if ((bRam0000000004f4b72e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c2808);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c2bc0);
    FUN_021f03f8(PTR_DAT_049c2288);
    bRam0000000004f4b72e = 1;
  }
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  if (cRam0000000004f4a233 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a233 = '\x01';
  }
  puVar1 = PTR_DAT_049bbf90;
  if (param_3 != 0) {
    puVar7 = *(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    UnityEngine_Transform__set_localScale_3c2ddfc(*puVar7,puVar7[1],puVar7[2],param_3,0);
    if (cRam0000000004f4a233 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a233 = '\x01';
    }
    puVar4 = PTR_DAT_049c2808;
    puVar3 = PTR_DAT_049c2288;
    puVar2 = PTR_DAT_049c1680;
    puVar7 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
    uVar8 = *puVar7;
    uVar9 = puVar7[1];
    uVar10 = puVar7[2];
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(puVar1);
      cRam0000000004f4a190 = '\x01';
      puVar7 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
    }
    puVar5 = PTR_DAT_049c2bc0;
    puVar1 = PTR_DAT_049c1670;
    auStack_70 = LitMotion_LMotion__Create_2eaa1b4
                           (uVar8,uVar9,uVar10,puVar7[3],puVar7[4],puVar7[5],param_2,0);
    auVar11 = FUN_024f6e90(param_1,auStack_70,0,1,*(undefined8 *)puVar4);
    auStack_70 = auVar11;
    auVar11 = FUN_024f4e50(auStack_70,0x1a,*(undefined8 *)puVar2);
    lVar6 = *(long *)puVar3;
    auStack_70 = auVar11;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar3;
    }
    auVar11 = FUN_02526574(auStack_70,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60),
                           *(undefined8 *)puVar5);
    auVar11 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                        (auVar11._0_8_,auVar11._8_8_,param_3,*(undefined8 *)puVar1);
    LitMotion_MotionHandleExtensions__AddTo_2eaccf0
              (auVar11._0_8_,auVar11._8_8_ & 0xffffffff,param_3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

