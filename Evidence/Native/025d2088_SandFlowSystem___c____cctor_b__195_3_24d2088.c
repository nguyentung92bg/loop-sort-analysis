/* IL2CPP: SandFlowSystem.<>c$$<.cctor>b__195_3
int32_t SandFlowSystem___c____cctor_b__195_3 (SandFlowSystem___c_o* __this, SandFlowSystem_Approach_o a, SandFlowSystem_Approach_o b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem.<>c$$<.cctor>b__195_3
   int32_t SandFlowSystem___c____cctor_b__195_3 (SandFlowSystem___c_o* __this,
   SandFlowSystem_Approach_o a, SandFlowSystem_Approach_o b, const MethodInfo* method); */

int SandFlowSystem___c____cctor_b__195_3_24d2088(undefined8 param_1,long param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_3 + 0x10);
  fVar2 = *(float *)(param_2 + 0x10);
  if (fVar2 < fVar1) {
    return -1;
  }
  if (fVar2 <= fVar1) {
    if (fVar2 == fVar1) {
      return 0;
    }
    if (0x7f800000 < (uint)ABS(fVar2)) {
      return -(uint)((uint)ABS(fVar1) < 0x7f800001);
    }
  }
  return 1;
}

