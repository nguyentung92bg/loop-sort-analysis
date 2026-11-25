/* IL2CPP: CollectItems$$ApplyHomeAction
Cysharp_Threading_Tasks_UniTask_o CollectItems__ApplyHomeAction (CollectItems_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectItems$$ApplyHomeAction
   Cysharp_Threading_Tasks_UniTask_o CollectItems__ApplyHomeAction (CollectItems_o* __this,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void CollectItems__ApplyHomeAction_250e750(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c91b0;
  if ((bRam0000000004f4bde9 & 1) == 0) {
                    /* try { // try from 0260e784 to 0270e78b has its CatchHandler @ 0260ed7c */
    FUN_021f03f8(PTR_DAT_049c91b0);
    bRam0000000004f4bde9 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
                    /* try { // try from 0260e7a4 to 0270e7ef has its CatchHandler @ 0260ed80 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  thunk_FUN_021f190c((ulong)&uStack_80 | 8,0);
  uStack_68 = param_1;
  thunk_FUN_021f190c(&uStack_68,param_1);
  uStack_60 = param_2;
  thunk_FUN_021f190c(&uStack_60,0);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar1);
                    /* try { // try from 0260e7f0 to 0270e7ff has its CatchHandler @ 0260e5e0 */
  FUN_0235acf0((ulong)&uStack_80 | 8,0);
                    /* try { // try from 0260e800 to 0270e81b has its CatchHandler @ 0260ed84 */
  return;
}

