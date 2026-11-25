/* IL2CPP: RockCarrier$$ApplyCompleteMotion
void RockCarrier__ApplyCompleteMotion (RockCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: RockCarrier$$ApplyCompleteMotion
   void RockCarrier__ApplyCompleteMotion (RockCarrier_o* __this, const MethodInfo* method); */

undefined1  [16]
RockCarrier__ApplyCompleteMotion_24abf18(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000004f4bb33 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c6730);
    bRam0000000004f4bb33 = 1;
  }
  puVar2 = PTR_DAT_049c6730;
  puVar1 = PTR_DAT_049b6110;
  if (*(long *)(param_3 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_Transform__get_localPosition_3c2c388(*(long *)(param_3 + 0xa0),0);
  auVar3 = LitMotion_LMotion__Create_2ea9f9c(param_2,_UNK_013aa5c4,0x3f000000,0);
  auVar3 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalPositionY___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2671a10
                     (auVar3._0_8_,auVar3._8_8_,*(undefined8 *)(param_3 + 0xa0),
                      *(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar3._8_8_ = auVar3._8_8_ & 0xffffffff;
  if (param_3 != 0) {
    GameBehaviourBase__Register_24f4ce4(param_3,auVar3._0_8_,auVar3._8_8_,0);
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

