/* IL2CPP: BattlePass$$GetLastProgressData
BattlePassSheet_Row_o* BattlePass__GetLastProgressData (BattlePass_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass$$GetLastProgressData
   BattlePassSheet_Row_o* BattlePass__GetLastProgressData (BattlePass_o* __this, const MethodInfo*
   method); */

void BattlePass__GetLastProgressData_250c3c4(long param_1)

{
  long lVar1;
  int iStack_14;
  
                    /* try { // try from 0260c3c8 to 0270c3d3 has its CatchHandler @ 0260c738 */
  if ((bRam0000000004f4bdd3 & 1) == 0) {
                    /* try { // try from 0260c3e0 to 0270c3ef has its CatchHandler @ 0260c734 */
    FUN_021f03f8(PTR_DAT_049c54c8);
    FUN_021f03f8(PTR_DAT_049c54e0);
    bRam0000000004f4bdd3 = 1;
  }
                    /* try { // try from 0260c404 to 0270c40f has its CatchHandler @ 0260c71c */
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0), lVar1 != 0)) {
    iStack_14 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                          (lVar1,*(undefined8 *)PTR_DAT_049c54c8);
                    /* try { // try from 0260c41c to 0270c42b has its CatchHandler @ 0260c718 */
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
      if (lVar1 != 0) {
        iStack_14 = iStack_14 + -1;
                    /* try { // try from 0260c438 to 0270c44f has its CatchHandler @ 0260c724 */
        Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                  (lVar1,&iStack_14,*(undefined8 *)PTR_DAT_049c54e0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0260c458 to 0270c46f has its CatchHandler @ 0260c720 */
  FUN_021f06a0();
}

