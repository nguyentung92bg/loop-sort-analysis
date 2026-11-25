/* IL2CPP: HomeSceneShimmer.<>c__DisplayClass8_0$$<Glint>b__0
float HomeSceneShimmer___c__DisplayClass8_0___Glint_b__0 (HomeSceneShimmer___c__DisplayClass8_0_o* __this, float u, float v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneShimmer.<>c__DisplayClass8_0$$<Glint>b__0
   float HomeSceneShimmer___c__DisplayClass8_0___Glint_b__0
   (HomeSceneShimmer___c__DisplayClass8_0_o* __this, float u, float v, const MethodInfo* method); */

float HomeSceneShimmer___c__DisplayClass8_0___Glint_b__0_242f0b0
                (float param_1,float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(param_3 + 0x10);
  fVar4 = *(float *)(param_3 + 0x14);
  iVar2 = *(int *)(param_3 + 0x18);
  fVar5 = *(float *)(param_3 + 0x1c);
  if (cRam0000000004f4a55b == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a55b = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar5 = ((param_2 + -0.5) * (float)iVar2) / fVar5;
  fVar4 = ((param_1 + -0.5) * (float)iVar1) / fVar4;
  fVar5 = 1.0 - SQRT(fVar4 * fVar4 + fVar5 * fVar5);
  fVar4 = 1.0;
  if (fVar5 <= 1.0) {
    fVar4 = fVar5;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar5) {
    fVar3 = fVar4;
  }
  return fVar3 * *(float *)(param_3 + 0x20);
}

