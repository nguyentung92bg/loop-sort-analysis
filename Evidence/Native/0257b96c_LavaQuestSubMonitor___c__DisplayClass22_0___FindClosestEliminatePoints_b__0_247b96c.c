/* IL2CPP: LavaQuestSubMonitor.<>c__DisplayClass22_0$$<FindClosestEliminatePoints>b__0
int32_t LavaQuestSubMonitor___c__DisplayClass22_0___FindClosestEliminatePoints_b__0 (LavaQuestSubMonitor___c__DisplayClass22_0_o* __this, UnityEngine_Vector3_o left, UnityEngine_Vector3_o right, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor.<>c__DisplayClass22_0$$<FindClosestEliminatePoints>b__0
   int32_t LavaQuestSubMonitor___c__DisplayClass22_0___FindClosestEliminatePoints_b__0
   (LavaQuestSubMonitor___c__DisplayClass22_0_o* __this, UnityEngine_Vector3_o left,
   UnityEngine_Vector3_o right, const MethodInfo* method); */

void LavaQuestSubMonitor___c__DisplayClass22_0___FindClosestEliminatePoints_b__0_247b96c
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               long param_7)

{
  undefined *puVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_64;
  
  fVar7 = *(float *)(param_7 + 0x10);
  fVar3 = *(float *)(param_7 + 0x14);
  fVar8 = *(float *)(param_7 + 0x18);
  fStack_64 = 0.0;
  if (cRam0000000004f4a234 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a234 = '\x01';
  }
  puVar1 = PTR_DAT_049b8758;
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
    bVar2 = cRam0000000004f4a234 == '\0';
  }
  else {
    bVar2 = false;
  }
  fVar3 = fVar3 - param_2;
  fVar7 = fVar7 - param_1;
  fVar8 = fVar8 - param_3;
  fVar4 = *(float *)(param_7 + 0x10);
  fVar6 = *(float *)(param_7 + 0x14);
  fVar5 = *(float *)(param_7 + 0x18);
  fStack_64 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar3 * fVar3);
  if (bVar2) {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a234 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar6 = fVar6 - param_5;
  fVar4 = fVar4 - param_4;
  fVar5 = fVar5 - param_6;
  System_Single__CompareTo_311213c(SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6),&fStack_64,0)
  ;
  return;
}

