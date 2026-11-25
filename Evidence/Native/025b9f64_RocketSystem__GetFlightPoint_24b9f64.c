/* IL2CPP: RocketSystem$$GetFlightPoint
UnityEngine_Vector3_o RocketSystem__GetFlightPoint (UnityEngine_Vector3_o from, UnityEngine_Vector3_o apex, UnityEngine_Vector3_o strike, UnityEngine_Vector3_o to, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem$$GetFlightPoint
   UnityEngine_Vector3_o RocketSystem__GetFlightPoint (UnityEngine_Vector3_o from,
   UnityEngine_Vector3_o apex, UnityEngine_Vector3_o strike, UnityEngine_Vector3_o to, float t,
   const MethodInfo* method); */

float RocketSystem__GetFlightPoint_24b9f64
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  float fVar1;
  float in_stack_00000000;
  float in_stack_00000010;
  float in_stack_00000020;
  
  fVar1 = 1.0 - in_stack_00000020;
  return in_stack_00000010 * in_stack_00000020 * in_stack_00000020 * in_stack_00000020 +
         in_stack_00000000 * in_stack_00000020 * in_stack_00000020 * fVar1 * 3.0 +
         param_1 * fVar1 * fVar1 * fVar1 + param_4 * fVar1 * fVar1 * 3.0 * in_stack_00000020;
}

