/* IL2CPP: LavaQuest$$ApplyHomeAction
Cysharp_Threading_Tasks_UniTask_o LavaQuest__ApplyHomeAction (LavaQuest_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest$$ApplyHomeAction
   Cysharp_Threading_Tasks_UniTask_o LavaQuest__ApplyHomeAction (LavaQuest_o* __this,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void LavaQuest__ApplyHomeAction_251ab50(undefined8 param_1)

{
  undefined *puVar1;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_049c9538;
                    /* try { // try from 0261ab70 to 0271ab8b has its CatchHandler @ 0261b990 */
  if ((bRam0000000004f4be3c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9538);
    bRam0000000004f4be3c = 1;
  }
                    /* try { // try from 0261ab94 to 0271abab has its CatchHandler @ 0261b98c */
  uStack_30 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
                    /* try { // try from 0261abac to 0271abbf has its CatchHandler @ 0261b988 */
  thunk_FUN_021f190c((ulong)&uStack_a0 | 8,0);
  uStack_88 = param_1;
  thunk_FUN_021f190c(&uStack_88,param_1);
                    /* try { // try from 0261abd0 to 0271abd3 has its CatchHandler @ 0261b950 */
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
                    /* try { // try from 0261abd4 to 0271abe7 has its CatchHandler @ 0261b984 */
  FUN_0235c17c((ulong)&uStack_a0 | 8,&uStack_a0,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_a0 | 8,0);
  return;
}

