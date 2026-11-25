/* IL2CPP: DailyChallengeRewardSheet.Day$$GetRewards
System_Collections_Generic_List_RewardInfo__o* DailyChallengeRewardSheet_Day__GetRewards (DailyChallengeRewardSheet_Day_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallengeRewardSheet.Day$$GetRewards
   System_Collections_Generic_List_RewardInfo__o* DailyChallengeRewardSheet_Day__GetRewards
   (DailyChallengeRewardSheet_Day_o* __this, const MethodInfo* method); */

long DailyChallengeRewardSheet_Day__GetRewards_255e110(long param_1)

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
  
                    /* try { // try from 0265e114 to 0275e117 has its CatchHandler @ 0265e128 */
                    /* try { // try from 0265e118 to 0275e11b has its CatchHandler @ 0265e124 */
                    /* catch() { ... } // from try @ 0265e0bc with catch @ 0265e11c */
                    /* catch() { ... } // from try @ 0265e098 with catch @ 0265e120 */
                    /* catch() { ... } // from try @ 0265e118 with catch @ 0265e124 */
                    /* catch() { ... } // from try @ 0265e114 with catch @ 0265e128 */
                    /* try { // try from 0265e130 to 0275e13b has its CatchHandler @ 0265e59c */
  if ((bRam0000000004f4c0fe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caa68);
    FUN_021f03f8(PTR_DAT_049c2c78);
    FUN_021f03f8(PTR_DAT_049c5b78);
                    /* try { // try from 0265e15c to 0275e167 has its CatchHandler @ 0265e5b4 */
    FUN_021f03f8(PTR_DAT_049b6378);
    bRam0000000004f4c0fe = 1;
  }
                    /* try { // try from 0265e174 to 0275e17b has its CatchHandler @ 0265e5a4 */
  uVar5 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_1 + 0x18),0);
  lVar6 = 0;
                    /* try { // try from 0265e184 to 0275e18b has its CatchHandler @ 0265e570 */
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_0265e304:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(lVar6);
    }
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x10) < 2) {
      lVar6 = 0;
    }
    else {
      plVar10 = (long *)(param_1 + 0x20);
      lVar6 = *plVar10;
      if (lVar6 == 0) {
                    /* try { // try from 0265e1ac to 0275e1af has its CatchHandler @ 0265e54c */
                    /* try { // try from 0265e1b0 to 0275e1bb has its CatchHandler @ 0265e568 */
        uVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b6378);
                    /* try { // try from 0265e1c0 to 0275e1cb has its CatchHandler @ 0265e554 */
        System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                  (uVar7,*(undefined8 *)PTR_DAT_049c5b78);
        *(undefined8 *)(param_1 + 0x20) = uVar7;
        thunk_FUN_021f190c(plVar10,uVar7);
        lVar6 = 0;
                    /* try { // try from 0265e1ec to 0275e1ef has its CatchHandler @ 0265e560 */
                    /* try { // try from 0265e1f0 to 0275e1ff has its CatchHandler @ 0265e5a0 */
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (lVar8 = System_String__Split_2f802dc(*(long *)(param_1 + 0x18),10,0,0),
           puVar4 = PTR_DAT_049caa68, puVar3 = PTR_DAT_049c2c78, puVar2 = PTR_DAT_049b3bd0,
           lVar6 = 0, lVar8 == 0)) goto LAB_0265e304;
        uVar1 = *(uint *)(lVar8 + 0x18);
                    /* try { // try from 0265e204 to 0275e223 has its CatchHandler @ 0265e5bc */
        if (0 < (int)uVar1) {
          uVar12 = 0;
          do {
            if (uVar1 <= uVar12) {
LAB_0265e308:
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
                    /* try { // try from 0265e22c to 0275e233 has its CatchHandler @ 0265e5a8 */
            lVar9 = *(long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
            lVar6 = 0;
            if ((lVar9 == 0) ||
               (lVar9 = System_String__Split_2f802dc(lVar9,0x3a,0,0), lVar6 = 0, lVar9 == 0))
            goto LAB_0265e304;
                    /* try { // try from 0265e250 to 0275e29b has its CatchHandler @ 0265e5b0 */
            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0265e308;
            uVar7 = *(undefined8 *)(lVar9 + 0x20);
            if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
              FUN_021f0574();
            }
            System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
                      (uVar7,1,&uStack_54,*(undefined8 *)puVar4);
            if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_0265e308;
            uVar5 = (ulong)uStack_54;
            uVar11 = *(undefined8 *)(lVar9 + 0x28);
            uVar7 = System_Globalization_NumberFormatInfo__get_InvariantInfo_307e370(0);
                    /* try { // try from 0265e29c to 0275e2b3 has its CatchHandler @ 0265df5c */
            lVar6 = System_Int32__Parse_30fbf68(uVar11,uVar7,0);
            if (*plVar10 == 0) goto LAB_0265e304;
                    /* try { // try from 0265e2b4 to 0275e2bb has its CatchHandler @ 0265e598 */
            uStack_48 = uVar5 | lVar6 << 0x20;
            FUN_02333498(*plVar10,&uStack_48,*(undefined8 *)puVar3);
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar12 = uVar12 + 1;
                    /* try { // try from 0265e2d4 to 0275e2d7 has its CatchHandler @ 0265e55c */
                    /* try { // try from 0265e2d8 to 0275e2e7 has its CatchHandler @ 0265e574 */
          } while ((int)uVar12 < (int)uVar1);
        }
        lVar6 = *plVar10;
      }
    }
  }
                    /* try { // try from 0265e2e8 to 0275e303 has its CatchHandler @ 0265e5ac */
  return lVar6;
}

