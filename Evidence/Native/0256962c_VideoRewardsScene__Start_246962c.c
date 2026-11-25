/* IL2CPP: VideoRewardsScene$$Start
void VideoRewardsScene__Start (VideoRewardsScene_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewardsScene$$Start
   void VideoRewardsScene__Start (VideoRewardsScene_o* __this, const MethodInfo* method); */

void VideoRewardsScene__Start_246962c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_14 [4];
  
  auStack_14[0] = 0;
  uVar1 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(param_1,0);
  auStack_14[0] = VideoRewardsScene__GiftLoop_246966c(param_1,uVar1);
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_14,0);
  return;
}

