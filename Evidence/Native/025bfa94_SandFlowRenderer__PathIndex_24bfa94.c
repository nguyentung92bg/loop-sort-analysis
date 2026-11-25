/* IL2CPP: SandFlowRenderer$$PathIndex
int32_t SandFlowRenderer__PathIndex (SandFlowRenderer_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$PathIndex
   int32_t SandFlowRenderer__PathIndex (SandFlowRenderer_o* __this, int32_t index, const MethodInfo*
   method); */

int SandFlowRenderer__PathIndex_24bfa94(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x2fc) + -1;
  if (*(char *)(param_1 + 0x31c) != '\0') {
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = param_2 / iVar3;
    }
    iVar1 = (param_2 - iVar1 * iVar3) + iVar3;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = iVar1 / iVar3;
    }
    return iVar1 - iVar2 * iVar3;
  }
  if (iVar3 < param_2 || param_2 < 0) {
    param_2 = -1;
  }
  return param_2;
}

