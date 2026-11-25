/* IL2CPP: HomeSceneFxRunner$$Track
float HomeSceneFxRunner__Track (float u, System_Single_array* times, System_Single_array* values, System_Func_float__float__o* ease, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneFxRunner$$Track
   float HomeSceneFxRunner__Track (float u, System_Single_array* times, System_Single_array* values,
   System_Func_float__float__o* ease, const MethodInfo* method); */

float HomeSceneFxRunner__Track_2422880(float param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_28;
  float fStack_24;
  
  if (param_2 == 0) goto LAB_025229c0;
  uVar1 = (uint)*(ulong *)(param_2 + 0x18);
  if (uVar1 != 0) {
    if (param_1 <= *(float *)(param_2 + 0x20)) {
      if (param_3 == 0) goto LAB_025229c0;
      if (*(int *)(param_3 + 0x18) != 0) {
        return *(float *)(param_3 + 0x20);
      }
    }
    else {
      if (1 < (int)uVar1) {
        lVar3 = 0;
        do {
          fVar4 = *(float *)(param_2 + 0x24 + lVar3 * 4);
          if (param_1 <= fVar4) {
            uVar2 = (uint)lVar3;
            if (uVar1 <= uVar2) goto LAB_025229bc;
            fVar7 = *(float *)(param_2 + (long)(int)uVar2 * 4 + 0x20);
            fVar4 = fVar4 - fVar7;
            fVar5 = 1.0;
            if (0.0 < fVar4) {
              fVar5 = (param_1 - fVar7) / fVar4;
            }
            if (param_4 != 0) {
              fStack_24 = fVar5;
              (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),&fStack_24,&fStack_28,
                         *(undefined8 *)(param_4 + 0x28));
              fVar5 = fStack_28;
            }
            if (param_3 == 0) goto LAB_025229c0;
            if ((uVar2 < *(uint *)(param_3 + 0x18)) && (uVar2 + 1 < *(uint *)(param_3 + 0x18))) {
              fVar4 = 1.0;
              if (fVar5 <= 1.0) {
                fVar4 = fVar5;
              }
              fVar6 = *(float *)(param_3 + (long)(int)uVar2 * 4 + 0x20);
              fVar7 = 0.0;
              if (0.0 <= fVar5) {
                fVar7 = fVar4;
              }
              return fVar6 + fVar7 * (*(float *)(param_3 + lVar3 * 4 + 0x24) - fVar6);
            }
            goto LAB_025229bc;
          }
          lVar3 = lVar3 + 1;
        } while ((*(ulong *)(param_2 + 0x18) & 0xffffffff) - 1 != lVar3);
      }
      if (param_3 == 0) {
LAB_025229c0:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(uint *)(param_3 + 0x18) != 0) {
        return *(float *)(param_3 + ((long)(((ulong)*(uint *)(param_3 + 0x18) << 0x20) +
                                           -0x100000000) >> 0x1e) + 0x20);
      }
    }
  }
LAB_025229bc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a8();
}

