/* IL2CPP: NakamaPeriodicLeaderboardProvider$$CreateLeaderboardPage
LeaderboardPage_o NakamaPeriodicLeaderboardProvider__CreateLeaderboardPage (System_String_o* instanceId, Nakama_Custom_PeriodicLeaderboard_PeriodicLeaderboardBoard_o* leaderboard, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaPeriodicLeaderboardProvider$$CreateLeaderboardPage
   LeaderboardPage_o NakamaPeriodicLeaderboardProvider__CreateLeaderboardPage (System_String_o*
   instanceId, Nakama_Custom_PeriodicLeaderboard_PeriodicLeaderboardBoard_o* leaderboard, const
   MethodInfo* method); */

undefined1  [16]
NakamaPeriodicLeaderboardProvider__CreateLeaderboardPage_224d1cc(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_60;
  long lStack_58;
  long *plStack_48;
  
  if ((bRam0000000004f49b76 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5c00);
    FUN_021f03f8(PTR_DAT_049b5c08);
    FUN_021f03f8(PTR_DAT_049b5c10);
    FUN_021f03f8(PTR_DAT_049b5578);
    FUN_021f03f8(PTR_DAT_049b53e0);
    FUN_021f03f8(PTR_DAT_049b5c18);
    FUN_021f03f8(PTR_DAT_049b53c0);
    FUN_021f03f8(PTR_DAT_049b5418);
    FUN_021f03f8(PTR_DAT_049b53b8);
    bRam0000000004f49b76 = 1;
  }
  plStack_48 = (long *)0x0;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if ((param_2 == 0) ||
     (uVar7 = NakamaServices__TryGetApi_2243784(&plStack_48), plVar6 = plStack_48, (uVar7 & 1) == 0)
     ) {
    uStack_60 = 0;
    lStack_58 = 0;
LAB_0234d490:
    auVar16._8_8_ = lStack_58;
    auVar16._0_8_ = uStack_60;
    return auVar16;
  }
  if (plStack_48 != (long *)0x0) {
    lVar13 = *plStack_48;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b5578) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar14 + 5) * 0x10 + 0x138);
          goto LAB_0234d308;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plStack_48,*(long *)PTR_DAT_049b5578,5);
LAB_0234d308:
    uVar9 = (*(code *)*puVar8)(plVar6,puVar8[1]);
    lVar13 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b53b8);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
              (lVar13,*(undefined8 *)PTR_DAT_049b53c0);
    if (*(long *)(param_2 + 0x10) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_2 + 0x10),&uStack_110,*(undefined8 *)PTR_DAT_049b5c18);
      puVar5 = PTR_DAT_049b5c10;
      puVar4 = PTR_DAT_049b5c08;
      puVar3 = PTR_DAT_049b53e0;
      uStack_78 = uStack_108;
      uStack_80 = uStack_110;
      puStack_c8 = &uStack_80;
      uStack_70 = uStack_100;
      uStack_d0 = 0;
      while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                               (&uStack_80,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
        lVar15 = *(long *)puVar5;
        lVar10 = *(long *)(lVar15 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
        lVar11 = lVar10;
        if ((uVar2 & 1) == 0) {
          lVar11 = FUN_02229718();
          lVar10 = *(long *)(lVar15 + 0x20);
          uVar2 = *(ushort *)(lVar10 + 0x135);
        }
                    /* catch() { ... } // from try @ 0234d410 with catch @ 0234d3cc */
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar10 = FUN_02229718();
        }
        uVar12 = thunk_FUN_0224e54c(&uStack_80,
                                    *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60
                                   );
                    /* try { // try from 0234d404 to 0244d40f has its CatchHandler @ 0234d434 */
        func_0x04608620(&uStack_110,uVar12,uVar1);
                    /* try { // try from 0234d410 to 0244d45b has its CatchHandler @ 0234d3cc */
        NakamaPeriodicLeaderboardProvider__CreateLeaderboardEntry_224d51c
                  (&uStack_110,uStack_110,uVar9,param_1);
        uStack_b8 = uStack_108;
        uStack_c0 = uStack_110;
        uStack_a8 = uStack_f8;
        uStack_b0 = uStack_100;
        uStack_98 = uStack_e8;
        uStack_a0 = uStack_f0;
        uStack_88 = uStack_d8;
        uStack_90 = uStack_e0;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* catch() { ... } // from try @ 0234d404 with catch @ 0234d434 */
        uStack_148 = uStack_108;
        uStack_150 = uStack_110;
        uStack_138 = uStack_f8;
        uStack_140 = uStack_100;
        uStack_128 = uStack_e8;
        uStack_130 = uStack_f0;
        uStack_118 = uStack_d8;
        uStack_120 = uStack_e0;
        FUN_02333498(lVar13,&uStack_150,*(undefined8 *)puVar3);
      }
                    /* try { // try from 0234d45c to 0244d4bb has its CatchHandler @ 0234d45c
                       catch() { ... } // from try @ 0234d45c with catch @ 0234d45c
                       catch() { ... } // from try @ 0234d54c with catch @ 0234d45c */
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_80,*(undefined8 *)PTR_DAT_049b5c00);
      uStack_60 = 0;
      lStack_58 = 0;
      if (lVar13 != 0) {
        uStack_60 = (ulong)*(uint *)(lVar13 + 0x18);
        lStack_58 = lVar13;
        thunk_FUN_021f190c(&lStack_58,lVar13);
        goto LAB_0234d490;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

