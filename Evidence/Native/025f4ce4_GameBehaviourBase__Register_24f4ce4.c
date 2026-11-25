/* IL2CPP: GameBehaviourBase$$Register
void GameBehaviourBase__Register (GameBehaviourBase_o* __this, LitMotion_MotionHandle_o handle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBehaviourBase$$Register
   void GameBehaviourBase__Register (GameBehaviourBase_o* __this, LitMotion_MotionHandle_o handle,
   const MethodInfo* method); */

void GameBehaviourBase__Register_24f4ce4(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam0000000004f4bd1a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c16a0);
    bRam0000000004f4bd1a = 1;
  }
  plVar2 = (long *)(param_1 + 0x20);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c16a0);
    LitMotion_CompositeMotionHandle___ctor_2e8ad94(lVar1,0);
    *plVar2 = lVar1;
    thunk_FUN_021f190c(plVar2,lVar1);
    lVar1 = *plVar2;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  if ((bRam0000000004f4e567 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049df8d8,param_2,param_3,0);
    bRam0000000004f4e567 = 1;
  }
  if (*(long *)(lVar1 + 0x10) != 0) {
    uStack_40 = param_2;
    uStack_38 = param_3;
    FUN_02333498(*(long *)(lVar1 + 0x10),&uStack_40,*(undefined8 *)PTR_DAT_049df8d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

