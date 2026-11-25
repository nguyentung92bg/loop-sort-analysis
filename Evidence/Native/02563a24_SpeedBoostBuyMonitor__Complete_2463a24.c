/* IL2CPP: SpeedBoostBuyMonitor$$Complete
void SpeedBoostBuyMonitor__Complete (SpeedBoostBuyMonitor_o* __this, int32_t seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SpeedBoostBuyMonitor$$Complete
   void SpeedBoostBuyMonitor__Complete (SpeedBoostBuyMonitor_o* __this, int32_t seconds, const
   MethodInfo* method); */

void SpeedBoostBuyMonitor__Complete_2463a24(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uStack_24;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  if (lVar1 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  thunk_FUN_021f190c((long *)(param_1 + 0xc0),0);
  uStack_24 = param_2;
  (**(code **)(lVar1 + 0x18))
            (*(undefined8 *)(lVar1 + 0x40),&uStack_24,*(undefined8 *)(lVar1 + 0x28));
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

