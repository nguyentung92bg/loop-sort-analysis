/* IL2CPP: BoosterSystem$$TryCancel
bool BoosterSystem__TryCancel (BoosterSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterSystem$$TryCancel
   bool BoosterSystem__TryCancel (BoosterSystem_o* __this, const MethodInfo* method); */

undefined8 BoosterSystem__TryCancel_24e5938(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((bRam0000000004f4bc80 & 1) == 0) {
                    /* try { // try from 025e5954 to 026e595f has its CatchHandler @ 025e5a98 */
    FUN_021f03f8(PTR_DAT_049c7b30);
                    /* try { // try from 025e5960 to 026e59af has its CatchHandler @ 025e4fcc */
                    /* catch() { ... } // from try @ 025e58f0 with catch @ 025e5964 */
                    /* catch() { ... } // from try @ 025e569c with catch @ 025e5968 */
    FUN_021f03f8(PTR_DAT_049b3b98);
                    /* catch() { ... } // from try @ 025e58a8 with catch @ 025e596c */
                    /* catch() { ... } // from try @ 025e5884 with catch @ 025e5970 */
    bRam0000000004f4bc80 = 1;
  }
                    /* catch() { ... } // from try @ 025e5834 with catch @ 025e5974 */
                    /* catch() { ... } // from try @ 025e5860 with catch @ 025e5978 */
  if (*(int *)(param_1 + 0x90) == 0) {
                    /* catch() { ... } // from try @ 025e5954 with catch @ 025e5a98 */
                    /* catch() { ... } // from try @ 025e5a20 with catch @ 025e5a9c */
                    /* catch() { ... } // from try @ 025e5500 with catch @ 025e5aa0 */
                    /* catch() { ... } // from try @ 025e56d8 with catch @ 025e5aa4 */
                    /* catch() { ... } // from try @ 025e5a1c with catch @ 025e5aa8 */
    return 1;
  }
                    /* catch() { ... } // from try @ 025e57f8 with catch @ 025e597c */
                    /* catch() { ... } // from try @ 025e5838 with catch @ 025e5980 */
  plVar7 = (long *)(param_1 + 0x88);
  plVar2 = (long *)*plVar7;
                    /* catch() { ... } // from try @ 025e55f0 with catch @ 025e5984 */
  if (plVar2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 025e576c with catch @ 025e5988 */
                    /* catch() { ... } // from try @ 025e564c with catch @ 025e598c */
                    /* catch() { ... } // from try @ 025e578c with catch @ 025e5990 */
    uVar3 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
    puVar1 = PTR_DAT_049b3b98;
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x90) = 0;
                    /* try { // try from 025e59b0 to 026e59b3 has its CatchHandler @ 025e5a40 */
                    /* try { // try from 025e59b4 to 026e59ef has its CatchHandler @ 025e4fcc */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* catch() { ... } // from try @ 025e5628 with catch @ 025e59c0 */
                    /* catch() { ... } // from try @ 025e55b4 with catch @ 025e59c4 */
                    /* catch() { ... } // from try @ 025e55f4 with catch @ 025e59c8 */
    uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar8,0,0);
                    /* catch() { ... } // from try @ 025e5528 with catch @ 025e59cc */
    if ((uVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 025e5548 with catch @ 025e59d0 */
      if (*plVar7 == 0) goto LAB_025e5aac;
      uVar8 = UnityEngine_Component__get_gameObject_3c187f4(*plVar7,0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* try { // try from 025e59f0 to 026e59f3 has its CatchHandler @ 025e5a54 */
        FUN_021f0574(lVar5);
      }
                    /* try { // try from 025e5a00 to 026e5a03 has its CatchHandler @ 025e5ac8 */
      UnityEngine_Object__Destroy_3c24380(uVar8,0);
    }
                    /* try { // try from 025e5a04 to 026e5a07 has its CatchHandler @ 025e5ac4 */
                    /* try { // try from 025e5a08 to 026e5a0b has its CatchHandler @ 025e5ad8 */
                    /* try { // try from 025e5a0c to 026e5a0f has its CatchHandler @ 025e5ad4 */
    *(undefined8 *)(param_1 + 0x88) = 0;
                    /* try { // try from 025e5a10 to 026e5a13 has its CatchHandler @ 025e5ab8 */
    thunk_FUN_021f190c(plVar7,0);
                    /* try { // try from 025e5a14 to 026e5a1b has its CatchHandler @ 025e5aac */
    if (*(long *)(param_1 + 0x48) != 0) {
                    /* try { // try from 025e5a1c to 026e5a1f has its CatchHandler @ 025e5aa8 */
                    /* try { // try from 025e5a20 to 026e5a23 has its CatchHandler @ 025e5a9c */
      InteractionModule__ClearTouchInterceptor_2535e84(*(long *)(param_1 + 0x48),0);
                    /* try { // try from 025e5a24 to 026e5a27 has its CatchHandler @ 025e5a90 */
      plVar2 = *(long **)(param_1 + 0x70);
                    /* try { // try from 025e5a28 to 026e5a2b has its CatchHandler @ 025e5a88 */
      if (plVar2 != (long *)0x0) {
                    /* try { // try from 025e5a2c to 026e5a33 has its CatchHandler @ 025e5a80 */
        lVar5 = *plVar2;
                    /* try { // try from 025e5a34 to 026e5a37 has its CatchHandler @ 025e5a70 */
                    /* try { // try from 025e5a38 to 026e5a3b has its CatchHandler @ 025e5a6c */
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 025e5a3c to 026e5a3f has its CatchHandler @ 025e5a74 */
                    /* catch() { ... } // from try @ 025e59b0 with catch @ 025e5a40 */
        if (uVar3 != 0) {
                    /* try { // try from 025e5a48 to 026e5a63 has its CatchHandler @ 025e5bc0 */
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
                    /* catch() { ... } // from try @ 025e59f0 with catch @ 025e5a54 */
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049c7b30) {
                    /* catch() { ... } // from try @ 025e5748 with catch @ 025e5a7c */
                    /* catch() { ... } // from try @ 025e5a2c with catch @ 025e5a80 */
                    /* catch() { ... } // from try @ 025e592c with catch @ 025e5a84 */
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_025e5a88;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
                    /* try { // try from 025e5a64 to 026e5b0b has its CatchHandler @ 025e4fcc */
                    /* catch() { ... } // from try @ 025e53c4 with catch @ 025e5a68 */
                    /* catch() { ... } // from try @ 025e5a38 with catch @ 025e5a6c */
        puVar4 = (undefined8 *)FUN_02229a4c(plVar2,*(long *)PTR_DAT_049c7b30,0);
                    /* catch() { ... } // from try @ 025e5a34 with catch @ 025e5a70 */
LAB_025e5a88:
                    /* catch() { ... } // from try @ 025e5a28 with catch @ 025e5a88 */
                    /* catch() { ... } // from try @ 025e54cc with catch @ 025e5a8c */
                    /* catch() { ... } // from try @ 025e5a24 with catch @ 025e5a90 */
                    /* catch() { ... } // from try @ 025e539c with catch @ 025e5a94 */
        (*(code *)*puVar4)(plVar2,0,puVar4[1]);
        return 1;
      }
    }
  }
LAB_025e5aac:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 025e5a14 with catch @ 025e5aac */
  FUN_021f06a0();
}

