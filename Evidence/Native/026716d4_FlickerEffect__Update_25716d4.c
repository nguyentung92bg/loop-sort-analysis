/* IL2CPP: FlickerEffect$$Update
void FlickerEffect__Update (FlickerEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: FlickerEffect$$Update
   void FlickerEffect__Update (FlickerEffect_o* __this, const MethodInfo* method); */

void FlickerEffect__Update_25716d4(long param_1)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar2 = (float)UnityEngine_Time__get_time_3c295c8(0);
  }
  else {
    fVar2 = (float)UnityEngine_Time__get_unscaledTime_3c296e8(0);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    fVar5 = *(float *)(param_1 + 0x2c);
    fVar3 = *(float *)(param_1 + 0x28);
    fVar4 = (float)UnityEngine_Mathf__PerlinNoise_3c0ad54
                             (*(undefined4 *)(param_1 + 0x48),fVar2 * *(float *)(param_1 + 0x30),0);
    fVar2 = 1.0;
    if (fVar4 <= 1.0) {
      fVar2 = fVar4;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar4) {
      fVar6 = fVar2;
    }
    fVar3 = fVar3 + (fVar5 - fVar3) * fVar6;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x54);
    if (fVar3 < 0.0) {
      fVar3 = (float)UnityEngine_Random__Range_3c11c54(0,*(undefined4 *)(param_1 + 0x38),0);
      fVar3 = fVar2 + fVar3;
      *(float *)(param_1 + 0x54) = fVar3;
    }
    if (fVar3 <= fVar2) {
      *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) ^ 1;
      fVar4 = (float)UnityEngine_Random__Range_3c11c54
                               (*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),0);
      fVar3 = _UNK_013aa734;
      if (*(char *)(param_1 + 0x50) != '\0') {
        fVar3 = 1.0;
      }
      *(float *)(param_1 + 0x54) = fVar2 + fVar4 * fVar3;
    }
    if (*(char *)(param_1 + 0x20) == '\0') {
      fVar2 = (float)UnityEngine_Time__get_deltaTime_3c29670(0);
    }
    else {
      fVar2 = (float)UnityEngine_Time__get_unscaledDeltaTime_3c29788(0);
    }
    fVar4 = *(float *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0x50) != '\0') {
      fVar4 = *(float *)(param_1 + 0x2c);
    }
    fVar5 = _UNK_013aa688;
    if (_UNK_013aa688 <= *(float *)(param_1 + 0x3c)) {
      fVar5 = *(float *)(param_1 + 0x3c);
    }
    fVar5 = (fVar2 * (*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x28))) / fVar5;
    fVar6 = *(float *)(param_1 + 0x4c);
    fVar2 = -fVar5;
    if (0.0 <= fVar4 - fVar6) {
      fVar2 = fVar5;
    }
    fVar3 = fVar6 + fVar2;
    if (ABS(fVar4 - fVar6) <= fVar5) {
      fVar3 = fVar4;
    }
  }
  plVar1 = *(long **)(param_1 + 0x40);
  *(float *)(param_1 + 0x4c) = fVar3;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0267185c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2a8))(plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

