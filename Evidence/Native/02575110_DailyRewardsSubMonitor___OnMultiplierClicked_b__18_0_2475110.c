/* IL2CPP: DailyRewardsSubMonitor$$<OnMultiplierClicked>b__18_0
void DailyRewardsSubMonitor___OnMultiplierClicked_b__18_0 (DailyRewardsSubMonitor_o* __this, bool watched, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewardsSubMonitor$$<OnMultiplierClicked>b__18_0
   void DailyRewardsSubMonitor___OnMultiplierClicked_b__18_0 (DailyRewardsSubMonitor_o* __this, bool
   watched, const MethodInfo* method); */

void DailyRewardsSubMonitor___OnMultiplierClicked_b__18_0_2475110(long param_1,ulong param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b9c7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5478);
    FUN_021f03f8(PTR_DAT_049c56e8);
    FUN_021f03f8(PTR_DAT_049c56e0);
    bRam0000000004f4b9c7 = 1;
  }
  if ((param_2 & 1) != 0) {
    lVar3 = *(long *)(*(long *)PTR_DAT_049c56e0 + 0x20);
    uStack_38 = *(undefined8 *)(param_1 + 0x78);
    uStack_30 = *(undefined4 *)(param_1 + 0x80);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    pcVar4 = (char *)thunk_FUN_0224e54c(&uStack_38,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80));
    if (*pcVar4 != '\0') {
      lVar7 = *(long *)PTR_DAT_049c56e8;
      lVar6 = *(long *)(lVar7 + 0x20);
      uVar2 = *(ushort *)(lVar6 + 0x135);
      lVar3 = lVar6;
      if ((uVar2 & 1) == 0) {
        lVar6 = FUN_02229718(lVar6);
        lVar3 = *(long *)(lVar7 + 0x20);
        uVar2 = *(ushort *)(lVar3 + 0x135);
      }
      uVar1 = *(undefined4 *)(**(long **)(lVar6 + 0xc0) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar3 = FUN_02229718(lVar3);
      }
      uVar5 = thunk_FUN_0224e54c(&uStack_38,
                                 *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x80) + 0x20);
      func_0x04608620(&uStack_28,uVar5,uVar1);
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      if (*(long *)(param_1 + 0x40) != 0) {
        DailyRewards__ClaimReward_2517be4(*(long *)(param_1 + 0x40),uStack_28,1,0);
        if (*(long *)(param_1 + 0x28) != 0) {
          Monitors__Deactivate_object__2688964
                    (*(long *)(param_1 + 0x28),0,*(undefined8 *)PTR_DAT_049c5478);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return;
}

