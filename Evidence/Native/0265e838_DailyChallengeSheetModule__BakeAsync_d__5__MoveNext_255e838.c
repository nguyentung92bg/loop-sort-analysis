/* IL2CPP: DailyChallengeSheetModule.<BakeAsync>d__5$$MoveNext
void DailyChallengeSheetModule__BakeAsync_d__5__MoveNext (DailyChallengeSheetModule__BakeAsync_d__5_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallengeSheetModule.<BakeAsync>d__5$$MoveNext
   void DailyChallengeSheetModule__BakeAsync_d__5__MoveNext
   (DailyChallengeSheetModule__BakeAsync_d__5_o __this, const MethodInfo* method); */

void DailyChallengeSheetModule__BakeAsync_d__5__MoveNext_255e838(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 uStack_38;
  char acStack_24 [4];
  
                    /* try { // try from 0265e848 to 0275e887 has its CatchHandler @ 0265ece8 */
  if ((bRam0000000004f4c103 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb7e0);
    FUN_021f03f8(PTR_DAT_049cb7e8);
    FUN_021f03f8(PTR_DAT_049cb7f0);
    FUN_021f03f8(PTR_DAT_049cb7f8);
    FUN_021f03f8(PTR_DAT_049b3c58);
                    /* try { // try from 0265e898 to 0275e8a3 has its CatchHandler @ 0265ebb8 */
    FUN_021f03f8(PTR_DAT_049b45f8);
    FUN_021f03f8(PTR_DAT_049b45f0);
    FUN_021f03f8(PTR_DAT_049cb800);
    FUN_021f03f8(PTR_DAT_049cb808);
                    /* try { // try from 0265e8c4 to 0275e8cf has its CatchHandler @ 0265eb7c */
    FUN_021f03f8(PTR_DAT_049b5580);
    FUN_021f03f8(PTR_DAT_049b5588);
                    /* try { // try from 0265e8e0 to 0275e8eb has its CatchHandler @ 0265eb78 */
    FUN_021f03f8(PTR_DAT_049b5590);
    FUN_021f03f8(PTR_DAT_049bba60);
    FUN_021f03f8(PTR_DAT_049cb810);
    FUN_021f03f8(PTR_DAT_049cb818);
                    /* try { // try from 0265e90c to 0275e94b has its CatchHandler @ 0265ebbc */
    bRam0000000004f4c103 = 1;
  }
  uStack_38 = 0;
  if (*param_1 == 0) {
                    /* try { // try from 0265eab0 to 0275ead3 has its CatchHandler @ 0265eba0 */
    uStack_38 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_0265eac4:
    System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
              (&uStack_38,acStack_24,*(undefined8 *)PTR_DAT_049b5580);
    if (acStack_24[0] == '\0') {
                    /* try { // try from 0265eaec to 0275eb0b has its CatchHandler @ 0265eb88 */
      if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 0265eb0c to 0275eb33 has its CatchHandler @ 0265e6a4 */
      UnityEngine_Debug__LogError_3bd1230(*(undefined8 *)PTR_DAT_049cb818,0);
      piVar8 = param_1 + 8;
      piVar8[0] = 0;
      piVar8[1] = 0;
      thunk_FUN_021f190c(piVar8,0);
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 8);
    }
    puVar1 = PTR_DAT_049cb7e8;
                    /* try { // try from 0265eb34 to 0275eb3b has its CatchHandler @ 0265ecf8 */
    *param_1 = -2;
                    /* try { // try from 0265eb3c to 0275eb3f has its CatchHandler @ 0265eba8 */
                    /* try { // try from 0265eb40 to 0275eb43 has its CatchHandler @ 0265eba4 */
                    /* try { // try from 0265eb44 to 0275eb47 has its CatchHandler @ 0265ecf4 */
    FUN_0235bed4(param_1 + 2,uVar2,*(undefined8 *)puVar1);
                    /* try { // try from 0265eb48 to 0275eb4b has its CatchHandler @ 0265eb98 */
                    /* try { // try from 0265eb4c to 0275eb4f has its CatchHandler @ 0265eb94 */
                    /* try { // try from 0265eb50 to 0275eb53 has its CatchHandler @ 0265eb84 */
                    /* try { // try from 0265eb54 to 0275eb57 has its CatchHandler @ 0265eb80 */
                    /* try { // try from 0265eb58 to 0275eb5b has its CatchHandler @ 0265eb74 */
    return;
  }
  uVar2 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049bba60);
  Cathei_BakingSheet_Unity_UnityLogger___ctor_22ed0f0(uVar2,0);
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb7f8);
                    /* try { // try from 0265e95c to 0275e967 has its CatchHandler @ 0265ebb4 */
  Cathei_BakingSheet_SheetContainerBase___ctor_22dd9f0(lVar3,uVar2,0);
  plVar5 = (long *)(param_1 + 8);
  *plVar5 = lVar3;
  thunk_FUN_021f190c(plVar5,lVar3);
  uVar2 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b45f0);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar2,*(undefined8 *)PTR_DAT_049b45f8);
                    /* try { // try from 0265e99c to 0275e9a7 has its CatchHandler @ 0265eb70 */
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb7f0);
                    /* try { // try from 0265e9b4 to 0275e9c3 has its CatchHandler @ 0265eb6c */
  CustomFileSystem___ctor_255d658(uVar4,uVar2,0);
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb808);
                    /* try { // try from 0265e9dc to 0275e9e7 has its CatchHandler @ 0265eb68 */
  Cathei_BakingSheet_JsonSheetConverter___ctor_22edc58
            (lVar3,*(undefined8 *)PTR_DAT_049cb810,uVar4,0);
  lVar9 = *plVar5;
                    /* try { // try from 0265e9f4 to 0275ea03 has its CatchHandler @ 0265eb64 */
  plVar5 = (long *)FUN_021f04e4(*(undefined8 *)PTR_DAT_049cb800,1);
  if (plVar5 != (long *)0x0) {
    if ((lVar3 != 0) &&
       (lVar6 = thunk_FUN_0222c938(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
                    /* catch() { ... } // from try @ 0265e9dc with catch @ 0265eb68 */
      uVar2 = thunk_FUN_0223a53c();
                    /* catch() { ... } // from try @ 0265e9b4 with catch @ 0265eb6c */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0265e99c with catch @ 0265eb70 */
      FUN_021f0564(uVar2,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0265eb60 to 0275eb63 has its CatchHandler @ 0265eb9c */
      FUN_021f06a8();
    }
                    /* try { // try from 0265ea28 to 0275ea3f has its CatchHandler @ 0265ecf8 */
    plVar5[4] = lVar3;
    thunk_FUN_021f190c(plVar5 + 4,lVar3);
    if (lVar9 != 0) {
      lVar3 = Cathei_BakingSheet_SheetContainerBase__Bake_22dddcc(lVar9,plVar5,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0265e9f4 with catch @ 0265eb64
                       try { // try from 0265eb64 to 0275ebd7 has its CatchHandler @ 0265e6a4 */
        FUN_021f06a0();
      }
      uStack_38 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                            (lVar3,*(undefined8 *)PTR_DAT_049b5590);
      uVar7 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                        (&uStack_38,*(undefined8 *)PTR_DAT_049b5588);
      if ((uVar7 & 1) == 0) {
                    /* try { // try from 0265ea80 to 0275eaa3 has its CatchHandler @ 0265eb9c */
        *param_1 = 0;
        *(undefined8 *)(param_1 + 10) = uStack_38;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235bb44(param_1 + 2,&uStack_38,param_1,*(undefined8 *)PTR_DAT_049cb7e0);
        return;
      }
      goto LAB_0265eac4;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0265eb5c to 0275eb5f has its CatchHandler @ 0265eba0 */
  FUN_021f06a0();
}

