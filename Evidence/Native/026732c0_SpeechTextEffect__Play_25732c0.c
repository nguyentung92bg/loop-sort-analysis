/* IL2CPP: SpeechTextEffect$$Play
void SpeechTextEffect__Play (SpeechTextEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SpeechTextEffect$$Play
   void SpeechTextEffect__Play (SpeechTextEffect_o* __this, const MethodInfo* method); */

void SpeechTextEffect__Play_25732c0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_868 [16];
  undefined1 auStack_858 [512];
  undefined1 auStack_658 [512];
  undefined1 auStack_458 [512];
  undefined1 auStack_258 [512];
  long lStack_58;
  
                    /* try { // try from 026732dc to 027732e7 has its CatchHandler @ 0267341c */
  lVar2 = tpidr_el0;
                    /* try { // try from 026732e8 to 02773403 has its CatchHandler @ 026730b8 */
  lStack_58 = *(long *)(lVar2 + 0x28);
  if ((bRam0000000004f4c1ec & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049cc1b8);
    FUN_021f03f8(PTR_DAT_049cc1c0);
    FUN_021f03f8(PTR_DAT_049c2288);
    bRam0000000004f4c1ec = 1;
  }
  func_0x04608670(auStack_258,0,0x200);
  func_0x04608670(auStack_458,0,0x200);
  auStack_868._0_8_ = 0;
  auStack_868._8_8_ = 0;
  plVar10 = *(long **)(param_1 + 0x38);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b3cc8) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_026733b4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b3cc8,0);
LAB_026733b4:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  puVar5 = PTR_DAT_049cc1c0;
  puVar4 = PTR_DAT_049cc1b8;
  puVar3 = PTR_DAT_049c2288;
  if (*(long *)(param_1 + 0x30) == 0) {
    if (*(long *)(lVar2 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    lVar7 = *(long *)PTR_DAT_049c2288;
    iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x10);
    if (*(char *)(param_1 + 0x20) == '\0') {
                    /* try { // try from 0267340c to 0277343f has its CatchHandler @ 026730b8 */
      if (*(int *)(lVar7 + 0xe4) == 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02673408 with catch @ 02673410
                        */
        FUN_021f0574();
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02673250 with catch @ 02673414
                        */
        lVar7 = *(long *)puVar3;
      }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02673404 with catch @ 02673418
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026732dc with catch @ 0267341c
                        */
      puVar6 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x58);
    }
    else {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_021f0574();
        lVar7 = *(long *)puVar3;
      }
                    /* try { // try from 02673404 to 02773407 has its CatchHandler @ 02673418 */
      puVar6 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x60);
                    /* try { // try from 02673408 to 0277340b has its CatchHandler @ 02673410 */
    }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02673220 with catch @ 02673420
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02673210 with catch @ 02673424
                        */
    uVar11 = *puVar6;
                    /* try { // try from 02673440 to 02773443 has its CatchHandler @ 0267345c */
                    /* try { // try from 02673444 to 0277345f has its CatchHandler @ 026730b8 */
    fVar12 = (float)iVar1 * _UNK_013aa4bc;
    Unity_Collections_FixedString512Bytes__op_Implicit_391033c
              (auStack_658,**(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8),0);
                    /* catch() { ... } // from try @ 02673440 with catch @ 0267345c */
                    /* try { // try from 02673460 to 02773467 has its CatchHandler @ 02673470 */
    func_0x04608620(auStack_258,auStack_658,0x200);
                    /* try { // try from 02673468 to 02773473 has its CatchHandler @ 026730b8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02673460 with catch @ 02673470
                        */
    Unity_Collections_FixedString512Bytes__op_Implicit_391033c
              (auStack_858,*(undefined8 *)(param_1 + 0x30),0);
    func_0x04608620(auStack_458,auStack_858,0x200);
    auStack_868 = LitMotion_LMotion_String__Create512Bytes_2eaa540(fVar12,auStack_258,auStack_458,0)
    ;
    auVar13 = FUN_02526574(auStack_868,uVar11,*(undefined8 *)puVar5);
    auVar13 = LitMotion_Extensions_LitMotionTextMeshProExtensions__BindToText___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__266f034
                        (auVar13._0_8_,auVar13._8_8_,*(undefined8 *)(param_1 + 0x28),
                         *(undefined8 *)puVar4);
    uVar11 = LitMotion_MotionHandleExtensions__ToDisposable_2eacf90
                       (auVar13._0_8_,auVar13._8_8_ & 0xffffffff,0,0);
    *(undefined8 *)(param_1 + 0x38) = uVar11;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x38),uVar11);
    if (*(long *)(lVar2 + 0x28) == lStack_58) {
                    /* try { // try from 026734fc to 0277363f has its CatchHandler @ 026734fc
                       catch() { ... } // from try @ 026734fc with catch @ 026734fc
                       catch() { ... } // from try @ 02673cc0 with catch @ 026734fc
                       catch() { ... } // from try @ 02673e64 with catch @ 026734fc
                       catch() { ... } // from try @ 02673f3c with catch @ 026734fc
                       catch() { ... } // from try @ 02673fc4 with catch @ 026734fc
                       catch() { ... } // from try @ 02673ff0 with catch @ 026734fc
                       catch() { ... } // from try @ 02674058 with catch @ 026734fc */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

