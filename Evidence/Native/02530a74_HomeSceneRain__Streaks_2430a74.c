/* IL2CPP: HomeSceneRain$$Streaks
UnityEngine_Texture2D_o* HomeSceneRain__Streaks (System_Random_o* random, int32_t w, int32_t h, int32_t n, UnityEngine_Vector2_o length, UnityEngine_Vector2_o width, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneRain$$Streaks
   UnityEngine_Texture2D_o* HomeSceneRain__Streaks (System_Random_o* random, int32_t w, int32_t h,
   int32_t n, UnityEngine_Vector2_o length, UnityEngine_Vector2_o width, const MethodInfo* method);
    */

long HomeSceneRain__Streaks_2430a74
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  char cVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  puVar12 = PTR_DAT_049be640;
  if ((bRam0000000004f4b7d8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b9070);
    FUN_021f03f8(PTR_DAT_049be640);
    FUN_021f03f8(PTR_DAT_049b8c98);
    bRam0000000004f4b7d8 = 1;
  }
  lVar13 = FUN_021f04e4(*(undefined8 *)puVar12);
  puVar12 = PTR_DAT_049b8758;
  uVar11 = _UNK_013aa838;
  if (0 < param_8) {
    iVar18 = 0;
    do {
      fVar20 = (float)HomeSceneFxRunner__Rand_2422750(0,(float)param_6,param_5,0);
      fVar21 = (float)HomeSceneFxRunner__Rand_2422750(0,(float)param_7,param_5,0);
      fVar22 = (float)HomeSceneFxRunner__Rand_2422790(param_1,param_2,param_5,0);
      fVar23 = (float)HomeSceneFxRunner__Rand_2422790(param_3,param_4,param_5,0);
      fVar24 = (float)HomeSceneFxRunner__Rand_2422750(uVar11,0x3f800000,param_5,0);
      if (cRam0000000004f49d58 == '\0') {
        FUN_021f03f8(puVar12);
        cRam0000000004f49d58 = '\x01';
      }
      if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
        FUN_021f0574();
      }
      fVar25 = (fVar20 - fVar23) + -1.0;
      fVar26 = fVar20 + fVar23 + 1.0;
      iVar2 = -0x80000000;
      if ((float)(int)fVar21 != INFINITY) {
        iVar2 = (int)fVar21;
      }
      iVar3 = -0x80000000;
      if ((float)(int)fVar25 != INFINITY) {
        iVar3 = (int)fVar25;
      }
      cVar16 = cRam0000000004f4b79c;
      iVar4 = -0x80000000;
      if ((float)(int)fVar26 != INFINITY) {
        iVar4 = (int)fVar26;
      }
      while( true ) {
        if (cVar16 == '\0') {
          FUN_021f03f8(puVar12);
          cRam0000000004f4b79c = '\x01';
        }
        if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (((float)(int)(fVar21 + fVar22) == INFINITY) || ((int)(fVar21 + fVar22) <= iVar2)) break;
        fVar26 = (((float)iVar2 + 0.5) - fVar21) / fVar22;
        fVar25 = 1.0;
        if (fVar26 <= 1.0) {
          fVar25 = fVar26;
        }
        fVar27 = 0.0;
        if (0.0 <= fVar26) {
          fVar27 = fVar25;
        }
        if (cRam0000000004f49d58 == '\0') {
          FUN_021f03f8(puVar12);
          cRam0000000004f49d58 = '\x01';
        }
        if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
          FUN_021f0574();
        }
        iVar6 = 0;
        if (param_7 != 0) {
          iVar6 = iVar2 / param_7;
        }
        iVar6 = (iVar2 - iVar6 * param_7) + param_7;
        iVar7 = 0;
        if (param_7 != 0) {
          iVar7 = iVar6 / param_7;
        }
        iVar1 = iVar3;
        cVar16 = cRam0000000004f4b79c;
        while( true ) {
          if (cVar16 == '\0') {
            FUN_021f03f8(puVar12);
            cVar16 = '\x01';
            cRam0000000004f4b79c = '\x01';
          }
          if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
            FUN_021f0574();
            cVar16 = cRam0000000004f4b79c;
          }
          if (iVar4 < iVar1) break;
          fVar26 = (fVar23 * 0.5 + 0.5) - ABS(((float)iVar1 + 0.5) - fVar20);
          fVar25 = 1.0;
          if (fVar26 <= 1.0) {
            fVar25 = fVar26;
          }
          fVar10 = 0.0;
          if (0.0 <= fVar26) {
            fVar10 = fVar25;
          }
          if (0.0 < fVar10) {
            if (lVar13 == 0) goto LAB_02530ef8;
            iVar8 = 0;
            if (param_6 != 0) {
              iVar8 = iVar1 / param_6;
            }
            iVar8 = (iVar1 - iVar8 * param_6) + param_6;
            iVar9 = 0;
            if (param_6 != 0) {
              iVar9 = iVar8 / param_6;
            }
            uVar5 = (iVar8 - iVar9 * param_6) + (~(iVar6 - iVar7 * param_7) + param_7) * param_6;
            if (*(uint *)(lVar13 + 0x18) <= uVar5) goto LAB_02530ef4;
            lVar14 = lVar13 + (long)(int)uVar5 * 4;
            fVar25 = *(float *)(lVar14 + 0x20);
            fVar26 = fVar24 * fVar27 * fVar10;
            if (fVar25 <= fVar26) {
              fVar25 = fVar26;
            }
            *(float *)(lVar14 + 0x20) = fVar25;
          }
          iVar1 = iVar1 + 1;
        }
        iVar2 = iVar2 + 1;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 != param_8);
  }
  lVar14 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b8c98);
  UnityEngine_Texture2D___ctor_3bfb1d4(lVar14,param_6,param_7,4,0,0);
  puVar12 = PTR_DAT_049b9070;
  if (lVar14 != 0) {
    UnityEngine_Texture__set_wrapMode_3bf5c84(lVar14,0,0);
    lVar15 = FUN_021f04e4(*(undefined8 *)puVar12,param_7 * param_6);
    if (lVar15 != 0) {
      if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
        uVar17 = 0;
        uVar19 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
        do {
          if (lVar13 == 0) goto LAB_02530ef8;
          if ((*(uint *)(lVar13 + 0x18) <= uVar17) || (uVar19 <= uVar17)) {
LAB_02530ef4:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          uVar5 = *(uint *)(lVar15 + 0x18);
          uVar19 = (ulong)uVar5;
          *(uint *)(lVar15 + 0x20 + uVar17 * 4) =
               (int)(*(float *)(lVar13 + 0x20 + uVar17 * 4) * 255.0) << 0x18 | 0xffffff;
          uVar17 = uVar17 + 1;
        } while ((long)uVar17 < (long)(int)uVar5);
      }
      UnityEngine_Texture2D__SetPixels32_3bfbf78(lVar14,lVar15,0);
      UnityEngine_Texture2D__Apply_3bfbb6c(lVar14,0,1,0);
      return lVar14;
    }
  }
LAB_02530ef8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

