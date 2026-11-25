/* IL2CPP: HomeSceneFxRunner.Rings$$.ctor
void HomeSceneFxRunner_Rings___ctor (HomeSceneFxRunner_Rings_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, System_Random_o* random, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFxRunner.Rings$$.ctor
   void HomeSceneFxRunner_Rings___ctor (HomeSceneFxRunner_Rings_o* __this, HomeSceneFx_o* fx,
   UnityEngine_RectTransform_o* parent, System_Random_o* random, const MethodInfo* method); */

void HomeSceneFxRunner_Rings___ctor_24215d8
               (long param_1,long param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  undefined4 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  puVar9 = PTR_DAT_049c3168;
  puVar8 = PTR_DAT_049c3160;
                    /* try { // try from 025215f0 to 02621613 has its CatchHandler @ 02521684 */
                    /* try { // try from 02521620 to 02621623 has its CatchHandler @ 02521738 */
  if ((bRam0000000004f4b786 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3168);
                    /* try { // try from 02521638 to 0262163b has its CatchHandler @ 0252179c */
    FUN_021f03f8(PTR_DAT_049c3160);
    bRam0000000004f4b786 = 1;
  }
  uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar8);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar10,*(undefined8 *)puVar9);
                    /* try { // try from 0252165c to 0262165f has its CatchHandler @ 02521738 */
                    /* try { // try from 02521660 to 0262169f has its CatchHandler @ 025212b4 */
                    /* catch() { ... } // from try @ 025215cc with catch @ 02521664 */
  *(undefined8 *)(param_1 + 0x10) = uVar10;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x10),uVar10);
                    /* catch() { ... } // from try @ 025215b4 with catch @ 02521670 */
  System_Object___ctor_3142338(param_1,0);
  uVar7 = _UNK_013aa94c;
  fVar6 = _UNK_013aa768;
  fVar5 = _UNK_013aa3e4;
  if (param_2 != 0) {
                    /* catch() { ... } // from try @ 02521590 with catch @ 0252167c */
    fVar18 = *(float *)(param_2 + 0x5c);
                    /* catch() { ... } // from try @ 0252157c with catch @ 02521680 */
                    /* catch() { ... } // from try @ 025215f0 with catch @ 02521684 */
    if (0.0 <= fVar18) {
      uVar19 = *(undefined4 *)(param_2 + 0x60);
    }
    else {
      uVar19 = 0x41800000;
      fVar18 = 70.0;
    }
                    /* try { // try from 025216a0 to 026216a3 has its CatchHandler @ 02521730 */
                    /* try { // try from 025216a8 to 026216af has its CatchHandler @ 0252172c */
    if ((*(char *)(param_2 + 0x88) != '\0') && (*(int *)(param_2 + 0x54) != 0)) {
                    /* try { // try from 025216b0 to 026216c7 has its CatchHandler @ 025212b4 */
      iVar13 = 0;
                    /* try { // try from 025216c8 to 026216cb has its CatchHandler @ 025216e0 */
      do {
                    /* try { // try from 025216d0 to 026216d7 has its CatchHandler @ 025216dc */
        fVar20 = *(float *)(param_2 + 0x48);
                    /* try { // try from 025216d8 to 02621707 has its CatchHandler @ 025212b4 */
        if (0.0 <= fVar20) {
          fVar21 = *(float *)(param_2 + 0x4c);
        }
        else {
                    /* catch() { ... } // from try @ 025216d0 with catch @ 025216dc */
          fVar21 = 9.0;
                    /* catch() { ... } // from try @ 025216c8 with catch @ 025216e0 */
          fVar20 = 4.0;
        }
        if (param_4 == (long *)0x0) goto LAB_02521850;
        dVar2 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
                    /* try { // try from 02521708 to 0262170b has its CatchHandler @ 02521718 */
        fVar22 = *(float *)(param_2 + 0x8c);
                    /* catch() { ... } // from try @ 02521708 with catch @ 02521718 */
        fVar20 = fVar20 + (fVar21 - fVar20) * (float)dVar2;
                    /* try { // try from 02521720 to 02621727 has its CatchHandler @ 02521798 */
        dVar2 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
                    /* try { // try from 02521728 to 02621763 has its CatchHandler @ 025212b4 */
        fVar23 = *(float *)(param_2 + 0x90);
        fVar16 = *(float *)(param_2 + 0x94);
                    /* catch() { ... } // from try @ 025216a8 with catch @ 0252172c */
                    /* catch() { ... } // from try @ 025216a0 with catch @ 02521730 */
                    /* catch() { ... } // from try @ 02521620 with catch @ 02521738
                       catch() { ... } // from try @ 0252165c with catch @ 02521738 */
        dVar3 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
                    /* catch() { ... } // from try @ 0252151c with catch @ 02521744 */
        fVar17 = *(float *)(param_2 + 0x98);
                    /* try { // try from 02521764 to 02621767 has its CatchHandler @ 02521784 */
                    /* try { // try from 0252176c to 0262176f has its CatchHandler @ 025217a8 */
        fVar21 = fVar5;
        if (fVar6 / fVar20 <= fVar5) {
          fVar21 = fVar6 / fVar20;
        }
                    /* try { // try from 02521770 to 02621773 has its CatchHandler @ 025217a4 */
        dVar4 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
                    /* try { // try from 02521774 to 02621777 has its CatchHandler @ 025217a0 */
                    /* try { // try from 02521778 to 0262177b has its CatchHandler @ 025212b4 */
                    /* try { // try from 0252177c to 02621793 has its CatchHandler @ 0252188c */
                    /* catch() { ... } // from try @ 02521764 with catch @ 02521784 */
                    /* try { // try from 02521794 to 026217db has its CatchHandler @ 025212b4 */
                    /* catch() { ... } // from try @ 02521720 with catch @ 02521798 */
                    /* catch() { ... } // from try @ 02521638 with catch @ 0252179c */
                    /* catch() { ... } // from try @ 02521774 with catch @ 025217a0 */
        HomeSceneFxRunner_Rings__Add_2423098
                  (fVar22 + fVar16 * (float)dVar2,fVar23 + fVar17 * (float)dVar3,fVar18,uVar19,
                   fVar20,uVar7,fVar21,-((float)dVar4 * fVar20),param_1,param_3);
                    /* catch() { ... } // from try @ 02521770 with catch @ 025217a4 */
                    /* catch() { ... } // from try @ 0252176c with catch @ 025217a8 */
        iVar13 = iVar13 + 1;
                    /* catch() { ... } // from try @ 02521460 with catch @ 025217ac */
        iVar1 = 6;
                    /* catch() { ... } // from try @ 025213f4 with catch @ 025217b0 */
        if (-1 < *(int *)(param_2 + 0x54)) {
          iVar1 = *(int *)(param_2 + 0x54);
        }
      } while (iVar13 < iVar1);
    }
    fVar5 = _UNK_013aa7ac;
                    /* catch() { ... } // from try @ 025214a4 with catch @ 025217bc
                       catch() { ... } // from try @ 025214fc with catch @ 025217bc */
    lVar12 = *(long *)(param_2 + 0x70);
    if (lVar12 != 0) {
      if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
        uVar14 = 0;
        uVar11 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
                    /* try { // try from 025217dc to 026217df has its CatchHandler @ 02521878 */
                    /* try { // try from 025217e0 to 0262187b has its CatchHandler @ 025212b4 */
        puVar15 = (undefined4 *)(lVar12 + 0x28);
        do {
          if (uVar11 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          HomeSceneFxRunner_Rings__Add_2423098
                    (puVar15[-1],*puVar15,fVar18,uVar19,*(float *)(param_2 + 0xc0),puVar15[-2],
                     fVar5 / *(float *)(param_2 + 0xc0),*(undefined4 *)(param_2 + 0x50),param_1,
                     param_3);
          uVar11 = (ulong)*(uint *)(lVar12 + 0x18);
          uVar14 = uVar14 + 1;
          puVar15 = puVar15 + 3;
        } while ((long)uVar14 < (long)(int)*(uint *)(lVar12 + 0x18));
      }
      return;
    }
  }
LAB_02521850:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

