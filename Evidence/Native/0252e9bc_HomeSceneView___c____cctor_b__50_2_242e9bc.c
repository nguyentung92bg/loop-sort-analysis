/* IL2CPP: HomeSceneView.<>c$$<.cctor>b__50_2
float HomeSceneView___c____cctor_b__50_2 (HomeSceneView___c_o* __this, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneView.<>c$$<.cctor>b__50_2
   float HomeSceneView___c____cctor_b__50_2 (HomeSceneView___c_o* __this, float x, const MethodInfo*
   method); */

float HomeSceneView___c____cctor_b__50_2_242e9bc(float param_1)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  puVar3 = PTR_DAT_049c3110;
  if ((bRam0000000004f4b7ca & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3110);
    bRam0000000004f4b7ca = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049c3110;
  fVar8 = _UNK_013aa974;
  if ((bRam0000000004f4b7c4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3110);
    bRam0000000004f4b7c4 = 1;
  }
  fVar2 = _UNK_013aa8d8;
  fVar1 = _UNK_013aa8a0;
  lVar4 = *(long *)puVar3;
  iVar5 = 6;
  fVar10 = param_1;
  do {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar3;
    }
    fVar9 = 1.0 - fVar10;
    fVar6 = fVar9 * fVar9 * 3.0;
    fVar7 = fVar10 * fVar10 * fVar10 + fVar10 * fVar6 * 0.0 + fVar10 * fVar10 * fVar9 * 3.0 * fVar8;
    if ((ABS(fVar7 - param_1) < fVar2) ||
       (fVar6 = (1.0 - fVar8) * fVar10 * fVar10 * 3.0 +
                fVar6 * 0.0 + (fVar8 - 0.0) * fVar10 * fVar9 * 6.0, ABS(fVar6) < fVar1)) break;
    fVar7 = fVar10 - (fVar7 - param_1) / fVar6;
    fVar6 = 1.0;
    if (fVar7 <= 1.0) {
      fVar6 = fVar7;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar7) {
      fVar10 = fVar6;
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar8 = (1.0 - fVar10) * 3.0;
  return fVar10 * fVar10 * fVar10 +
         fVar10 * (1.0 - fVar10) * fVar8 * 0.0 + fVar10 * fVar10 * fVar8 * 1.0;
}

