/* IL2CPP: CoreStreak$$ApplyHomeAction
Cysharp_Threading_Tasks_UniTask_o CoreStreak__ApplyHomeAction (CoreStreak_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoreStreak$$ApplyHomeAction
   Cysharp_Threading_Tasks_UniTask_o CoreStreak__ApplyHomeAction (CoreStreak_o* __this,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void CoreStreak__ApplyHomeAction_2512d6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_049c92c8;
  if ((bRam0000000004f4be00 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c92c8);
    bRam0000000004f4be00 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  thunk_FUN_021f190c((ulong)&uStack_70 | 8,0);
  uStack_58 = param_1;
  thunk_FUN_021f190c(&uStack_58,param_1);
  uStack_50 = param_2;
  thunk_FUN_021f190c(&uStack_50,0);
                    /* try { // try from 02612df8 to 02712efb has its CatchHandler @ 02612df8
                       catch() { ... } // from try @ 02612df8 with catch @ 02612df8
                       catch() { ... } // from try @ 0261335c with catch @ 02612df8
                       catch() { ... } // from try @ 026134cc with catch @ 02612df8
                       catch() { ... } // from try @ 02613564 with catch @ 02612df8
                       catch() { ... } // from try @ 02613624 with catch @ 02612df8
                       catch() { ... } // from try @ 02613650 with catch @ 02612df8
                       catch() { ... } // from try @ 0261369c with catch @ 02612df8 */
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_70 | 8,0);
  return;
}

