/* IL2CPP: SandFlowRenderer$$get_DrawCount
int32_t SandFlowRenderer__get_DrawCount (SandFlowRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$get_DrawCount
   int32_t SandFlowRenderer__get_DrawCount (SandFlowRenderer_o* __this, const MethodInfo* method);
    */

int SandFlowRenderer__get_DrawCount_24bc27c(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x324);
  if (iVar1 < 0x21) {
    iVar1 = 0x20;
  }
  return iVar1 * *(int *)(param_1 + 0x2f8);
}

