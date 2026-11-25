/* IL2CPP: NakamaLeaderboardProvider.<FetchPage>d__2$$MoveNext
void NakamaLeaderboardProvider__FetchPage_d__2__MoveNext (NakamaLeaderboardProvider__FetchPage_d__2_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0234c390) */
/* WARNING: Removing unreachable block (ram,0x0234c530) */
/* IL2CPP: NakamaLeaderboardProvider.<FetchPage>d__2$$MoveNext
   void NakamaLeaderboardProvider__FetchPage_d__2__MoveNext
   (NakamaLeaderboardProvider__FetchPage_d__2_o __this, const MethodInfo* method); */

void NakamaLeaderboardProvider__FetchPage_d__2__MoveNext_224c070(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  int *piStack_f8;
  ulong *puStack_f0;
  undefined4 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  long *plStack_58;
  int iStack_44;
  
  if ((bRam0000000004f49b6e & 1) == 0) {
                    /* try { // try from 0234c098 to 0244c0a3 has its CatchHandler @ 0234c0c4 */
    FUN_021f03f8(PTR_DAT_049b5b60);
                    /* try { // try from 0234c0a4 to 0244c0ef has its CatchHandler @ 0234c05c */
    FUN_021f03f8(PTR_DAT_049b54c8);
    FUN_021f03f8(PTR_DAT_049b5b68);
                    /* catch() { ... } // from try @ 0234c098 with catch @ 0234c0c4 */
    FUN_021f03f8(PTR_DAT_049b5b70);
    FUN_021f03f8(PTR_DAT_049b5b78);
    FUN_021f03f8(PTR_DAT_049b5b20);
    FUN_021f03f8(PTR_DAT_049b5578);
    FUN_021f03f8(PTR_DAT_049b53e0);
    FUN_021f03f8(PTR_DAT_049b5b80);
    FUN_021f03f8(PTR_DAT_049b53c0);
    FUN_021f03f8(PTR_DAT_049b53b8);
    FUN_021f03f8(PTR_DAT_049b5b38);
    FUN_021f03f8(PTR_DAT_049b5b40);
    FUN_021f03f8(PTR_DAT_049b5b48);
    bRam0000000004f49b6e = 1;
  }
  iStack_44 = *param_1;
  plStack_60 = (long *)0x0;
  plStack_58 = (long *)0x0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_d0 = 0;
  lStack_c8 = 0;
  uStack_d8 = 0;
  if (iStack_44 == 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    iStack_44 = -1;
    *param_1 = -1;
  }
  else {
    uVar9 = NakamaServices__TryGetApi_2243784(&plStack_58);
    lStack_188 = 0;
    uStack_190 = 0;
    if (((uVar9 & 1) == 0) ||
       (uVar9 = NakamaServices__TryGetLeaderboard_224bf24(&plStack_60), plVar8 = plStack_58,
       (uVar9 & 1) == 0)) goto LAB_0234c3c0;
    if (plStack_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar15 = *plStack_58;
    uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar9 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b5578) {
          puVar10 = (undefined8 *)(lVar15 + (long)(*piVar16 + 5) * 0x10 + 0x138);
          goto LAB_0234c414;
        }
        uVar9 = uVar9 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(plStack_58,*(long *)PTR_DAT_049b5578,5);
LAB_0234c414:
    uVar14 = (*(code *)*puVar10)(plVar8,puVar10[1]);
    *(undefined8 *)(param_1 + 0x10) = uVar14;
    thunk_FUN_021f190c();
    plVar8 = plStack_60;
                    /* try { // try from 0234c434 to 0244c43f has its CatchHandler @ 0234c48c */
    if (plStack_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar15 = *plStack_60;
    uVar14 = *(undefined8 *)(param_1 + 10);
    uVar18 = *(undefined8 *)(param_1 + 0xe);
    iVar1 = param_1[0xc];
    iVar2 = param_1[0xd];
    uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
                    /* try { // try from 0234c454 to 0244c45f has its CatchHandler @ 0234c484 */
    if (uVar9 != 0) {
                    /* try { // try from 0234c460 to 0244c4af has its CatchHandler @ 0234c35c */
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b5b20) {
                    /* catch() { ... } // from try @ 0234c434 with catch @ 0234c48c */
          puVar10 = (undefined8 *)(lVar15 + (long)(*piVar16 + 4) * 0x10 + 0x138);
          goto LAB_0234c49c;
        }
        uVar9 = uVar9 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar9 != 0);
    }
                    /* catch() { ... } // from try @ 0234c454 with catch @ 0234c484 */
    puVar10 = (undefined8 *)FUN_02229a4c(plStack_60,*(long *)PTR_DAT_049b5b20,4);
LAB_0234c49c:
                    /* catch() { ... } // from try @ 0234c3ec with catch @ 0234c4a0 */
    lVar15 = (*(code *)*puVar10)(plVar8,uVar14,iVar1,iVar2,0,uVar18,puVar10[1]);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_68 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                          (lVar15,*(undefined8 *)PTR_DAT_049b5b48);
    uVar9 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                      (&uStack_68,*(undefined8 *)PTR_DAT_049b5b40);
    if ((uVar9 & 1) == 0) {
      iStack_44 = 0;
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x12) = uStack_68;
      thunk_FUN_021f190c(param_1 + 0x12,0);
                    /* catch() { ... } // from try @ 0234c570 with catch @ 0234c51c */
      FUN_0235bb44(param_1 + 2,&uStack_68,param_1,*(undefined8 *)PTR_DAT_049b5b60);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
            (&uStack_68,&lStack_100,*(undefined8 *)PTR_DAT_049b5b38);
  lVar15 = lStack_100;
  if (lStack_100 == 0) {
    uStack_190 = 0;
    lStack_188 = 0;
  }
  else {
    lVar11 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b53b8);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
              (lVar11,*(undefined8 *)PTR_DAT_049b53c0);
    if (*(long *)(lStack_100 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(lStack_100 + 0x10),&uStack_140,*(undefined8 *)PTR_DAT_049b5b80);
    puVar7 = PTR_DAT_049b5b78;
    puVar6 = PTR_DAT_049b5b70;
    puVar5 = PTR_DAT_049b53e0;
    piStack_f8 = &iStack_44;
    uStack_78 = lStack_138;
    uStack_80 = uStack_140;
    uStack_70 = uStack_130;
    puStack_f0 = &uStack_80;
    lStack_100 = 0;
    while (uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_80,*(undefined8 *)puVar6), (uVar9 & 1) != 0) {
      lVar17 = *(long *)puVar7;
      lVar12 = *(long *)(lVar17 + 0x20);
      uVar4 = *(ushort *)(lVar12 + 0x135);
      lVar13 = lVar12;
      if ((uVar4 & 1) == 0) {
        lVar13 = FUN_02229718();
        lVar12 = *(long *)(lVar17 + 0x20);
        uVar4 = *(ushort *)(lVar12 + 0x135);
      }
      uVar3 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
      if ((uVar4 & 1) == 0) {
        lVar12 = FUN_02229718();
      }
      uVar14 = thunk_FUN_0224e54c(&uStack_80,
                                  *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_140,uVar14,uVar3);
      NakamaLeaderboardProvider__CreateLeaderboardEntry_224b7b0
                (&uStack_140,uStack_140,*(undefined8 *)(param_1 + 0x10));
      uStack_b8 = lStack_138;
      uStack_c0 = uStack_140;
      uStack_a8 = uStack_128;
      uStack_b0 = uStack_130;
      uStack_98 = uStack_118;
      uStack_a0 = uStack_120;
      uStack_88 = uStack_108;
      uStack_90 = uStack_110;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_178 = lStack_138;
      uStack_180 = uStack_140;
      uStack_168 = uStack_128;
      uStack_170 = uStack_130;
      uStack_158 = uStack_118;
      uStack_160 = uStack_120;
      uStack_148 = uStack_108;
      uStack_150 = uStack_110;
      FUN_02333498(lVar11,&uStack_180,*(undefined8 *)puVar5);
    }
                    /* catch() { ... } // from try @ 0234c460 with catch @ 0234c35c */
    if (iStack_44 < 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (puStack_f0,*(undefined8 *)PTR_DAT_049b5b68);
    }
    uStack_d0 = (ulong)*(uint *)(lVar15 + 0x20);
    lStack_c8 = lVar11;
    thunk_FUN_021f190c((ulong)&uStack_d0 | 8,lVar11);
    uStack_190 = uStack_d0;
    lStack_188 = lStack_c8;
  }
LAB_0234c3c0:
  puVar5 = PTR_DAT_049b54c8;
  *param_1 = -2;
  lStack_138 = lStack_188;
  uStack_140 = uStack_190;
  FUN_0235bed4(param_1 + 2,&uStack_140,*(undefined8 *)puVar5);
                    /* try { // try from 0234c3ec to 0244c3f7 has its CatchHandler @ 0234c4a0 */
  return;
}

