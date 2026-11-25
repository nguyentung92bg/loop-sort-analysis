/* IL2CPP: SandPileField.StepJob$$DriftAt
float SandPileField_StepJob__DriftAt (SandPileField_StepJob_o __this, float distance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandPileField.StepJob$$DriftAt
   float SandPileField_StepJob__DriftAt (SandPileField_StepJob_o __this, float distance, const
   MethodInfo* method); */

float SandPileField_StepJob__DriftAt_24d4c6c(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = 0.0;
  if ((1 < *(int *)(param_2 + 0x88)) && (fVar7 = *(float *)(param_2 + 0x90), _UNK_013aa94c < fVar7))
  {
    if (cRam0000000004f4bc11 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4bc11 = '\x01';
    }
    param_1 = param_1 / fVar7;
                    /* try { // try from 025d4cd0 to 026d4d67 has its CatchHandler @ 025d4cd0
                       catch() { ... } // from try @ 025d4cd0 with catch @ 025d4cd0
                       catch() { ... } // from try @ 025d4de0 with catch @ 025d4cd0
                       catch() { ... } // from try @ 025d4e54 with catch @ 025d4cd0 */
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    param_1 = param_1 - (float)(int)param_1;
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    if ((uint)ABS(param_1) < 0x7f800001) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(param_1)) {
        bVar3 = param_1 < 1.0;
        bVar4 = param_1 == 1.0;
        bVar5 = false;
      }
    }
    fVar6 = 1.0;
    if (bVar4 || bVar3 != bVar5) {
      fVar6 = param_1;
    }
    bVar3 = true;
    if (((uint)ABS(fVar6) < 0x7f800001) && (bVar3 = false, !NAN(fVar6))) {
      bVar3 = fVar6 < 0.0;
    }
    iVar2 = *(int *)(param_2 + 0x88) + -2;
    fVar7 = 0.0;
    if (!bVar3) {
      fVar7 = fVar6;
    }
    fVar7 = fVar7 * (float)(*(int *)(param_2 + 0x88) + -1);
    iVar1 = -0x80000000;
    if (fVar7 != INFINITY) {
      iVar1 = (int)fVar7;
    }
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
    fVar6 = *(float *)(*(long *)(param_2 + 0x10) + (long)iVar1 * 4);
                    /* try { // try from 025d4d68 to 026d4d73 has its CatchHandler @ 025d4e1c */
    fVar6 = fVar6 + (*(float *)(*(long *)(param_2 + 0x10) + (long)(iVar1 + 1) * 4) - fVar6) *
                    (fVar7 - (float)iVar1);
  }
  return fVar6;
}

