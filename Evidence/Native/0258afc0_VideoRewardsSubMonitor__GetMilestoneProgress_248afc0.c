/* IL2CPP: VideoRewardsSubMonitor$$GetMilestoneProgress
float VideoRewardsSubMonitor__GetMilestoneProgress (VideoRewardsSubMonitor_o* __this, int32_t watchedCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: VideoRewardsSubMonitor$$GetMilestoneProgress
   float VideoRewardsSubMonitor__GetMilestoneProgress (VideoRewardsSubMonitor_o* __this, int32_t
   watchedCount, const MethodInfo* method); */

float VideoRewardsSubMonitor__GetMilestoneProgress_248afc0(long param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((bRam0000000004f4ba46 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b8758);
    bRam0000000004f4ba46 = 1;
  }
  puVar1 = PTR_DAT_049b8758;
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar2 = VideoRewards__get_Count_2529ad8(*(long *)(param_1 + 0x50),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    iVar3 = System_Math__Max_30ff598(1,uVar2,0);
    return ((float)param_2 * _UNK_013aa7bc) / (float)iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

