/* IL2CPP: LoopSortConflictResolver.<Resolve>d__12$$SetStateMachine
void LoopSortConflictResolver__Resolve_d__12__SetStateMachine (LoopSortConflictResolver__Resolve_d__12_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortConflictResolver.<Resolve>d__12$$SetStateMachine
   void LoopSortConflictResolver__Resolve_d__12__SetStateMachine
   (LoopSortConflictResolver__Resolve_d__12_o __this,
   System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method); */

void LoopSortConflictResolver__Resolve_d__12__SetStateMachine_223f01c(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_049b5020;
  if ((bRam0000000004f49af5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5108);
    FUN_021f03f8(PTR_DAT_049b5020);
    bRam0000000004f49af5 = 1;
  }
  puVar3 = PTR_DAT_049b5108;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = *(undefined8 *)puVar3;
  plVar1 = (long *)(param_1 + 8);
  if (param_2 != 0) {
    if (*plVar1 == 0) {
      *plVar1 = param_2;
      if (iRam0000000005174518 != 0) {
        FUN_023118d0(1L << ((ulong)plVar1 >> 0xc & 0x3f),
                     ((ulong)plVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
      }
      return;
    }
    uVar5 = thunk_FUN_02256840(PTR_DAT_049e7d38,param_2,0);
    uVar5 = System_Environment__GetResourceString_3142330(uVar5,0);
    thunk_FUN_02256840(PTR_DAT_049b82b8);
    uVar4 = thunk_FUN_0222ca34();
    System_InvalidOperationException___ctor_30fe440(uVar4,uVar5,0);
    uVar5 = thunk_FUN_02256840(PTR_DAT_049e7d30);
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar4,uVar5);
  }
  thunk_FUN_02256840(PTR_DAT_049baa58,0,0);
  uVar5 = thunk_FUN_0222ca34();
  uVar4 = thunk_FUN_02256840(PTR_DAT_049cc810);
  System_ArgumentNullException___ctor_30655c4(uVar5,uVar4,0);
  uVar4 = thunk_FUN_02256840(PTR_DAT_049e7d30);
                    /* WARNING: Subroutine does not return */
  FUN_021f0564(uVar5,uVar4);
}

