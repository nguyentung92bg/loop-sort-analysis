/* IL2CPP: BattlePass$$RefreshProgress
void BattlePass__RefreshProgress (BattlePass_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass$$RefreshProgress
   void BattlePass__RefreshProgress (BattlePass_o* __this, const MethodInfo* method); */

void BattlePass__RefreshProgress_250bec8(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  uint uStack_44;
  
                    /* try { // try from 0260becc to 0270bed7 has its CatchHandler @ 0260c7b8 */
                    /* try { // try from 0260bed8 to 0270bef3 has its CatchHandler @ 0260c778 */
  if ((bRam0000000004f4bdd0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9120);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c54e0);
    bRam0000000004f4bdd0 = 1;
  }
                    /* try { // try from 0260bf18 to 0270bf1b has its CatchHandler @ 0260c730 */
  uVar8 = CloudPrefsInt__HasValue_24e9b24(param_1 + 0xa8,0);
  if ((uVar8 & 1) == 0) {
                    /* try { // try from 0260bf28 to 0270bf3b has its CatchHandler @ 0260c770 */
    BattlePass__MigrateLegacyProgress_250c1d0(param_1);
  }
  uVar4 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0xa8,0);
                    /* try { // try from 0260bf3c to 0270bf4b has its CatchHandler @ 0260c76c */
  lVar9 = BattlePass__GetLastProgressData_250c3c4(param_1);
  puVar2 = PTR_DAT_049c2cf0;
  if (lVar9 != 0) {
                    /* try { // try from 0260bf50 to 0270bf5b has its CatchHandler @ 0260c768 */
                    /* try { // try from 0260bf5c to 0270bf6f has its CatchHandler @ 0260c764 */
    plVar12 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar12[1] + 0xfc);
                    /* try { // try from 0260bf70 to 0270bf83 has its CatchHandler @ 0260c760 */
    uVar10 = thunk_FUN_0224e54c(lVar9,*(undefined8 *)(*plVar12 + 0x80));
    func_0x04608620(&uStack_44,uVar10,uVar1);
    if ((int)uStack_44 < (int)uVar4) {
      plVar12 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
                    /* try { // try from 0260bfa0 to 0270bfa3 has its CatchHandler @ 0260c72c */
                    /* try { // try from 0260bfa8 to 0270bfb3 has its CatchHandler @ 0260c75c */
      uVar1 = *(undefined4 *)(plVar12[1] + 0xfc);
      uVar10 = thunk_FUN_0224e54c(lVar9,*(undefined8 *)(*plVar12 + 0x80));
      func_0x04608620(&uStack_44,uVar10,uVar1);
      uVar4 = uStack_44;
    }
                    /* try { // try from 0260bfc8 to 0270c07b has its CatchHandler @ 0260c79c */
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0), lVar11 != 0)) {
      uStack_44 = uVar4;
      uVar8 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                        (lVar11,&uStack_44,*(undefined8 *)PTR_DAT_049c9120);
      if ((uVar8 & 1) == 0) {
        plVar12 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
        uVar1 = *(undefined4 *)(plVar12[1] + 0xfc);
        uVar10 = thunk_FUN_0224e54c(lVar9,*(undefined8 *)(*plVar12 + 0x80));
        func_0x04608620(&uStack_44,uVar10,uVar1);
        uVar4 = uStack_44;
      }
      puVar3 = PTR_DAT_049c54e0;
      iVar5 = BattlePass__GetTotalKeyCount_250be90(param_1);
      while( true ) {
        plVar12 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
        uVar1 = *(undefined4 *)(plVar12[1] + 0xfc);
        uVar10 = thunk_FUN_0224e54c(lVar9,*(undefined8 *)(*plVar12 + 0x80));
        func_0x04608620(&uStack_44,uVar10,uVar1);
        if ((int)uStack_44 <= (int)uVar4) break;
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0), lVar11 == 0)) goto LAB_0260c134;
                    /* try { // try from 0260c088 to 0270c10f has its CatchHandler @ 0260c7b8 */
        uStack_44 = uVar4;
        lVar11 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                           (lVar11,&uStack_44,*(undefined8 *)puVar3);
        if (lVar11 == 0) goto LAB_0260c134;
        if (iVar5 < *(int *)(lVar11 + 0x28)) break;
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 - *(int *)(lVar11 + 0x28);
      }
      uVar6 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0xa8,0);
      if (uVar6 != uVar4) {
        CloudPrefsInt__Set_24e9aa8(param_1 + 0xa8,uVar4,0);
      }
      iVar7 = BattlePass__GetTotalKeyCount_250be90(param_1);
      if (iVar5 != iVar7) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_0260c134;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0x28;
        uStack_7c = 0;
        uStack_84 = 0;
                    /* try { // try from 0260c110 to 0270c12b has its CatchHandler @ 0260c798 */
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_50 = 0;
        iStack_74 = iVar5;
        EconomyModule__Set_2524e30(*(long *)(param_1 + 0x18),&uStack_98,0);
      }
      return;
    }
  }
LAB_0260c134:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

