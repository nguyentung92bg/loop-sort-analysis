/* IL2CPP: LoopSortAccountMergeHandler$$MergeAccounts
System_Threading_Tasks_Task_AccountMergeOption__o* LoopSortAccountMergeHandler__MergeAccounts (LoopSortAccountMergeHandler_o* __this, Voodoo_Nakama_MergeClientData_o* oldClient, Voodoo_Nakama_MergeClientData_o* newClient, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortAccountMergeHandler$$MergeAccounts
   System_Threading_Tasks_Task_AccountMergeOption__o* LoopSortAccountMergeHandler__MergeAccounts
   (LoopSortAccountMergeHandler_o* __this, Voodoo_Nakama_MergeClientData_o* oldClient,
   Voodoo_Nakama_MergeClientData_o* newClient, const MethodInfo* method); */

void LoopSortAccountMergeHandler__MergeAccounts_223d2c4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_DAT_049b4f68;
                    /* catch() { ... } // from try @ 0233d330 with catch @ 0233d2dc */
  if ((bRam0000000004f49ae4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4f70);
    FUN_021f03f8(PTR_DAT_049b4f78);
    FUN_021f03f8(PTR_DAT_049b4f80);
    FUN_021f03f8(PTR_DAT_049b4f68);
                    /* try { // try from 0233d328 to 0243d32f has its CatchHandler @ 0233d37c */
    bRam0000000004f49ae4 = 1;
  }
                    /* try { // try from 0233d330 to 0243d38f has its CatchHandler @ 0233d2dc */
  puVar4 = PTR_DAT_049b4f80;
  puVar3 = PTR_DAT_049b4f78;
  puVar2 = PTR_DAT_049b4f70;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder___Il2CppFullySharedGenericType___Create_27d0368
            (&uStack_a8,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 0233d328 with catch @ 0233d37c */
  uStack_80 = uStack_a0;
  uStack_88 = uStack_a8;
  uStack_78 = uStack_98;
  thunk_FUN_021f190c((ulong)&uStack_90 | 8,0);
  uStack_60 = param_1;
                    /* try { // try from 0233d39c to 0243d39f has its CatchHandler @ 0233d3a8 */
  thunk_FUN_021f190c(&uStack_60,param_1);
  uStack_70 = param_2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0233d39c with catch @ 0233d3a8
                        */
                    /* try { // try from 0233d3ac to 0243d3db has its CatchHandler @ 0233d3ac
                       catch() { ... } // from try @ 0233d3ac with catch @ 0233d3ac
                       catch() { ... } // from try @ 0233d3e8 with catch @ 0233d3ac */
  thunk_FUN_021f190c(&uStack_70,param_2);
  uStack_68 = param_3;
  thunk_FUN_021f190c(&uStack_68,param_3);
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder___Il2CppFullySharedGenericType___Start___Il2CppFullySharedGenericType__25875b8
            ((ulong)&uStack_90 | 8,&uStack_90,*(undefined8 *)puVar3);
                    /* try { // try from 0233d3dc to 0243d3e7 has its CatchHandler @ 0233d408 */
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder___Il2CppFullySharedGenericType___get_Task_27d037c
            ((ulong)&uStack_90 | 8,*(undefined8 *)puVar4);
                    /* try { // try from 0233d3e8 to 0243d423 has its CatchHandler @ 0233d3ac */
  return;
}

