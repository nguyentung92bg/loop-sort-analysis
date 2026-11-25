/* IL2CPP: BattlePassSubMonitor.<>c__DisplayClass22_0$$<CreateProgressElement>b__1
void BattlePassSubMonitor___c__DisplayClass22_0___CreateProgressElement_b__1 (BattlePassSubMonitor___c__DisplayClass22_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSubMonitor.<>c__DisplayClass22_0$$<CreateProgressElement>b__1
   void BattlePassSubMonitor___c__DisplayClass22_0___CreateProgressElement_b__1
   (BattlePassSubMonitor___c__DisplayClass22_0_o* __this, const MethodInfo* method); */

void BattlePassSubMonitor___c__DisplayClass22_0___CreateProgressElement_b__1_246f800(long param_1)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    uStack_28 = *(undefined8 *)(lVar1 + 0x68);
    uStack_30 = *(undefined8 *)(lVar1 + 0x60);
    uStack_18 = *(undefined8 *)(lVar1 + 0x78);
    uStack_20 = *(undefined8 *)(lVar1 + 0x70);
    BattlePassSubMonitor__OnProgressClaimClicked_246e978
              (*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x30),&uStack_30,
               *(undefined8 *)(lVar1 + 0x38),*(undefined4 *)(param_1 + 0x28),1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

