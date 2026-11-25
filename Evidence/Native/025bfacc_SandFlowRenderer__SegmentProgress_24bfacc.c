/* IL2CPP: SandFlowRenderer$$SegmentProgress
float SandFlowRenderer__SegmentProgress (UnityEngine_Vector3_o from, UnityEngine_Vector3_o to, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$SegmentProgress
   float SandFlowRenderer__SegmentProgress (UnityEngine_Vector3_o from, UnityEngine_Vector3_o to,
   UnityEngine_Vector3_o position, const MethodInfo* method); */

float SandFlowRenderer__SegmentProgress_24bfacc
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  
  param_4 = param_4 - param_1;
  param_5 = param_5 - param_2;
  param_6 = param_6 - param_3;
  fVar3 = param_6 * param_6 + param_4 * param_4 + param_5 * param_5;
  fVar2 = 0.0;
  if (_UNK_013aa8a0 < fVar3) {
    fVar3 = (param_6 * (in_stack_00000008 - param_3) +
            param_4 * (fStack0000000000000000 - param_1) +
            param_5 * (fStack0000000000000004 - param_2)) / fVar3;
    fVar1 = 1.0;
    if (fVar3 <= 1.0) {
      fVar1 = fVar3;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar3) {
      fVar2 = fVar1;
    }
  }
  return fVar2;
}

