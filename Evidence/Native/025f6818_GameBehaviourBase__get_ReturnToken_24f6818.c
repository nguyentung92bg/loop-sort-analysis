/* IL2CPP: GameBehaviourBase$$get_ReturnToken
System_Threading_CancellationToken_o GameBehaviourBase__get_ReturnToken (GameBehaviourBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBehaviourBase$$get_ReturnToken
   System_Threading_CancellationToken_o GameBehaviourBase__get_ReturnToken (GameBehaviourBase_o*
   __this, const MethodInfo* method); */

long GameBehaviourBase__get_ReturnToken_24f6818(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_18;
  
  if ((bRam0000000004f4bd21 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5680);
    bRam0000000004f4bd21 = 1;
  }
  plVar2 = (long *)(param_1 + 0x78);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5680);
    System_Threading_CancellationTokenSource___ctor_3165668(lVar1,0);
    *plVar2 = lVar1;
    thunk_FUN_021f190c(plVar2,lVar1);
    lVar1 = *plVar2;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  System_Threading_CancellationTokenSource__ThrowIfDisposed_31655f4(lVar1,0);
  lStack_18 = lVar1;
  thunk_FUN_021f190c(&lStack_18,lVar1);
  return lStack_18;
}

