/* IL2CPP: CarpetCarrierGroupControl$$OnLevelAnimationEnd
void CarpetCarrierGroupControl__OnLevelAnimationEnd (CarpetCarrierGroupControl_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: CarpetCarrierGroupControl$$OnLevelAnimationEnd
   void CarpetCarrierGroupControl__OnLevelAnimationEnd (CarpetCarrierGroupControl_o* __this, const
   MethodInfo* method); */

void CarpetCarrierGroupControl__OnLevelAnimationEnd_24042c0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_60 [16];
  
  if ((bRam0000000004f4b6a7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c26c0);
    FUN_021f03f8(PTR_DAT_049c26c8);
    FUN_021f03f8(PTR_DAT_049c20d8);
    bRam0000000004f4b6a7 = 1;
  }
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  lVar6 = UnityEngine_Component__get_transform_3c18724(param_1,0);
  puVar5 = PTR_DAT_049c26c8;
  puVar4 = PTR_DAT_049c26c0;
  puVar3 = PTR_DAT_049c20d8;
  puVar2 = PTR_DAT_049b6110;
  uVar1 = _UNK_013aa810;
  if (lVar6 != 0) {
    UnityEngine_Transform__set_localScale_3c2ddfc(0,0x3f800000,_UNK_013aa810,lVar6,0);
    auVar8 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,0x3e800000,0);
    uVar7 = UnityEngine_Component__get_transform_3c18724(param_1,0);
    auVar8 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScaleX___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26721cc
                       (auVar8._0_8_,auVar8._8_8_,uVar7,*(undefined8 *)puVar4);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar8 = Extensions__AddTo_24d83f4(auVar8._0_8_,auVar8._8_8_ & 0xffffffff,param_1,0);
    LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
              (auVar8._0_8_,auVar8._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 0x98),0);
    auStack_60 = LitMotion_LMotion__Create_2ea9f9c(uVar1,0x3f800000,0x3e800000,0);
    auVar8 = FUN_024f6e90(0x3e800000,auStack_60,0,1,*(undefined8 *)puVar3);
    uVar7 = UnityEngine_Component__get_transform_3c18724(param_1,0);
    auVar8 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScaleZ___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672988
                       (auVar8._0_8_,auVar8._8_8_,uVar7,*(undefined8 *)puVar5);
    auVar8 = Extensions__AddTo_24d83f4(auVar8._0_8_,auVar8._8_8_ & 0xffffffff,param_1,0);
    LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
              (auVar8._0_8_,auVar8._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 0x98),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

