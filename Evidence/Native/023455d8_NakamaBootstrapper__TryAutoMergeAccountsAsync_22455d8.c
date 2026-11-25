/* IL2CPP: NakamaBootstrapper$$TryAutoMergeAccountsAsync
Cysharp_Threading_Tasks_UniTask_o NakamaBootstrapper__TryAutoMergeAccountsAsync (NakamaBootstrapper_o* __this, System_String_o* authToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaBootstrapper$$TryAutoMergeAccountsAsync
   Cysharp_Threading_Tasks_UniTask_o NakamaBootstrapper__TryAutoMergeAccountsAsync
   (NakamaBootstrapper_o* __this, System_String_o* authToken, const MethodInfo* method); */

void NakamaBootstrapper__TryAutoMergeAccountsAsync_22455d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b56f0;
  if ((bRam0000000004f49b41 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b56f0);
                    /* catch() { ... } // from try @ 023455c0 with catch @ 02345614 */
    bRam0000000004f49b41 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  thunk_FUN_021f190c((ulong)&uStack_70 | 8,0);
                    /* try { // try from 02345634 to 02445637 has its CatchHandler @ 02345640 */
  uStack_58 = param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02345634 with catch @ 02345640
                        */
  thunk_FUN_021f190c(&uStack_58,param_1);
                    /* catch() { ... } // from try @ 02345688 with catch @ 02345644 */
  uStack_50 = param_2;
  thunk_FUN_021f190c(&uStack_50,param_2);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_70 | 8,0);
                    /* try { // try from 0234567c to 02445687 has its CatchHandler @ 0234572c */
                    /* try { // try from 02345688 to 0244574b has its CatchHandler @ 02345644 */
  return;
}

