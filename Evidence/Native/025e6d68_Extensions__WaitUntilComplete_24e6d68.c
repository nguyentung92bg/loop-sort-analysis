/* IL2CPP: Extensions$$WaitUntilComplete
Cysharp_Threading_Tasks_UniTask_o Extensions__WaitUntilComplete (Spine_TrackEntry_o* trackEntry, System_Threading_CancellationToken_o token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$WaitUntilComplete
   Cysharp_Threading_Tasks_UniTask_o Extensions__WaitUntilComplete (Spine_TrackEntry_o* trackEntry,
   System_Threading_CancellationToken_o token, const MethodInfo* method); */

void Extensions__WaitUntilComplete_24e6d68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_049c7c68;
                    /* try { // try from 025e6d90 to 026e6d97 has its CatchHandler @ 025e6e84 */
  if ((bRam0000000004f4bc92 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7c68);
    bRam0000000004f4bc92 = 1;
  }
                    /* try { // try from 025e6db0 to 026e6dfb has its CatchHandler @ 025e6e88 */
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  thunk_FUN_021f190c((ulong)&uStack_70 | 8,0);
  uStack_50 = param_1;
  thunk_FUN_021f190c(&uStack_50,param_1);
  uStack_58 = param_2;
  thunk_FUN_021f190c(&uStack_58,0);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
                    /* try { // try from 025e6dfc to 026e6e1b has its CatchHandler @ 025e6c38 */
  FUN_0235c17c((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_70 | 8,0);
                    /* try { // try from 025e6e1c to 026e6e1f has its CatchHandler @ 025e6e74 */
  return;
}

