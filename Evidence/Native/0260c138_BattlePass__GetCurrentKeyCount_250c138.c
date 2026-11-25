/* IL2CPP: BattlePass$$GetCurrentKeyCount
int32_t BattlePass__GetCurrentKeyCount (BattlePass_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass$$GetCurrentKeyCount
   int32_t BattlePass__GetCurrentKeyCount (BattlePass_o* __this, const MethodInfo* method); */

int BattlePass__GetCurrentKeyCount_250c138(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined4 uStack_14;
  
  if ((bRam0000000004f4bdcf & 1) == 0) {
                    /* try { // try from 0260c150 to 0270c153 has its CatchHandler @ 0260c750 */
    FUN_021f03f8(PTR_DAT_049c54e0);
                    /* try { // try from 0260c160 to 0270c173 has its CatchHandler @ 0260c790 */
    bRam0000000004f4bdcf = 1;
  }
  BattlePass__RefreshProgress_250bec8(param_1);
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 0260c174 to 0270c183 has its CatchHandler @ 0260c78c */
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
    uVar1 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0xa8,0);
    if (lVar3 != 0) {
                    /* try { // try from 0260c188 to 0270c193 has its CatchHandler @ 0260c788 */
                    /* try { // try from 0260c194 to 0270c1a7 has its CatchHandler @ 0260c784 */
      uStack_14 = uVar1;
      lVar3 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar3,&uStack_14,*(undefined8 *)PTR_DAT_049c54e0);
                    /* try { // try from 0260c1a8 to 0270c1bb has its CatchHandler @ 0260c780 */
      iVar2 = BattlePass__GetTotalKeyCount_250be90(param_1);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x28) <= iVar2) {
          iVar2 = *(int *)(lVar3 + 0x28);
        }
        return iVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

