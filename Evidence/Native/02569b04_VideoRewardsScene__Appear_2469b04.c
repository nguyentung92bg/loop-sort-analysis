/* IL2CPP: VideoRewardsScene$$Appear
float VideoRewardsScene__Appear (float t, float start, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: VideoRewardsScene$$Appear
   float VideoRewardsScene__Appear (float t, float start, float duration, const MethodInfo* method);
    */

float VideoRewardsScene__Appear_2469b04(float param_1,float param_2,float param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  param_1 = param_1 - param_2;
  fVar6 = 0.0;
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (0.0 <= param_1) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1) && !NAN(param_3)) {
      bVar1 = param_1 < param_3;
      bVar2 = param_1 == param_3;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    fVar4 = param_1 / _UNK_013aa838;
    fVar6 = 1.0;
    if (fVar4 <= 1.0) {
      fVar6 = fVar4;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar4) {
      fVar5 = fVar6;
    }
    fVar5 = (float)LitMotion_EaseUtility__Evaluate_2e8b590(fVar5,0x1a,0);
    fVar7 = (param_3 - param_1) / _UNK_013aa5f0;
    fVar4 = 1.0;
    if (fVar7 <= 1.0) {
      fVar4 = fVar7;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar7) {
      fVar6 = fVar4;
    }
    fVar6 = fVar6 * fVar5;
  }
  return fVar6;
}

