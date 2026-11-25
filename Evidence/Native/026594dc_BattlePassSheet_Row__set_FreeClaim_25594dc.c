/* IL2CPP: BattlePassSheet.Row$$set_FreeClaim
void BattlePassSheet_Row__set_FreeClaim (BattlePassSheet_Row_o* __this, CloudPrefsBool_o value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSheet.Row$$set_FreeClaim
   void BattlePassSheet_Row__set_FreeClaim (BattlePassSheet_Row_o* __this, CloudPrefsBool_o value,
   const MethodInfo* method); */

void BattlePassSheet_Row__set_FreeClaim_25594dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
                    /* catch() { ... } // from try @ 02658e4c with catch @ 026594e0 */
                    /* catch() { ... } // from try @ 0265906c with catch @ 026594e4
                       catch() { ... } // from try @ 026593b0 with catch @ 026594e4 */
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x48U >> 0xc & 0x3f),
                 (param_1 + 0x48U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

