/* IL2CPP: RefillLivesMonitor$$OnGoldClicked
void RefillLivesMonitor__OnGoldClicked (RefillLivesMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RefillLivesMonitor$$OnGoldClicked
   void RefillLivesMonitor__OnGoldClicked (RefillLivesMonitor_o* __this, const MethodInfo* method);
    */

void RefillLivesMonitor__OnGoldClicked_245c26c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_70 [80];
  
  if ((bRam0000000004f4b919 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3cf0);
    FUN_021f03f8(PTR_DAT_049c4d10);
    bRam0000000004f4b919 = 1;
  }
  lVar2 = *(long *)(param_1 + 0xa0);
  if (lVar2 != 0) {
    func_0x04608620(auStack_70,param_1 + 0xe0,0x50);
    uVar1 = EconomyModule__TryConsume_2533778(lVar2,auStack_70,0);
    lVar2 = *(long *)(param_1 + 0xa8);
    if ((uVar1 & 1) == 0) {
      if (lVar2 != 0) {
        HapticModule__PlayWarning_25355b0(lVar2,0);
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (lVar2 = Monitors__Get_object__26889d0
                              (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c3cf0),
           lVar2 != 0)) {
          ShopMonitor__ShowPopup_245c378(lVar2,*(undefined8 *)PTR_DAT_049c4d10);
          return;
        }
      }
    }
    else if (lVar2 != 0) {
      HapticModule__PlaySuccess_25354f4(lVar2,0);
      if (*(long *)(param_1 + 0x98) != 0) {
        LifeModule__RefillLife_25463c4(*(long *)(param_1 + 0x98),0);
        lVar2 = *(long *)(param_1 + 200);
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        }
        if (*(long *)(param_1 + 0x30) != 0) {
          Monitors__Deactivate_256e214(*(long *)(param_1 + 0x30),param_1,0,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

