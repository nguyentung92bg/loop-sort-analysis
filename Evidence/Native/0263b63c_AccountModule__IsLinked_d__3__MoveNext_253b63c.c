/* IL2CPP: AccountModule.<IsLinked>d__3$$MoveNext
void AccountModule__IsLinked_d__3__MoveNext (AccountModule__IsLinked_d__3_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AccountModule.<IsLinked>d__3$$MoveNext
   void AccountModule__IsLinked_d__3__MoveNext (AccountModule__IsLinked_d__3_o __this, const
   MethodInfo* method); */

void AccountModule__IsLinked_d__3__MoveNext_253b63c(int *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  char cStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  byte abStack_24 [4];
  
                    /* try { // try from 0263b63c to 0273b647 has its CatchHandler @ 0263b7b4 */
                    /* try { // try from 0263b648 to 0273b6f3 has its CatchHandler @ 0263b41c */
  if ((bRam0000000004f4bf87 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca3d8);
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049c4768);
    FUN_021f03f8(PTR_DAT_049c4770);
    FUN_021f03f8(PTR_DAT_049ca3e0);
    FUN_021f03f8(PTR_DAT_049b52a8);
    FUN_021f03f8(PTR_DAT_049c4778);
    bRam0000000004f4bf87 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  auVar1 = ZEXT816(0);
  if (*param_1 == 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 0xe);
                    /* try { // try from 0263b738 to 0273b76b has its CatchHandler @ 0263b41c */
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    iVar3 = param_1[8];
    lVar7 = *(long *)(param_1 + 10);
    if (iVar3 == 0) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(*(long *)PTR_DAT_049b52a8 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 0263b76c to 0273b76f has its CatchHandler @ 0263b794 */
      abStack_24[0] = PlayerPrefsBool__get_Value_3f0e6dc(lVar7 + 0x20,0);
                    /* try { // try from 0263b770 to 0273b773 has its CatchHandler @ 0263b7b0 */
      goto LAB_0263b838;
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar8 = *(long **)(lVar7 + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = *plVar8;
    uVar10 = *(undefined8 *)(param_1 + 0xc);
                    /* try { // try from 0263b6f4 to 0273b703 has its CatchHandler @ 0263b77c */
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049ca3e0) {
                    /* catch() { ... } // from try @ 0263b728 with catch @ 0263b774
                       try { // try from 0263b774 to 0273b7cb has its CatchHandler @ 0263b41c */
                    /* catch() { ... } // from try @ 0263b59c with catch @ 0263b778 */
                    /* catch() { ... } // from try @ 0263b6f4 with catch @ 0263b77c */
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0263b780;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 0263b728 to 0273b737 has its CatchHandler @ 0263b774 */
    puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049ca3e0,0);
LAB_0263b780:
                    /* catch() { ... } // from try @ 0263b570 with catch @ 0263b780 */
                    /* catch() { ... } // from try @ 0263b55c with catch @ 0263b784 */
                    /* catch() { ... } // from try @ 0263b558 with catch @ 0263b788 */
                    /* catch() { ... } // from try @ 0263b52c with catch @ 0263b78c */
                    /* catch() { ... } // from try @ 0263b508 with catch @ 0263b790 */
    auStack_60 = (*(code *)*puVar4)(plVar8,iVar3,uVar10,puVar4[1]);
                    /* catch() { ... } // from try @ 0263b76c with catch @ 0263b794 */
                    /* catch() { ... } // from try @ 0263b62c with catch @ 0263b798 */
                    /* catch() { ... } // from try @ 0263b618 with catch @ 0263b79c */
                    /* catch() { ... } // from try @ 0263b614 with catch @ 0263b7a0 */
                    /* catch() { ... } // from try @ 0263b5ec with catch @ 0263b7a4 */
                    /* catch() { ... } // from try @ 0263b5c4 with catch @ 0263b7a8 */
                    /* catch() { ... } // from try @ 0263b4ec with catch @ 0263b7ac */
    FUN_0235b0c0(auStack_60,&cStack_40,*(undefined8 *)PTR_DAT_049c4778);
                    /* catch() { ... } // from try @ 0263b4d8 with catch @ 0263b7b0
                       catch() { ... } // from try @ 0263b770 with catch @ 0263b7b0 */
                    /* catch() { ... } // from try @ 0263b580 with catch @ 0263b7b4
                       catch() { ... } // from try @ 0263b63c with catch @ 0263b7b4 */
    uStack_50 = CONCAT71(uStack_3f,cStack_40);
    lVar9 = *(long *)PTR_DAT_049c4770;
    uStack_48 = uStack_38;
    lVar7 = *(long *)(lVar9 + 0x20);
                    /* try { // try from 0263b7cc to 0273b7e3 has its CatchHandler @ 0263b854 */
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02229718();
    }
                    /* try { // try from 0263b7e4 to 0273b843 has its CatchHandler @ 0263b41c */
    uVar10 = thunk_FUN_0224e54c(&uStack_50,
                                *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80));
    lVar7 = *(long *)(lVar9 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    iVar3 = FUN_0235b2a0(uVar10,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18));
    auVar1 = auStack_60;
    if (iVar3 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      *(undefined8 *)(param_1 + 0xe) = uStack_50;
      thunk_FUN_021f190c(param_1 + 0xe,0);
      FUN_0235bb44(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049ca3d8);
      return;
    }
  }
  auStack_60 = auVar1;
  FUN_0235b3fc(&uStack_50,&cStack_40,*(undefined8 *)PTR_DAT_049c4768);
  abStack_24[0] = cStack_40 != '\0';
LAB_0263b838:
  puVar2 = PTR_DAT_049b5570;
                    /* try { // try from 0263b844 to 0273b853 has its CatchHandler @ 0263b854 */
  *param_1 = -2;
  abStack_24[0] = abStack_24[0] & 1;
                    /* catch() { ... } // from try @ 0263b7cc with catch @ 0263b854
                       catch() { ... } // from try @ 0263b844 with catch @ 0263b854 */
                    /* try { // try from 0263b858 to 0273b85b has its CatchHandler @ 0263b864 */
                    /* try { // try from 0263b85c to 0273b867 has its CatchHandler @ 0263b41c */
  FUN_0235bed4(param_1 + 2,abStack_24,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 0263b858 with catch @ 0263b864 */
  return;
}

