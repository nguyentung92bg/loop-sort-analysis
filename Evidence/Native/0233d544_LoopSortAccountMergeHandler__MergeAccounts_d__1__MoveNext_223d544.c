/* IL2CPP: LoopSortAccountMergeHandler.<MergeAccounts>d__1$$MoveNext
void LoopSortAccountMergeHandler__MergeAccounts_d__1__MoveNext (LoopSortAccountMergeHandler__MergeAccounts_d__1_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortAccountMergeHandler.<MergeAccounts>d__1$$MoveNext
   void LoopSortAccountMergeHandler__MergeAccounts_d__1__MoveNext
   (LoopSortAccountMergeHandler__MergeAccounts_d__1_o __this, const MethodInfo* method); */

void LoopSortAccountMergeHandler__MergeAccounts_d__1__MoveNext_223d544(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int iStack_24;
  
  if ((bRam0000000004f49ae6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4fa8);
    FUN_021f03f8(PTR_DAT_049b4fb0);
    FUN_021f03f8(PTR_DAT_049b4f68);
    FUN_021f03f8(PTR_DAT_049b4fb8);
    FUN_021f03f8(PTR_DAT_049b4fc0);
    FUN_021f03f8(PTR_DAT_049b4fc8);
    FUN_021f03f8(PTR_DAT_049b4fd0);
    bRam0000000004f49ae6 = 1;
  }
  puVar1 = PTR_DAT_049b4fc0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (*param_1 == 0) {
    uStack_38 = *(undefined8 *)(param_1 + 0x10);
    uStack_40 = *(undefined8 *)(param_1 + 0xe);
    *param_1 = -1;
    uVar3 = *(undefined8 *)puVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    FUN_0235b3fc(&uStack_40,&iStack_24,uVar3);
    iVar4 = 1;
    if (iStack_24 != 2) {
      iVar4 = 2;
    }
    iVar5 = 0;
    if (iStack_24 != 1) {
      iVar5 = iVar4;
    }
  }
  else {
    iVar5 = 1;
  }
  puVar1 = PTR_DAT_049b4f68;
  *param_1 = -2;
  puVar2 = PTR_DAT_049b4fb0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  iStack_24 = iVar5;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder___Il2CppFullySharedGenericType___SetResult_27d0414
            (param_1 + 2,&iStack_24,*(undefined8 *)puVar2);
  return;
}

