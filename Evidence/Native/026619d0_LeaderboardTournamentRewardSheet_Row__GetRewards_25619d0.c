/* IL2CPP: LeaderboardTournamentRewardSheet.Row$$GetRewards
System_Collections_Generic_List_RewardInfo__o* LeaderboardTournamentRewardSheet_Row__GetRewards (LeaderboardTournamentRewardSheet_Row_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LeaderboardTournamentRewardSheet.Row$$GetRewards
   System_Collections_Generic_List_RewardInfo__o* LeaderboardTournamentRewardSheet_Row__GetRewards
   (LeaderboardTournamentRewardSheet_Row_o* __this, const MethodInfo* method); */

long LeaderboardTournamentRewardSheet_Row__GetRewards_25619d0(long param_1)

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
  
  if ((bRam0000000004f4c12b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caa68);
    FUN_021f03f8(PTR_DAT_049c2c78);
    FUN_021f03f8(PTR_DAT_049c5b78);
    FUN_021f03f8(PTR_DAT_049b6378);
    bRam0000000004f4c12b = 1;
  }
  uVar5 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_1 + 0x18),0);
  lVar6 = 0;
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_02661bc4:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02661860 with catch @ 02661bc4 */
      FUN_021f06a0(lVar6);
    }
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x10) < 2) {
                    /* catch() { ... } // from try @ 02661698 with catch @ 02661ba4 */
      lVar6 = 0;
    }
    else {
      plVar10 = (long *)(param_1 + 0x20);
      lVar6 = *plVar10;
      if (lVar6 == 0) {
        uVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b6378);
        System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                  (uVar7,*(undefined8 *)PTR_DAT_049c5b78);
        *(undefined8 *)(param_1 + 0x20) = uVar7;
        thunk_FUN_021f190c(plVar10,uVar7);
        lVar6 = 0;
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (lVar8 = System_String__Split_2f802dc(*(long *)(param_1 + 0x18),10,0,0),
           puVar4 = PTR_DAT_049caa68, puVar3 = PTR_DAT_049c2c78, puVar2 = PTR_DAT_049b3bd0,
           lVar6 = 0, lVar8 == 0)) goto LAB_02661bc4;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          uVar12 = 0;
          do {
            if (uVar1 <= uVar12) {
LAB_02661bc8:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02661890 with catch @ 02661bc8 */
              FUN_021f06a8();
            }
            lVar9 = *(long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
            lVar6 = 0;
            if ((lVar9 == 0) ||
               (lVar9 = System_String__Split_2f802dc(lVar9,0x3a,0,0), lVar6 = 0, lVar9 == 0))
            goto LAB_02661bc4;
            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_02661bc8;
            uVar7 = *(undefined8 *)(lVar9 + 0x20);
            if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
              FUN_021f0574();
            }
            System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
                      (uVar7,1,&uStack_54,*(undefined8 *)puVar4);
            if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_02661bc8;
            uVar5 = (ulong)uStack_54;
            uVar11 = *(undefined8 *)(lVar9 + 0x28);
            uVar7 = System_Globalization_NumberFormatInfo__get_InvariantInfo_307e370(0);
            lVar6 = System_Int32__Parse_30fbf68(uVar11,uVar7,0);
            if (*plVar10 == 0) goto LAB_02661bc4;
                    /* catch() { ... } // from try @ 02661708 with catch @ 02661b74 */
            uStack_48 = uVar5 | lVar6 << 0x20;
                    /* catch() { ... } // from try @ 02661830 with catch @ 02661b78 */
                    /* catch() { ... } // from try @ 02661788 with catch @ 02661b7c */
                    /* catch() { ... } // from try @ 02661850 with catch @ 02661b80 */
                    /* catch() { ... } // from try @ 026616a8 with catch @ 02661b84 */
                    /* catch() { ... } // from try @ 026617fc with catch @ 02661b88 */
            FUN_02333498(*plVar10,&uStack_48,*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 02661634 with catch @ 02661b8c */
            uVar1 = *(uint *)(lVar8 + 0x18);
                    /* catch() { ... } // from try @ 026616c8 with catch @ 02661b90 */
            uVar12 = uVar12 + 1;
                    /* catch() { ... } // from try @ 02661614 with catch @ 02661b94 */
                    /* catch() { ... } // from try @ 026615a4 with catch @ 02661b98 */
          } while ((int)uVar12 < (int)uVar1);
        }
                    /* catch() { ... } // from try @ 02661748 with catch @ 02661b9c */
        lVar6 = *plVar10;
                    /* catch() { ... } // from try @ 026617dc with catch @ 02661ba0 */
      }
    }
  }
                    /* catch() { ... } // from try @ 026615c4 with catch @ 02661ba8 */
                    /* catch() { ... } // from try @ 02661688 with catch @ 02661bac */
                    /* catch() { ... } // from try @ 02661678 with catch @ 02661bb0 */
                    /* catch() { ... } // from try @ 026616d8 with catch @ 02661bb4 */
                    /* catch() { ... } // from try @ 02661798 with catch @ 02661bb8 */
                    /* catch() { ... } // from try @ 02661718 with catch @ 02661bbc */
                    /* catch() { ... } // from try @ 026615d4 with catch @ 02661bc0 */
  return lVar6;
}

