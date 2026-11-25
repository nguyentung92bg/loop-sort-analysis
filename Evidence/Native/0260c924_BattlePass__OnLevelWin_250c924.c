/* IL2CPP: BattlePass$$OnLevelWin
void BattlePass__OnLevelWin (BattlePass_o* __this, LevelWinMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass$$OnLevelWin
   void BattlePass__OnLevelWin (BattlePass_o* __this, LevelWinMessage_o m, const MethodInfo*
   method); */

void BattlePass__OnLevelWin_250c924(long param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uStack_28;
  
                    /* try { // try from 0260c92c to 0270c9ab has its CatchHandler @ 0260ccbc */
  if ((bRam0000000004f4bdd5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9128);
    FUN_021f03f8(PTR_DAT_049c2c78);
    bRam0000000004f4bdd5 = 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = LiveOpsModule__IsJoined_2546cc0(*(long *)(param_1 + 0x38),10,0);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = BattlePass__IsProgressComplete_250ca00(param_1), (uVar2 & 1) == 0)) {
      uVar4 = 0x11;
      if (param_2 == 1) {
        uVar4 = 0x12;
      }
      uVar1 = 0x13;
      if (param_2 != 2) {
        uVar1 = uVar4;
      }
                    /* try { // try from 0260c9b8 to 0270c9bf has its CatchHandler @ 0260ccac */
      if (((*(long *)(param_1 + 0x10) == 0) ||
          (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0xb8), lVar3 == 0)) ||
         (lVar3 = ConstantSheetBase_object___GetInt_281c070
                            (lVar3,uVar1,*(undefined8 *)PTR_DAT_049c9128), param_3 == 0))
      goto LAB_0260c9fc;
                    /* try { // try from 0260c9d4 to 0270c9d7 has its CatchHandler @ 0260cca8 */
                    /* try { // try from 0260c9d8 to 0270c9e7 has its CatchHandler @ 0260ccb4 */
      uStack_28 = lVar3 << 0x20 | 0x28;
      FUN_02333498(param_3,&uStack_28,*(undefined8 *)PTR_DAT_049c2c78);
    }
                    /* try { // try from 0260c9ec to 0270c9f7 has its CatchHandler @ 0260ccb0 */
    return;
  }
LAB_0260c9fc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

