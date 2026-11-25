/* IL2CPP: HeadlightBlinkEffect$$Bump
float HeadlightBlinkEffect__Bump (HeadlightBlinkEffect_o* __this, float phase, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HeadlightBlinkEffect$$Bump
   float HeadlightBlinkEffect__Bump (HeadlightBlinkEffect_o* __this, float phase, const MethodInfo*
   method); */

undefined1  [16] HeadlightBlinkEffect__Bump_2571e00(float param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  if ((0.0 <= param_1) && (param_1 <= *(float *)(param_2 + 0x40))) {
    auVar1 = (*(code *)PTR_sinf_04a70200)((param_1 / *(float *)(param_2 + 0x40)) * _UNK_013aa860);
    return auVar1;
  }
  return ZEXT816(0);
}

