/* IL2CPP: InteractionModule.<OnInteractAsync>d__17$$MoveNext
void InteractionModule__OnInteractAsync_d__17__MoveNext (InteractionModule__OnInteractAsync_d__17_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x026362c0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: InteractionModule.<OnInteractAsync>d__17$$MoveNext
   void InteractionModule__OnInteractAsync_d__17__MoveNext
   (InteractionModule__OnInteractAsync_d__17_o __this, const MethodInfo* method); */

void InteractionModule__OnInteractAsync_d__17__MoveNext_2535f18(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_60 [16];
  long lStack_50;
  int iStack_44;
  undefined1 auStack_40 [16];
  
                    /* try { // try from 02635f20 to 02735f43 has its CatchHandler @ 02636038 */
  if ((bRam0000000004f4bf5d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca1c0);
    FUN_021f03f8(PTR_DAT_049c4180);
    FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 02635f60 to 02735f97 has its CatchHandler @ 02636034 */
    bRam0000000004f4bf5d = 1;
  }
  iStack_44 = *param_1;
  lVar9 = *(long *)(param_1 + 6);
  auStack_60._8_8_ = 0;
  auStack_60._0_8_ = 0;
  lStack_50 = lVar9;
  if (iStack_44 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    iStack_44 = -1;
    *param_1 = -1;
  }
  else {
    uVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c4180);
    Cysharp_Threading_Tasks_UniTaskCompletionSource___ctor_37beca4(uVar4,0);
                    /* try { // try from 02635fb4 to 02735fb7 has its CatchHandler @ 026364a4 */
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined8 *)(lVar9 + 0x40) = uVar4;
    thunk_FUN_021f190c((undefined8 *)(lVar9 + 0x40),uVar4);
                    /* try { // try from 02635fcc to 02735fcf has its CatchHandler @ 02636020 */
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02635fd4 to 02735fd7 has its CatchHandler @ 0263601c */
    if (*(long *)(lStack_50 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02635fdc to 02735fdf has its CatchHandler @ 02636014 */
    auVar11 = Cysharp_Threading_Tasks_UniTaskCompletionSource__get_Task_37bf128
                        (*(long *)(lStack_50 + 0x40),0);
                    /* try { // try from 02635fe4 to 02735fe7 has its CatchHandler @ 02636010 */
    auStack_40 = Cysharp_Threading_Tasks_UniTaskExtensions__AttachExternalCancellation_37da07c
                           (auVar11._0_8_,auVar11._8_8_,*(undefined8 *)(param_1 + 8),0);
    puVar1 = PTR_DAT_049b5138;
                    /* try { // try from 02635fec to 02735fef has its CatchHandler @ 0263600c */
                    /* try { // try from 02635ff4 to 02735ff7 has its CatchHandler @ 02636008 */
                    /* try { // try from 02635ffc to 02735fff has its CatchHandler @ 02636004 */
                    /* try { // try from 02636000 to 0273605f has its CatchHandler @ 02635a6c */
                    /* catch() { ... } // from try @ 02635ffc with catch @ 02636004 */
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02635ff4 with catch @ 02636008 */
      FUN_021f0574();
    }
                    /* catch() { ... } // from try @ 02635fec with catch @ 0263600c */
                    /* catch() { ... } // from try @ 02635fe4 with catch @ 02636010 */
                    /* catch() { ... } // from try @ 02635fdc with catch @ 02636014 */
                    /* catch() { ... } // from try @ 02635f00 with catch @ 02636018 */
    thunk_FUN_021f190c(auStack_40,0);
                    /* catch() { ... } // from try @ 02635fd4 with catch @ 0263601c */
                    /* catch() { ... } // from try @ 02635fcc with catch @ 02636020 */
                    /* catch() { ... } // from try @ 02635ee4 with catch @ 02636024 */
                    /* catch() { ... } // from try @ 02635e8c with catch @ 02636028 */
                    /* catch() { ... } // from try @ 02635e80 with catch @ 0263602c */
    auStack_60 = auStack_40;
    if (cRam0000000004f49bf4 == '\0') {
                    /* catch() { ... } // from try @ 02635e04 with catch @ 02636030 */
                    /* catch() { ... } // from try @ 02635f60 with catch @ 02636034 */
                    /* catch() { ... } // from try @ 02635f20 with catch @ 02636038 */
      FUN_021f03f8(PTR_DAT_049b5138);
                    /* catch() { ... } // from try @ 02635eac with catch @ 0263603c */
                    /* catch() { ... } // from try @ 02635e24 with catch @ 02636040 */
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
                    /* try { // try from 02636060 to 02736063 has its CatchHandler @ 02636484 */
                    /* try { // try from 02636064 to 0273646b has its CatchHandler @ 02635a6c */
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar4 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar9 = *(long *)auStack_60._0_8_;
      uVar10 = auStack_60._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_026360f0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_026360f0:
      iVar3 = (*(code *)*puVar5)(uVar4,uVar10,puVar5[1]);
      if (iVar3 == 0) {
        iStack_44 = 0;
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_60;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c25c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049ca1c0);
        iVar3 = 4;
        goto LAB_026361a0;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar4 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar9 = *(long *)auStack_60._0_8_;
    uVar10 = auStack_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_02636188;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02636188:
    (*(code *)*puVar5)(uVar4,uVar10,puVar5[1]);
  }
  iVar3 = 0xb;
LAB_026361a0:
  if (iStack_44 < 0) {
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined8 *)(lStack_50 + 0x40) = 0;
    thunk_FUN_021f190c((undefined8 *)(lStack_50 + 0x40),0);
  }
  cVar2 = cRam0000000004f49bfa;
  if ((iVar3 == 0) || (iVar3 == 0xb)) {
    *param_1 = -2;
    if (cVar2 == '\0') {
      FUN_021f03f8(PTR_DAT_049b56d0);
      cRam0000000004f49bfa = '\x01';
    }
    plVar8 = *(long **)(param_1 + 2);
    if (plVar8 != (long *)0x0) {
      lVar9 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b56d0) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_026362a0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049b56d0,2);
LAB_026362a0:
      (*(code *)*puVar5)(plVar8,puVar5[1]);
    }
  }
  return;
}

