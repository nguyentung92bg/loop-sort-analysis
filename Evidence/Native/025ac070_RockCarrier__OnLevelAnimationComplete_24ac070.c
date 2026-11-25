/* IL2CPP: RockCarrier$$OnLevelAnimationComplete
void RockCarrier__OnLevelAnimationComplete (RockCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RockCarrier$$OnLevelAnimationComplete
   void RockCarrier__OnLevelAnimationComplete (RockCarrier_o* __this, const MethodInfo* method); */

undefined1  [16] RockCarrier__OnLevelAnimationComplete_24ac070(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  puVar2 = PTR_DAT_049c6730;
  puVar1 = PTR_DAT_049b6110;
  if ((bRam0000000004f4bb35 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c6730);
    bRam0000000004f4bb35 = 1;
  }
  auVar3 = LitMotion_LMotion__Create_2ea9f9c(0xc0000000,0,0x3f000000,0);
  auVar3 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalPositionY___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2671a10
                     (auVar3._0_8_,auVar3._8_8_,*(undefined8 *)(param_1 + 0xa8),
                      *(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar3._8_8_ = auVar3._8_8_ & 0xffffffff;
  if (param_1 != 0) {
    GameBehaviourBase__Register_24f4ce4(param_1,auVar3._0_8_,auVar3._8_8_,0);
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

