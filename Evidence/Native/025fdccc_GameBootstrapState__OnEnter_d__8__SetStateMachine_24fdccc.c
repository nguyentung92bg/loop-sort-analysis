/* IL2CPP: GameBootstrapState.<OnEnter>d__8$$SetStateMachine
void GameBootstrapState__OnEnter_d__8__SetStateMachine (GameBootstrapState__OnEnter_d__8_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBootstrapState.<OnEnter>d__8$$SetStateMachine
   void GameBootstrapState__OnEnter_d__8__SetStateMachine (GameBootstrapState__OnEnter_d__8_o
   __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo*
   method); */

void GameBootstrapState__OnEnter_d__8__SetStateMachine_24fdccc(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)(param_1 + 0x10);
  if (param_2 == 0) {
    thunk_FUN_02256840(PTR_DAT_049baa58,0,0);
    uVar2 = thunk_FUN_0222ca34();
    uVar3 = thunk_FUN_02256840(PTR_DAT_049cc810);
    System_ArgumentNullException___ctor_30655c4(uVar2,uVar3,0);
    uVar3 = thunk_FUN_02256840(PTR_DAT_049e7d30);
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar2,uVar3);
  }
  if (*plVar1 == 0) {
    *plVar1 = param_2;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)plVar1 >> 0xc & 0x3f),
                   ((ulong)plVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
  uVar2 = thunk_FUN_02256840(PTR_DAT_049e7d38,param_2,0);
  uVar2 = System_Environment__GetResourceString_3142330(uVar2,0);
  thunk_FUN_02256840(PTR_DAT_049b82b8);
  uVar3 = thunk_FUN_0222ca34();
  System_InvalidOperationException___ctor_30fe440(uVar3,uVar2,0);
  uVar2 = thunk_FUN_02256840(PTR_DAT_049e7d30);
                    /* WARNING: Subroutine does not return */
  FUN_021f0564(uVar3,uVar2);
}

