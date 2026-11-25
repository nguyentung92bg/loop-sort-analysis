/* IL2CPP: SandFlowRenderer$$LandingAge
float SandFlowRenderer__LandingAge (SandFlowRenderer_o* __this, uint32_t seed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$LandingAge
   float SandFlowRenderer__LandingAge (SandFlowRenderer_o* __this, uint32_t seed, const MethodInfo*
   method); */

float SandFlowRenderer__LandingAge_24c04b4(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar2 = PTR_DAT_049c6e10;
  if ((bRam0000000004f4bbc9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbc9 = 1;
  }
  fVar6 = *(float *)(param_1 + 0x78);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar1 = (param_2 + 0x4b1U ^ param_2 + 0x4b1U >> 0x10) * 0x7feb352d;
  fVar4 = 1.0;
  if (fVar6 <= 1.0) {
    fVar4 = fVar6;
  }
  uVar1 = (uVar1 ^ uVar1 >> 0xf) * -0x7b935975;
  fVar5 = (float)(uVar1 & 0xffffff ^ uVar1 >> 0x10) / 16777216.0;
  fVar3 = 1.0;
  if (0.0 <= fVar6) {
    fVar3 = 1.0 - fVar4;
  }
  fVar6 = 1.0;
  if (fVar5 <= 1.0) {
    fVar6 = fVar5;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar5) {
    fVar4 = fVar6;
  }
  fVar3 = fVar3 + fVar4 * (1.0 - fVar3);
  fVar6 = _UNK_013aa698;
  if (_UNK_013aa698 <= fVar3) {
    fVar6 = fVar3;
  }
  return fVar6;
}

