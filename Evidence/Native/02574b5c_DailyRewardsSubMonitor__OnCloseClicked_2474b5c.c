/* IL2CPP: DailyRewardsSubMonitor$$OnCloseClicked
void DailyRewardsSubMonitor__OnCloseClicked (DailyRewardsSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewardsSubMonitor$$OnCloseClicked
   void DailyRewardsSubMonitor__OnCloseClicked (DailyRewardsSubMonitor_o* __this, const MethodInfo*
   method); */

void DailyRewardsSubMonitor__OnCloseClicked_2474b5c(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = PTR_DAT_049c56e0;
  if ((bRam0000000004f4b9c2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c56e8);
    FUN_021f03f8(PTR_DAT_049c56e0);
    bRam0000000004f4b9c2 = 1;
  }
  lVar4 = *(long *)(*(long *)puVar3 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x78);
  uStack_30 = *(undefined4 *)(param_1 + 0x80);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  pcVar5 = (char *)thunk_FUN_0224e54c(&uStack_38,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar5 != '\0') {
    lVar8 = *(long *)PTR_DAT_049c56e8;
    lVar7 = *(long *)(lVar8 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar4 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_02229718(lVar7);
      lVar4 = *(long *)(lVar8 + 0x20);
      uVar2 = *(ushort *)(lVar4 + 0x135);
    }
    uVar1 = *(undefined4 *)(**(long **)(lVar7 + 0xc0) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_02229718(lVar4);
    }
    uVar6 = thunk_FUN_0224e54c(&uStack_38,
                               *(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80) + 0x20);
    func_0x04608620(&uStack_28,uVar6,uVar1);
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(0,uStack_28);
    }
    DailyRewards__ClaimReward_2517be4(*(long *)(param_1 + 0x40),uStack_28,0,0);
  }
  return;
}

