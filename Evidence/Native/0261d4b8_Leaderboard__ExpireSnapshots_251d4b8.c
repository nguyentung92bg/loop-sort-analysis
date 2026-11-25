/* IL2CPP: Leaderboard$$ExpireSnapshots
void Leaderboard__ExpireSnapshots (Leaderboard_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$ExpireSnapshots
   void Leaderboard__ExpireSnapshots (Leaderboard_o* __this, const MethodInfo* method); */

void Leaderboard__ExpireSnapshots_251d4b8(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
                    /* try { // try from 0261d4c0 to 0271d4cb has its CatchHandler @ 0261d4f0 */
  if ((bRam0000000004f4be5e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9620);
                    /* try { // try from 0261d4e8 to 0271d4eb has its CatchHandler @ 0261d4f4 */
                    /* try { // try from 0261d4ec to 0271d4ef has its CatchHandler @ 0261d4f8 */
    FUN_021f03f8(PTR_DAT_049c9628);
                    /* catch() { ... } // from try @ 0261d4c0 with catch @ 0261d4f0 */
                    /* catch() { ... } // from try @ 0261d4e8 with catch @ 0261d4f4 */
                    /* catch() { ... } // from try @ 0261d4b0 with catch @ 0261d4f8
                       catch() { ... } // from try @ 0261d4ec with catch @ 0261d4f8 */
    FUN_021f03f8(PTR_DAT_049c9630);
    FUN_021f03f8(PTR_DAT_049c9638);
    FUN_021f03f8(PTR_DAT_049c9640);
                    /* try { // try from 0261d514 to 0271d527 has its CatchHandler @ 0261d678 */
    bRam0000000004f4be5e = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
                    /* try { // try from 0261d528 to 0271d52f has its CatchHandler @ 0261d674 */
                    /* try { // try from 0261d534 to 0271d53f has its CatchHandler @ 0261d66c */
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Values_282b2a4
                        (*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_049c9620),
     puVar5 = PTR_DAT_049c9638, puVar4 = PTR_DAT_049c9630, puVar3 = PTR_DAT_049c9628, lVar6 != 0)) {
                    /* try { // try from 0261d544 to 0271d54f has its CatchHandler @ 0261d668 */
                    /* try { // try from 0261d554 to 0271d55f has its CatchHandler @ 0261d678 */
                    /* try { // try from 0261d56c to 0271d56f has its CatchHandler @ 0261d664 */
    System_Collections_Generic_Dictionary_ValueCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_29facc8
              (lVar6,&uStack_48,*(undefined8 *)PTR_DAT_049c9640);
    while( true ) {
                    /* try { // try from 0261d57c to 0271d5ff has its CatchHandler @ 0261d67c */
      uVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_2851a64
                        (&uStack_48,*(undefined8 *)puVar4);
      if ((uVar7 & 1) == 0) {
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_2851a60
                  (&uStack_48,*(undefined8 *)puVar3);
        return;
      }
      lVar10 = *(long *)puVar5;
      lVar8 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      lVar6 = lVar8;
      if ((uVar2 & 1) == 0) {
        lVar6 = FUN_02229718();
        lVar8 = *(long *)(lVar10 + 0x20);
        uVar2 = *(ushort *)(lVar8 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
      }
      uVar9 = thunk_FUN_0224e54c(&uStack_48,
                                 *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_28,uVar9,uVar1);
      if (lStack_28 == 0) break;
                    /* try { // try from 0261d600 to 0271d637 has its CatchHandler @ 0261d448 */
      UniTimer__Expire_3f0f24c(lStack_28 + 0x10,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

