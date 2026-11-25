/* IL2CPP: StreakTournament$$TrackPersonalRewardClaim
void StreakTournament__TrackPersonalRewardClaim (StreakTournament_o* __this, System_Collections_Generic_List_RewardInfo__o* rewards, int32_t milestoneLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$TrackPersonalRewardClaim
   void StreakTournament__TrackPersonalRewardClaim (StreakTournament_o* __this,
   System_Collections_Generic_List_RewardInfo__o* rewards, int32_t milestoneLevel, const MethodInfo*
   method); */

void StreakTournament__TrackPersonalRewardClaim_25265e0
               (long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  if ((bRam0000000004f4be9a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049c2ce0);
    FUN_021f03f8(PTR_DAT_049c2ce8);
    FUN_021f03f8(PTR_DAT_049c9a00);
    bRam0000000004f4be9a = 1;
  }
  puVar8 = PTR_DAT_049c9a00;
  puVar7 = PTR_DAT_049c2ce8;
  puVar6 = PTR_DAT_049c2ce0;
  puVar5 = PTR_DAT_049b6350;
  puVar4 = PTR_DAT_049b6348;
  puVar3 = PTR_DAT_049b3c20;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_a0 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (param_2 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (param_2,&uStack_128,*(undefined8 *)PTR_DAT_049b6370);
    uStack_80 = uStack_118;
    puStack_88 = puStack_120;
    uStack_90 = uStack_128;
    uStack_128 = 0;
    puStack_120 = &uStack_90;
    while (uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_90,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
      lVar13 = *(long *)puVar5;
      lVar10 = *(long *)(lVar13 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
      lVar11 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_02229718();
        lVar10 = *(long *)(lVar13 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_02229718();
      }
      uVar12 = thunk_FUN_0224e54c(&uStack_90,
                                  *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_70,uVar12,uVar1);
      uVar12 = uStack_70;
      lVar11 = *(long *)(param_1 + 0x70);
      uStack_a0 = 0;
      uStack_70 = 0;
      uStack_130 = CONCAT44(uStack_130._4_4_,(int)uVar12);
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_70,&uStack_130,*(undefined8 *)puVar7);
      uStack_130 = 0;
      uStack_b8 = uStack_70;
      uStack_138 = CONCAT44(uStack_138._4_4_,(int)((ulong)uVar12 >> 0x20));
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_130,&uStack_138,*(undefined8 *)puVar3);
      uStack_138 = 0;
      uStack_140 = CONCAT44(uStack_140._4_4_,param_3);
      uStack_a8 = uStack_130;
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_138,&uStack_140,*(undefined8 *)puVar3);
      uStack_c8 = *(undefined8 *)puVar8;
      uStack_d0 = uStack_138;
      thunk_FUN_021f190c((ulong)&uStack_d0 | 8);
      uStack_140 = 0;
      uStack_64 = 0;
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_140,&uStack_64,*(undefined8 *)puVar6);
      uStack_b0 = uStack_140;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_158 = uStack_a8;
      uStack_160 = uStack_140;
      uStack_178 = uStack_c8;
      uStack_180 = uStack_d0;
      uStack_168 = uStack_b8;
      uStack_170 = uStack_c0;
      uStack_150 = uStack_a0;
      AnalyticsModule__LiveOpsItemTransaction_2540a1c(lVar11,0x16,&uStack_180,0);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_90,*(undefined8 *)PTR_DAT_049b6330);
    lVar11 = *(long *)(param_1 + 0x70);
    uStack_e0 = 0;
    uStack_128 = 0;
    uStack_70 = CONCAT44(uStack_70._4_4_,param_3);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_128,&uStack_70,*(undefined8 *)puVar3);
    uStack_108 = *(undefined8 *)puVar8;
    uStack_110 = uStack_128;
    thunk_FUN_021f190c((ulong)&uStack_110 | 8);
    if (lVar11 != 0) {
      uStack_1b8 = uStack_108;
      uStack_1c0 = uStack_110;
      uStack_1a8 = uStack_f8;
      uStack_1b0 = uStack_100;
      uStack_198 = uStack_e8;
      uStack_1a0 = uStack_f0;
      uStack_190 = uStack_e0;
      AnalyticsModule__LiveOpsMilestoneCompleted_2540658(lVar11,0x16,&uStack_1c0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

