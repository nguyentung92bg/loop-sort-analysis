/* IL2CPP: VideoRewardsScene$$PeekLid
Cysharp_Threading_Tasks_UniTask_o VideoRewardsScene__PeekLid (VideoRewardsScene_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewardsScene$$PeekLid
   Cysharp_Threading_Tasks_UniTask_o VideoRewardsScene__PeekLid (VideoRewardsScene_o* __this,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void VideoRewardsScene__PeekLid_246a4f4(undefined8 param_1,undefined8 param_2)

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
  
  puVar1 = PTR_DAT_049c5400;
                    /* try { // try from 0256a4f4 to 0266a54b has its CatchHandler @ 0256a3e0 */
  if ((bRam0000000004f4b97e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5400);
    bRam0000000004f4b97e = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
                    /* try { // try from 0256a54c to 0266a557 has its CatchHandler @ 0256a604 */
  thunk_FUN_021f190c((ulong)&uStack_70 | 8,0);
  uStack_58 = param_1;
  thunk_FUN_021f190c(&uStack_58,param_1);
                    /* try { // try from 0256a560 to 0266a567 has its CatchHandler @ 0256a610 */
  uStack_50 = param_2;
  thunk_FUN_021f190c(&uStack_50,0);
                    /* try { // try from 0256a57c to 0266a593 has its CatchHandler @ 0256a618 */
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_70 | 8,0);
  return;
}

