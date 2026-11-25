/* IL2CPP: VideoRewardsScene$$SetNextReward
void VideoRewardsScene__SetNextReward (VideoRewardsScene_o* __this, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewardsScene$$SetNextReward
   void VideoRewardsScene__SetNextReward (VideoRewardsScene_o* __this, int32_t amount, const
   MethodInfo* method); */

void VideoRewardsScene__SetNextReward_2469718(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049c53e0;
  if ((bRam0000000004f4b979 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c53e0);
    bRam0000000004f4b979 = 1;
  }
  uStack_24 = param_2;
  uVar2 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_24);
  uVar2 = System_String__Format_2f73700(*(undefined8 *)puVar1,uVar2,0);
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x88),uVar2);
  return;
}

