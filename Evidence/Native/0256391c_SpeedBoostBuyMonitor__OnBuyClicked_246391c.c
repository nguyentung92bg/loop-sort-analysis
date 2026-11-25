/* IL2CPP: SpeedBoostBuyMonitor$$OnBuyClicked
void SpeedBoostBuyMonitor__OnBuyClicked (SpeedBoostBuyMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SpeedBoostBuyMonitor$$OnBuyClicked
   void SpeedBoostBuyMonitor__OnBuyClicked (SpeedBoostBuyMonitor_o* __this, const MethodInfo*
   method); */

void SpeedBoostBuyMonitor__OnBuyClicked_246391c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_c0 [80];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c5100;
  if ((bRam0000000004f4b95b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3cf0);
    FUN_021f03f8(PTR_DAT_049c5100);
    bRam0000000004f4b95b = 1;
  }
  uStack_70 = *(undefined8 *)puVar1;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_68 = 0;
  thunk_FUN_021f190c(&uStack_70);
  uStack_60 = CONCAT44(uStack_60._4_4_,1);
  if (*(long *)(param_1 + 0xb8) != 0) {
    lVar3 = *(long *)(param_1 + 0x98);
    uStack_50 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x30),(undefined4)uStack_50);
    if (lVar3 != 0) {
      func_0x04608620(auStack_c0,&uStack_70,0x50);
      uVar2 = EconomyModule__TryConsume_2533778(lVar3,auStack_c0,0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_1 + 0xa0) != 0) {
          HapticModule__PlayWarning_25355b0(*(long *)(param_1 + 0xa0),0);
          if ((*(long *)(param_1 + 0x30) != 0) &&
             (lVar3 = Monitors__Get_object__26889d0
                                (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c3cf0),
             lVar3 != 0)) {
            ShopMonitor__ShowPopup_245c378(lVar3,*(undefined8 *)puVar1);
            return;
          }
        }
      }
      else if (*(long *)(param_1 + 0xb8) != 0) {
        SpeedBoostBuyMonitor__Complete_2463a24
                  (param_1,*(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x2c));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

