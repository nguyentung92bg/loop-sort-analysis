/* IL2CPP: LiveOpsModule$$CanComplete
bool LiveOpsModule__CanComplete (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$CanComplete
   bool LiveOpsModule__CanComplete (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo*
   method); */

uint LiveOpsModule__CanComplete_2546e28(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4c019 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2f60);
    bRam0000000004f4c019 = 1;
  }
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar2 == 0)) {
LAB_02646efc:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_24 = param_2;
  uVar3 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                    (lVar2,&uStack_24,*(undefined8 *)PTR_DAT_049c2f60);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    plVar4 = (long *)Extensions__ToClassInstance_24e79d0(param_2,0);
    uVar3 = LiveOpsModule__IsRefreshTimeElapsed_2547aa8(param_1,param_2);
    if ((uVar3 & 1) != 0) {
      if (plVar4 == (long *)0x0) goto LAB_02646efc;
      uVar1 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      goto LAB_02646ee8;
    }
  }
  uVar1 = 0;
LAB_02646ee8:
  return uVar1 & 1;
}

