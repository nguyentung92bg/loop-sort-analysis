/* IL2CPP: SandPileField.StepJob$$CapHeight
float SandPileField_StepJob__CapHeight (float height, float limit, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandPileField.StepJob$$CapHeight
   float SandPileField_StepJob__CapHeight (float height, float limit, const MethodInfo* method); */

void SandPileField_StepJob__CapHeight_24d4f38(float param_1,float param_2)

{
  float fVar1;
  
  if ((0.0 < param_2) && (fVar1 = param_2 * _UNK_013aa8f4, fVar1 < param_1)) {
    if (cRam0000000004f4bca4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4bca4 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    FUN_04608790((double)(-(param_1 - fVar1) / (param_2 - fVar1)));
                    /* catch() { ... } // from try @ 025d4fc8 with catch @ 025d4fb0
                       catch() { ... } // from try @ 025d5000 with catch @ 025d4fb0
                       catch() { ... } // from try @ 025d5028 with catch @ 025d4fb0 */
  }
  return;
}

