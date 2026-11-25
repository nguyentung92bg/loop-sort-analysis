/* IL2CPP: TagCarrier$$SetModelUp
void TagCarrier__SetModelUp (TagCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TagCarrier$$SetModelUp
   void TagCarrier__SetModelUp (TagCarrier_o* __this, const MethodInfo* method); */

long TagCarrier__SetModelUp_24ac888(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = param_1;
  if ((bRam0000000004f4bb3b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    lVar1 = FUN_021f03f8(PTR_DAT_049c67c0);
    bRam0000000004f4bb3b = 1;
  }
  if (*(char *)(param_1 + 0x120) != '\0') {
    return lVar1;
  }
  *(undefined1 *)(param_1 + 0x120) = 1;
  auVar3 = LitMotion_LMotion__Create_2eaa2a0
                     (*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x114),
                      *(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c),
                      *(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x104),
                      *(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c),0);
  if (*(long *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar2 = UnityEngine_GameObject__get_transform_3c1ca74(*(long *)(param_1 + 0xa0),0);
  auVar3 = LitMotion_Extensions_LitMotionTransformExtensions__BindToRotation___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26735e8
                     (auVar3._0_8_,auVar3._8_8_,uVar2,*(undefined8 *)PTR_DAT_049c67c0);
  if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (param_1 != 0) {
    GameBehaviourBase__Register_24f4ce4(param_1,auVar3._0_8_,auVar3._8_8_ & 0xffffffff,0);
    return auVar3._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

