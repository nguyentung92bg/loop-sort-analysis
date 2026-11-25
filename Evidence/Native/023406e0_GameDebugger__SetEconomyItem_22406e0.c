/* IL2CPP: GameDebugger$$SetEconomyItem
void GameDebugger__SetEconomyItem (GameDebugger_o* __this, int32_t item, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameDebugger$$SetEconomyItem
   void GameDebugger__SetEconomyItem (GameDebugger_o* __this, int32_t item, int32_t value, const
   MethodInfo* method); */

void GameDebugger__SetEconomyItem_22406e0(long param_1,undefined4 param_2,undefined4 param_3)

{
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
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_44 = 0;
    uStack_4c = 0;
    uStack_30 = 0;
    uStack_38 = 0;
    uStack_20 = 0;
    uStack_28 = 0;
    uStack_18 = 0;
    uStack_50 = param_2;
    uStack_3c = param_3;
    EconomyModule__Set_2524e30(*(long *)(param_1 + 0x18),&uStack_60,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

