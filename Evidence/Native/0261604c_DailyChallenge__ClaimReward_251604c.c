/* IL2CPP: DailyChallenge$$ClaimReward
System_Collections_Generic_List_RewardInfo__o* DailyChallenge__ClaimReward (DailyChallenge_o* __this, DailyChallengeRewardSheet_Day_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$ClaimReward
   System_Collections_Generic_List_RewardInfo__o* DailyChallenge__ClaimReward (DailyChallenge_o*
   __this, DailyChallengeRewardSheet_Day_o* data, const MethodInfo* method); */

long DailyChallenge__ClaimReward_251604c(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  undefined2 uVar16;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_70;
  int iStack_64;
  
  if ((bRam0000000004f4be1a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
                    /* try { // try from 026160a8 to 027160b7 has its CatchHandler @ 026169ac */
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049c2ce0);
                    /* try { // try from 026160c4 to 027160cf has its CatchHandler @ 026169a8 */
    FUN_021f03f8(PTR_DAT_049c2ce8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c2cf0);
                    /* try { // try from 026160ec to 02716103 has its CatchHandler @ 02616a1c */
    FUN_021f03f8(PTR_DAT_049c9378);
    FUN_021f03f8(PTR_DAT_049c7d60);
    bRam0000000004f4be1a = 1;
  }
                    /* try { // try from 02616108 to 02716117 has its CatchHandler @ 02616938 */
  uStack_80 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
                    /* try { // try from 02616124 to 0271614f has its CatchHandler @ 02616a20 */
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (param_2 == 0) {
LAB_02616544:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar13 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
  uVar1 = *(undefined4 *)(plVar13[1] + 0xfc);
  uVar8 = thunk_FUN_0224e54c(param_2,*(undefined8 *)(*plVar13 + 0x80));
                    /* try { // try from 0261615c to 0271617f has its CatchHandler @ 02616a34 */
  func_0x04608620(&uStack_168,uVar8,uVar1);
  iVar15 = (int)uStack_168;
  uVar8 = DailyChallenge__GetCompletedDays_25168ec();
  uVar7 = CONCAT13(POPCOUNT((char)((ulong)uVar8 >> 0x18)),
                   CONCAT12(POPCOUNT((char)((ulong)uVar8 >> 0x10)),
                            CONCAT11(POPCOUNT((char)((ulong)uVar8 >> 8)),POPCOUNT((char)uVar8))));
  uVar16 = NEON_uaddlv((ulong)uVar7,1);
                    /* try { // try from 02616190 to 02716193 has its CatchHandler @ 02616a24 */
  if ((CONCAT22((short)(uVar7 >> 0x10),uVar16) < iVar15) ||
     (uVar9 = DailyChallenge__IsRewardClaimed_2515e6c(uVar8,param_2), puVar3 = PTR_DAT_049b5310,
     (uVar9 & 1) != 0)) {
                    /* try { // try from 02616194 to 027161ab has its CatchHandler @ 026169c0 */
    lVar10 = 0;
  }
  else {
                    /* try { // try from 026161bc to 027161cf has its CatchHandler @ 026169bc */
    lVar10 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_021f0574();
      lVar10 = *(long *)puVar3;
    }
    lVar10 = *(long *)(lVar10 + 0xb8);
                    /* try { // try from 026161e0 to 027161e3 has its CatchHandler @ 026169b8 */
    uVar7 = CloudPrefsInt__get_Value_24e99c0(lVar10 + 0x8f8,0);
    puVar3 = PTR_DAT_049c2cf0;
                    /* try { // try from 026161e8 to 027161f3 has its CatchHandler @ 026169b4 */
    plVar13 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
                    /* try { // try from 02616208 to 0271620b has its CatchHandler @ 0261692c */
    uVar1 = *(undefined4 *)(plVar13[1] + 0xfc);
    uVar8 = thunk_FUN_0224e54c(param_2,*(undefined8 *)(*plVar13 + 0x80));
                    /* try { // try from 02616210 to 0271621b has its CatchHandler @ 026169b0 */
    func_0x04608620(&uStack_168,uVar8,uVar1);
                    /* try { // try from 0261622c to 027162db has its CatchHandler @ 02616a2c */
    CloudPrefsInt__set_Value_24e9a2c
              (lVar10 + 0x8f8,1 << (ulong)((int)uStack_168 - 1U & 0x1f) | uVar7,0);
    uStack_80 = 0;
    lVar10 = *(long *)(param_1 + 0x48);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    plVar13 = *(long **)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar13[1] + 0xfc);
    uVar8 = thunk_FUN_0224e54c(param_2,*(undefined8 *)(*plVar13 + 0x80));
    func_0x04608620(&uStack_168,uVar8,uVar1);
    iVar15 = (int)uStack_168;
    puVar3 = PTR_DAT_049b3c20;
    uStack_168 = 0;
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar15);
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_168,&uStack_70,*(undefined8 *)PTR_DAT_049b3c20);
    uStack_a8 = *(undefined8 *)PTR_DAT_049c9378;
    uStack_b0 = uStack_168;
    thunk_FUN_021f190c((ulong)&uStack_b0 | 8);
    if (lVar10 == 0) goto LAB_02616544;
    uStack_148 = uStack_a8;
    uStack_150 = uStack_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
                    /* try { // try from 026162ec to 0271634b has its CatchHandler @ 02616d60 */
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_120 = uStack_80;
    AnalyticsModule__LiveOpsMilestoneCompleted_2540658(lVar10,0x1c,&uStack_150,0);
    lVar10 = DailyChallengeRewardSheet_Day__GetRewards_255e110(param_2,0);
    if (lVar10 != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (lVar10,&uStack_168,*(undefined8 *)PTR_DAT_049b6370);
      puVar6 = PTR_DAT_049c2ce8;
      puVar5 = PTR_DAT_049c2ce0;
      puVar4 = PTR_DAT_049b6348;
      uStack_c8 = puStack_160;
      uStack_d0 = uStack_168;
      uStack_c0 = uStack_158;
      puStack_160 = &uStack_d0;
      uStack_168 = 0;
                    /* try { // try from 02616360 to 0271636b has its CatchHandler @ 02616898 */
      while (uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                               (&uStack_d0,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
        lVar14 = *(long *)PTR_DAT_049b6350;
        lVar11 = *(long *)(lVar14 + 0x20);
                    /* try { // try from 02616378 to 02716387 has its CatchHandler @ 02616894 */
        uVar2 = *(ushort *)(lVar11 + 0x135);
        lVar12 = lVar11;
        if ((uVar2 & 1) == 0) {
          lVar12 = FUN_02229718();
          lVar11 = *(long *)(lVar14 + 0x20);
          uVar2 = *(ushort *)(lVar11 + 0x135);
        }
                    /* try { // try from 026163a0 to 027163ab has its CatchHandler @ 02616d60 */
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar11 = FUN_02229718();
        }
                    /* try { // try from 026163b8 to 027163c3 has its CatchHandler @ 02616934 */
        uVar8 = thunk_FUN_0224e54c(&uStack_d0,
                                   *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60)
        ;
        func_0x04608620(&uStack_70,uVar8,uVar1);
        uVar9 = uStack_70;
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        iVar15 = (int)(uStack_70 >> 0x20);
                    /* try { // try from 026163fc to 0271640f has its CatchHandler @ 02616a08 */
        FulfillModule__FulfillFreePayout_254358c
                  (*(long *)(param_1 + 0x30),uStack_70 & 0xffffffff,(double)iVar15,
                   *(undefined8 *)PTR_DAT_049c7d60,0);
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_e0 = 0;
        lVar12 = *(long *)(param_1 + 0x48);
                    /* try { // try from 02616420 to 0271642b has its CatchHandler @ 02616a04 */
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        plVar13 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
        uVar1 = *(undefined4 *)(plVar13[1] + 0xfc);
        uVar8 = thunk_FUN_0224e54c(param_2,*(undefined8 *)(*plVar13 + 0x80));
                    /* try { // try from 0261644c to 0271644f has its CatchHandler @ 026169f8 */
        func_0x04608620(&uStack_70,uVar8,uVar1);
                    /* try { // try from 02616454 to 0271645f has its CatchHandler @ 026169f4 */
        uVar1 = (undefined4)uStack_70;
        uStack_70 = 0;
        uStack_170 = CONCAT44(uStack_170._4_4_,uVar1);
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_70,&uStack_170,*(undefined8 *)puVar3);
                    /* try { // try from 02616478 to 0271647f has its CatchHandler @ 026169e4 */
        uStack_108 = *(undefined8 *)PTR_DAT_049c9378;
        uStack_110 = uStack_70;
        thunk_FUN_021f190c((ulong)&uStack_110 | 8);
                    /* try { // try from 02616490 to 0271649b has its CatchHandler @ 026169dc */
        uStack_170 = 0;
        uStack_178 = CONCAT44(uStack_178._4_4_,(int)uVar9);
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_170,&uStack_178,*(undefined8 *)puVar6);
                    /* try { // try from 026164a8 to 027164bb has its CatchHandler @ 026169d4 */
        uStack_178 = 0;
        uStack_180 = uStack_180 & 0xffffffff00000000;
        uStack_f8 = uStack_170;
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_178,&uStack_180,*(undefined8 *)puVar5);
                    /* try { // try from 026164cc to 027164d7 has its CatchHandler @ 026169d0 */
        uStack_180 = 0;
        uStack_f0 = uStack_178;
        iStack_64 = iVar15;
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_180,&iStack_64,*(undefined8 *)puVar3);
        uStack_e8 = uStack_180;
                    /* try { // try from 026164ec to 0271650f has its CatchHandler @ 02616a28 */
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uStack_198 = uStack_180;
        uStack_1a0 = uStack_f0;
        uStack_1b8 = uStack_108;
        uStack_1c0 = uStack_110;
        uStack_1a8 = uStack_f8;
        uStack_1b0 = uStack_100;
        uStack_190 = uStack_e0;
        AnalyticsModule__LiveOpsItemTransaction_2540a1c(lVar12,0x1c,&uStack_1c0,0);
                    /* try { // try from 0261651c to 02716527 has its CatchHandler @ 026169cc */
      }
                    /* try { // try from 0261652c to 02716537 has its CatchHandler @ 026169c8 */
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_d0,*(undefined8 *)PTR_DAT_049b6330);
    }
  }
  return lVar10;
}

