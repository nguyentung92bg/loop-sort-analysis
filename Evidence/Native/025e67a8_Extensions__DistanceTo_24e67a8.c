/* IL2CPP: Extensions$$DistanceTo
float Extensions__DistanceTo (Dreamteck_Splines_SplineComputer_o* s, double from, double to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$DistanceTo
   float Extensions__DistanceTo (Dreamteck_Splines_SplineComputer_o* s, double from, double to,
   const MethodInfo* method); */

float Extensions__DistanceTo_24e67a8(double param_1,double param_2,float param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dStack_98;
  uint uStack_90;
  int iStack_8c;
  double dStack_88;
  double dStack_78;
  
  puVar2 = PTR_DAT_049b6110;
  if ((bRam0000000004f4bc8d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4bc8d = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  dVar12 = param_2;
  if (param_1 <= param_2) {
    dVar12 = param_1;
    param_1 = param_2;
  }
  if (dVar12 <= param_1) {
    if (param_4 != 0) {
      if (*(char *)(param_4 + 0x49) == '\0') {
        return 0.0;
      }
      Dreamteck_Splines_SplineComputer__UpdateSampleCollection_2346894(param_4,0);
      lVar4 = *(long *)(param_4 + 0x38);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      dStack_88 = param_1;
      dStack_78 = dVar12;
      if ((bRam0000000004f4a630 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049bdcf8,1,0);
        bRam0000000004f4a630 = 1;
      }
      fVar10 = SUB84(param_1,0);
      dStack_98 = 0.0;
      uStack_90 = 0;
      iStack_8c = 0;
      if (*(long *)(lVar4 + 0x10) == 0) {
LAB_0245cd74:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(*(long *)(lVar4 + 0x10) + 0x18) == 0) {
        fVar11 = 0.0;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_049bdcf8 + 0xe4) == 0) {
          FUN_021f0574();
        }
        Dreamteck_Splines_Spline__FormatFromTo_236861c(&dStack_78,&dStack_88,1,0);
        fVar8 = (float)Dreamteck_Splines_SampleCollection__EvaluatePosition_235bfc8(dStack_78,lVar4)
        ;
        fVar14 = param_3;
        fVar13 = fVar10;
        Dreamteck_Splines_SampleCollection__GetSamplingValues_235b314
                  (dStack_78,lVar4,&iStack_8c,&dStack_98);
        Dreamteck_Splines_SampleCollection__GetSamplingValues_235b314
                  (dStack_88,lVar4,&uStack_90,&dStack_98);
        puVar2 = PTR_DAT_049b8758;
        if (0.0 < dStack_98) {
          if (*(long *)(lVar4 + 0x10) == 0) goto LAB_0245cd74;
          if ((int)uStack_90 < *(int *)(*(long *)(lVar4 + 0x10) + 0x18) + -1) {
            uStack_90 = uStack_90 + 1;
          }
        }
        uVar3 = uStack_90;
        fVar11 = 0.0;
        uVar1 = iStack_8c + 1;
        uVar6 = (ulong)uVar1;
        if ((int)uVar1 < (int)uStack_90) {
          uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xffffffc000000000 | uVar6 << 6;
          fVar15 = fVar10;
          fVar16 = param_3;
          fVar9 = fVar8;
          do {
            lVar5 = *(long *)(lVar4 + 0x10);
            if (lVar5 == 0) goto LAB_0245cd74;
            if (*(uint *)(lVar5 + 0x18) <= (uint)uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            lVar5 = lVar5 + uVar7;
            fVar8 = *(float *)(lVar5 + 0x20);
            fVar10 = *(float *)(lVar5 + 0x24);
            param_3 = *(float *)(lVar5 + 0x28);
            if (cRam0000000004f4a234 == '\0') {
              FUN_021f03f8(puVar2);
              cRam0000000004f4a234 = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar1 = (uint)uVar6 + 1;
            uVar6 = (ulong)uVar1;
            fVar14 = param_3 - fVar16;
            uVar7 = uVar7 + 0x40;
            fVar13 = fVar14 * fVar14;
            fVar11 = fVar11 + SQRT(fVar13 + (fVar8 - fVar9) * (fVar8 - fVar9) +
                                            (fVar10 - fVar15) * (fVar10 - fVar15));
            fVar15 = fVar10;
            fVar16 = param_3;
            fVar9 = fVar8;
          } while (uVar3 != uVar1);
        }
        fVar9 = (float)Dreamteck_Splines_SampleCollection__EvaluatePosition_235bfc8(dStack_88,lVar4)
        ;
        if (cRam0000000004f4a234 == '\0') {
          FUN_021f03f8(PTR_DAT_049b8758);
          cRam0000000004f4a234 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        fVar11 = fVar11 + SQRT((fVar14 - param_3) * (fVar14 - param_3) +
                               (fVar9 - fVar8) * (fVar9 - fVar8) +
                               (fVar13 - fVar10) * (fVar13 - fVar10));
      }
      return fVar11;
    }
  }
  else if (param_4 != 0) {
    fVar10 = (float)Dreamteck_Splines_SplineComputer__CalculateLength_2349594
                              (dVar12,0x3ff0000000000000,param_4,0);
    fVar11 = (float)Dreamteck_Splines_SplineComputer__CalculateLength_2349594(0,param_1,param_4,0);
    return fVar10 + fVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

