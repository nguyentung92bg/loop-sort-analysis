/* IL2CPP: VideoRewardsSubMonitor$$Render
void VideoRewardsSubMonitor__Render (VideoRewardsSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewardsSubMonitor$$Render
   void VideoRewardsSubMonitor__Render (VideoRewardsSubMonitor_o* __this, const MethodInfo* method);
    */

void VideoRewardsSubMonitor__Render_248b058(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uStack_18;
  
  if ((bRam0000000004f4ba44 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4ba44 = 1;
  }
  puVar2 = PTR_DAT_049b6128;
  uStack_18 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    uStack_18 = VideoRewards__GetTimeUntilReset_2529edc(*(long *)(param_1 + 0x50),0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar2);
    }
    dVar5 = (double)System_TimeSpan__get_TotalSeconds_3116bf4(&uStack_18,0);
    uVar4 = uStack_18;
    puVar2 = PTR_DAT_049b6110;
    iVar3 = -0x80000000;
    if (dVar5 != INFINITY) {
      iVar3 = (int)dVar5;
    }
    if (iVar3 != *(int *)(param_1 + 0x74)) {
      *(int *)(param_1 + 0x74) = iVar3;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar4 = Extensions__ToReadableString_24e7038(uVar4,2,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0xce1592a9,uVar4,0)
      ;
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      iVar3 = VideoRewards__GetWatchedCount_2529cd0(*(long *)(param_1 + 0x50),0);
      if ((*(char *)(param_1 + 0x78) == '\0') && (iVar1 = *(int *)(param_1 + 0x70), iVar3 != iVar1))
      {
        VideoRewardsSubMonitor__ApplyProgress_248b190
                  (param_1,iVar3,(iVar1 >= 0 && iVar3 != iVar1) && (iVar1 < 0 || iVar1 <= iVar3));
        *(int *)(param_1 + 0x70) = iVar3;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

