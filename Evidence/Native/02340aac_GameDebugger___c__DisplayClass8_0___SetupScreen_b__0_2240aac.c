/* IL2CPP: GameDebugger.<>c__DisplayClass8_0$$<SetupScreen>b__0
void GameDebugger___c__DisplayClass8_0___SetupScreen_b__0 (GameDebugger___c__DisplayClass8_0_o* __this, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameDebugger.<>c__DisplayClass8_0$$<SetupScreen>b__0
   void GameDebugger___c__DisplayClass8_0___SetupScreen_b__0 (GameDebugger___c__DisplayClass8_0_o*
   __this, int32_t value, const MethodInfo* method); */

void GameDebugger___c__DisplayClass8_0___SetupScreen_b__0_2240aac(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02340a10 with catch @ 02340ac8
                       catch() { ... } // from try @ 02340aa8 with catch @ 02340ac8 */
    FUN_021f06a0();
  }
                    /* try { // try from 02340ab4 to 02440b07 has its CatchHandler @ 023409d0 */
  uStack_50 = *(undefined4 *)(param_1 + 0x10);
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
  if (lVar1 != 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_44 = 0;
    uStack_4c = 0;
    uStack_30 = 0;
    uStack_38 = 0;
    uStack_20 = 0;
    uStack_28 = 0;
    uStack_18 = 0;
    uStack_3c = param_2;
    EconomyModule__Set_2524e30(lVar1,&uStack_60,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

