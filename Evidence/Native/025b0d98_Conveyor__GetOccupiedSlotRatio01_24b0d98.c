/* IL2CPP: Conveyor$$GetOccupiedSlotRatio01
float Conveyor__GetOccupiedSlotRatio01 (Conveyor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$GetOccupiedSlotRatio01
   float Conveyor__GetOccupiedSlotRatio01 (Conveyor_o* __this, const MethodInfo* method); */

float Conveyor__GetOccupiedSlotRatio01_24b0d98(long param_1)

{
  float fVar1;
  
  Conveyor__ComputeSlotCounts_24b0e80
            (param_1,*(undefined8 *)(param_1 + 0x100),param_1 + 0x114,(int *)(param_1 + 0x118),
             param_1 + 0x11c);
  if (*(int *)(param_1 + 0x11c) == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)*(int *)(param_1 + 0x118) / (float)*(int *)(param_1 + 0x11c);
  }
  return fVar1;
}

