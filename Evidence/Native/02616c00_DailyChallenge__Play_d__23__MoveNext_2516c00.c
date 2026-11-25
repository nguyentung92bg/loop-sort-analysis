/* IL2CPP: DailyChallenge.<Play>d__23$$MoveNext
void DailyChallenge__Play_d__23__MoveNext (DailyChallenge__Play_d__23_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge.<Play>d__23$$MoveNext
   void DailyChallenge__Play_d__23__MoveNext (DailyChallenge__Play_d__23_o __this, const MethodInfo*
   method); */

void DailyChallenge__Play_d__23__MoveNext_2516c00(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000004f4be21 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9390);
    FUN_021f03f8(PTR_DAT_049c9398);
    FUN_021f03f8(PTR_DAT_049c93a0);
    FUN_021f03f8(PTR_DAT_049b5fb0);
                    /* try { // try from 02616c5c to 02716cef has its CatchHandler @ 02616d60 */
    FUN_021f03f8(PTR_DAT_049c4318);
    FUN_021f03f8(PTR_DAT_049c3d48);
    FUN_021f03f8(PTR_DAT_049c93a8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c93b0);
    bRam0000000004f4be21 = 1;
  }
  lVar7 = *(long *)(param_1 + 4);
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  if (*param_1 == 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0xc);
    uStack_58 = *(undefined8 *)(param_1 + 10);
    uStack_60 = *(undefined8 *)(param_1 + 8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
                    /* try { // try from 02616e1c to 02716e2f has its CatchHandler @ 026178d8 */
    *param_1 = -1;
  }
  else {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02616f60 to 02716f6f has its CatchHandler @ 026178b0 */
      FUN_021f06a0();
    }
    if (*(char *)(lVar7 + 0x59) != '\0') goto LAB_02616f34;
    if (*(int *)(*(long *)PTR_DAT_049b5fb0 + 0xe4) == 0) {
      FUN_021f0574();
    }
    iVar2 = System_DateTime__get_Day_30dd524(param_1 + 6,0);
    uVar3 = DailyChallenge__GetCompletedDays_25168ec();
    if ((uVar3 >> (ulong)(iVar2 - 1U & 0x1f) & 1) != 0) goto LAB_02616f34;
    if (*(long *)(lVar7 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02616d08 to 02716d13 has its CatchHandler @ 02616d3c */
    uVar4 = GameMachine__CanEnter_object__261a478
                      (*(long *)(lVar7 + 0x28),*(undefined8 *)PTR_DAT_049c4318);
    if ((uVar4 & 1) == 0) goto LAB_02616f34;
                    /* try { // try from 02616d20 to 02716d2f has its CatchHandler @ 02616d38 */
    *(undefined1 *)(lVar7 + 0x59) = 1;
    if (*(long *)(lVar7 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    DailyChallengeSheetModule__LoadAsync_255e54c(&uStack_a8,*(long *)(lVar7 + 0x20),0);
                    /* try { // try from 02616d34 to 02716d37 has its CatchHandler @ 02616d58 */
                    /* catch() { ... } // from try @ 02616d20 with catch @ 02616d38 */
                    /* catch() { ... } // from try @ 02616d08 with catch @ 02616d3c */
                    /* catch() { ... } // from try @ 02616b78 with catch @ 02616d40 */
                    /* catch() { ... } // from try @ 02616aec with catch @ 02616d44 */
    uStack_78 = uStack_a0;
    uStack_80 = uStack_a8;
                    /* catch() { ... } // from try @ 02616b80 with catch @ 02616d48 */
                    /* catch() { ... } // from try @ 02616b2c with catch @ 02616d4c */
    uStack_70 = uStack_98;
                    /* catch() { ... } // from try @ 02616b4c with catch @ 02616d50 */
                    /* catch() { ... } // from try @ 02616b58 with catch @ 02616d54 */
                    /* catch() { ... } // from try @ 02616ad8 with catch @ 02616d58
                       catch() { ... } // from try @ 02616d34 with catch @ 02616d58 */
    FUN_0235b0c0(&uStack_80,&uStack_a8,*(undefined8 *)PTR_DAT_049c93b0);
                    /* catch() { ... } // from try @ 02616b9c with catch @ 02616d5c */
                    /* catch() { ... } // from try @ 02615aac with catch @ 02616d60
                       catch() { ... } // from try @ 02615d44 with catch @ 02616d60
                       catch() { ... } // from try @ 0261601c with catch @ 02616d60
                       catch() { ... } // from try @ 026162ec with catch @ 02616d60
                       catch() { ... } // from try @ 026163a0 with catch @ 02616d60
                       catch() { ... } // from try @ 02616630 with catch @ 02616d60
                       catch() { ... } // from try @ 026166e4 with catch @ 02616d60
                       catch() { ... } // from try @ 02616a4c with catch @ 02616d60
                       catch() { ... } // from try @ 02616c5c with catch @ 02616d60
                       catch() { ... } // from try @ 02616de8 with catch @ 02616d60
                       catch() { ... } // from try @ 026173a0 with catch @ 02616d60
                       catch() { ... } // from try @ 0261761c with catch @ 02616d60 */
    lVar8 = *(long *)PTR_DAT_049c93a0;
                    /* try { // try from 02616d70 to 02716d93 has its CatchHandler @ 02617930 */
    uStack_58 = uStack_a0;
    uStack_60 = uStack_a8;
    uStack_50 = uStack_98;
    lVar5 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    uVar6 = thunk_FUN_0224e54c(&uStack_60,
                               *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80));
                    /* try { // try from 02616da4 to 02716da7 has its CatchHandler @ 02617924 */
    lVar5 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    iVar2 = FUN_0235b2a0(uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
                    /* try { // try from 02616dc8 to 02716dcf has its CatchHandler @ 026178a8 */
    if (iVar2 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_58;
      *(undefined8 *)(param_1 + 8) = uStack_60;
      *(undefined8 *)(param_1 + 0xc) = uStack_50;
                    /* try { // try from 02616de8 to 02716deb has its CatchHandler @ 02616d60 */
      thunk_FUN_021f190c(param_1 + 8,0);
                    /* try { // try from 02616df8 to 02716e1b has its CatchHandler @ 0261791c */
      FUN_0235c420(param_1 + 2,&uStack_60,param_1,*(undefined8 *)PTR_DAT_049c9390);
      return;
    }
  }
                    /* try { // try from 02616e40 to 02716e57 has its CatchHandler @ 02617920 */
  FUN_0235b3fc(&uStack_60,&uStack_a8,*(undefined8 *)PTR_DAT_049c9398);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(undefined1 *)(lVar7 + 0x59) = 0;
  piVar9 = param_1 + 6;
                    /* try { // try from 02616e58 to 02716e6b has its CatchHandler @ 026178dc */
  lVar5 = DailyChallenge__GetLevel_25165c8(uStack_a8,*(undefined8 *)piVar9);
  if (lVar5 != 0) {
    DailyChallenge__SetMonth_2515d10(*(undefined8 *)piVar9);
    puVar1 = PTR_DAT_049b5310;
                    /* try { // try from 02616e70 to 02716e8b has its CatchHandler @ 026178d4 */
    lVar8 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar1;
    }
    lVar8 = *(long *)(lVar8 + 0xb8);
    uVar3 = CloudPrefsInt__get_Value_24e99c0(lVar8 + 0x918,0);
                    /* try { // try from 02616e98 to 02716ea3 has its CatchHandler @ 02617880 */
    if (*(int *)(*(long *)PTR_DAT_049b5fb0 + 0xe4) == 0) {
      FUN_021f0574();
    }
    iVar2 = System_DateTime__get_Day_30dd524(piVar9,0);
    CloudPrefsInt__set_Value_24e9a2c(lVar8 + 0x918,1 << (ulong)(iVar2 - 1U & 0x1f) | uVar3,0);
                    /* try { // try from 02616edc to 02716edf has its CatchHandler @ 0261787c */
    lVar8 = *(long *)(lVar7 + 0x40);
    uVar11 = *(undefined8 *)piVar9;
    uVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c93a8);
                    /* try { // try from 02616ef8 to 02716f13 has its CatchHandler @ 026178c0 */
    DailyChallenge_PlaySession___ctor_2516a08(uVar6,lVar7,lVar5,uVar11);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    puVar10 = (undefined8 *)(lVar8 + 0x20);
    *puVar10 = uVar6;
    thunk_FUN_021f190c(puVar10,uVar6);
    if (*(long *)(lVar7 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02616f24 to 02716f2f has its CatchHandler @ 026178b4 */
    GameMachine__RequestStateChange_object__261a650
              (*(long *)(lVar7 + 0x28),*(undefined8 *)PTR_DAT_049c3d48);
  }
LAB_02616f34:
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
                    /* try { // try from 02616f50 to 02716f53 has its CatchHandler @ 02617888 */
  return;
}

