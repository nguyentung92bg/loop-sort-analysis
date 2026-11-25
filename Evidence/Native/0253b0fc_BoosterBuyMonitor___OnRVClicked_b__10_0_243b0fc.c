/* IL2CPP: BoosterBuyMonitor$$<OnRVClicked>b__10_0
void BoosterBuyMonitor___OnRVClicked_b__10_0 (BoosterBuyMonitor_o* __this, bool watched, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterBuyMonitor$$<OnRVClicked>b__10_0
   void BoosterBuyMonitor___OnRVClicked_b__10_0 (BoosterBuyMonitor_o* __this, bool watched, const
   MethodInfo* method); */

void BoosterBuyMonitor___OnRVClicked_b__10_0_243b0fc(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4b815 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ce8);
    bRam0000000004f4b815 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((param_2 & 1) == 0) {
LAB_0253b220:
    if (*(long *)(lVar1 + 0x28) == lStack_38) {
      return;
    }
  }
  else {
    uStack_48 = *(undefined8 *)(param_1 + 0x118);
    uStack_50 = *(undefined8 *)(param_1 + 0x110);
    uStack_40 = *(undefined4 *)(param_1 + 0x120);
    uStack_88 = *(undefined8 *)(param_1 + 0x134);
    uStack_90 = *(undefined8 *)(param_1 + 300);
    uStack_78 = *(undefined8 *)(param_1 + 0x144);
    uStack_80 = *(undefined8 *)(param_1 + 0x13c);
    uStack_60 = *(undefined4 *)(param_1 + 0x15c);
    uStack_68 = *(undefined8 *)(param_1 + 0x154);
    uStack_70 = *(undefined8 *)(param_1 + 0x14c);
    uStack_a0 = 0;
    uStack_94 = 0x65;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_a0,&uStack_94,*(undefined8 *)PTR_DAT_049c2ce8);
    if (*(long *)(param_1 + 0xa0) != 0) {
      uStack_e8 = uStack_48;
      uStack_f0 = uStack_50;
      uStack_e0 = uStack_40;
      uStack_dc = uStack_a0;
      uStack_cc = uStack_88;
      uStack_d4 = uStack_90;
      uStack_bc = uStack_78;
      uStack_c4 = uStack_80;
      uStack_ac = uStack_68;
      uStack_b4 = uStack_70;
      uStack_a4 = uStack_60;
      EconomyModule__Add_25332a4(*(long *)(param_1 + 0xa0),&uStack_f0,0);
      if (*(long *)(param_1 + 0xa8) != 0) {
        HapticModule__PlaySuccess_25354f4(*(long *)(param_1 + 0xa8),0);
        if (*(long *)(param_1 + 0x30) != 0) {
          Monitors__Deactivate_256e214(*(long *)(param_1 + 0x30),param_1,0,0);
          goto LAB_0253b220;
        }
      }
    }
    if (*(long *)(lVar1 + 0x28) == lStack_38) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

