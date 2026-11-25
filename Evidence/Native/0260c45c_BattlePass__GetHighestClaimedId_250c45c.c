/* IL2CPP: BattlePass$$GetHighestClaimedId
int32_t BattlePass__GetHighestClaimedId (BattlePass_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass$$GetHighestClaimedId
   int32_t BattlePass__GetHighestClaimedId (BattlePass_o* __this, const MethodInfo* method); */

int BattlePass__GetHighestClaimedId_250c45c(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [16];
  int iStack_44;
  
                    /* try { // try from 0260c478 to 0270c48b has its CatchHandler @ 0260c710 */
  if ((bRam0000000004f4bdd2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c90f8);
                    /* try { // try from 0260c494 to 0270c4a7 has its CatchHandler @ 0260c70c */
    FUN_021f03f8(PTR_DAT_049c9100);
    FUN_021f03f8(PTR_DAT_049c9108);
    FUN_021f03f8(PTR_DAT_049c2cf0);
                    /* try { // try from 0260c4b0 to 0270c4c3 has its CatchHandler @ 0260c708 */
    FUN_021f03f8(PTR_DAT_049c9110);
    bRam0000000004f4bdd2 = 1;
  }
                    /* try { // try from 0260c4c4 to 0270c4df has its CatchHandler @ 0260c6f4 */
  puVar5 = PTR_DAT_049c9108;
  puVar4 = PTR_DAT_049c9100;
  puVar3 = PTR_DAT_049c90f8;
  puVar2 = PTR_DAT_049c2cf0;
  auStack_58._0_8_ = 0;
  auStack_58._8_8_ = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 0260c500 to 0270c503 has its CatchHandler @ 0260c6b4 */
  auStack_58 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                         (lVar6,*(undefined8 *)PTR_DAT_049c9110);
                    /* try { // try from 0260c510 to 0270c523 has its CatchHandler @ 0260c6f0 */
  iVar10 = -1;
LAB_0260c520:
                    /* try { // try from 0260c524 to 0270c533 has its CatchHandler @ 0260c6ec */
  uVar7 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                    (auStack_58,*(undefined8 *)puVar4);
  if ((uVar7 & 1) == 0) {
    Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
              (auStack_58,*(undefined8 *)puVar3);
                    /* try { // try from 0260c5fc to 0270c5ff has its CatchHandler @ 0260c6b0 */
                    /* try { // try from 0260c604 to 0270c60f has its CatchHandler @ 0260c6c4 */
    return iVar10;
  }
                    /* try { // try from 0260c538 to 0270c543 has its CatchHandler @ 0260c6e8 */
  lVar6 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                    (auStack_58,*(undefined8 *)puVar5);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 0260c544 to 0270c557 has its CatchHandler @ 0260c6e4 */
  uStack_78 = *(undefined8 *)(lVar6 + 0x48);
  uStack_80 = *(undefined8 *)(lVar6 + 0x40);
  uStack_68 = *(undefined8 *)(lVar6 + 0x58);
  uStack_70 = *(undefined8 *)(lVar6 + 0x50);
  uVar7 = CloudPrefsBool__get_Value_24eb0d0(&uStack_80,0);
                    /* try { // try from 0260c558 to 0270c56b has its CatchHandler @ 0260c6e0 */
  if ((uVar7 & 1) == 0) goto code_r0x0260c55c;
  goto LAB_0260c574;
code_r0x0260c55c:
  uStack_78 = *(undefined8 *)(lVar6 + 0x68);
  uStack_80 = *(undefined8 *)(lVar6 + 0x60);
  uStack_68 = *(undefined8 *)(lVar6 + 0x78);
  uStack_70 = *(undefined8 *)(lVar6 + 0x70);
                    /* try { // try from 0260c56c to 0270c587 has its CatchHandler @ 0260c6dc */
  uVar7 = CloudPrefsBool__get_Value_24eb0d0(&uStack_80,0);
  if ((uVar7 & 1) != 0) {
LAB_0260c574:
    plVar9 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar9[1] + 0xfc);
                    /* try { // try from 0260c590 to 0270c597 has its CatchHandler @ 0260c6d8 */
    uVar8 = thunk_FUN_0224e54c(lVar6,*(undefined8 *)(*plVar9 + 0x80));
                    /* try { // try from 0260c598 to 0270c5a7 has its CatchHandler @ 0260c6d4 */
    func_0x04608620(&iStack_44,uVar8,uVar1);
                    /* try { // try from 0260c5ac to 0270c5b7 has its CatchHandler @ 0260c6d0 */
    if (iVar10 < iStack_44) {
                    /* try { // try from 0260c5b8 to 0270c5cb has its CatchHandler @ 0260c6cc */
      plVar9 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
      uVar1 = *(undefined4 *)(plVar9[1] + 0xfc);
                    /* try { // try from 0260c5cc to 0270c5df has its CatchHandler @ 0260c6c8 */
      uVar8 = thunk_FUN_0224e54c(lVar6,*(undefined8 *)(*plVar9 + 0x80));
      func_0x04608620(&iStack_44,uVar8,uVar1);
      iVar10 = iStack_44;
    }
  }
  goto LAB_0260c520;
}

