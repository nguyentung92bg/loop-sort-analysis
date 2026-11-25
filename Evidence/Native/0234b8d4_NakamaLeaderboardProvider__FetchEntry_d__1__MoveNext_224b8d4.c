/* IL2CPP: NakamaLeaderboardProvider.<FetchEntry>d__1$$MoveNext
void NakamaLeaderboardProvider__FetchEntry_d__1__MoveNext (NakamaLeaderboardProvider__FetchEntry_d__1_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaLeaderboardProvider.<FetchEntry>d__1$$MoveNext
   void NakamaLeaderboardProvider__FetchEntry_d__1__MoveNext
   (NakamaLeaderboardProvider__FetchEntry_d__1_o __this, const MethodInfo* method); */

void NakamaLeaderboardProvider__FetchEntry_d__1__MoveNext_224b8d4(int *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_38;
  
  if ((bRam0000000004f49b6c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5b18);
    FUN_021f03f8(PTR_DAT_049b54c8);
    FUN_021f03f8(PTR_DAT_049b5b20);
    FUN_021f03f8(PTR_DAT_049b5578);
    FUN_021f03f8(PTR_DAT_049b53e0);
    FUN_021f03f8(PTR_DAT_049b53c0);
    FUN_021f03f8(PTR_DAT_049b5b28);
                    /* try { // try from 0234b94c to 0244b957 has its CatchHandler @ 0234baf0 */
    FUN_021f03f8(PTR_DAT_049b5b30);
    FUN_021f03f8(PTR_DAT_049b53b8);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049b5b38);
    FUN_021f03f8(PTR_DAT_049b5b40);
    FUN_021f03f8(PTR_DAT_049b5b48);
    bRam0000000004f49b6c = 1;
  }
  plStack_50 = (long *)0x0;
  plStack_48 = (long *)0x0;
  uStack_58 = 0;
  uStack_b0 = 0;
  lStack_a8 = 0;
  uStack_b8 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*param_1 == 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    uVar4 = NakamaServices__TryGetApi_2243784(&plStack_48);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
      lVar9 = 0;
      goto LAB_0234bb24;
    }
    uVar5 = NakamaServices__TryGetLeaderboard_224bf24(&plStack_50);
    plVar3 = plStack_48;
    uVar4 = 0;
    lVar9 = 0;
    if ((uVar5 & 1) == 0) goto LAB_0234bb24;
                    /* try { // try from 0234b9e0 to 0244b9f3 has its CatchHandler @ 0234baec */
    if (plStack_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0234bc34 with catch @ 0234bcb8 */
      FUN_021f06a0();
    }
    lVar9 = *plStack_48;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 0234b9f4 to 0244ba43 has its CatchHandler @ 0234b8ac */
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b5578) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_0234bb70;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plStack_48,*(long *)PTR_DAT_049b5578,5);
LAB_0234bb70:
    uVar8 = (*(code *)*puVar6)(plVar3,puVar6[1]);
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    thunk_FUN_021f190c();
    lVar9 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049b4540,1);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0234bc54 with catch @ 0234bcbc */
      FUN_021f06a0();
    }
    if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(param_1 + 10);
                    /* try { // try from 0234bbbc to 0244bbc7 has its CatchHandler @ 0234bca4 */
    thunk_FUN_021f190c();
    plVar3 = plStack_50;
    if (plStack_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar10 = *plStack_50;
    uVar8 = *(undefined8 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0xe);
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b5b20) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_0234bc24;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
                    /* try { // try from 0234bc04 to 0244bc0f has its CatchHandler @ 0234bca0 */
    puVar6 = (undefined8 *)FUN_02229a4c(plStack_50,*(long *)PTR_DAT_049b5b20,4);
LAB_0234bc24:
                    /* try { // try from 0234bc34 to 0244bc4f has its CatchHandler @ 0234bcb8 */
    lVar9 = (*(code *)*puVar6)(plVar3,uVar8,1,0,lVar9,uVar1,puVar6[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 0234bc54 to 0244bc77 has its CatchHandler @ 0234bcbc */
    uStack_58 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                          (lVar9,*(undefined8 *)PTR_DAT_049b5b48);
    uVar4 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                      (&uStack_58,*(undefined8 *)PTR_DAT_049b5b40);
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 0234bc78 to 0244bcd3 has its CatchHandler @ 0234bb28 */
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x12) = uStack_58;
      thunk_FUN_021f190c(param_1 + 0x12,0);
                    /* catch() { ... } // from try @ 0234bc04 with catch @ 0234bca0 */
                    /* catch() { ... } // from try @ 0234bbbc with catch @ 0234bca4 */
      FUN_0235bb44(param_1 + 2,&uStack_58,param_1,*(undefined8 *)PTR_DAT_049b5b18);
      return;
    }
  }
                    /* try { // try from 0234ba44 to 0244ba4b has its CatchHandler @ 0234bad4 */
  System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
            (&uStack_58,&lStack_38,*(undefined8 *)PTR_DAT_049b5b38);
  lVar9 = lStack_38;
  lVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b53b8);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar10,*(undefined8 *)PTR_DAT_049b53c0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = *(long *)(lVar9 + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (0 < *(int *)(lVar7 + 0x18)) {
                    /* try { // try from 0234baa0 to 0244baa3 has its CatchHandler @ 0234bac0 */
                    /* try { // try from 0234baa4 to 0244bb27 has its CatchHandler @ 0234b8ac */
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (lVar7,0,&lStack_38,*(undefined8 *)PTR_DAT_049b5b30);
    NakamaLeaderboardProvider__CreateLeaderboardEntry_224b7b0
              (&uStack_110,lStack_38,*(undefined8 *)(param_1 + 0x10));
                    /* catch() { ... } // from try @ 0234baa0 with catch @ 0234bac0 */
    uStack_98 = lStack_108;
    uStack_a0 = uStack_110;
    uStack_88 = uStack_f8;
    uStack_90 = uStack_100;
    uStack_78 = uStack_e8;
    uStack_80 = uStack_f0;
    uStack_68 = uStack_d8;
    uStack_70 = uStack_e0;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* catch() { ... } // from try @ 0234ba44 with catch @ 0234bad4 */
    uStack_148 = lStack_108;
    uStack_150 = uStack_110;
    uStack_138 = uStack_f8;
    uStack_140 = uStack_100;
    uStack_128 = uStack_e8;
    uStack_130 = uStack_f0;
                    /* catch() { ... } // from try @ 0234b9e0 with catch @ 0234baec */
    uStack_118 = uStack_d8;
    uStack_120 = uStack_e0;
                    /* catch() { ... } // from try @ 0234b94c with catch @ 0234baf0 */
    FUN_02333498(lVar10,&uStack_150,*(undefined8 *)PTR_DAT_049b53e0);
  }
  uStack_b0 = (ulong)*(uint *)(lVar9 + 0x20);
  lStack_a8 = lVar10;
  thunk_FUN_021f190c((ulong)&uStack_b0 | 8,lVar10);
  uVar4 = uStack_b0;
  lVar9 = lStack_a8;
LAB_0234bb24:
  puVar2 = PTR_DAT_049b54c8;
                    /* try { // try from 0234bb28 to 0244bbbb has its CatchHandler @ 0234bb28
                       catch() { ... } // from try @ 0234bb28 with catch @ 0234bb28
                       catch() { ... } // from try @ 0234bc78 with catch @ 0234bb28 */
  *param_1 = -2;
  uStack_110 = uVar4;
  lStack_108 = lVar9;
  FUN_0235bed4(param_1 + 2,&uStack_110,*(undefined8 *)puVar2);
  return;
}

