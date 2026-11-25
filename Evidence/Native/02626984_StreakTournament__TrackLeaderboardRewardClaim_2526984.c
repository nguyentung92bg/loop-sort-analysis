/* IL2CPP: StreakTournament$$TrackLeaderboardRewardClaim
void StreakTournament__TrackLeaderboardRewardClaim (StreakTournament_o* __this, System_Collections_Generic_List_RewardInfo__o* rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$TrackLeaderboardRewardClaim
   void StreakTournament__TrackLeaderboardRewardClaim (StreakTournament_o* __this,
   System_Collections_Generic_List_RewardInfo__o* rewards, const MethodInfo* method); */

void StreakTournament__TrackLeaderboardRewardClaim_2526984(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  if ((bRam0000000004f4be9b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049c2ce0);
    FUN_021f03f8(PTR_DAT_049c2ce8);
    FUN_021f03f8(PTR_DAT_049c9a08);
    bRam0000000004f4be9b = 1;
  }
  puVar9 = PTR_DAT_049c9a08;
  puVar8 = PTR_DAT_049c2ce8;
  puVar7 = PTR_DAT_049c2ce0;
  puVar6 = PTR_DAT_049b6350;
  puVar5 = PTR_DAT_049b6348;
  puVar4 = PTR_DAT_049b6330;
  puVar3 = PTR_DAT_049b3c20;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (param_2,&uStack_e8,*(undefined8 *)PTR_DAT_049b6370);
  uStack_80 = uStack_d8;
  uStack_88 = puStack_e0;
  uStack_90 = uStack_e8;
  uStack_e8 = 0;
  puStack_e0 = &uStack_90;
  while( true ) {
    uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&uStack_90,*(undefined8 *)puVar5);
    if ((uVar10 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_90,*(undefined8 *)puVar4);
      return;
    }
    lVar14 = *(long *)puVar6;
    lVar11 = *(long *)(lVar14 + 0x20);
    uVar2 = *(ushort *)(lVar11 + 0x135);
    lVar12 = lVar11;
    if ((uVar2 & 1) == 0) {
      lVar12 = FUN_02229718();
      lVar11 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar11 = FUN_02229718();
    }
    uVar13 = thunk_FUN_0224e54c(&uStack_90,
                                *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_70,uVar13,uVar1);
    uVar13 = uStack_70;
    lVar12 = *(long *)(param_1 + 0x70);
    uStack_a0 = 0;
    uStack_70 = 0;
    uStack_f0 = CONCAT44(uStack_f0._4_4_,(int)uVar13);
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_70,&uStack_f0,*(undefined8 *)puVar8);
    uStack_f0 = 0;
    uStack_b8 = uStack_70;
    uStack_f8 = CONCAT44(uStack_f8._4_4_,(int)((ulong)uVar13 >> 0x20));
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_f0,&uStack_f8,*(undefined8 *)puVar3);
    uStack_c8 = *(undefined8 *)puVar9;
    uStack_a8 = uStack_f0;
    thunk_FUN_021f190c((ulong)&uStack_d0 | 8);
    uStack_f8 = 0;
    uStack_64 = 0;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_f8,&uStack_64,*(undefined8 *)puVar7);
    uStack_b0 = uStack_f8;
    if (lVar12 == 0) break;
    uStack_108 = uStack_a8;
    uStack_110 = uStack_f8;
    uStack_128 = uStack_c8;
    uStack_130 = uStack_d0;
    uStack_118 = uStack_b8;
    uStack_120 = uStack_c0;
    uStack_100 = uStack_a0;
    AnalyticsModule__LiveOpsItemTransaction_2540a1c(lVar12,0x16,&uStack_130,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

