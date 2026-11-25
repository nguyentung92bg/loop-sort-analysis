/* IL2CPP: Conveyor$$get_ActiveLength
float Conveyor__get_ActiveLength (Conveyor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$get_ActiveLength
   float Conveyor__get_ActiveLength (Conveyor_o* __this, const MethodInfo* method); */

float Conveyor__get_ActiveLength_24b03a0
                (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

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
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dStack_98;
  uint uStack_90;
  int iStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_78;
  
  lVar5 = *(long *)(param_4 + 0xb8);
                    /* try { // try from 025b03a4 to 026b03a7 has its CatchHandler @ 025b03b0 */
  if (lVar5 == 0) {
                    /* try { // try from 025b03bc to 026b03c7 has its CatchHandler @ 025b0200 */
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar11 = *(undefined8 *)(param_4 + 0x168);
                    /* catch() { ... } // from try @ 025b03a4 with catch @ 025b03b0 */
                    /* try { // try from 025b03b4 to 026b03bb has its CatchHandler @ 025b03c4 */
  if (*(char *)(lVar5 + 0x49) == '\0') {
    return 0.0;
  }
  Dreamteck_Splines_SplineComputer__UpdateSampleCollection_2346894(lVar5,0);
  lVar5 = *(long *)(lVar5 + 0x38);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_78 = 0;
  uStack_88 = uVar11;
  if ((bRam0000000004f4a630 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bdcf8,1,0);
    bRam0000000004f4a630 = 1;
  }
  fVar16 = (float)uVar11;
  dStack_98 = 0.0;
  uStack_90 = 0;
  iStack_8c = 0;
  if (*(long *)(lVar5 + 0x10) != 0) {
    if (*(int *)(*(long *)(lVar5 + 0x10) + 0x18) == 0) {
      fVar15 = 0.0;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_049bdcf8 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Dreamteck_Splines_Spline__FormatFromTo_236861c(&uStack_78,&uStack_88,1,0);
      fVar8 = (float)Dreamteck_Splines_SampleCollection__EvaluatePosition_235bfc8(uStack_78,lVar5);
      fVar12 = param_3;
      fVar10 = fVar16;
      Dreamteck_Splines_SampleCollection__GetSamplingValues_235b314
                (uStack_78,lVar5,&iStack_8c,&dStack_98);
      Dreamteck_Splines_SampleCollection__GetSamplingValues_235b314
                (uStack_88,lVar5,&uStack_90,&dStack_98);
      puVar2 = PTR_DAT_049b8758;
      if (0.0 < dStack_98) {
        if (*(long *)(lVar5 + 0x10) == 0) goto LAB_0245cd74;
        if ((int)uStack_90 < *(int *)(*(long *)(lVar5 + 0x10) + 0x18) + -1) {
          uStack_90 = uStack_90 + 1;
        }
      }
      uVar3 = uStack_90;
      fVar15 = 0.0;
      uVar1 = iStack_8c + 1;
      uVar6 = (ulong)uVar1;
      if ((int)uVar1 < (int)uStack_90) {
        uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xffffffc000000000 | uVar6 << 6;
        fVar13 = fVar16;
        fVar14 = param_3;
        fVar9 = fVar8;
        do {
          lVar4 = *(long *)(lVar5 + 0x10);
          if (lVar4 == 0) goto LAB_0245cd74;
          if (*(uint *)(lVar4 + 0x18) <= (uint)uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          lVar4 = lVar4 + uVar7;
          fVar8 = *(float *)(lVar4 + 0x20);
          fVar16 = *(float *)(lVar4 + 0x24);
          param_3 = *(float *)(lVar4 + 0x28);
          if (cRam0000000004f4a234 == '\0') {
            FUN_021f03f8(puVar2);
            cRam0000000004f4a234 = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar1 = (uint)uVar6 + 1;
          uVar6 = (ulong)uVar1;
          fVar12 = param_3 - fVar14;
          uVar7 = uVar7 + 0x40;
          fVar10 = fVar12 * fVar12;
          fVar15 = fVar15 + SQRT(fVar10 + (fVar8 - fVar9) * (fVar8 - fVar9) +
                                          (fVar16 - fVar13) * (fVar16 - fVar13));
          fVar13 = fVar16;
          fVar14 = param_3;
          fVar9 = fVar8;
        } while (uVar3 != uVar1);
      }
      fVar9 = (float)Dreamteck_Splines_SampleCollection__EvaluatePosition_235bfc8(uStack_88,lVar5);
      if (cRam0000000004f4a234 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8758);
        cRam0000000004f4a234 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      fVar15 = fVar15 + SQRT((fVar12 - param_3) * (fVar12 - param_3) +
                             (fVar9 - fVar8) * (fVar9 - fVar8) +
                             (fVar10 - fVar16) * (fVar10 - fVar16));
    }
    return fVar15;
  }
LAB_0245cd74:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

