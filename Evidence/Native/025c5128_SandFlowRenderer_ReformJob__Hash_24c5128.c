/* IL2CPP: SandFlowRenderer.ReformJob$$Hash
float SandFlowRenderer_ReformJob__Hash (uint32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer.ReformJob$$Hash
   float SandFlowRenderer_ReformJob__Hash (uint32_t value, const MethodInfo* method); */

float SandFlowRenderer_ReformJob__Hash_24c5128(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 ^ param_1 >> 0x10) * 0x7feb352d;
  uVar1 = (uVar1 ^ uVar1 >> 0xf) * -0x7b935975;
  return (float)(uVar1 & 0xffffff ^ uVar1 >> 0x10) / 16777216.0;
}

