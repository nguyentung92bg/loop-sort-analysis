/* IL2CPP: PointerHoldElement.<HandleListeners>d__3$$MoveNext
void PointerHoldElement__HandleListeners_d__3__MoveNext (PointerHoldElement__HandleListeners_d__3_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PointerHoldElement.<HandleListeners>d__3$$MoveNext
   void PointerHoldElement__HandleListeners_d__3__MoveNext
   (PointerHoldElement__HandleListeners_d__3_o __this, const MethodInfo* method); */

void PointerHoldElement__HandleListeners_d__3__MoveNext_241d448(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined4 uStack_38;
  int iStack_34;
  
  if ((bRam0000000004f4b761 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f28);
    FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 0251d484 to 0261d48b has its CatchHandler @ 0251d658 */
    bRam0000000004f4b761 = 1;
  }
  puVar1 = PTR_DAT_049b5138;
  lVar11 = *(long *)(param_1 + 4);
  uStack_38 = 0;
  iStack_34 = 0;
  if (*param_1 == 0) {
    iStack_34 = param_1[10];
    param_1[10] = 0;
    *param_1 = -1;
    uStack_38 = 0;
    goto LAB_0251d554;
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar11 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 0251d4b4 to 0261d4e3 has its CatchHandler @ 0251d6a4 */
  auVar12 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__get_Task_37c1658
                      (*(long *)(lVar11 + 0x20),0);
  *(undefined1 (*) [16])(param_1 + 6) = auVar12;
  thunk_FUN_021f190c((undefined1 (*) [16])(param_1 + 6),0);
  while( true ) {
                    /* try { // try from 0251d560 to 0261d563 has its CatchHandler @ 0251d610 */
                    /* try { // try from 0251d564 to 0261d567 has its CatchHandler @ 0251d5f0 */
                    /* try { // try from 0251d568 to 0261d56b has its CatchHandler @ 0251d5ec */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0251d56c to 0261d56f has its CatchHandler @ 0251d5e8 */
      FUN_021f0574();
    }
                    /* try { // try from 0251d570 to 0261d573 has its CatchHandler @ 0251d5e4 */
                    /* try { // try from 0251d574 to 0261d577 has its CatchHandler @ 0251d5d8 */
                    /* try { // try from 0251d578 to 0261d57b has its CatchHandler @ 0251d5d4 */
    if (cRam0000000004f49bf5 == '\0') {
                    /* try { // try from 0251d57c to 0261d57f has its CatchHandler @ 0251d5d0 */
                    /* try { // try from 0251d580 to 0261d583 has its CatchHandler @ 0251d5cc */
                    /* try { // try from 0251d584 to 0261d587 has its CatchHandler @ 0251d6a8 */
      FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 0251d588 to 0261d58b has its CatchHandler @ 0251d65c */
                    /* try { // try from 0251d58c to 0261d593 has its CatchHandler @ 0251d60c */
      cRam0000000004f49bf5 = '\x01';
    }
    plVar10 = *(long **)(param_1 + 6);
                    /* try { // try from 0251d594 to 0261d597 has its CatchHandler @ 0251d608 */
    if (plVar10 == (long *)0x0) break;
                    /* try { // try from 0251d598 to 0261d59b has its CatchHandler @ 0251d6a4 */
                    /* try { // try from 0251d59c to 0261d59f has its CatchHandler @ 0251d604 */
    lVar7 = *plVar10;
                    /* catch() { ... } // from try @ 0251d2f0 with catch @ 0251d5a0 */
    iVar4 = param_1[8];
                    /* try { // try from 0251d5a8 to 0261d5af has its CatchHandler @ 0251d730 */
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 0251d5b0 to 0261d637 has its CatchHandler @ 0251cfe4 */
    if (uVar8 != 0) {
                    /* catch() { ... } // from try @ 0251d3b4 with catch @ 0251d5b4 */
                    /* catch() { ... } // from try @ 0251d3a4 with catch @ 0251d5b8 */
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 0251d38c with catch @ 0251d5bc */
                    /* catch() { ... } // from try @ 0251d1bc with catch @ 0251d5c0 */
                    /* catch() { ... } // from try @ 0251d380 with catch @ 0251d5c4 */
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* catch() { ... } // from try @ 0251d570 with catch @ 0251d5e4 */
                    /* catch() { ... } // from try @ 0251d56c with catch @ 0251d5e8 */
                    /* catch() { ... } // from try @ 0251d568 with catch @ 0251d5ec */
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0251d5f0;
        }
                    /* catch() { ... } // from try @ 0251d1b4 with catch @ 0251d5c8 */
        uVar8 = uVar8 - 1;
                    /* catch() { ... } // from try @ 0251d580 with catch @ 0251d5cc */
        piVar9 = piVar9 + 4;
                    /* catch() { ... } // from try @ 0251d57c with catch @ 0251d5d0 */
      } while (uVar8 != 0);
    }
                    /* catch() { ... } // from try @ 0251d578 with catch @ 0251d5d4 */
                    /* catch() { ... } // from try @ 0251d574 with catch @ 0251d5d8 */
                    /* catch() { ... } // from try @ 0251d360 with catch @ 0251d5dc */
    puVar5 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b54e0,0);
                    /* catch() { ... } // from try @ 0251d194 with catch @ 0251d5e0 */
LAB_0251d5f0:
                    /* catch() { ... } // from try @ 0251d564 with catch @ 0251d5f0 */
                    /* catch() { ... } // from try @ 0251d558 with catch @ 0251d5f4 */
                    /* catch() { ... } // from try @ 0251d554 with catch @ 0251d5f8 */
                    /* catch() { ... } // from try @ 0251d548 with catch @ 0251d5fc */
    iVar4 = (*(code *)*puVar5)(plVar10,(short)iVar4,puVar5[1]);
                    /* catch() { ... } // from try @ 0251d544 with catch @ 0251d600 */
    if (iVar4 != 0) break;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0251d3b8 with catch @ 0251d65c
                       catch() { ... } // from try @ 0251d588 with catch @ 0251d65c */
      FUN_021f06a0();
    }
                    /* try { // try from 0251d500 to 0261d503 has its CatchHandler @ 0251d604 */
    lVar7 = *(long *)(lVar11 + 0x30);
                    /* try { // try from 0251d504 to 0261d52b has its CatchHandler @ 0251cfe4 */
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 0251d52c to 0261d533 has its CatchHandler @ 0251d6b8 */
    uVar3 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
    _uStack_38 = CONCAT44(iStack_34,uVar3);
                    /* try { // try from 0251d534 to 0261d537 has its CatchHandler @ 0251cfe4 */
                    /* try { // try from 0251d538 to 0261d53b has its CatchHandler @ 0251d6a8 */
                    /* try { // try from 0251d53c to 0261d53f has its CatchHandler @ 0251d6a4 */
    iVar4 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_38,0);
                    /* try { // try from 0251d540 to 0261d543 has its CatchHandler @ 0251d658 */
                    /* try { // try from 0251d544 to 0261d547 has its CatchHandler @ 0251d600 */
    iStack_34 = iVar4;
                    /* try { // try from 0251d548 to 0261d54b has its CatchHandler @ 0251d5fc */
                    /* try { // try from 0251d54c to 0261d54f has its CatchHandler @ 0251d654 */
    uVar8 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c(&iStack_34,0);
    puVar2 = PTR_DAT_049c2f28;
                    /* try { // try from 0251d550 to 0261d553 has its CatchHandler @ 0251d618 */
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      uVar6 = *(undefined8 *)puVar2;
      param_1[10] = iStack_34;
                    /* try { // try from 0251d638 to 0261d63b has its CatchHandler @ 0251d640 */
                    /* catch() { ... } // from try @ 0251d638 with catch @ 0251d640 */
      FUN_0235c420(param_1 + 2,&iStack_34,param_1,uVar6);
                    /* try { // try from 0251d648 to 0261d64f has its CatchHandler @ 0251d730 */
                    /* try { // try from 0251d650 to 0261d67b has its CatchHandler @ 0251cfe4 */
                    /* catch() { ... } // from try @ 0251d158 with catch @ 0251d654
                       catch() { ... } // from try @ 0251d54c with catch @ 0251d654 */
                    /* catch() { ... } // from try @ 0251d484 with catch @ 0251d658
                       catch() { ... } // from try @ 0251d540 with catch @ 0251d658 */
      return;
    }
LAB_0251d554:
                    /* try { // try from 0251d554 to 0261d557 has its CatchHandler @ 0251d5f8 */
                    /* try { // try from 0251d558 to 0261d55b has its CatchHandler @ 0251d5f4 */
                    /* try { // try from 0251d55c to 0261d55f has its CatchHandler @ 0251d614 */
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_34,0);
  }
                    /* catch() { ... } // from try @ 0251d500 with catch @ 0251d604
                       catch() { ... } // from try @ 0251d59c with catch @ 0251d604 */
                    /* catch() { ... } // from try @ 0251d3e4 with catch @ 0251d608
                       catch() { ... } // from try @ 0251d594 with catch @ 0251d608 */
                    /* catch() { ... } // from try @ 0251d404 with catch @ 0251d60c
                       catch() { ... } // from try @ 0251d58c with catch @ 0251d60c */
                    /* catch() { ... } // from try @ 0251d340 with catch @ 0251d610
                       catch() { ... } // from try @ 0251d560 with catch @ 0251d610 */
  *param_1 = -2;
                    /* catch() { ... } // from try @ 0251d174 with catch @ 0251d614
                       catch() { ... } // from try @ 0251d55c with catch @ 0251d614 */
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
                    /* catch() { ... } // from try @ 0251d324 with catch @ 0251d618
                       catch() { ... } // from try @ 0251d550 with catch @ 0251d618 */
  FUN_0235afc8(param_1 + 2,0);
  return;
}

