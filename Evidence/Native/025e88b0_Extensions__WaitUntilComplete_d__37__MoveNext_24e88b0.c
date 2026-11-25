/* IL2CPP: Extensions.<WaitUntilComplete>d__37$$MoveNext
void Extensions__WaitUntilComplete_d__37__MoveNext (Extensions__WaitUntilComplete_d__37_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions.<WaitUntilComplete>d__37$$MoveNext
   void Extensions__WaitUntilComplete_d__37__MoveNext (Extensions__WaitUntilComplete_d__37_o __this,
   const MethodInfo* method); */

void Extensions__WaitUntilComplete_d__37__MoveNext_24e88b0(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4bca6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7ef8);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bca6 = 1;
  }
  puVar2 = PTR_DAT_049b54e0;
  puVar1 = PTR_DAT_049b5138;
  auStack_60 = ZEXT816(0);
  if (*param_1 != 0) goto LAB_025e89b4;
  auStack_60 = *(undefined1 (*) [16])(param_1 + 10);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = -1;
  do {
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar12 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar8 = *(long *)auStack_60._0_8_;
      uVar13 = auStack_60._8_8_ & 0xffff;
      lVar7 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
                    /* try { // try from 025e896c to 026e89f3 has its CatchHandler @ 025e8f90 */
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_025e89a4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,lVar7,2);
LAB_025e89a4:
      (*(code *)*puVar6)(uVar12,uVar13,puVar6[1]);
    }
LAB_025e89b4:
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar9 = Spine_TrackEntry__get_IsComplete_32d515c(*(long *)(param_1 + 8),0);
    cVar3 = cRam0000000004f49bfa;
    if ((uVar9 & 1) != 0) {
                    /* try { // try from 025e8b04 to 026e8b2f has its CatchHandler @ 025e8f88 */
      *param_1 = -2;
      if (cVar3 == '\0') {
        FUN_021f03f8(PTR_DAT_049b56d0);
        cRam0000000004f49bfa = '\x01';
      }
      plVar11 = *(long **)(param_1 + 2);
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_025e8b64;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    uVar12 = *(undefined8 *)(param_1 + 6);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar14 = Cysharp_Threading_Tasks_UniTask__Yield_37c83ac(8,uVar12,0,0);
    auStack_50 = auVar14;
    thunk_FUN_021f190c(auStack_50,0);
    uVar4 = auStack_50._8_8_;
    uVar12 = auStack_50._0_8_;
                    /* try { // try from 025e8a00 to 026e8a07 has its CatchHandler @ 025e8f84 */
    auStack_60 = auStack_50;
    if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 025e8a1c to 026e8a27 has its CatchHandler @ 025e8f3c */
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 025e8a34 to 026e8a3b has its CatchHandler @ 025e8f38 */
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar12 != (long *)0x0) {
      lVar8 = *(long *)uVar12;
      lVar7 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
                    /* try { // try from 025e8a7c to 026e8aab has its CatchHandler @ 025e8f8c */
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_025e8ab0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(uVar12,lVar7,0);
LAB_025e8ab0:
                    /* try { // try from 025e8abc to 026e8ac3 has its CatchHandler @ 025e8f34 */
      iVar5 = (*(code *)*puVar6)(uVar12,uVar4 & 0xffffffff,puVar6[1]);
      if (iVar5 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_60;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c25c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c7ef8);
        return;
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
                    /* try { // try from 025e8b54 to 026e8b5b has its CatchHandler @ 025e8f6c */
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b56d0) {
      puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
      goto LAB_025e8b84;
    }
  }
LAB_025e8b64:
  puVar6 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049b56d0,2);
LAB_025e8b84:
                    /* try { // try from 025e8b84 to 026e8b8b has its CatchHandler @ 025e8f78 */
                    /* try { // try from 025e8b8c to 026e8ce3 has its CatchHandler @ 025e7c10 */
  (*(code *)*puVar6)(plVar11,puVar6[1]);
  return;
}

