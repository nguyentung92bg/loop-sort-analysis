/* IL2CPP: LoseSystem$$get_TimeLeft
float LoseSystem__get_TimeLeft (LoseSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoseSystem$$get_TimeLeft
   float LoseSystem__get_TimeLeft (LoseSystem_o* __this, const MethodInfo* method); */

float LoseSystem__get_TimeLeft_24df11c(long param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0xe0) != '\0') {
    fVar1 = (float)UniTimer__get_RemainingTime_3f0f0ac(param_1 + 0x104,0);
    fVar2 = 0.0;
    if (0.0 <= fVar1) {
      fVar2 = fVar1;
    }
    return fVar2;
  }
  return *(float *)(param_1 + 0x114);
}

