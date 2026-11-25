/* IL2CPP: StreakTournamentLeaderboardRewardSheet.Row$$GetRewards
System_Collections_Generic_List_RewardInfo__o* StreakTournamentLeaderboardRewardSheet_Row__GetRewards (StreakTournamentLeaderboardRewardSheet_Row_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentLeaderboardRewardSheet.Row$$GetRewards
   System_Collections_Generic_List_RewardInfo__o*
   StreakTournamentLeaderboardRewardSheet_Row__GetRewards
   (StreakTournamentLeaderboardRewardSheet_Row_o* __this, const MethodInfo* method); */

long StreakTournamentLeaderboardRewardSheet_Row__GetRewards_25680d4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uStack_54;
  ulong uStack_48;
  
  if ((bRam0000000004f4c176 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caa68);
                    /* try { // try from 02668110 to 0276811b has its CatchHandler @ 02668314 */
    FUN_021f03f8(PTR_DAT_049c2c78);
    FUN_021f03f8(PTR_DAT_049c5b78);
                    /* try { // try from 02668128 to 02768137 has its CatchHandler @ 02668310 */
    FUN_021f03f8(PTR_DAT_049b6378);
    bRam0000000004f4c176 = 1;
  }
  uVar5 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_1 + 0x18),0);
  lVar6 = 0;
  if ((uVar5 & 1) == 0) {
                    /* try { // try from 02668150 to 0276815b has its CatchHandler @ 02668394 */
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_026682c8:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(lVar6);
    }
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x10) < 2) {
      lVar6 = 0;
    }
    else {
                    /* try { // try from 02668160 to 0276817b has its CatchHandler @ 02668390 */
      plVar10 = (long *)(param_1 + 0x20);
      lVar6 = *plVar10;
      if (lVar6 == 0) {
        uVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b6378);
                    /* try { // try from 0266817c to 02768223 has its CatchHandler @ 02667870 */
        System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                  (uVar7,*(undefined8 *)PTR_DAT_049c5b78);
        *(undefined8 *)(param_1 + 0x20) = uVar7;
        thunk_FUN_021f190c(plVar10,uVar7);
        lVar6 = 0;
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (lVar8 = System_String__Split_2f802dc(*(long *)(param_1 + 0x18),10,0,0),
           puVar4 = PTR_DAT_049caa68, puVar3 = PTR_DAT_049c2c78, puVar2 = PTR_DAT_049b3bd0,
           lVar6 = 0, lVar8 == 0)) goto LAB_026682c8;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          uVar12 = 0;
          do {
            if (uVar1 <= uVar12) {
LAB_026682cc:
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            lVar9 = *(long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
            lVar6 = 0;
            if ((lVar9 == 0) ||
               (lVar9 = System_String__Split_2f802dc(lVar9,0x3a,0,0), lVar6 = 0, lVar9 == 0))
            goto LAB_026682c8;
            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_026682cc;
            uVar7 = *(undefined8 *)(lVar9 + 0x20);
                    /* try { // try from 02668224 to 0276822f has its CatchHandler @ 0266830c */
            if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
              FUN_021f0574();
            }
                    /* try { // try from 0266823c to 0276824b has its CatchHandler @ 02668308 */
            System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
                      (uVar7,1,&uStack_54,*(undefined8 *)puVar4);
            if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_026682cc;
            uVar5 = (ulong)uStack_54;
            uVar11 = *(undefined8 *)(lVar9 + 0x28);
            uVar7 = System_Globalization_NumberFormatInfo__get_InvariantInfo_307e370(0);
                    /* try { // try from 02668260 to 0276826b has its CatchHandler @ 02668304 */
            lVar6 = System_Int32__Parse_30fbf68(uVar11,uVar7,0);
            if (*plVar10 == 0) goto LAB_026682c8;
                    /* try { // try from 02668278 to 02768287 has its CatchHandler @ 02668300 */
            uStack_48 = uVar5 | lVar6 << 0x20;
            FUN_02333498(*plVar10,&uStack_48,*(undefined8 *)puVar3);
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar12 = uVar12 + 1;
                    /* try { // try from 02668298 to 027682a3 has its CatchHandler @ 026682f8 */
          } while ((int)uVar12 < (int)uVar1);
        }
        lVar6 = *plVar10;
      }
    }
  }
                    /* try { // try from 026682b0 to 027682bf has its CatchHandler @ 026682f4 */
  return lVar6;
}

