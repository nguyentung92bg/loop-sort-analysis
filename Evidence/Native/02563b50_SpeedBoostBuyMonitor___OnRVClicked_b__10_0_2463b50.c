/* IL2CPP: SpeedBoostBuyMonitor$$<OnRVClicked>b__10_0
void SpeedBoostBuyMonitor___OnRVClicked_b__10_0 (SpeedBoostBuyMonitor_o* __this, bool watched, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SpeedBoostBuyMonitor$$<OnRVClicked>b__10_0
   void SpeedBoostBuyMonitor___OnRVClicked_b__10_0 (SpeedBoostBuyMonitor_o* __this, bool watched,
   const MethodInfo* method); */

void SpeedBoostBuyMonitor___OnRVClicked_b__10_0_2463b50(long param_1,ulong param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uStack_24;
  
  if ((param_2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x28);
    lVar2 = *(long *)(param_1 + 0xc0);
    if (lVar2 == 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
    thunk_FUN_021f190c((long *)(param_1 + 0xc0),0);
    uStack_24 = uVar1;
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),&uStack_24,*(undefined8 *)(lVar2 + 0x28));
    if (*(long *)(param_1 + 0xa0) != 0) {
      HapticModule__PlaySuccess_25354f4(*(long *)(param_1 + 0xa0),0);
      if (*(long *)(param_1 + 0x30) != 0) {
        Monitors__Deactivate_256e214(*(long *)(param_1 + 0x30),param_1,0,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

