/* IL2CPP: IceCarrier$$OnLevelAnimationComplete
void IceCarrier__OnLevelAnimationComplete (IceCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: IceCarrier$$OnLevelAnimationComplete
   void IceCarrier__OnLevelAnimationComplete (IceCarrier_o* __this, const MethodInfo* method); */

undefined1  [16]
IceCarrier__OnLevelAnimationComplete_24a5c30
          (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000004f4bb13 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c6730);
    bRam0000000004f4bb13 = 1;
  }
  if ((*(long *)(param_3 + 0xa0) != 0) &&
     (lVar3 = UnityEngine_GameObject__get_transform_3c1ca74(*(long *)(param_3 + 0xa0),0), lVar3 != 0
     )) {
    UnityEngine_Transform__get_localPosition_3c2c388(lVar3,0);
    auVar5 = LitMotion_LMotion__Create_2ea9f9c
                       (param_2,*(undefined4 *)(param_3 + 200),_UNK_013aa8fc,0);
    puVar2 = PTR_DAT_049c6730;
    puVar1 = PTR_DAT_049b6110;
    if (*(long *)(param_3 + 0xa0) != 0) {
      uVar4 = UnityEngine_GameObject__get_transform_3c1ca74(*(long *)(param_3 + 0xa0),0);
      auVar5 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalPositionY___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2671a10
                         (auVar5._0_8_,auVar5._8_8_,uVar4,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar5._8_8_ = auVar5._8_8_ & 0xffffffff;
      if (param_3 != 0) {
        GameBehaviourBase__Register_24f4ce4(param_3,auVar5._0_8_,auVar5._8_8_,0);
        return auVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

