/* IL2CPP: HomeSceneShapes.<>c$$<get_Flash>b__10_0
float HomeSceneShapes___c___get_Flash_b__10_0 (HomeSceneShapes___c_o* __this, float u, float v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneShapes.<>c$$<get_Flash>b__10_0
   float HomeSceneShapes___c___get_Flash_b__10_0 (HomeSceneShapes___c_o* __this, float u, float v,
   const MethodInfo* method); */

float HomeSceneShapes___c___get_Flash_b__10_0_2429094(float param_1,float param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((bRam0000000004f4b7ac & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049be640);
    bRam0000000004f4b7ac = 1;
  }
  if (cRam0000000004f4a55b == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a55b = '\x01';
  }
  param_1 = param_1 + -0.5;
  param_2 = param_2 + -0.5;
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar5 = SQRT(param_1 * param_1 + param_2 * param_2);
  fVar8 = 1.0;
  if (_UNK_013aa774 <= fVar5) {
    fVar6 = (fVar5 + _UNK_013aa66c) / _UNK_013aa81c + 1.0;
    fVar5 = 1.0;
    if (fVar6 <= 1.0) {
      fVar5 = fVar6;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar6) {
      fVar8 = fVar5;
    }
  }
  fVar6 = 1.0 - ABS(param_1) / _UNK_013aa978;
  fVar5 = 1.0;
  if (fVar6 <= 1.0) {
    fVar5 = fVar6;
  }
  fVar7 = 1.0 - ABS(param_2) / _UNK_013aa978;
  fVar9 = 0.0;
  if (0.0 <= fVar6) {
    fVar9 = fVar5;
  }
  fVar5 = 1.0;
  if (fVar7 <= 1.0) {
    fVar5 = fVar7;
  }
  fVar6 = 0.0;
  if (0.0 <= fVar7) {
    fVar6 = fVar5;
  }
  lVar1 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049be640,3);
  if (lVar1 != 0) {
    uVar2 = (uint)*(ulong *)(lVar1 + 0x18);
    if (((uVar2 != 0) && (*(float *)(lVar1 + 0x20) = fVar8, uVar2 != 1)) &&
       (*(float *)(lVar1 + 0x24) = fVar9, 2 < uVar2)) {
      *(float *)(lVar1 + 0x28) = fVar6;
      if (1 < (int)uVar2) {
        lVar3 = (*(ulong *)(lVar1 + 0x18) & 0xffffffff) - 1;
        pfVar4 = (float *)(lVar1 + 0x24);
        do {
          fVar5 = *pfVar4;
          if (*pfVar4 <= fVar8) {
            fVar5 = fVar8;
          }
          fVar8 = fVar5;
          lVar3 = lVar3 + -1;
          pfVar4 = pfVar4 + 1;
        } while (lVar3 != 0);
      }
      return fVar8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

