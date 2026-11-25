/* IL2CPP: NakamaBootstrapper.<TryAutoMergeAccountsAsync>d__24$$MoveNext
void NakamaBootstrapper__TryAutoMergeAccountsAsync_d__24__MoveNext (NakamaBootstrapper__TryAutoMergeAccountsAsync_d__24_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaBootstrapper.<TryAutoMergeAccountsAsync>d__24$$MoveNext
   void NakamaBootstrapper__TryAutoMergeAccountsAsync_d__24__MoveNext
   (NakamaBootstrapper__TryAutoMergeAccountsAsync_d__24_o __this, const MethodInfo* method); */

void NakamaBootstrapper__TryAutoMergeAccountsAsync_d__24__MoveNext_2246b88(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_ac [4];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000004f49b49 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b57d8);
    FUN_021f03f8(PTR_DAT_049b57e0);
    FUN_021f03f8(PTR_DAT_049b57e8);
    FUN_021f03f8(PTR_DAT_049b57f0);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b5578);
    FUN_021f03f8(PTR_DAT_049b57f8);
    FUN_021f03f8(PTR_DAT_049b54a0);
    FUN_021f03f8(PTR_DAT_049b5800);
    FUN_021f03f8(PTR_DAT_049b5808);
    FUN_021f03f8(PTR_DAT_049b5810);
    FUN_021f03f8(PTR_DAT_049b5818);
    FUN_021f03f8(PTR_DAT_049b5820);
    bRam0000000004f49b49 = 1;
  }
  puVar2 = PTR_DAT_049b54a0;
  puVar1 = PTR_DAT_049b3c58;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  if (*param_1 == 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0xe);
    uStack_58 = *(undefined8 *)(param_1 + 0xc);
    uStack_60 = *(undefined8 *)(param_1 + 10);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    lVar5 = *(long *)PTR_DAT_049b54a0;
    lVar12 = *(long *)(param_1 + 6);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar2;
    }
    uVar6 = System_String__Concat_2f72b28
                      (*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8),*(undefined8 *)PTR_DAT_049b5818,
                       0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    UnityEngine_Debug__Log_3bd0be4(uVar6,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar11 = *(long **)(lVar12 + 0x20);
    uVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b57f8);
    System_Object___ctor_3142338(uVar6,0);
    if (*(long *)(lVar12 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar13 = *(undefined8 *)(param_1 + 8);
    uVar7 = System_Threading_CancellationTokenSource__get_Token_31655c4(*(long *)(lVar12 + 0x28),0);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b5578) {
          puVar8 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0x34) * 0x10 + 0x138);
          goto LAB_02346d8c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049b5578,0x34);
LAB_02346d8c:
    uVar6 = (*(code *)*puVar8)(plVar11,uVar6,uVar13,uVar7,puVar8[1]);
    Cysharp_Threading_Tasks_UniTaskExtensions__AsUniTask___Il2CppFullySharedGenericType__2718b10
              (uVar6,1,&uStack_a8,*(undefined8 *)PTR_DAT_049b5800);
    uStack_80 = CONCAT44(uStack_a4,uStack_a8);
    uStack_78 = uStack_a0;
    uStack_70 = uStack_98;
    FUN_0235b0c0(&uStack_80,&uStack_a8,*(undefined8 *)PTR_DAT_049b5808);
    uStack_60 = CONCAT44(uStack_a4,uStack_a8);
    lVar12 = *(long *)PTR_DAT_049b57f0;
    uStack_58 = uStack_a0;
    uStack_50 = uStack_98;
    lVar5 = *(long *)(lVar12 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    uVar6 = thunk_FUN_0224e54c(&uStack_60,
                               *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80));
    lVar5 = *(long *)(lVar12 + 0x20);
                    /* try { // try from 02346e30 to 02446e63 has its CatchHandler @ 02346e30
                       catch() { ... } // from try @ 02346e30 with catch @ 02346e30
                       catch() { ... } // from try @ 02346e74 with catch @ 02346e30 */
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    iVar4 = FUN_0235b2a0(uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
    if (iVar4 == 0) {
      *param_1 = 0;
                    /* try { // try from 02346fc0 to 0244700b has its CatchHandler @ 02346fc0
                       catch() { ... } // from try @ 02346fc0 with catch @ 02346fc0
                       catch() { ... } // from try @ 02347018 with catch @ 02346fc0
                       catch() { ... } // from try @ 02347058 with catch @ 02346fc0 */
      *(undefined8 *)(param_1 + 0xc) = uStack_58;
      *(undefined8 *)(param_1 + 10) = uStack_60;
      *(undefined8 *)(param_1 + 0xe) = uStack_50;
      thunk_FUN_021f190c(param_1 + 10,0);
      FUN_0235c25c(param_1 + 2,&uStack_60,param_1,*(undefined8 *)PTR_DAT_049b57e0);
      return;
    }
  }
                    /* try { // try from 02346e64 to 02446e73 has its CatchHandler @ 02346e84 */
  FUN_0235b3fc(&uStack_60,&uStack_a8,*(undefined8 *)PTR_DAT_049b57e8);
  lVar12 = *(long *)puVar2;
  lVar5 = CONCAT44(uStack_a4,uStack_a8);
                    /* try { // try from 02346e74 to 02446e97 has its CatchHandler @ 02346e30 */
  if (*(int *)(lVar12 + 0xe4) == 0) {
    FUN_021f0574();
    lVar12 = *(long *)puVar2;
  }
                    /* catch() { ... } // from try @ 02346e64 with catch @ 02346e84 */
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auStack_ac[0] = *(undefined1 *)(lVar5 + 0x10);
  uVar13 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8);
  uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x28),auStack_ac);
                    /* try { // try from 02346eac to 02446eaf has its CatchHandler @ 02346eb8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02346eac with catch @ 02346eb8
                        */
  uStack_a8 = *(undefined4 *)(lVar5 + 0x14);
                    /* catch() { ... } // from try @ 02346ee8 with catch @ 02346ebc */
  uVar7 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049b57d8,&uStack_a8);
                    /* try { // try from 02346ed4 to 02446ee7 has its CatchHandler @ 02346f18 */
                    /* try { // try from 02346ee8 to 02446f2b has its CatchHandler @ 02346ebc */
  uVar6 = System_String__Format_2f7dff0(*(undefined8 *)PTR_DAT_049b5820,uVar13,uVar6,uVar7,0);
  uVar7 = System_String__Format_2f7dfac
                    (*(undefined8 *)PTR_DAT_049b5810,*(undefined8 *)(lVar5 + 0x18),
                     *(undefined8 *)(lVar5 + 0x28),0);
                    /* catch() { ... } // from try @ 02346ed4 with catch @ 02346f18 */
  uVar6 = System_String__Concat_2f72b28(uVar6,uVar7,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_Debug__Log_3bd0be4(uVar6,0);
  cVar3 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar3 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar11 = *(long **)(param_1 + 2);
  if (plVar11 != (long *)0x0) {
    lVar5 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
                    /* try { // try from 02346f88 to 02446f8b has its CatchHandler @ 02346f94 */
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02346f88 with catch @ 02346f94
                        */
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar8 = (undefined8 *)(lVar5 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_02347004;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049b56d0,2);
LAB_02347004:
                    /* try { // try from 0234700c to 02447017 has its CatchHandler @ 02347098 */
    (*(code *)*puVar8)(plVar11,puVar8[1]);
  }
                    /* try { // try from 02347018 to 0244704b has its CatchHandler @ 02346fc0 */
  return;
}

