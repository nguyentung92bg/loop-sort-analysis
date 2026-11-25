/* IL2CPP: LavaQuest$$IsStreakTournamentWindow
bool LavaQuest__IsStreakTournamentWindow (LavaQuest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest$$IsStreakTournamentWindow
   bool LavaQuest__IsStreakTournamentWindow (LavaQuest_o* __this, const MethodInfo* method); */

uint LavaQuest__IsStreakTournamentWindow_251a6e4(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_38 [16];
  undefined4 uStack_24;
  
  if ((bRam0000000004f4be3a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049c2f60);
                    /* try { // try from 0261a71c to 0271a723 has its CatchHandler @ 0261a818 */
    FUN_021f03f8(PTR_DAT_049c2c68);
                    /* try { // try from 0261a724 to 0271a72b has its CatchHandler @ 0261a814 */
                    /* try { // try from 0261a72c to 0271a773 has its CatchHandler @ 02619f84 */
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4be3a = 1;
  }
  auStack_38._0_8_ = 0;
  auStack_38._8_8_ = 0;
  if (*(long *)(param_1 + 0xa8) == 0) goto LAB_0261a860;
  if (*(char *)(*(long *)(param_1 + 0xa8) + 0x10) != '\0') {
    if ((*(long *)(param_1 + 0x38) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x88), lVar3 == 0)) goto LAB_0261a860;
    uStack_24 = 0x16;
                    /* try { // try from 0261a774 to 0271a77f has its CatchHandler @ 0261a800 */
    uVar4 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                      (lVar3,&uStack_24,*(undefined8 *)PTR_DAT_049c2f60);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)(param_1 + 0x38) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x88), lVar3 == 0)) {
LAB_0261a860:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0261a178 with catch @ 0261a860 */
        FUN_021f06a0();
      }
                    /* try { // try from 0261a78c to 0271a79b has its CatchHandler @ 0261a7fc */
                    /* try { // try from 0261a7a0 to 0271a7a3 has its CatchHandler @ 0261a8b8 */
      uStack_24 = 0x16;
                    /* try { // try from 0261a7a4 to 0271a7a7 has its CatchHandler @ 0261a8b4 */
      lVar3 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar3,&uStack_24,*(undefined8 *)PTR_DAT_049c2c68);
                    /* try { // try from 0261a7a8 to 0271a7ab has its CatchHandler @ 0261a8b0 */
      if (lVar3 == 0) goto LAB_0261a860;
                    /* try { // try from 0261a7ac to 0271a7af has its CatchHandler @ 0261a8d8 */
                    /* try { // try from 0261a7b0 to 0271a7b3 has its CatchHandler @ 0261a870 */
                    /* try { // try from 0261a7b4 to 0271a7b7 has its CatchHandler @ 0261a8a0 */
      uVar4 = LiveOpsSheet_Row__get_HasWeeklySchedule_25630e0(lVar3,0);
                    /* try { // try from 0261a7b8 to 0271a7bb has its CatchHandler @ 0261a89c */
      if ((uVar4 & 1) != 0) {
                    /* try { // try from 0261a7bc to 0271a7bf has its CatchHandler @ 0261a898 */
                    /* try { // try from 0261a7c0 to 0271a7c3 has its CatchHandler @ 0261a894 */
                    /* try { // try from 0261a7c4 to 0271a7c7 has its CatchHandler @ 0261a854 */
                    /* try { // try from 0261a7c8 to 0271a7cb has its CatchHandler @ 0261a890 */
                    /* try { // try from 0261a7cc to 0271a7cf has its CatchHandler @ 0261a88c */
        if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
                    /* try { // try from 0261a7d0 to 0271a7d3 has its CatchHandler @ 0261a8d4 */
          FUN_021f0574();
        }
                    /* try { // try from 0261a7d4 to 0271a7d7 has its CatchHandler @ 0261a888 */
                    /* try { // try from 0261a7d8 to 0271a7db has its CatchHandler @ 0261a8d0 */
        auVar5 = TimeProvider__get_UtcNow_24f95ec(0);
                    /* try { // try from 0261a7dc to 0271a7df has its CatchHandler @ 0261a884 */
                    /* try { // try from 0261a7e0 to 0271a7e3 has its CatchHandler @ 0261a8cc */
                    /* try { // try from 0261a7e4 to 0271a7e7 has its CatchHandler @ 0261a8c8 */
                    /* try { // try from 0261a7e8 to 0271a7eb has its CatchHandler @ 0261a8c4 */
                    /* try { // try from 0261a7ec to 0271a7ef has its CatchHandler @ 0261a880 */
                    /* try { // try from 0261a7f0 to 0271a7f3 has its CatchHandler @ 0261a83c */
                    /* try { // try from 0261a7f4 to 0271a7f7 has its CatchHandler @ 0261a87c */
        auStack_38 = LiveOpsSheet_Row__GetJoinStartTime_25636b4(lVar3,auVar5._0_8_,auVar5._8_8_,0);
                    /* try { // try from 0261a7f8 to 0271a7fb has its CatchHandler @ 0261a81c */
                    /* catch() { ... } // from try @ 0261a78c with catch @ 0261a7fc
                       try { // try from 0261a7fc to 0271a8f3 has its CatchHandler @ 02619f84 */
        iVar1 = *(int *)(lVar3 + 0x18);
                    /* catch() { ... } // from try @ 0261a774 with catch @ 0261a800 */
                    /* catch() { ... } // from try @ 0261a560 with catch @ 0261a804 */
                    /* catch() { ... } // from try @ 0261a4b4 with catch @ 0261a808 */
                    /* catch() { ... } // from try @ 0261a454 with catch @ 0261a80c */
                    /* catch() { ... } // from try @ 0261a1c0 with catch @ 0261a810 */
                    /* catch() { ... } // from try @ 0261a724 with catch @ 0261a814 */
        if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0261a71c with catch @ 0261a818 */
          FUN_021f0574();
        }
                    /* catch() { ... } // from try @ 0261a7f8 with catch @ 0261a81c */
                    /* catch() { ... } // from try @ 0261a584 with catch @ 0261a820 */
                    /* catch() { ... } // from try @ 0261a564 with catch @ 0261a824 */
                    /* catch() { ... } // from try @ 0261a540 with catch @ 0261a828 */
        auVar6 = System_DateTimeOffset__AddMinutes_30e182c((double)iVar1,auStack_38,0);
                    /* catch() { ... } // from try @ 0261a4e8 with catch @ 0261a82c */
                    /* catch() { ... } // from try @ 0261a4d0 with catch @ 0261a830 */
                    /* catch() { ... } // from try @ 0261a48c with catch @ 0261a834 */
                    /* catch() { ... } // from try @ 0261a440 with catch @ 0261a838 */
                    /* catch() { ... } // from try @ 0261a7f0 with catch @ 0261a83c */
                    /* catch() { ... } // from try @ 0261a430 with catch @ 0261a840 */
        uVar2 = System_DateTimeOffset__op_LessThan_30e4780
                          (auVar5._0_8_,auVar5._8_8_,auVar6._0_8_,auVar6._8_8_,0);
                    /* catch() { ... } // from try @ 0261a2e4 with catch @ 0261a844 */
        goto LAB_0261a84c;
      }
    }
  }
                    /* catch() { ... } // from try @ 0261a2d8 with catch @ 0261a848 */
  uVar2 = 0;
LAB_0261a84c:
                    /* catch() { ... } // from try @ 0261a290 with catch @ 0261a84c */
                    /* catch() { ... } // from try @ 0261a250 with catch @ 0261a850 */
                    /* catch() { ... } // from try @ 0261a7c4 with catch @ 0261a854 */
                    /* catch() { ... } // from try @ 0261a21c with catch @ 0261a858 */
                    /* catch() { ... } // from try @ 0261a1a4 with catch @ 0261a85c */
  return uVar2 & 1;
}

