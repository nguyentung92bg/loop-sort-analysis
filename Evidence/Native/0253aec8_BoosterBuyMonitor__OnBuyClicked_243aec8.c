/* IL2CPP: BoosterBuyMonitor$$OnBuyClicked
void BoosterBuyMonitor__OnBuyClicked (BoosterBuyMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterBuyMonitor$$OnBuyClicked
   void BoosterBuyMonitor__OnBuyClicked (BoosterBuyMonitor_o* __this, const MethodInfo* method); */

void BoosterBuyMonitor__OnBuyClicked_243aec8(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_c0 [80];
  undefined1 auStack_70 [80];
  undefined4 uStack_14;
  
  if ((bRam0000000004f4b813 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c3cf0);
    FUN_021f03f8(PTR_DAT_049b6118);
    bRam0000000004f4b813 = 1;
  }
  lVar5 = *(long *)(param_1 + 0xa0);
  if (lVar5 != 0) {
    func_0x04608620(auStack_70,param_1 + 0xc0,0x50);
    uVar2 = EconomyModule__TryConsume_2533778(lVar5,auStack_70,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0xa8) != 0) {
        HapticModule__PlayWarning_25355b0(*(long *)(param_1 + 0xa8),0);
        if (*(long *)(param_1 + 0x30) != 0) {
          lVar5 = Monitors__Get_object__26889d0
                            (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c3cf0);
          if (*(long *)(param_1 + 0xb8) != 0) {
            plVar4 = *(long **)(*(long *)(*(long *)PTR_DAT_049b6118 + 0x20) + 0xc0);
            uVar1 = *(undefined4 *)(plVar4[1] + 0xfc);
            uVar3 = thunk_FUN_0224e54c(*(long *)(param_1 + 0xb8),*(undefined8 *)(*plVar4 + 0x80));
            func_0x04608620(&uStack_14,uVar3,uVar1);
            if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar3 = Extensions__ToInGamePurchasePlacement_24e5f54(uStack_14,0);
            if (lVar5 != 0) {
              ShopMonitor__ShowPopup_245c378(lVar5,uVar3,0);
              return;
            }
          }
        }
      }
    }
    else {
      lVar5 = *(long *)(param_1 + 0xa0);
      if (lVar5 != 0) {
        func_0x04608620(auStack_c0,param_1 + 0x110,0x50);
        EconomyModule__Add_25332a4(lVar5,auStack_c0,0);
        if (*(long *)(param_1 + 0xa8) != 0) {
          HapticModule__PlaySuccess_25354f4(*(long *)(param_1 + 0xa8),0);
          if (*(long *)(param_1 + 0x30) != 0) {
            Monitors__Deactivate_256e214(*(long *)(param_1 + 0x30),param_1,0,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

