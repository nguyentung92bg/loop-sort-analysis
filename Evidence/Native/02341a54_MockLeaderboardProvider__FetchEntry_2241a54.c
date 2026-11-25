/* IL2CPP: MockLeaderboardProvider$$FetchEntry
Cysharp_Threading_Tasks_UniTask_LeaderboardPage__o MockLeaderboardProvider__FetchEntry (MockLeaderboardProvider_o* __this, System_String_o* leaderboardId, System_String_o* ownerId, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MockLeaderboardProvider$$FetchEntry
   Cysharp_Threading_Tasks_UniTask_LeaderboardPage__o MockLeaderboardProvider__FetchEntry
   (MockLeaderboardProvider_o* __this, System_String_o* leaderboardId, System_String_o* ownerId,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void MockLeaderboardProvider__FetchEntry_2241a54
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long extraout_x1;
  long lVar14;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  byte bStack_180;
  undefined8 uStack_17f;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  byte bStack_140;
  undefined8 uStack_13f;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long lStack_68;
  
  puVar5 = PTR_DAT_049b53c0;
  puVar4 = PTR_DAT_049b53b8;
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  if ((bRam0000000004f49b1d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b53c8);
    FUN_021f03f8(PTR_DAT_049b53d0);
    FUN_021f03f8(PTR_DAT_049b53d8);
    FUN_021f03f8(PTR_DAT_049b53e0);
    FUN_021f03f8(PTR_DAT_049b53e8);
    FUN_021f03f8(PTR_DAT_049b53c0);
    FUN_021f03f8(PTR_DAT_049b53b8);
                    /* try { // try from 02341afc to 02441b93 has its CatchHandler @ 02341afc
                       catch() { ... } // from try @ 02341afc with catch @ 02341afc
                       catch() { ... } // from try @ 02341b98 with catch @ 02341afc */
    FUN_021f03f8(PTR_DAT_049b53f0);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f49b1d = 1;
  }
  uStack_88 = 0;
  uStack_81 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_79 = 0;
  uStack_78 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_120 = 0;
  puStack_118 = (undefined8 *)0x0;
  uVar8 = MockLeaderboardProvider__CreateLeaderboard_2241dc0(param_2,param_3);
  puVar9 = (undefined8 *)thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (puVar9,*(undefined8 *)puVar5);
  puVar7 = PTR_DAT_049b53d8;
  puVar6 = PTR_DAT_049b53d0;
  puVar5 = PTR_DAT_049b53c8;
  puVar4 = PTR_DAT_049b5138;
  if (extraout_x1 == 0) {
    if (*(long *)(lVar3 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
                    /* try { // try from 02341b94 to 02441b97 has its CatchHandler @ 02341be8 */
                    /* try { // try from 02341b98 to 02441c03 has its CatchHandler @ 02341afc */
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (extraout_x1,&uStack_f0,*(undefined8 *)PTR_DAT_049b53e8);
    uStack_a0 = 0;
    puStack_98 = &uStack_f0;
    do {
      uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&uStack_f0,*(undefined8 *)puVar6);
      if ((uVar10 & 1) == 0) goto LAB_02341c88;
      lVar14 = *(long *)puVar7;
      lVar11 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
      lVar12 = lVar11;
      if ((uVar2 & 1) == 0) {
        lVar12 = FUN_02229718();
        lVar11 = *(long *)(lVar14 + 0x20);
        uVar2 = *(ushort *)(lVar11 + 0x135);
                    /* catch() { ... } // from try @ 02341b94 with catch @ 02341be8 */
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      uVar13 = thunk_FUN_0224e54c(&uStack_f0,
                                  *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
                    /* try { // try from 02341c24 to 02441c57 has its CatchHandler @ 02341c24
                       catch() { ... } // from try @ 02341c24 with catch @ 02341c24
                       catch() { ... } // from try @ 02341c70 with catch @ 02341c24
                       catch() { ... } // from try @ 02341c9c with catch @ 02341c24 */
      func_0x04608620(&uStack_160,uVar13,uVar1);
      uStack_108 = uStack_158;
      uStack_110 = uStack_160;
      uStack_f8 = uStack_148;
      uStack_100 = uStack_150;
      uStack_90 = uStack_13f;
      uStack_88 = uStack_137;
      uStack_79 = (undefined1)uStack_128;
      uStack_78 = (undefined7)((ulong)uStack_128 >> 8);
      uStack_81 = uStack_130;
      uStack_80 = uStack_12f;
    } while ((bStack_140 & 1) == 0);
    if (puVar9 == (undefined8 *)0x0) {
                    /* try { // try from 02341d3c to 02441d43 has its CatchHandler @ 02341d78 */
      if (*(long *)(lVar3 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
    else {
                    /* try { // try from 02341c58 to 02441c6f has its CatchHandler @ 02341c9c */
      uStack_198 = uStack_158;
      uStack_1a0 = uStack_160;
      uStack_188 = uStack_148;
      uStack_190 = uStack_150;
      bStack_180 = bStack_140;
                    /* try { // try from 02341c70 to 02441c8b has its CatchHandler @ 02341c24 */
      uStack_17f = uStack_13f;
      FUN_02333498(puVar9,&uStack_1a0,*(undefined8 *)PTR_DAT_049b53e0);
LAB_02341c88:
                    /* try { // try from 02341c8c to 02441c9b has its CatchHandler @ 02341c9c */
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_f0,*(undefined8 *)puVar5);
                    /* catch() { ... } // from try @ 02341c58 with catch @ 02341c9c
                       catch() { ... } // from try @ 02341c8c with catch @ 02341c9c
                       try { // try from 02341c9c to 02441caf has its CatchHandler @ 02341c24 */
      uStack_120 = (ulong)uVar8;
      puStack_118 = puVar9;
      thunk_FUN_021f190c((ulong)&uStack_120 | 8,puVar9);
      puVar9 = puStack_118;
      uVar10 = uStack_120;
                    /* try { // try from 02341cb0 to 02441ccb has its CatchHandler @ 02341cb0
                       catch() { ... } // from try @ 02341cb0 with catch @ 02341cb0
                       catch() { ... } // from try @ 02341d44 with catch @ 02341cb0 */
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 02341ccc to 02441cd7 has its CatchHandler @ 02341d70 */
      puStack_98 = puVar9;
      uStack_a0 = uVar10;
      Cysharp_Threading_Tasks_UniTask__FromResult___Il2CppFullySharedGenericType__26e8f34
                (&uStack_a0,&uStack_160,*(undefined8 *)PTR_DAT_049b53f0);
      param_1[1] = uStack_158;
      *param_1 = uStack_160;
      param_1[3] = uStack_148;
      param_1[2] = uStack_150;
                    /* try { // try from 02341cf0 to 02441d0f has its CatchHandler @ 02341d74 */
      if (*(long *)(lVar3 + 0x28) == lStack_68) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

