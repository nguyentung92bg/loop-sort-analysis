/* IL2CPP: HomeSceneFog.<>c__DisplayClass6_0$$<Puffs>b__0
float HomeSceneFog___c__DisplayClass6_0___Puffs_b__0 (HomeSceneFog___c__DisplayClass6_0_o* __this, float u, float v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFog.<>c__DisplayClass6_0$$<Puffs>b__0
   float HomeSceneFog___c__DisplayClass6_0___Puffs_b__0 (HomeSceneFog___c__DisplayClass6_0_o*
   __this, float u, float v, const MethodInfo* method); */

float HomeSceneFog___c__DisplayClass6_0___Puffs_b__0_243040c
                (float param_1,float param_2,long param_3)

{
  float fVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  
  puVar2 = PTR_DAT_049b8758;
  fVar1 = _UNK_013aa4f4;
  lVar4 = *(long *)(param_3 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((int)*(ulong *)(lVar4 + 0x18) < 1) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = 0.0;
    uVar5 = 0;
    uVar3 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
    puVar6 = (undefined8 *)(lVar4 + 0x28);
    do {
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      fVar11 = *(float *)((long)puVar6 + -4);
      uVar12 = *puVar6;
      fVar7 = (param_1 - *(float *)(puVar6 + -1)) + 0.5;
      fVar7 = fVar7 - (float)(int)fVar7;
      fVar9 = 1.0;
      if (fVar7 <= 1.0) {
        fVar9 = fVar7;
      }
      fVar8 = -0.5;
      if (0.0 <= fVar7) {
        fVar8 = fVar9 + -0.5;
      }
      if (cRam0000000004f4a55b == '\0') {
        FUN_021f03f8(puVar2);
        cRam0000000004f4a55b = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar3 = (ulong)*(uint *)(lVar4 + 0x18);
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 2;
      fVar8 = fVar8 / (float)uVar12;
      fVar9 = ((1.0 - param_2) - fVar11) / (float)((ulong)uVar12 >> 0x20);
      fVar7 = 1.0 - SQRT(fVar8 * fVar8 + fVar9 * fVar9);
      fVar9 = 1.0;
      if (fVar7 <= 1.0) {
        fVar9 = fVar7;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar7) {
        fVar11 = fVar9 * fVar1;
      }
      if (fVar10 <= fVar11) {
        fVar10 = fVar11;
      }
    } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
  }
  return fVar10;
}

