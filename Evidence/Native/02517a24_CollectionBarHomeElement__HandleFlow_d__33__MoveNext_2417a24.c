/* IL2CPP: CollectionBarHomeElement.<HandleFlow>d__33$$MoveNext
void CollectionBarHomeElement__HandleFlow_d__33__MoveNext (CollectionBarHomeElement__HandleFlow_d__33_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBarHomeElement.<HandleFlow>d__33$$MoveNext
   void CollectionBarHomeElement__HandleFlow_d__33__MoveNext
   (CollectionBarHomeElement__HandleFlow_d__33_o __this, const MethodInfo* method); */

void CollectionBarHomeElement__HandleFlow_d__33__MoveNext_2417a24(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uStack_88;
  int *piStack_80;
  long *plStack_78;
  undefined4 uStack_68;
  undefined1 auStack_60 [16];
  long lStack_48;
  undefined1 auStack_40 [16];
  int iStack_24;
  
                    /* try { // try from 02517a38 to 02617a5f has its CatchHandler @ 025176d4 */
  if ((bRam0000000004f4b744 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2dc8);
    FUN_021f03f8(PTR_DAT_049c2d48);
                    /* try { // try from 02517a60 to 02617a7f has its CatchHandler @ 02517bbc */
    FUN_021f03f8(PTR_DAT_049c2cd8);
    FUN_021f03f8(PTR_DAT_049c2dd0);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b744 = 1;
  }
  iStack_24 = *param_1;
  lStack_48 = *(long *)(param_1 + 6);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
                    /* try { // try from 02517a9c to 02617aa3 has its CatchHandler @ 02517ba8 */
  uStack_68 = 0;
  if (iStack_24 == 0) {
LAB_02517afc:
    uVar7 = 0;
  }
  else {
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02517ab0 to 02617acf has its CatchHandler @ 02517bbc */
    if (*(long *)(lStack_48 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar4 = CollectionBar__IsLocked_2511f18(*(long *)(lStack_48 + 0x40),0);
    if ((uVar4 & 1) != 0) goto LAB_02517d24;
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(char *)(lStack_48 + 0xbc) == '\0') {
      CollectionBarHomeElement__SetupBar_241415c(lStack_48);
      goto LAB_02517d24;
    }
    *(undefined2 *)(lStack_48 + 0xbc) = 0x100;
    if (*(long *)(lStack_48 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = *(long *)(lStack_48 + 0x70);
                    /* try { // try from 02517aec to 02617af3 has its CatchHandler @ 02517bb0 */
    if (*(int *)(*(long *)(lStack_48 + 0xc0) + 0x18) != 0) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Monitors__DisableRaycaster_256ea20(lVar5,lStack_48,0);
      goto LAB_02517afc;
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = Monitors__Get_object__26889d0(lVar5,*(undefined8 *)PTR_DAT_049c2dd0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    HomeMonitor__DisableRaycasterExceptPlay_24462b4(lVar5,lStack_48,0);
    uVar7 = 1;
  }
  piStack_80 = &iStack_24;
                    /* try { // try from 02517b08 to 02617b27 has its CatchHandler @ 02517bbc */
  uStack_88 = 0;
  plStack_78 = &lStack_48;
  if (iStack_24 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    iStack_24 = -1;
    *param_1 = -1;
LAB_02517c78:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar7 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar5 = *(long *)auStack_60._0_8_;
      uVar10 = auStack_60._8_8_ & 0xffff;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_02517cfc;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02517cfc:
      (*(code *)*puVar6)(uVar7,uVar10,puVar6[1]);
    }
    iVar3 = 10;
  }
  else {
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(0,uVar7);
    }
    auStack_40 = CollectionBarHomeElement__ApplyClaimMotions_2414f60
                           (lStack_48,uVar7,*(undefined8 *)(param_1 + 8));
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
                    /* try { // try from 02517b44 to 02617b4b has its CatchHandler @ 02517bac */
      FUN_021f0574();
    }
                    /* try { // try from 02517b4c to 02617b83 has its CatchHandler @ 025176d4 */
    thunk_FUN_021f190c(auStack_40,0);
    auStack_60 = auStack_40;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
                    /* try { // try from 02517b84 to 02617b87 has its CatchHandler @ 02517bb4 */
                    /* try { // try from 02517b88 to 02617b8b has its CatchHandler @ 02517ba4 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02517b8c to 02617b8f has its CatchHandler @ 02517ba0 */
      FUN_021f0574();
    }
                    /* try { // try from 02517b90 to 02617b93 has its CatchHandler @ 02517b9c */
                    /* try { // try from 02517b94 to 02617bdb has its CatchHandler @ 025176d4 */
    if (cRam0000000004f49bf5 == '\0') {
                    /* catch() { ... } // from try @ 02517b90 with catch @ 02517b9c */
                    /* catch() { ... } // from try @ 02517b8c with catch @ 02517ba0 */
                    /* catch() { ... } // from try @ 02517b88 with catch @ 02517ba4 */
      FUN_021f03f8(PTR_DAT_049b54e0);
                    /* catch() { ... } // from try @ 02517a9c with catch @ 02517ba8 */
                    /* catch() { ... } // from try @ 02517b44 with catch @ 02517bac */
      cRam0000000004f49bf5 = '\x01';
    }
                    /* catch() { ... } // from try @ 02517aec with catch @ 02517bb0 */
    uVar7 = auStack_60._0_8_;
                    /* catch() { ... } // from try @ 02517b84 with catch @ 02517bb4 */
    if ((long *)auStack_60._0_8_ == (long *)0x0) goto LAB_02517c78;
                    /* catch() { ... } // from try @ 025179cc with catch @ 02517bb8 */
                    /* catch() { ... } // from try @ 02517a60 with catch @ 02517bbc
                       catch() { ... } // from try @ 02517ab0 with catch @ 02517bbc
                       catch() { ... } // from try @ 02517b08 with catch @ 02517bbc */
    lVar5 = *(long *)auStack_60._0_8_;
                    /* catch() { ... } // from try @ 025179ec with catch @ 02517bc0 */
    uVar10 = auStack_60._8_8_ & 0xffff;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 02517bdc to 02617bdf has its CatchHandler @ 02517be4 */
                    /* catch() { ... } // from try @ 02517bdc with catch @ 02517be4 */
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02517c64;
        }
                    /* try { // try from 02517be8 to 02617bef has its CatchHandler @ 02517bf8 */
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
                    /* try { // try from 02517bf0 to 02617bfb has its CatchHandler @ 025176d4 */
      } while (uVar4 != 0);
    }
                    /* catch() { ... } // from try @ 02517be8 with catch @ 02517bf8 */
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02517c64:
    iVar3 = (*(code *)*puVar6)(uVar7,uVar10,puVar6[1]);
    if (iVar3 != 0) goto LAB_02517c78;
    iStack_24 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 10) = auStack_60;
    thunk_FUN_021f190c(param_1 + 10,0);
    FUN_0235c25c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c2dc8);
    iVar3 = 9;
  }
  FUN_02019738(&uStack_88);
  if ((iVar3 != 0) && (iVar3 != 10)) {
    return;
  }
LAB_02517d24:
  cVar2 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_02517dac;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b56d0,2);
LAB_02517dac:
    (*(code *)*puVar6)(plVar9,puVar6[1]);
  }
  return;
}

