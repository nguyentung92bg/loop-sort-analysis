/* IL2CPP: BattlePass$$IsProgressComplete
bool BattlePass__IsProgressComplete (BattlePass_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass$$IsProgressComplete
   bool BattlePass__IsProgressComplete (BattlePass_o* __this, const MethodInfo* method); */

bool BattlePass__IsProgressComplete_250ca00(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  int iStack_38;
  int iStack_34;
  
                    /* try { // try from 0260ca0c to 0270cab7 has its CatchHandler @ 0260ccc0 */
  if ((bRam0000000004f4bdd7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2cf0);
    bRam0000000004f4bdd7 = 1;
  }
  lVar5 = BattlePass__GetLastProgressData_250c3c4(param_1);
  lVar6 = BattlePass__GetCurrentLevelData_250be14(param_1);
  puVar2 = PTR_DAT_049c2cf0;
  if (lVar5 != 0) {
    plVar8 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar8[1] + 0xfc);
    uVar7 = thunk_FUN_0224e54c(lVar5,*(undefined8 *)(*plVar8 + 0x80));
    func_0x04608620(&iStack_38,uVar7,uVar1);
    if (lVar6 != 0) {
      plVar8 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
      uVar1 = *(undefined4 *)(plVar8[1] + 0xfc);
      uVar7 = thunk_FUN_0224e54c(lVar6,*(undefined8 *)(*plVar8 + 0x80));
      func_0x04608620(&iStack_34,uVar7,uVar1);
                    /* try { // try from 0260cac8 to 0270cad3 has its CatchHandler @ 0260cc9c */
      if (iStack_34 < iStack_38) {
        bVar3 = false;
      }
      else {
                    /* try { // try from 0260cad8 to 0270cae7 has its CatchHandler @ 0260cc98 */
        iVar4 = BattlePass__GetCurrentKeyCount_250c138(param_1);
        bVar3 = *(int *)(lVar5 + 0x28) <= iVar4;
      }
                    /* try { // try from 0260caec to 0270caf3 has its CatchHandler @ 0260cc90 */
                    /* try { // try from 0260caf4 to 0270caff has its CatchHandler @ 0260cc8c */
      return bVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

