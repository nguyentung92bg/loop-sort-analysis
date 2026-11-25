/* IL2CPP: BattlePass$$GetCurrentLevelData
BattlePassSheet_Row_o* BattlePass__GetCurrentLevelData (BattlePass_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass$$GetCurrentLevelData
   BattlePassSheet_Row_o* BattlePass__GetCurrentLevelData (BattlePass_o* __this, const MethodInfo*
   method); */

void BattlePass__GetCurrentLevelData_250be14(long param_1)

{
  long lVar1;
  undefined4 uStack_14;
  
                    /* try { // try from 0260be1c to 0270be1f has its CatchHandler @ 0260c728 */
                    /* try { // try from 0260be20 to 0270be2f has its CatchHandler @ 0260c754 */
  if ((bRam0000000004f4bdce & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c54e0);
    bRam0000000004f4bdce = 1;
  }
                    /* try { // try from 0260be44 to 0270be47 has its CatchHandler @ 0260c714 */
  BattlePass__RefreshProgress_250bec8(param_1);
                    /* try { // try from 0260be48 to 0270be57 has its CatchHandler @ 0260c748 */
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
    uStack_14 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0xa8,0);
    if (lVar1 != 0) {
                    /* try { // try from 0260be64 to 0270be6b has its CatchHandler @ 0260c744 */
                    /* try { // try from 0260be7c to 0270be93 has its CatchHandler @ 0260c740 */
      Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                (lVar1,&uStack_14,*(undefined8 *)PTR_DAT_049c54e0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

