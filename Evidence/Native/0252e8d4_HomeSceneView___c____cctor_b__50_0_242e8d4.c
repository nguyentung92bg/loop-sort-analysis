/* IL2CPP: HomeSceneView.<>c$$<.cctor>b__50_0
float HomeSceneView___c____cctor_b__50_0 (HomeSceneView___c_o* __this, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneView.<>c$$<.cctor>b__50_0
   float HomeSceneView___c____cctor_b__50_0 (HomeSceneView___c_o* __this, float x, const MethodInfo*
   method); */

float HomeSceneView___c____cctor_b__50_0_242e8d4(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  puVar4 = PTR_DAT_049c3110;
  if ((bRam0000000004f4b7c8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3110);
    bRam0000000004f4b7c8 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c3110;
  fVar3 = _UNK_013aa974;
  fVar9 = _UNK_013aa65c;
  if ((bRam0000000004f4b7c4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3110);
    bRam0000000004f4b7c4 = 1;
  }
  fVar2 = _UNK_013aa8d8;
  fVar1 = _UNK_013aa8a0;
  lVar5 = *(long *)puVar4;
  iVar6 = 6;
  fVar11 = param_1;
  do {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar4;
    }
    fVar10 = 1.0 - fVar11;
    fVar7 = fVar10 * fVar10 * 3.0;
    fVar8 = fVar11 * fVar11 * fVar11 +
            fVar11 * fVar7 * fVar9 + fVar11 * fVar11 * fVar10 * 3.0 * fVar3;
    if ((ABS(fVar8 - param_1) < fVar2) ||
       (fVar7 = (1.0 - fVar3) * fVar11 * fVar11 * 3.0 +
                fVar7 * fVar9 + (fVar3 - fVar9) * fVar11 * fVar10 * 6.0, ABS(fVar7) < fVar1)) break;
    fVar8 = fVar11 - (fVar8 - param_1) / fVar7;
    fVar7 = 1.0;
    if (fVar8 <= 1.0) {
      fVar7 = fVar8;
    }
    fVar11 = 0.0;
    if (0.0 <= fVar8) {
      fVar11 = fVar7;
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar9 = (1.0 - fVar11) * 3.0;
  return fVar11 * fVar11 * fVar11 +
         fVar11 * (1.0 - fVar11) * fVar9 * 0.0 + fVar11 * fVar11 * fVar9 * 1.0;
}

