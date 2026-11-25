/* IL2CPP: SandFlowRenderer$$get_BeltVertexGrainCount
int32_t SandFlowRenderer__get_BeltVertexGrainCount (SandFlowRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$get_BeltVertexGrainCount
   int32_t SandFlowRenderer__get_BeltVertexGrainCount (SandFlowRenderer_o* __this, const MethodInfo*
   method); */

int SandFlowRenderer__get_BeltVertexGrainCount_24bc200(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x324);
  if (iVar1 < 0x21) {
    iVar1 = 0x20;
  }
  return iVar1 * *(int *)(param_1 + 0x2f8);
}

