/* IL2CPP: StickyBlockGroup$$OnReturn
void StickyBlockGroup__OnReturn (StickyBlockGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: StickyBlockGroup$$OnReturn
   void StickyBlockGroup__OnReturn (StickyBlockGroup_o* __this, const MethodInfo* method); */

void StickyBlockGroup__OnReturn_23f2384(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  undefined4 uVar12;
  long *aplStack_38 [2];
  
  if ((bRam0000000004f4b644 & 1) == 0) {
                    /* try { // try from 024f239c to 025f239f has its CatchHandler @ 024f2408 */
                    /* try { // try from 024f23a0 to 025f23a3 has its CatchHandler @ 024f23f8 */
                    /* try { // try from 024f23a4 to 025f23a7 has its CatchHandler @ 024f2404 */
    FUN_021f03f8(PTR_DAT_049c1df0);
                    /* try { // try from 024f23a8 to 025f23ab has its CatchHandler @ 024f23ec */
                    /* try { // try from 024f23ac to 025f23af has its CatchHandler @ 024f23e8 */
    bRam0000000004f4b644 = 1;
  }
                    /* try { // try from 024f23b0 to 025f23b3 has its CatchHandler @ 024f2400 */
                    /* try { // try from 024f23b4 to 025f23b7 has its CatchHandler @ 024f23f4 */
                    /* try { // try from 024f23b8 to 025f23bb has its CatchHandler @ 024f23dc */
  GameBehaviourBase__OnReturn_24f6ea8(param_1,0);
                    /* try { // try from 024f23bc to 025f23bf has its CatchHandler @ 024f23e0 */
                    /* try { // try from 024f23c0 to 025f23c3 has its CatchHandler @ 024f23d4 */
                    /* catch() { ... } // from try @ 024f2364 with catch @ 024f23c4
                       try { // try from 024f23c4 to 025f241f has its CatchHandler @ 024f2110 */
  *(undefined8 *)(param_1 + 0xb0) = 0;
                    /* catch() { ... } // from try @ 024f2378 with catch @ 024f23c8 */
  *(undefined1 *)(param_1 + 0xa8) = 0;
                    /* catch() { ... } // from try @ 024f2344 with catch @ 024f23cc */
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xb0),0);
                    /* catch() { ... } // from try @ 024f2338 with catch @ 024f23d0 */
                    /* catch() { ... } // from try @ 024f23c0 with catch @ 024f23d4 */
                    /* catch() { ... } // from try @ 024f2284 with catch @ 024f23d8 */
  if (cRam0000000004f4a233 == '\0') {
                    /* catch() { ... } // from try @ 024f23b8 with catch @ 024f23dc */
                    /* catch() { ... } // from try @ 024f2308 with catch @ 024f23e0
                       catch() { ... } // from try @ 024f23bc with catch @ 024f23e0 */
                    /* catch() { ... } // from try @ 024f22bc with catch @ 024f23e4 */
    FUN_021f03f8(PTR_DAT_049bbf90);
                    /* catch() { ... } // from try @ 024f23ac with catch @ 024f23e8 */
                    /* catch() { ... } // from try @ 024f23a8 with catch @ 024f23ec */
    cRam0000000004f4a233 = '\x01';
  }
                    /* catch() { ... } // from try @ 024f2220 with catch @ 024f23f0 */
                    /* catch() { ... } // from try @ 024f2290 with catch @ 024f23f4
                       catch() { ... } // from try @ 024f23b4 with catch @ 024f23f4 */
                    /* catch() { ... } // from try @ 024f23a0 with catch @ 024f23f8 */
  lVar9 = *(long *)(param_1 + 0xe0);
                    /* catch() { ... } // from try @ 024f2260 with catch @ 024f23fc */
  lVar5 = *(long *)PTR_DAT_049bbf90;
                    /* catch() { ... } // from try @ 024f21e8 with catch @ 024f2400
                       catch() { ... } // from try @ 024f23b0 with catch @ 024f2400 */
  puVar6 = *(undefined8 **)(lVar5 + 0xb8);
                    /* catch() { ... } // from try @ 024f222c with catch @ 024f2404
                       catch() { ... } // from try @ 024f23a4 with catch @ 024f2404 */
                    /* catch() { ... } // from try @ 024f21bc with catch @ 024f2408
                       catch() { ... } // from try @ 024f239c with catch @ 024f2408 */
  uVar12 = *(undefined4 *)(puVar6 + 1);
  *(undefined8 *)(param_1 + 0xb8) = *puVar6;
  *(undefined4 *)(param_1 + 0xc0) = uVar12;
  puVar6 = *(undefined8 **)(lVar5 + 0xb8);
  uVar12 = *(undefined4 *)(puVar6 + 1);
                    /* try { // try from 024f2420 to 025f2437 has its CatchHandler @ 024f24b0 */
  *(undefined8 *)(param_1 + 0xc4) = *puVar6;
  *(undefined4 *)(param_1 + 0xcc) = uVar12;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 024f2438 to 025f249f has its CatchHandler @ 024f2110 */
  lVar5 = *(long *)PTR_DAT_049c1df0;
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  uVar2 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 200));
  if ((uVar2 & 1) == 0) {
    *(undefined4 *)(lVar9 + 0x18) = 0;
  }
  else {
    iVar1 = *(int *)(lVar9 + 0x18);
    *(undefined4 *)(lVar9 + 0x18) = 0;
    if (0 < iVar1) {
      System_Array__Clear_31229cc(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
    }
  }
  uVar2 = FUN_024f7208(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8),0);
  if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 024f2420 with catch @ 024f24b0
                       catch() { ... } // from try @ 024f24a0 with catch @ 024f24b0 */
                    /* try { // try from 024f24b4 to 025f24b7 has its CatchHandler @ 024f24c0 */
                    /* try { // try from 024f24b8 to 025f24c3 has its CatchHandler @ 024f2110 */
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0xd0);
  uVar12 = *(undefined4 *)(param_1 + 0xd8);
                    /* try { // try from 024f24a0 to 025f24af has its CatchHandler @ 024f24b0 */
  if (cRam0000000004f4b662 == '\0') {
    FUN_021f03f8(&DAT_04baabc0,uVar12,1,0);
    FUN_021f03f8(&DAT_04b77408);
    FUN_021f03f8(&DAT_04b88908);
    FUN_021f03f8(&DAT_04b8b0c8);
    cRam0000000004f4b662 = '\x01';
  }
  uVar10 = (uint)uVar2;
  if (-1 < (int)uVar10) {
    if (cRam0000000004f4b661 == '\0') {
      FUN_021f03f8(&DAT_04b8b0c8);
      cRam0000000004f4b661 = '\x01';
    }
    plVar11 = *(long **)(_DAT_04b8b0c8 + 0xb8);
    if ((int)uVar10 < (int)plVar11[2]) {
      if (*(int *)(_DAT_04b77408 + 0xe4) == 0) {
        FUN_021f0574();
        plVar11 = *(long **)(_DAT_04b8b0c8 + 0xb8);
      }
      lVar5 = *(long *)(_DAT_04baabc0 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 != (long *)0x0) {
        if (*(uint *)(plVar11 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        func_0x04608620(aplStack_38,
                        (long)plVar11 +
                        (uVar2 & 0xffffffff) * (ulong)*(uint *)(*plVar11 + 0x104) + 0x20,
                        *(undefined4 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0xfc));
        if (aplStack_38[0] != (long *)0x0) {
          lVar5 = *aplStack_38[0];
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049c22a0) {
                puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                goto LAB_024f7540;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_02229a4c(aplStack_38[0],*(long *)PTR_DAT_049c22a0,4);
LAB_024f7540:
                    /* WARNING: Could not recover jumptable at 0x024f7564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar6)(aplStack_38[0],uVar2,uVar12,1,puVar6[1]);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  thunk_FUN_02256840(&DAT_04b83480);
  uVar3 = thunk_FUN_0222ca34();
  uVar4 = thunk_FUN_02256840(&DAT_04c07048);
  System_ArgumentException___ctor_306c238(uVar3,uVar4,0);
  uVar4 = thunk_FUN_02256840(&DAT_04bd5e60);
                    /* WARNING: Subroutine does not return */
  FUN_021f0564(uVar3,uVar4);
}

