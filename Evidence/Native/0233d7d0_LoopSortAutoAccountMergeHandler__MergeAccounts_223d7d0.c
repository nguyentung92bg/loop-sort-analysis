/* IL2CPP: LoopSortAutoAccountMergeHandler$$MergeAccounts
System_Threading_Tasks_Task_AccountMergeOption__o* LoopSortAutoAccountMergeHandler__MergeAccounts (LoopSortAutoAccountMergeHandler_o* __this, Voodoo_Nakama_MergeClientData_o* oldClient, Voodoo_Nakama_MergeClientData_o* newClient, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortAutoAccountMergeHandler$$MergeAccounts
   System_Threading_Tasks_Task_AccountMergeOption__o* LoopSortAutoAccountMergeHandler__MergeAccounts
   (LoopSortAutoAccountMergeHandler_o* __this, Voodoo_Nakama_MergeClientData_o* oldClient,
   Voodoo_Nakama_MergeClientData_o* newClient, const MethodInfo* method); */

void LoopSortAutoAccountMergeHandler__MergeAccounts_223d7d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_14;
  
  puVar1 = PTR_DAT_049b4fe8;
                    /* try { // try from 0233d7e4 to 0243d8df has its CatchHandler @ 0233d7e4
                       catch() { ... } // from try @ 0233d7e4 with catch @ 0233d7e4
                       catch() { ... } // from try @ 0233d8ec with catch @ 0233d7e4 */
  if ((bRam0000000004f49ae8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4ff0);
    FUN_021f03f8(PTR_DAT_049b4fe8);
    bRam0000000004f49ae8 = 1;
  }
  puVar2 = PTR_DAT_049b4ff0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uStack_14 = 1;
  System_Threading_Tasks_Task__FromResult___Il2CppFullySharedGenericType__26dca10
            (&uStack_14,*(undefined8 *)puVar2);
  return;
}

