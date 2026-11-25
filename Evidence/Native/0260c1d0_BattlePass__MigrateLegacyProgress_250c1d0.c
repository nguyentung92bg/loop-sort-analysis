/* IL2CPP: BattlePass$$MigrateLegacyProgress
void BattlePass__MigrateLegacyProgress (BattlePass_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass$$MigrateLegacyProgress
   void BattlePass__MigrateLegacyProgress (BattlePass_o* __this, const MethodInfo* method); */

void BattlePass__MigrateLegacyProgress_250c1d0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_44;
  
                    /* try { // try from 0260c1d8 to 0270c1db has its CatchHandler @ 0260c74c */
                    /* try { // try from 0260c1e0 to 0270c1eb has its CatchHandler @ 0260c77c */
  if ((bRam0000000004f4bdd1 & 1) == 0) {
                    /* try { // try from 0260c200 to 0270c2b3 has its CatchHandler @ 0260c7ac */
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c54e0);
    bRam0000000004f4bdd1 = 1;
  }
  iVar4 = BattlePass__GetTotalKeyCount_250be90(param_1);
  lVar6 = BattlePass__GetLastProgressData_250c3c4(param_1);
  puVar3 = PTR_DAT_049c54e0;
  puVar2 = PTR_DAT_049c2cf0;
  if (lVar6 != 0) {
    iVar11 = 0;
    iVar10 = iVar4;
    while( true ) {
      plVar9 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
      uVar1 = *(undefined4 *)(plVar9[1] + 0xfc);
      uVar7 = thunk_FUN_0224e54c(lVar6,*(undefined8 *)(*plVar9 + 0x80));
      func_0x04608620(&iStack_44,uVar7,uVar1);
      if (iStack_44 <= iVar11) break;
      if (((*(long *)(param_1 + 0x10) == 0) ||
          (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0), lVar8 == 0)) ||
         (iStack_44 = iVar11,
         lVar8 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                           (lVar8,&iStack_44,*(undefined8 *)puVar3), lVar8 == 0)) goto LAB_0260c3c0;
      if (iVar10 < *(int *)(lVar8 + 0x28)) break;
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 - *(int *)(lVar8 + 0x28);
                    /* try { // try from 0260c2c0 to 0270c347 has its CatchHandler @ 0260c7b8 */
    }
    iVar5 = BattlePass__GetHighestClaimedId_250c45c(param_1);
    plVar9 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar9[1] + 0xfc);
    uVar7 = thunk_FUN_0224e54c(lVar6,*(undefined8 *)(*plVar9 + 0x80));
    func_0x04608620(&iStack_44,uVar7,uVar1);
    if (iVar5 < iStack_44) {
      if (iVar11 <= iVar5) {
        iVar10 = 0;
        iVar11 = iVar5 + 1;
      }
    }
    else {
      plVar9 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
      uVar1 = *(undefined4 *)(plVar9[1] + 0xfc);
      uVar7 = thunk_FUN_0224e54c(lVar6,*(undefined8 *)(*plVar9 + 0x80));
      func_0x04608620(&iStack_44,uVar7,uVar1);
      iVar10 = *(int *)(lVar6 + 0x28);
      iVar11 = iStack_44;
    }
                    /* try { // try from 0260c354 to 0270c36b has its CatchHandler @ 0260c7b4 */
    CloudPrefsInt__Set_24e9aa8(param_1 + 0xa8,iVar11,0);
    if (iVar10 != iVar4) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_0260c3c0;
                    /* try { // try from 0260c374 to 0270c38b has its CatchHandler @ 0260c7b0 */
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0x28;
      uStack_84 = 0;
                    /* try { // try from 0260c38c to 0270c3c7 has its CatchHandler @ 0260bcbc */
      uStack_8c = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      uStack_58 = 0;
      iStack_7c = iVar10;
      EconomyModule__Set_2524e30(*(long *)(param_1 + 0x18),&uStack_a0,0);
    }
    return;
  }
LAB_0260c3c0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

