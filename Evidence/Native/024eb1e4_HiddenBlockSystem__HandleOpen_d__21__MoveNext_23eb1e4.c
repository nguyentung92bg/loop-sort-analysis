/* IL2CPP: HiddenBlockSystem.<HandleOpen>d__21$$MoveNext
void HiddenBlockSystem__HandleOpen_d__21__MoveNext (HiddenBlockSystem__HandleOpen_d__21_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HiddenBlockSystem.<HandleOpen>d__21$$MoveNext
   void HiddenBlockSystem__HandleOpen_d__21__MoveNext (HiddenBlockSystem__HandleOpen_d__21_o __this,
   const MethodInfo* method); */

void HiddenBlockSystem__HandleOpen_d__21__MoveNext_23eb1e4(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4b61d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1de8);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b61d = 1;
  }
  puVar1 = PTR_DAT_049b5138;
                    /* try { // try from 024eb228 to 025eb233 has its CatchHandler @ 024eb350 */
  lVar8 = *(long *)(param_1 + 4);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
                    /* try { // try from 024eb238 to 025eb24b has its CatchHandler @ 024eb5b8 */
  if (*param_1 == 0) {
                    /* try { // try from 024eb2c8 to 025eb2d3 has its CatchHandler @ 024eb350 */
    auStack_60 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
                    /* try { // try from 024eb2dc to 025eb2df has its CatchHandler @ 024eb32c */
  }
  else {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar9 = *(undefined8 *)(lVar8 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 024eb264 to 025eb267 has its CatchHandler @ 024eb358 */
    auStack_50 = Cysharp_Threading_Tasks_UniTask__Yield_37c8000(uVar9,0,0);
                    /* try { // try from 024eb278 to 025eb27f has its CatchHandler @ 024eb340 */
    thunk_FUN_021f190c(auStack_50,0);
    uVar2 = auStack_50._8_8_;
    uVar9 = auStack_50._0_8_;
    auStack_60 = auStack_50;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 024eb29c to 025eb2a7 has its CatchHandler @ 024eb33c */
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
                    /* try { // try from 024eb2f4 to 025eb2f7 has its CatchHandler @ 024eb354 */
    if ((long *)uVar9 != (long *)0x0) {
                    /* try { // try from 024eb2f8 to 025eb2fb has its CatchHandler @ 024eb34c */
                    /* try { // try from 024eb2fc to 025eb2ff has its CatchHandler @ 024eb344 */
      lVar5 = *(long *)uVar9;
                    /* try { // try from 024eb300 to 025eb303 has its CatchHandler @ 024eb358 */
                    /* try { // try from 024eb304 to 025eb307 has its CatchHandler @ 024eb334 */
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 024eb308 to 025eb30b has its CatchHandler @ 024eb330 */
                    /* try { // try from 024eb30c to 025eb30f has its CatchHandler @ 024eb324 */
      if (uVar6 != 0) {
                    /* try { // try from 024eb310 to 025eb313 has its CatchHandler @ 024eb318 */
                    /* try { // try from 024eb314 to 025eb317 has its CatchHandler @ 024eb31c */
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 024eb310 with catch @ 024eb318 */
                    /* catch() { ... } // from try @ 024eb0f4 with catch @ 024eb31c
                       catch() { ... } // from try @ 024eb314 with catch @ 024eb31c */
                    /* catch() { ... } // from try @ 024eb0d0 with catch @ 024eb320 */
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* catch() { ... } // from try @ 024eb278 with catch @ 024eb340 */
                    /* catch() { ... } // from try @ 024eb2fc with catch @ 024eb344 */
                    /* catch() { ... } // from try @ 024eb080 with catch @ 024eb348 */
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_024eb34c;
          }
                    /* catch() { ... } // from try @ 024eb30c with catch @ 024eb324 */
          uVar6 = uVar6 - 1;
                    /* catch() { ... } // from try @ 024eb094 with catch @ 024eb328 */
          piVar7 = piVar7 + 4;
                    /* catch() { ... } // from try @ 024eb2dc with catch @ 024eb32c */
        } while (uVar6 != 0);
      }
                    /* catch() { ... } // from try @ 024eb308 with catch @ 024eb330 */
                    /* catch() { ... } // from try @ 024eb304 with catch @ 024eb334 */
                    /* catch() { ... } // from try @ 024eb138 with catch @ 024eb338 */
      puVar4 = (undefined8 *)FUN_02229a4c(uVar9,*(long *)PTR_DAT_049b54e0,0);
                    /* catch() { ... } // from try @ 024eb29c with catch @ 024eb33c */
LAB_024eb34c:
                    /* catch() { ... } // from try @ 024eb2f8 with catch @ 024eb34c */
                    /* catch() { ... } // from try @ 024eb228 with catch @ 024eb350
                       catch() { ... } // from try @ 024eb2c8 with catch @ 024eb350 */
                    /* catch() { ... } // from try @ 024eb2f4 with catch @ 024eb354 */
                    /* catch() { ... } // from try @ 024eb264 with catch @ 024eb358
                       catch() { ... } // from try @ 024eb300 with catch @ 024eb358 */
      iVar3 = (*(code *)*puVar4)(uVar9,uVar2 & 0xffffffff,puVar4[1]);
                    /* catch() { ... } // from try @ 024eb1b4 with catch @ 024eb35c */
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_60;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c1de8);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar9 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_60._0_8_;
    uVar10 = auStack_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_024eb3e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
                    /* try { // try from 024eb3c0 to 025eb3e7 has its CatchHandler @ 024eb5b4 */
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_024eb3e4:
    (*(code *)*puVar4)(uVar9,uVar10,puVar4[1]);
  }
                    /* try { // try from 024eb3f4 to 025eb407 has its CatchHandler @ 024eb5b8 */
  if (lVar8 != 0) {
    HiddenBlockSystem__HandleParticle_23ea908(lVar8,*(undefined8 *)(param_1 + 6));
    HiddenBlockSystem__HandleDissolve_23eaa84(lVar8,*(undefined8 *)(param_1 + 6));
                    /* try { // try from 024eb410 to 025eb417 has its CatchHandler @ 024eb5bc */
    *param_1 = -2;
    FUN_0235afc8(param_1 + 2,0);
                    /* try { // try from 024eb434 to 025eb47f has its CatchHandler @ 024eb5c0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

