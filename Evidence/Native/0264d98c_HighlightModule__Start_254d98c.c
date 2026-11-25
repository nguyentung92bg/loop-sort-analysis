/* IL2CPP: HighlightModule$$Start
void HighlightModule__Start (HighlightModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HighlightModule$$Start
   void HighlightModule__Start (HighlightModule_o* __this, const MethodInfo* method); */

void HighlightModule__Start_254d98c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  
  puVar5 = PTR_DAT_049cab50;
  puVar4 = PTR_DAT_049cab48;
  puVar3 = PTR_DAT_049cab40;
  puVar2 = PTR_DAT_049cab38;
  puVar1 = PTR_DAT_049b89f8;
                    /* try { // try from 0264d9b0 to 0274dab3 has its CatchHandler @ 0264d9b0
                       catch() { ... } // from try @ 0264d9b0 with catch @ 0264d9b0
                       catch() { ... } // from try @ 0264dc6c with catch @ 0264d9b0
                       catch() { ... } // from try @ 0264dcf8 with catch @ 0264d9b0
                       catch() { ... } // from try @ 0264dd60 with catch @ 0264d9b0
                       catch() { ... } // from try @ 0264ddd4 with catch @ 0264d9b0 */
  if ((bRam0000000004f4c058 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cab40);
    FUN_021f03f8(PTR_DAT_049cab50);
    FUN_021f03f8(PTR_DAT_049cab48);
    FUN_021f03f8(PTR_DAT_049b89f8);
    FUN_021f03f8(PTR_DAT_049cab58);
    FUN_021f03f8(PTR_DAT_049cab38);
    bRam0000000004f4c058 = 1;
  }
  uVar6 = UnityEngine_Shader__Find_3bdf600(*(undefined8 *)puVar2,0);
  puVar11 = (undefined8 *)(param_1 + 0x28);
  *puVar11 = uVar6;
  thunk_FUN_021f190c(puVar11,uVar6);
  uVar12 = *puVar11;
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Material___ctor_3be5d2c(uVar6,uVar12,0);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x30),uVar6);
  plVar13 = *(long **)(param_1 + 0x18);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar6,param_1,*(undefined8 *)puVar4,0);
  lVar14 = *(long *)puVar5;
  lVar8 = *(long *)(lVar14 + 0x38);
  if (lVar8 == 0) {
    FUN_02229774(lVar14);
    lVar8 = *(long *)(lVar14 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
                    /* try { // try from 0264dab4 to 0274dabf has its CatchHandler @ 0264dd14 */
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* try { // try from 0264dac4 to 0274dadb has its CatchHandler @ 0264dd0c */
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049cab58;
  lVar8 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  lVar14 = *(long *)puVar1;
                    /* try { // try from 0264daf8 to 0274dafb has its CatchHandler @ 0264dd00 */
  uVar12 = **(undefined8 **)(lVar8 + 0xb8);
                    /* try { // try from 0264db0c to 0274db33 has its CatchHandler @ 0264dd28 */
  lVar8 = *(long *)(lVar14 + 0x38);
  if (lVar8 == 0) {
    FUN_02229774(lVar14);
    lVar8 = *(long *)(lVar14 + 0x38);
  }
  if ((*(ushort *)(*(long *)(lVar8 + 0x10) + 0x135) & 1) == 0) {
    FUN_02229718();
  }
  uVar7 = thunk_FUN_0222ca34();
  MessagePipe_AnonymousMessageHandler___Il2CppFullySharedGenericType____ctor_27b286c
            (uVar7,uVar6,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x18));
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = **(long **)(lVar14 + 0x38);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718(lVar8);
  }
  lVar14 = *plVar13;
  uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar8) {
        puVar11 = (undefined8 *)(lVar14 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_027d671c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar11 = (undefined8 *)FUN_02229a4c(plVar13,lVar8,0);
LAB_027d671c:
                    /* WARNING: Could not recover jumptable at 0x027d6738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar11)(plVar13,uVar7,uVar12,puVar11[1]);
  return;
}

