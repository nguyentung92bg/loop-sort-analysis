/* IL2CPP: HomeSceneSnow$$Flakes
UnityEngine_Texture2D_o* HomeSceneSnow__Flakes (System_Random_o* random, int32_t w, int32_t h, int32_t n, UnityEngine_Vector2_o radius, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneSnow$$Flakes
   UnityEngine_Texture2D_o* HomeSceneSnow__Flakes (System_Random_o* random, int32_t w, int32_t h,
   int32_t n, UnityEngine_Vector2_o radius, const MethodInfo* method); */

long HomeSceneSnow__Flakes_2431ad8
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,int param_4,int param_5,
               int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  puVar14 = PTR_DAT_049be640;
  if ((bRam0000000004f4b7dd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b9070);
    FUN_021f03f8(PTR_DAT_049be640);
    FUN_021f03f8(PTR_DAT_049b8c98);
    bRam0000000004f4b7dd = 1;
  }
  lVar15 = FUN_021f04e4(*(undefined8 *)puVar14);
  puVar14 = PTR_DAT_049b8758;
  fVar13 = _UNK_013aa980;
  fVar12 = _UNK_013aa8dc;
  fVar11 = _UNK_013aa8b8;
  fVar10 = _UNK_013aa8a8;
  fVar9 = _UNK_013aa540;
  if (0 < param_6) {
    iVar19 = 0;
    do {
      fVar23 = (float)HomeSceneFxRunner__Rand_2422750(0,(float)param_4,param_3,0);
      fVar24 = (float)HomeSceneFxRunner__Rand_2422750(0,(float)param_5,param_3,0);
      fVar25 = (float)HomeSceneFxRunner__Rand_2422790(param_1,param_2,param_3,0);
      fVar26 = (float)HomeSceneFxRunner__Rand_2422750(fVar12,0x3f800000,param_3,0);
      if (cRam0000000004f49d58 == '\0') {
        FUN_021f03f8(puVar14);
        cRam0000000004f49d58 = '\x01';
      }
      if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
        FUN_021f0574();
      }
      iVar22 = -0x80000000;
      if ((float)(int)(fVar24 - fVar25) != INFINITY) {
        iVar22 = (int)(fVar24 - fVar25);
      }
      iVar1 = -0x80000000;
      if ((float)(int)(fVar24 + fVar25) != INFINITY) {
        iVar1 = (int)(fVar24 + fVar25);
      }
      iVar2 = -0x80000000;
      if ((float)(int)(fVar23 - fVar25) != INFINITY) {
        iVar2 = (int)(fVar23 - fVar25);
      }
      iVar3 = -0x80000000;
      if ((float)(int)(fVar23 + fVar25) != INFINITY) {
        iVar3 = (int)(fVar23 + fVar25);
      }
      while( true ) {
        if (cRam0000000004f4b79c == '\0') {
          FUN_021f03f8(puVar14);
          cRam0000000004f4b79c = '\x01';
        }
        if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (iVar1 < iVar22) break;
        if (cRam0000000004f49d58 == '\0') {
          FUN_021f03f8(puVar14);
          cRam0000000004f49d58 = '\x01';
        }
        if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
          FUN_021f0574();
        }
        iVar5 = 0;
        if (param_5 != 0) {
          iVar5 = iVar22 / param_5;
        }
        fVar27 = ((float)iVar22 + 0.5) - fVar24;
        iVar5 = (iVar22 - iVar5 * param_5) + param_5;
        iVar6 = 0;
        if (param_5 != 0) {
          iVar6 = iVar5 / param_5;
        }
        iVar21 = iVar2;
        while( true ) {
          if (cRam0000000004f4b79c == '\0') {
            FUN_021f03f8(puVar14);
            cRam0000000004f4b79c = '\x01';
          }
          if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if (iVar3 < iVar21) break;
          if (cRam0000000004f4a55b == '\0') {
            FUN_021f03f8(puVar14);
            cRam0000000004f4a55b = '\x01';
          }
          if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
            FUN_021f0574();
          }
          fVar28 = ((float)iVar21 + 0.5) - fVar23;
          fVar28 = SQRT(fVar27 * fVar27 + fVar28 * fVar28) / fVar25;
          if (fVar28 < 1.0) {
            if (fVar10 <= fVar28) {
              fVar28 = (fVar28 + fVar11) / fVar12;
              fVar31 = fVar9;
              fVar29 = fVar9;
            }
            else {
              fVar28 = fVar28 / fVar10;
              fVar31 = fVar13;
              fVar29 = 1.0;
            }
            fVar32 = 1.0;
            if (fVar28 <= 1.0) {
              fVar32 = fVar28;
            }
            fVar30 = 0.0;
            if (0.0 <= fVar28) {
              fVar30 = fVar32 * fVar31;
            }
            if (lVar15 == 0) goto LAB_02531f98;
            iVar7 = 0;
            if (param_4 != 0) {
              iVar7 = iVar21 / param_4;
            }
            iVar7 = (iVar21 - iVar7 * param_4) + param_4;
            iVar8 = 0;
            if (param_4 != 0) {
              iVar8 = iVar7 / param_4;
            }
            uVar4 = (iVar7 - iVar8 * param_4) + (iVar5 - iVar6 * param_5) * param_4;
            if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_02531f94;
            lVar16 = lVar15 + (long)(int)uVar4 * 4;
            fVar28 = *(float *)(lVar16 + 0x20);
            fVar29 = fVar26 * (fVar29 - fVar30);
            if (fVar28 <= fVar29) {
              fVar28 = fVar29;
            }
            *(float *)(lVar16 + 0x20) = fVar28;
          }
          iVar21 = iVar21 + 1;
        }
        iVar22 = iVar22 + 1;
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 != param_6);
  }
  lVar16 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b8c98);
  UnityEngine_Texture2D___ctor_3bfb1d4(lVar16,param_4,param_5,4,0,0);
  puVar14 = PTR_DAT_049b9070;
  if (lVar16 != 0) {
    UnityEngine_Texture__set_wrapMode_3bf5c84(lVar16,0,0);
    lVar17 = FUN_021f04e4(*(undefined8 *)puVar14,param_5 * param_4);
    if (lVar17 != 0) {
      if (0 < (int)*(ulong *)(lVar17 + 0x18)) {
        uVar18 = 0;
        uVar20 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
        do {
          if (lVar15 == 0) goto LAB_02531f98;
          if ((*(uint *)(lVar15 + 0x18) <= uVar18) || (uVar20 <= uVar18)) {
LAB_02531f94:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          uVar4 = *(uint *)(lVar17 + 0x18);
          uVar20 = (ulong)uVar4;
          *(uint *)(lVar17 + 0x20 + uVar18 * 4) =
               (int)(*(float *)(lVar15 + 0x20 + uVar18 * 4) * 255.0) << 0x18 | 0xffffff;
          uVar18 = uVar18 + 1;
        } while ((long)uVar18 < (long)(int)uVar4);
      }
      UnityEngine_Texture2D__SetPixels32_3bfbf78(lVar16,lVar17,0);
      UnityEngine_Texture2D__Apply_3bfbb6c(lVar16,0,1,0);
      return lVar16;
    }
  }
LAB_02531f98:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

