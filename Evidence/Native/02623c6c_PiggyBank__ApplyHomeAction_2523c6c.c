/* IL2CPP: PiggyBank$$ApplyHomeAction
Cysharp_Threading_Tasks_UniTask_o PiggyBank__ApplyHomeAction (PiggyBank_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PiggyBank$$ApplyHomeAction
   Cysharp_Threading_Tasks_UniTask_o PiggyBank__ApplyHomeAction (PiggyBank_o* __this,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

undefined1  [16] PiggyBank__ApplyHomeAction_2523c6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_58 [24];
  
                    /* try { // try from 02623c78 to 02723c7f has its CatchHandler @ 02623e34 */
  if ((bRam0000000004f4be89 & 1) == 0) {
                    /* try { // try from 02623c98 to 02723ca3 has its CatchHandler @ 02623e2c */
    FUN_021f03f8(PTR_DAT_049c4228);
    FUN_021f03f8(PTR_DAT_049c5aa8);
                    /* try { // try from 02623ca8 to 02723cbb has its CatchHandler @ 02623e30 */
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be89 = 1;
  }
  uVar10 = PiggyBank__IsFull_2523e4c(param_1);
  puVar4 = PTR_DAT_049c5aa8;
  puVar3 = PTR_DAT_049b5310;
  if ((uVar10 & 1) == 0) {
LAB_02623e28:
                    /* catch() { ... } // from try @ 02623bfc with catch @ 02623e28 */
                    /* catch() { ... } // from try @ 02623c98 with catch @ 02623e2c */
                    /* catch() { ... } // from try @ 02623ca8 with catch @ 02623e30 */
                    /* catch() { ... } // from try @ 02623c78 with catch @ 02623e34 */
                    /* catch() { ... } // from try @ 02623df4 with catch @ 02623e38 */
                    /* catch() { ... } // from try @ 02623df0 with catch @ 02623e3c */
                    /* catch() { ... } // from try @ 02623dec with catch @ 02623e40 */
                    /* catch() { ... } // from try @ 02623de8 with catch @ 02623e44 */
    return ZEXT816(0);
  }
                    /* try { // try from 02623cd4 to 02723cd7 has its CatchHandler @ 02623e04 */
  lVar11 = *(long *)PTR_DAT_049b5310;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    FUN_021f0574();
    lVar11 = *(long *)puVar3;
  }
  iVar5 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar11 + 0xb8) + 0x60,0);
                    /* try { // try from 02623cfc to 02723d07 has its CatchHandler @ 02623e10 */
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar4);
  }
  uVar10 = PlayerPrefsInt__HasValue_3f0dc08(param_1 + 0x30,0);
  if ((uVar10 & 1) != 0) {
                    /* try { // try from 02623d2c to 02723d2f has its CatchHandler @ 02623e08 */
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    iVar6 = PlayerPrefsInt__get_Value_3f0d974(param_1 + 0x30,0);
    if (iVar5 < iVar6) goto LAB_02623e28;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0x30), lVar11 != 0)) {
                    /* try { // try from 02623d5c to 02723d67 has its CatchHandler @ 02623e18 */
    iVar6 = ConstantSheetBase_object___GetInt_281c070(lVar11,0xb,*(undefined8 *)PTR_DAT_049c4228);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar4);
    }
                    /* try { // try from 02623d98 to 02723dab has its CatchHandler @ 02623e20 */
    iVar7 = PlayerPrefsInt__op_Implicit_3f0dc60(uVar1,uVar2,0);
                    /* try { // try from 02623dac to 02723de3 has its CatchHandler @ 02623a48 */
    iVar8 = PlayerPrefsInt__op_Implicit_3f0dc60
                      (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),0);
    if (iVar8 < iVar7) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar9 = PlayerPrefsInt__get_Value_3f0d974((undefined8 *)(param_1 + 0x40),0);
                    /* try { // try from 02623de4 to 02723de7 has its CatchHandler @ 02623e4c */
      PlayerPrefsInt__Set_3f0dba4((undefined8 *)(param_1 + 0x50),uVar9,0);
                    /* try { // try from 02623de8 to 02723deb has its CatchHandler @ 02623e44 */
      iVar6 = 5;
    }
                    /* try { // try from 02623dec to 02723def has its CatchHandler @ 02623e40 */
                    /* try { // try from 02623df0 to 02723df3 has its CatchHandler @ 02623e3c */
                    /* try { // try from 02623df4 to 02723df7 has its CatchHandler @ 02623e38 */
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    /* try { // try from 02623df8 to 02723dfb has its CatchHandler @ 02623e1c */
      FUN_021f0574();
    }
                    /* try { // try from 02623dfc to 02723dff has its CatchHandler @ 02623e14 */
                    /* try { // try from 02623e00 to 02723e6f has its CatchHandler @ 02623a48 */
                    /* catch() { ... } // from try @ 02623cd4 with catch @ 02623e04 */
                    /* catch() { ... } // from try @ 02623d2c with catch @ 02623e08 */
    PlayerPrefsInt__Set_3f0dba4(param_1 + 0x30,iVar6 + iVar5,0);
                    /* catch() { ... } // from try @ 02623bf0 with catch @ 02623e0c */
                    /* catch() { ... } // from try @ 02623cfc with catch @ 02623e10 */
    if (*(long *)(param_1 + 0x28) != 0) {
                    /* catch() { ... } // from try @ 02623dfc with catch @ 02623e14 */
                    /* catch() { ... } // from try @ 02623d5c with catch @ 02623e18 */
                    /* catch() { ... } // from try @ 02623df8 with catch @ 02623e1c */
                    /* catch() { ... } // from try @ 02623d98 with catch @ 02623e20 */
                    /* catch() { ... } // from try @ 02623c2c with catch @ 02623e24 */
      LiveOpsModule__Show_253e230(auStack_58,*(long *)(param_1 + 0x28),5,1,0);
      goto LAB_02623e28;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02623c3c with catch @ 02623e48 */
  FUN_021f06a0();
}

