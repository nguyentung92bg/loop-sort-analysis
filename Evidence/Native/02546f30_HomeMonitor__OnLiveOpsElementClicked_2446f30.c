/* IL2CPP: HomeMonitor$$OnLiveOpsElementClicked
void HomeMonitor__OnLiveOpsElementClicked (HomeMonitor_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$OnLiveOpsElementClicked
   void HomeMonitor__OnLiveOpsElementClicked (HomeMonitor_o* __this, int32_t liveOps, const
   MethodInfo* method); */

void HomeMonitor__OnLiveOpsElementClicked_2446f30(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_38 [24];
  
  if ((*(long *)(param_1 + 0xe8) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0xe8) + 0x90), lVar1 != 0)) {
    lVar1 = HomeLiveOpsSheet__FindSlot_2560f84(lVar1,param_2,0);
    if (lVar1 != 0) {
      uVar2 = HomeLiveOpsSheet_Slot__IsLocked_25616a4(lVar1,0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_1 + 0xd0) == 0) goto LAB_02546f98;
        LiveOpsModule__Show_253e230(auStack_38,*(long *)(param_1 + 0xd0),param_2 & 0xffffffff,0,0);
      }
      return;
    }
  }
LAB_02546f98:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

