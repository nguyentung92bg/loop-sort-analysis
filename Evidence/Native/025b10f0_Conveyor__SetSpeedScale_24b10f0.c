/* IL2CPP: Conveyor$$SetSpeedScale
bool Conveyor__SetSpeedScale (Conveyor_o* __this, float speedScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$SetSpeedScale
   bool Conveyor__SetSpeedScale (Conveyor_o* __this, float speedScale, const MethodInfo* method); */

undefined8 Conveyor__SetSpeedScale_24b10f0(float param_1,long param_2)

{
  *(float *)(param_2 + 0x144) = param_1;
  *(float *)(param_2 + 0x140) = *(float *)(param_2 + 0x13c) * param_1;
  Conveyor__UpdateSpeed_24b1114();
  return 1;
}

