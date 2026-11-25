/* IL2CPP: PiggyBank$$IsFull
bool PiggyBank__IsFull (PiggyBank_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PiggyBank$$IsFull
   bool PiggyBank__IsFull (PiggyBank_o* __this, const MethodInfo* method); */

bool PiggyBank__IsFull_2523e4c(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 02623de4 with catch @ 02623e4c */
                    /* catch() { ... } // from try @ 02623b68 with catch @ 02623e50 */
                    /* catch() { ... } // from try @ 02623b88 with catch @ 02623e54 */
  if ((bRam0000000004f4be8a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4228);
                    /* try { // try from 02623e70 to 02723e73 has its CatchHandler @ 02623e8c */
                    /* try { // try from 02623e74 to 02723e8f has its CatchHandler @ 02623a48 */
    bRam0000000004f4be8a = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = EconomyModule__GetAmount_2523ed0(*(long *)(param_1 + 0x20),4);
                    /* catch() { ... } // from try @ 02623e70 with catch @ 02623e8c */
    if (*(long *)(param_1 + 0x18) != 0) {
                    /* try { // try from 02623e90 to 02723e97 has its CatchHandler @ 02623ea0 */
      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x30);
                    /* try { // try from 02623e98 to 02723ea3 has its CatchHandler @ 02623a48 */
      if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 02623e90 with catch @ 02623ea0 */
        iVar2 = ConstantSheetBase_object___GetInt_281c070(lVar3,10,*(undefined8 *)PTR_DAT_049c4228);
        return iVar2 <= iVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

