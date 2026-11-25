/* IL2CPP: RocketSystem.<HandleCoreStreak>d__23$$MoveNext
void RocketSystem__HandleCoreStreak_d__23__MoveNext (RocketSystem__HandleCoreStreak_d__23_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem.<HandleCoreStreak>d__23$$MoveNext
   void RocketSystem__HandleCoreStreak_d__23__MoveNext (RocketSystem__HandleCoreStreak_d__23_o
   __this, const MethodInfo* method); */

void RocketSystem__HandleCoreStreak_d__23__MoveNext_24bb8f4(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4bbb5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6e08);
    FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 025bb930 to 026bba57 has its CatchHandler @ 025bb930
                       catch() { ... } // from try @ 025bb930 with catch @ 025bb930
                       catch() { ... } // from try @ 025bbaf0 with catch @ 025bb930
                       catch() { ... } // from try @ 025bbb7c with catch @ 025bb930
                       catch() { ... } // from try @ 025bbc10 with catch @ 025bb930 */
    bRam0000000004f4bbb5 = 1;
  }
  puVar2 = PTR_DAT_049b54e0;
  puVar1 = PTR_DAT_049b5138;
  auStack_60 = ZEXT816(0);
  lVar10 = *(long *)(param_1 + 4);
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
    goto LAB_025bba90;
  }
  iVar4 = 0;
  param_1[7] = 0;
  do {
    if (param_1[6] <= iVar4) {
      *param_1 = -2;
      FUN_0235afc8(param_1 + 2,0);
      return;
    }
    if (0 < iVar4) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar11 = *(undefined8 *)(lVar10 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar13 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(0x154,0,8,uVar11,0,0);
      auStack_50 = auVar13;
      thunk_FUN_021f190c(auStack_50,0);
      uVar3 = auStack_50._8_8_;
      uVar11 = auStack_50._0_8_;
      auStack_60 = auStack_50;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      if ((long *)uVar11 != (long *)0x0) {
        lVar7 = *(long *)uVar11;
        lVar6 = *(long *)puVar2;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_025bba7c;
            }
            uVar8 = uVar8 - 1;
                    /* try { // try from 025bba58 to 026bba7f has its CatchHandler @ 025bbbdc */
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_02229a4c(uVar11,lVar6,0);
LAB_025bba7c:
        iVar4 = (*(code *)*puVar5)(uVar11,uVar3 & 0xffffffff,puVar5[1]);
        if (iVar4 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 8) = auStack_60;
          thunk_FUN_021f190c(param_1 + 8,0);
                    /* try { // try from 025bbb74 to 026bbb77 has its CatchHandler @ 025bbbd4 */
                    /* try { // try from 025bbb78 to 026bbb7b has its CatchHandler @ 025bbbd0 */
                    /* try { // try from 025bbb7c to 026bbbf7 has its CatchHandler @ 025bb930 */
          FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c6e08);
          return;
        }
      }
LAB_025bba90:
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar11 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_60._0_8_;
                    /* try { // try from 025bbabc to 026bbae7 has its CatchHandler @ 025bbbd8 */
        uVar12 = auStack_60._8_8_ & 0xffff;
        lVar6 = *(long *)puVar2;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_025bbb0c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
                    /* try { // try from 025bbae8 to 026bbaef has its CatchHandler @ 025bbbcc */
          } while (uVar8 != 0);
        }
                    /* try { // try from 025bbaf0 to 026bbb73 has its CatchHandler @ 025bb930 */
        puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,lVar6,2);
LAB_025bbb0c:
        (*(code *)*puVar5)(uVar11,uVar12,puVar5[1]);
      }
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    RocketSystem__Fire_24b89dc(lVar10,0);
    iVar4 = param_1[7] + 1;
    param_1[7] = iVar4;
  } while( true );
}

