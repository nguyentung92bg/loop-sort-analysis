/* IL2CPP: HomeSceneView$$CubicBezier
float HomeSceneView__CubicBezier (float x1, float y1, float x2, float y2, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneView$$CubicBezier
   float HomeSceneView__CubicBezier (float x1, float y1, float x2, float y2, float x, const
   MethodInfo* method); */

float HomeSceneView__CubicBezier_242e20c
                (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  puVar2 = PTR_DAT_049c3110;
  if ((bRam0000000004f4b7c4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3110);
    bRam0000000004f4b7c4 = 1;
  }
  fVar1 = _UNK_013aa8d8;
  fVar7 = _UNK_013aa8a0;
  lVar3 = *(long *)puVar2;
  iVar4 = 6;
  fVar9 = param_5;
  do {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
      lVar3 = *(long *)puVar2;
    }
    fVar8 = 1.0 - fVar9;
    fVar5 = fVar8 * fVar8 * 3.0;
    fVar6 = fVar9 * fVar9 * fVar9 + fVar9 * fVar5 * param_1 + fVar9 * fVar9 * fVar8 * 3.0 * param_3;
    if ((ABS(fVar6 - param_5) < fVar1) ||
       (fVar5 = (1.0 - param_3) * fVar9 * fVar9 * 3.0 +
                fVar5 * param_1 + (param_3 - param_1) * fVar9 * fVar8 * 6.0, ABS(fVar5) < fVar7))
    break;
    fVar6 = fVar9 - (fVar6 - param_5) / fVar5;
    fVar5 = 1.0;
    if (fVar6 <= 1.0) {
      fVar5 = fVar6;
    }
    fVar9 = 0.0;
    if (0.0 <= fVar6) {
      fVar9 = fVar5;
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar7 = (1.0 - fVar9) * 3.0;
  return fVar9 * fVar9 * fVar9 +
         fVar9 * (1.0 - fVar9) * fVar7 * param_2 + fVar9 * fVar9 * fVar7 * param_4;
}

