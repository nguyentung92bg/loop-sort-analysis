/* IL2CPP: SandFlowRenderer.DepositJob$$SampleFlow
Unity_Mathematics_float2_o SandFlowRenderer_DepositJob__SampleFlow (SandFlowRenderer_DepositJob_o __this, float distance, float* slope, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer.DepositJob$$SampleFlow
   Unity_Mathematics_float2_o SandFlowRenderer_DepositJob__SampleFlow (SandFlowRenderer_DepositJob_o
   __this, float distance, float* slope, const MethodInfo* method); */

void SandFlowRenderer_DepositJob__SampleFlow_24c5994(float param_1,long param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 0x40);
  if (cRam0000000004f4bc11 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4bc11 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  param_1 = param_1 / fVar4;
  iVar2 = *(int *)(param_2 + 0x70) + -2;
  fVar3 = (float)(*(int *)(param_2 + 0x70) + -1);
  fVar4 = (param_1 - (float)(int)param_1) * fVar3;
  iVar1 = -0x80000000;
  if (fVar4 != INFINITY) {
    iVar1 = (int)fVar4;
  }
  if (iVar2 <= iVar1) {
    iVar1 = iVar2;
  }
  *param_3 = (fVar3 * ((float)*(undefined8 *)(*(long *)(param_2 + 0x50) + (long)(iVar1 + 1) * 8) -
                      (float)*(undefined8 *)(*(long *)(param_2 + 0x50) + (long)iVar1 * 8))) /
             *(float *)(param_2 + 0x40);
  return;
}

