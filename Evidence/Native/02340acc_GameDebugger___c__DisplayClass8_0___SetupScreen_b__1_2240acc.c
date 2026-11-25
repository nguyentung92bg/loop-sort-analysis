/* IL2CPP: GameDebugger.<>c__DisplayClass8_0$$<SetupScreen>b__1
System_String_o* GameDebugger___c__DisplayClass8_0___SetupScreen_b__1 (GameDebugger___c__DisplayClass8_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameDebugger.<>c__DisplayClass8_0$$<SetupScreen>b__1
   System_String_o* GameDebugger___c__DisplayClass8_0___SetupScreen_b__1
   (GameDebugger___c__DisplayClass8_0_o* __this, const MethodInfo* method); */

void GameDebugger___c__DisplayClass8_0___SetupScreen_b__1_2240acc(long param_1)

{
  long lVar1;
  undefined4 uStack_4;
  
                    /* catch() { ... } // from try @ 023409f4 with catch @ 02340acc */
                    /* catch() { ... } // from try @ 02340a8c with catch @ 02340ad0 */
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* catch() { ... } // from try @ 02340a40 with catch @ 02340ad4 */
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
  uStack_4 = 0;
                    /* catch() { ... } // from try @ 02340a64 with catch @ 02340adc */
  if (lVar1 != 0) {
    uStack_4 = EconomyModule__GetAmount_2523ed0(lVar1,*(undefined4 *)(param_1 + 0x10),0);
    System_Int32__ToString_30fbaa0(&uStack_4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0(0,*(undefined4 *)(param_1 + 0x10));
}

