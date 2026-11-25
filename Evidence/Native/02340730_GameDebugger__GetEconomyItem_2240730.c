/* IL2CPP: GameDebugger$$GetEconomyItem
System_String_o* GameDebugger__GetEconomyItem (GameDebugger_o* __this, int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameDebugger$$GetEconomyItem
   System_String_o* GameDebugger__GetEconomyItem (GameDebugger_o* __this, int32_t item, const
   MethodInfo* method); */

void GameDebugger__GetEconomyItem_2240730(long param_1,undefined8 param_2)

{
  undefined4 uStack_4;
  
  uStack_4 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uStack_4 = EconomyModule__GetAmount_2523ed0(*(long *)(param_1 + 0x18),param_2,0);
    System_Int32__ToString_30fbaa0(&uStack_4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

