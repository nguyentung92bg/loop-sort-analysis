/* IL2CPP: SandFlowRenderer$$SampleDistanceSqr
float SandFlowRenderer__SampleDistanceSqr (SandFlowRenderer_o* __this, int32_t index, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$SampleDistanceSqr
   float SandFlowRenderer__SampleDistanceSqr (SandFlowRenderer_o* __this, int32_t index,
   UnityEngine_Vector3_o position, const MethodInfo* method); */

float SandFlowRenderer__SampleDistanceSqr_24bfc24
                (float param_1,float param_2,float param_3,long param_4,int param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_4 + 0x2c8);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((uint)(param_5 << 1) < *(uint *)(lVar1 + 0x18)) {
    lVar1 = lVar1 + (long)(param_5 << 1) * 0x10;
    param_1 = *(float *)(lVar1 + 0x20) - param_1;
    param_2 = *(float *)(lVar1 + 0x24) - param_2;
    param_3 = *(float *)(lVar1 + 0x28) - param_3;
    return param_1 * param_1 + param_2 * param_2 + param_3 * param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a8();
}

