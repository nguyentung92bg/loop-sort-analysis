/* IL2CPP: BattlePassSubMonitor.<>c__DisplayClass22_0$$<CreateProgressElement>b__0
void BattlePassSubMonitor___c__DisplayClass22_0___CreateProgressElement_b__0 (BattlePassSubMonitor___c__DisplayClass22_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSubMonitor.<>c__DisplayClass22_0$$<CreateProgressElement>b__0
   void BattlePassSubMonitor___c__DisplayClass22_0___CreateProgressElement_b__0
   (BattlePassSubMonitor___c__DisplayClass22_0_o* __this, const MethodInfo* method); */

void BattlePassSubMonitor___c__DisplayClass22_0___CreateProgressElement_b__0_246f7b4(long param_1)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    uStack_28 = *(undefined8 *)(lVar1 + 0x48);
    uStack_30 = *(undefined8 *)(lVar1 + 0x40);
    uStack_18 = *(undefined8 *)(lVar1 + 0x58);
    uStack_20 = *(undefined8 *)(lVar1 + 0x50);
    BattlePassSubMonitor__OnProgressClaimClicked_246e978
              (*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),&uStack_30,
               *(undefined8 *)(lVar1 + 0x30),*(undefined4 *)(param_1 + 0x28),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

