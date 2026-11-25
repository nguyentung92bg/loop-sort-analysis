/* IL2CPP: DailyChallengeSheetModule$$get_HasData
bool DailyChallengeSheetModule__get_HasData (DailyChallengeSheetModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallengeSheetModule$$get_HasData
   bool DailyChallengeSheetModule__get_HasData (DailyChallengeSheetModule_o* __this, const
   MethodInfo* method); */

byte DailyChallengeSheetModule__get_HasData_255e38c(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined2 auStack_2c [2];
  char acStack_28 [4];
  byte abStack_24 [4];
  
  puVar3 = PTR_DAT_049b3cd8;
                    /* try { // try from 0265e398 to 0275e39b has its CatchHandler @ 0265e558 */
                    /* try { // try from 0265e39c to 0275e3ab has its CatchHandler @ 0265e584 */
                    /* try { // try from 0265e3ac to 0275e3bb has its CatchHandler @ 0265e588 */
  if ((bRam0000000004f4c100 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3cd8);
    FUN_021f03f8(PTR_DAT_049b3c28);
                    /* try { // try from 0265e3c8 to 0275e3cb has its CatchHandler @ 0265e58c */
    FUN_021f03f8(PTR_DAT_049b3ce0);
    FUN_021f03f8(PTR_DAT_049b3b98);
                    /* try { // try from 0265e3e0 to 0275e3eb has its CatchHandler @ 0265e590 */
    FUN_021f03f8(PTR_DAT_049c60e8);
                    /* try { // try from 0265e3f4 to 0275e3ff has its CatchHandler @ 0265e594 */
    FUN_021f03f8(PTR_DAT_049cb790);
    bRam0000000004f4c100 = 1;
  }
  lVar9 = *(long *)puVar3;
  lVar7 = *(long *)(lVar9 + 0x20);
  uVar2 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 0265e418 to 0275e457 has its CatchHandler @ 0265e5b8 */
    lVar7 = FUN_02229718(lVar7);
    lVar8 = *(long *)(lVar9 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
  }
  puVar3 = PTR_DAT_049b3ce0;
  uVar1 = *(undefined4 *)(**(long **)(lVar7 + 0xc0) + 0xfc);
  if ((uVar2 & 1) == 0) {
    lVar8 = FUN_02229718(lVar8);
  }
  uVar5 = thunk_FUN_0224e54c(param_1 + 0x10,
                             *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x20);
                    /* try { // try from 0265e470 to 0275e47b has its CatchHandler @ 0265e538 */
  func_0x04608620(acStack_28,uVar5,uVar1);
  lVar8 = *(long *)(*(long *)puVar3 + 0x20);
                    /* try { // try from 0265e48c to 0275e497 has its CatchHandler @ 0265e534 */
  bVar4 = acStack_28[0] != '\0';
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  pcVar6 = (char *)thunk_FUN_0224e54c(param_1 + 0x10,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar6 == '\0') {
                    /* try { // try from 0265e4c4 to 0275e4cb has its CatchHandler @ 0265e53c */
                    /* try { // try from 0265e4cc to 0275e51f has its CatchHandler @ 0265df5c */
    uVar5 = UnityEngine_Resources__Load_object__26a73fc
                      (*(undefined8 *)PTR_DAT_049cb790,*(undefined8 *)PTR_DAT_049c60e8);
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574(*(long *)PTR_DAT_049b3b98);
    }
    bVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
    auStack_2c[0] = 0;
                    /* try { // try from 0265e520 to 0275e523 has its CatchHandler @ 0265e5b4 */
    abStack_24[0] = bVar4 & 1;
                    /* try { // try from 0265e524 to 0275e527 has its CatchHandler @ 0265e5bc */
                    /* try { // try from 0265e528 to 0275e52b has its CatchHandler @ 0265e580 */
                    /* try { // try from 0265e52c to 0275e52f has its CatchHandler @ 0265e57c */
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (auStack_2c,abStack_24,*(undefined8 *)PTR_DAT_049b3c28);
                    /* try { // try from 0265e530 to 0275e533 has its CatchHandler @ 0265e53c */
                    /* catch() { ... } // from try @ 0265e48c with catch @ 0265e534
                       try { // try from 0265e534 to 0275e5db has its CatchHandler @ 0265df5c */
    *(undefined2 *)(param_1 + 0x10) = auStack_2c[0];
  }
                    /* catch() { ... } // from try @ 0265e470 with catch @ 0265e538 */
                    /* catch() { ... } // from try @ 0265e4c4 with catch @ 0265e53c
                       catch() { ... } // from try @ 0265e530 with catch @ 0265e53c */
                    /* catch() { ... } // from try @ 0265e358 with catch @ 0265e548 */
  return bVar4 & 1;
}

