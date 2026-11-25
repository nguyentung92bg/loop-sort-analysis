/* IL2CPP: SandFlowRenderer$$GetPileLayout
SandFlowRenderer_PileGrain_array* SandFlowRenderer__GetPileLayout (SandFlowRenderer_o* __this, int32_t index, SandFlowPacket_o* packet, int32_t grains, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$GetPileLayout
   SandFlowRenderer_PileGrain_array* SandFlowRenderer__GetPileLayout (SandFlowRenderer_o* __this,
   int32_t index, SandFlowPacket_o* packet, int32_t grains, const MethodInfo* method); */

long SandFlowRenderer__GetPileLayout_24c1528
               (long param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  float fVar29;
  int iVar30;
  uint uVar31;
  byte bVar35;
  int iVar32;
  ulong uVar27;
  int iVar33;
  undefined8 uVar28;
  float fVar34;
  float fVar36;
  float fVar37;
  byte bVar39;
  undefined8 uVar38;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  
  if ((bRam0000000004f4bbd3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6f20);
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbd3 = 1;
  }
  lVar12 = *(long *)(param_1 + 0x1f0);
  if (lVar12 == 0) {
LAB_025c1b4c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (param_2 < *(uint *)(lVar12 + 0x18)) {
    lVar17 = *(long *)(param_1 + 0x1a8);
    if (lVar17 == 0) goto LAB_025c1b4c;
    if (param_2 < *(uint *)(lVar17 + 0x18)) {
      lVar16 = (long)(int)param_2;
      lVar12 = lVar12 + 0x20;
      lVar1 = lVar17 + lVar16 * 8;
      puVar14 = (undefined8 *)(lVar12 + (long)(int)param_2 * 0x90);
      plVar18 = (long *)(lVar1 + 0x20);
      lVar13 = *plVar18;
      if ((lVar13 == 0) || (*(uint *)(lVar13 + 0x18) != param_4)) {
        lVar13 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049c6f20,param_4);
        if (*(uint *)(lVar17 + 0x18) <= param_2) goto LAB_025c1b48;
        *plVar18 = lVar13;
        thunk_FUN_021f190c(lVar1 + 0x20,lVar13);
      }
      else {
        lVar17 = *(long *)(param_1 + 0x1f8);
        if (lVar17 == 0) goto LAB_025c1b4c;
        if (*(uint *)(lVar17 + 0x18) <= param_2) goto LAB_025c1b48;
        if ((((*(int *)(lVar17 + lVar16 * 4 + 0x20) == *(int *)(param_1 + 0x200)) &&
             (*(float *)(lVar12 + (long)(int)param_2 * 0x90 + 0x80) == *(float *)(param_3 + 0x10)))
            && (*(float *)(lVar12 + (long)(int)param_2 * 0x90 + 0x84) ==
                *(float *)((long)param_3 + 0x84))) &&
           (((fVar20 = (float)*puVar14 - (float)*param_3,
             fVar23 = (float)((ulong)*puVar14 >> 0x20) - (float)((ulong)*param_3 >> 0x20),
             fVar24 = (float)puVar14[1] - (float)param_3[1],
             fVar29 = (float)((ulong)puVar14[1] >> 0x20) - (float)((ulong)param_3[1] >> 0x20),
             fVar29 * fVar29 + fVar24 * fVar24 + fVar20 * fVar20 + fVar23 * fVar23 < _UNK_013aa3dc
             && (lVar17 = lVar12 + (long)(int)param_2 * 0x90,
                uVar38 = *(undefined8 *)(lVar17 + 0x70), uVar40 = *(undefined8 *)(lVar17 + 0x78),
                fVar20 = (float)uVar38 - (float)param_3[0xe],
                fVar23 = (float)((ulong)uVar38 >> 0x20) - (float)((ulong)param_3[0xe] >> 0x20),
                fVar24 = (float)uVar40 - (float)param_3[0xf],
                fVar29 = (float)((ulong)uVar40 >> 0x20) - (float)((ulong)param_3[0xf] >> 0x20),
                fVar29 * fVar29 + fVar24 * fVar24 + fVar20 * fVar20 + fVar23 * fVar23 <
                _UNK_013aa3dc)) &&
            ((lVar17 = lVar12 + (long)(int)param_2 * 0x90, uVar38 = *(undefined8 *)(lVar17 + 0x50),
             uVar40 = *(undefined8 *)(lVar17 + 0x58), fVar20 = (float)uVar38 - (float)param_3[10],
             fVar23 = (float)((ulong)uVar38 >> 0x20) - (float)((ulong)param_3[10] >> 0x20),
             fVar24 = (float)uVar40 - (float)param_3[0xb],
             fVar29 = (float)((ulong)uVar40 >> 0x20) - (float)((ulong)param_3[0xb] >> 0x20),
             fVar29 * fVar29 + fVar24 * fVar24 + fVar20 * fVar20 + fVar23 * fVar23 < _UNK_013aa3dc
             && (*(float *)(lVar12 + (long)(int)param_2 * 0x90 + 0x4c) ==
                 *(float *)((long)param_3 + 0x4c))))))) {
          func_0x04608650(puVar14,param_3,0x90);
          return lVar13;
        }
      }
      func_0x04608650(puVar14,param_3,0x90);
      lVar12 = *(long *)(param_1 + 0x1f8);
      if (lVar12 == 0) goto LAB_025c1b4c;
      if (param_2 < *(uint *)(lVar12 + 0x18)) {
        lVar17 = *(long *)(param_1 + 0x1c8);
        *(undefined4 *)(lVar12 + lVar16 * 4 + 0x20) = *(undefined4 *)(param_1 + 0x200);
        puVar11 = PTR_DAT_049c6e10;
        if (lVar17 == 0) goto LAB_025c1b4c;
        if (param_2 < *(uint *)(lVar17 + 0x18)) {
          fVar20 = *(float *)(param_3 + 0x10);
          *(undefined1 *)(lVar17 + lVar16 + 0x20) = 0;
          if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
            FUN_021f0574();
          }
          fVar10 = _UNK_013aa824;
          fVar9 = _UNK_013aa7f0;
          fVar8 = _UNK_013aa764;
          fVar7 = _UNK_013aa688;
          fVar6 = _UNK_013aa62c;
          fVar5 = _UNK_013aa604;
          fVar4 = _UNK_013aa4f4;
          fVar29 = _UNK_013aa3ec;
          fVar24 = _UNK_013aa390;
          fVar23 = _UNK_013aa370;
          uVar38 = _UNK_013a8380;
          if (0 < (int)param_4) {
            uVar2 = (int)fVar20 * 0x511;
            uVar3 = (int)fVar20 * 0x407;
            fVar20 = 1.0;
            uVar15 = 0;
            uVar2 = (uVar2 ^ uVar2 >> 0x10) * 0x7feb352d;
            uVar2 = (uVar2 ^ uVar2 >> 0xf) * -0x7b935975;
            pfVar19 = (float *)(lVar13 + 0x40);
            do {
              if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
                FUN_021f0574();
              }
              lVar12 = uVar3 + uVar15;
              iVar33 = (int)lVar12;
              fVar44 = *(float *)((long)param_3 + 0x7c);
              iVar30 = iVar33 + 0x2dd;
              uVar25 = (uint)((ulong)lVar12 >> 0x10) & 0xffff;
              iVar32 = CONCAT13((char)((ulong)lVar12 >> 0x18),
                                CONCAT12((char)((ulong)lVar12 >> 0x10),
                                         CONCAT11((byte)(uVar25 >> 8) ^ (byte)((ulong)lVar12 >> 8),
                                                  (byte)uVar25 ^ (byte)lVar12)));
              bVar35 = (byte)((uint)iVar30 >> 0x10);
              bVar39 = (byte)((uint)iVar30 >> 0x18);
              uVar25 = iVar32 * 0x7feb352d;
              uVar31 = (int)(CONCAT17(bVar39,CONCAT16(bVar35,CONCAT15((byte)((uint)iVar30 >> 8) ^
                                                                      bVar39,CONCAT14((byte)iVar30 ^
                                                                                      bVar35,iVar32)
                                                                     ))) >> 0x20) * 0x7feb352d;
              fVar21 = (float)(uVar2 & 0xffffff ^ uVar2 >> 0x10) / 16777216.0 +
                       ((float)(int)uVar15 + 0.5) / (float)(int)param_4;
              bVar35 = (byte)(uVar25 >> 0x18);
              iVar32 = CONCAT13(bVar35,CONCAT12(bVar35 >> 7 ^ (byte)(uVar25 >> 0x10),
                                                CONCAT11((byte)((uVar25 >> 0xf) >> 8) ^
                                                         (byte)(uVar25 >> 8),
                                                         (byte)(uVar25 >> 0xf) ^ (byte)uVar25)));
              bVar35 = (byte)(uVar31 >> 0x18);
              fVar21 = fVar21 - (float)(int)fVar21;
              iVar30 = iVar32 * -0x7b935975;
              iVar32 = (int)(CONCAT17(bVar35,CONCAT16(bVar35 >> 7 ^ (byte)(uVar31 >> 0x10),
                                                      CONCAT15((byte)((uVar31 >> 0xf) >> 8) ^
                                                               (byte)(uVar31 >> 8),
                                                               CONCAT14((byte)(uVar31 >> 0xf) ^
                                                                        (byte)uVar31,iVar32)))) >>
                            0x20) * -0x7b935975;
              uVar27 = CONCAT44(iVar32,iVar30) & 0xffffff00ffffff;
              fVar36 = fVar20;
              if (fVar21 <= 1.0) {
                fVar36 = fVar21;
              }
              uVar40 = NEON_ucvtf((ulong)CONCAT16((char)(uVar27 >> 0x30),
                                                  CONCAT15((byte)(uVar27 >> 0x28) ^
                                                           (byte)((uint)iVar32 >> 0x18),
                                                           CONCAT14((byte)(uVar27 >> 0x20) ^
                                                                    (byte)((uint)iVar32 >> 0x10),
                                                                    (uint)CONCAT12((char)(uVar27 >>
                                                                                         0x10),
                                                                                   CONCAT11((byte)(
                                                  uVar27 >> 8) ^ (byte)((uint)iVar30 >> 0x18),
                                                  (byte)uVar27 ^ (byte)((uint)iVar30 >> 0x10)))))),4
                                 );
              fVar41 = (float)((ulong)uVar40 >> 0x20) * 5.9604645e-08;
              fVar43 = -1.0;
              if (0.0 <= fVar21) {
                fVar43 = fVar36 + fVar36 + -1.0;
              }
              fVar36 = fVar7;
              if (fVar7 <= *(float *)((long)param_3 + 0x4c)) {
                fVar36 = *(float *)((long)param_3 + 0x4c);
              }
              fVar21 = fVar20;
              if (fVar41 <= 1.0) {
                fVar21 = fVar41;
              }
              fVar42 = fVar24;
              if (0.0 <= fVar41) {
                fVar42 = fVar21 * fVar10 + fVar24;
              }
              fVar22 = (float)SandFlowRenderer__LandingAge_24c04b4(param_1);
              iVar32 = iVar33 + (int)uVar38;
              iVar33 = iVar33 + (int)((ulong)uVar38 >> 0x20);
              bVar35 = (byte)((uint)iVar32 >> 0x10);
              bVar39 = (byte)((uint)iVar32 >> 0x18);
              iVar32 = CONCAT13(bVar39,CONCAT12(bVar35,CONCAT11(bVar39 ^ (byte)((uint)iVar32 >> 8),
                                                                bVar35 ^ (byte)iVar32)));
              bVar35 = (byte)((uint)iVar33 >> 0x10);
              bVar39 = (byte)((uint)iVar33 >> 0x18);
              uVar25 = iVar32 * 0x7feb352d;
              uVar31 = (int)(CONCAT17(bVar39,CONCAT16(bVar35,CONCAT15(bVar39 ^ (byte)((uint)iVar33
                                                                                     >> 8),
                                                                      CONCAT14(bVar35 ^ (byte)iVar33
                                                                               ,iVar32)))) >> 0x20)
                       * 0x7feb352d;
              bVar35 = (byte)(uVar25 >> 0x18);
              iVar33 = CONCAT13(bVar35,CONCAT12(bVar35 >> 7 ^ (byte)(uVar25 >> 0x10),
                                                CONCAT11((byte)((uVar25 >> 0xf) >> 8) ^
                                                         (byte)(uVar25 >> 8),
                                                         (byte)(uVar25 >> 0xf) ^ (byte)uVar25)));
              bVar35 = (byte)(uVar31 >> 0x18);
              iVar32 = iVar33 * -0x7b935975;
              iVar33 = (int)(CONCAT17(bVar35,CONCAT16(bVar35 >> 7 ^ (byte)(uVar31 >> 0x10),
                                                      CONCAT15((byte)((uVar31 >> 0xf) >> 8) ^
                                                               (byte)(uVar31 >> 8),
                                                               CONCAT14((byte)(uVar31 >> 0xf) ^
                                                                        (byte)uVar31,iVar33)))) >>
                            0x20) * -0x7b935975;
              uVar27 = CONCAT44(iVar33,iVar32) & 0xffffff00ffffff;
              uVar28 = NEON_ucvtf((ulong)CONCAT16((char)(uVar27 >> 0x30),
                                                  CONCAT15((byte)(uVar27 >> 0x28) ^
                                                           (byte)((uint)iVar33 >> 0x18),
                                                           CONCAT14((byte)(uVar27 >> 0x20) ^
                                                                    (byte)((uint)iVar33 >> 0x10),
                                                                    (uint)CONCAT12((char)(uVar27 >>
                                                                                         0x10),
                                                                                   CONCAT11((byte)(
                                                  uVar27 >> 8) ^ (byte)((uint)iVar32 >> 0x18),
                                                  (byte)uVar27 ^ (byte)((uint)iVar32 >> 0x10)))))),4
                                 );
              fVar26 = (float)uVar28 * 5.9604645e-08;
              fVar34 = (float)((ulong)uVar28 >> 0x20) * 5.9604645e-08;
              fVar21 = fVar20;
              if (fVar34 <= 1.0) {
                fVar21 = fVar34;
              }
              fVar37 = 0.75;
              if (0.0 <= fVar34) {
                fVar37 = fVar21 * 0.5 + 0.75;
              }
              fVar21 = fVar20;
              if (fVar26 <= 1.0) {
                fVar21 = fVar26;
              }
              fVar34 = fVar9;
              if (0.0 <= fVar26) {
                fVar34 = fVar21 * fVar5 + fVar9;
              }
              if (lVar13 == 0) goto LAB_025c1b4c;
              if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_025c1b48;
              iVar33 = uVar3 + (int)uVar15;
              uVar25 = iVar33 + 0x10f;
              uVar31 = iVar33 + 0x7eb;
              uVar15 = uVar15 + 1;
              uVar25 = (uVar25 ^ uVar25 >> 0x10) * 0x7feb352d;
              uVar31 = (uVar31 ^ uVar31 >> 0x10) * 0x7feb352d;
              pfVar19[-6] = fVar42 * fVar44;
              pfVar19[-5] = fVar22;
              uVar25 = (uVar25 ^ uVar25 >> 0xf) * -0x7b935975;
              uVar31 = (uVar31 ^ uVar31 >> 0xf) * -0x7b935975;
              fVar21 = (float)(uVar25 & 0xffffff ^ uVar25 >> 0x10) / 16777216.0;
              fVar21 = fVar21 + fVar21 + -1.0;
              *(ulong *)(pfVar19 + -4) = CONCAT44(fVar41,(float)uVar40 * 5.9604645e-08);
              pfVar19[-2] = fVar37;
              pfVar19[-1] = ((float)(uVar31 & 0xffffff ^ uVar31 >> 0x10) / 16777216.0) * fVar23;
              pfVar19[-8] = fVar43 * (ABS(fVar43) * fVar6 + fVar4);
              pfVar19[-7] = fVar21 * (ABS(fVar21) * fVar8 + fVar29) * fVar36;
              *pfVar19 = fVar34;
              pfVar19 = pfVar19 + 9;
            } while (param_4 != uVar15);
          }
          return lVar13;
        }
      }
    }
  }
LAB_025c1b48:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a8();
}

