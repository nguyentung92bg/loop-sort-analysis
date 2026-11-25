/* IL2CPP: HomeMonitor.<>c__DisplayClass58_0$$<CreateLiveOpsSlotElement>b__0
void HomeMonitor___c__DisplayClass58_0___CreateLiveOpsSlotElement_b__0 (HomeMonitor___c__DisplayClass58_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor.<>c__DisplayClass58_0$$<CreateLiveOpsSlotElement>b__0
   void HomeMonitor___c__DisplayClass58_0___CreateLiveOpsSlotElement_b__0
   (HomeMonitor___c__DisplayClass58_0_o* __this, const MethodInfo* method); */

void HomeMonitor___c__DisplayClass58_0___CreateLiveOpsSlotElement_b__0_24489ac(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_38 [24];
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  if (((*(long *)(lVar4 + 0xe8) != 0) &&
      (lVar2 = *(long *)(*(long *)(lVar4 + 0xe8) + 0x90), lVar2 != 0)) &&
     (lVar2 = HomeLiveOpsSheet__FindSlot_2560f84(lVar2,uVar1,0), lVar2 != 0)) {
    uVar3 = HomeLiveOpsSheet_Slot__IsLocked_25616a4(lVar2,0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(lVar4 + 0xd0) == 0) goto LAB_02546f98;
      LiveOpsModule__Show_253e230(auStack_38,*(long *)(lVar4 + 0xd0),uVar1,0,0);
    }
    return;
  }
LAB_02546f98:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

