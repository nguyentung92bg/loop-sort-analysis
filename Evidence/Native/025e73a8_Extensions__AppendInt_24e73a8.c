/* IL2CPP: Extensions$$AppendInt
void Extensions__AppendInt (int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$AppendInt
   void Extensions__AppendInt (int32_t value, const MethodInfo* method); */

void Extensions__AppendInt_24e73a8(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar9;
  uint uVar10;
  undefined *puVar8;
  
  puVar8 = PTR_DAT_049b6110;
                    /* try { // try from 025e73bc to 026e73c3 has its CatchHandler @ 025e77f4 */
  if ((bRam0000000004f4bc97 & 1) == 0) {
                    /* try { // try from 025e73d4 to 026e73d7 has its CatchHandler @ 025e77e0 */
    FUN_021f03f8(PTR_DAT_049b6110);
                    /* try { // try from 025e73d8 to 026e73e7 has its CatchHandler @ 025e77fc */
    bRam0000000004f4bc97 = 1;
  }
  lVar4 = *(long *)puVar8;
  if ((int)param_1 < 1) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar8;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar4 != 0) {
      lVar9 = *(long *)(lVar4 + 0x10);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0(lVar4,0x30,0);
      }
      uVar2 = *(uint *)(lVar4 + 0x20);
      uVar10 = *(uint *)(lVar9 + 0x18);
      if ((int)uVar2 < (int)uVar10) {
        *(uint *)(lVar4 + 0x20) = uVar2 + 1;
        if (uVar10 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        *(undefined2 *)(lVar9 + (long)(int)uVar2 * 2 + 0x20) = 0x30;
      }
      else {
        System_Text_StringBuilder__Append_2f8bca0(lVar4,0x30,1);
      }
      return;
    }
LAB_025e74dc:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar8;
  }
                    /* try { // try from 025e73fc to 026e73ff has its CatchHandler @ 025e77d8 */
  lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar9 == 0) goto LAB_025e74dc;
  uVar10 = *(uint *)(lVar9 + 0x18);
                    /* try { // try from 025e740c to 026e7413 has its CatchHandler @ 025e77e4 */
                    /* try { // try from 025e7414 to 026e77c3 has its CatchHandler @ 025e7118 */
  do {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar8;
    }
    lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
    if (lVar9 == 0) goto LAB_025e74dc;
    uVar10 = uVar10 - 1;
    if (*(uint *)(lVar9 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    *(ushort *)(lVar9 + (long)(int)uVar10 * 2 + 0x20) =
         (short)param_1 + (short)(param_1 / 10) * -10 | 0x30;
    bVar1 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar1);
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar8;
  }
  lVar9 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if ((lVar9 == 0) || (lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10), lVar4 == 0))
  goto LAB_025e74dc;
  iVar3 = *(int *)(lVar9 + 0x18) - uVar10;
  if ((int)uVar10 < 0) {
    thunk_FUN_02256840(PTR_DAT_049b5000);
    uVar5 = thunk_FUN_0222ca34();
    puVar8 = PTR_DAT_049ccb88;
LAB_0308c180:
    uVar6 = thunk_FUN_02256840(puVar8);
    puVar8 = PTR_DAT_049e49c0;
  }
  else {
    if (iVar3 < 0) {
      thunk_FUN_02256840(PTR_DAT_049b5000);
      uVar5 = thunk_FUN_0222ca34();
      puVar8 = PTR_DAT_049e46c0;
      goto LAB_0308c180;
    }
    if (lVar9 == 0) {
      if (uVar10 == 0 && iVar3 == 0) {
        return;
      }
      thunk_FUN_02256840(PTR_DAT_049baa58);
      uVar5 = thunk_FUN_0222ca34();
      uVar6 = thunk_FUN_02256840(PTR_DAT_049bf468);
      System_ArgumentNullException___ctor_30655c4(uVar5,uVar6,0);
      goto LAB_0308c1d8;
    }
    if (iVar3 <= (int)(*(uint *)(lVar9 + 0x18) - uVar10)) {
      if (iVar3 != 0) {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        System_Text_StringBuilder__Append_2f8c228(lVar4,lVar9 + (ulong)uVar10 * 2 + 0x20,iVar3);
      }
      return;
    }
    thunk_FUN_02256840(PTR_DAT_049b5000);
    uVar5 = thunk_FUN_0222ca34();
    uVar6 = thunk_FUN_02256840(PTR_DAT_049e46c0);
    puVar8 = PTR_DAT_049ccb90;
  }
  uVar7 = thunk_FUN_02256840(puVar8);
  System_ArgumentOutOfRangeException___ctor_3068f9c(uVar5,uVar6,uVar7,0);
LAB_0308c1d8:
  uVar6 = thunk_FUN_02256840(PTR_DAT_049e49c8);
                    /* WARNING: Subroutine does not return */
  FUN_021f0564(uVar5,uVar6);
}

