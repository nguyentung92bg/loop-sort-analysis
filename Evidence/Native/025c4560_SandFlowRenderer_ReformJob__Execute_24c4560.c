/* IL2CPP: SandFlowRenderer.ReformJob$$Execute
void SandFlowRenderer_ReformJob__Execute (SandFlowRenderer_ReformJob_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer.ReformJob$$Execute
   void SandFlowRenderer_ReformJob__Execute (SandFlowRenderer_ReformJob_o __this, const MethodInfo*
   method); */

void SandFlowRenderer_ReformJob__Execute_24c4560(long param_1)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  
  puVar2 = PTR_DAT_049b8758;
  fVar17 = _UNK_013aa698;
  fVar16 = _UNK_013aa5f0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c4554 with catch @ 025c4578
                       try { // try from 025c4578 to 026c45a3 has its CatchHandler @ 025c441c */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c44b8 with catch @ 025c457c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c448c with catch @ 025c4580
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c4510 with catch @ 025c4584
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025c453c with catch @ 025c4584
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c4514 with catch @ 025c4588
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c44bc with catch @ 025c458c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c4490 with catch @ 025c4590
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c44e0 with catch @ 025c4594
                        */
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 0;
  fStack_c4 = 0.0;
  if (*(char *)(param_1 + 0x41) == '\0') {
    if (*(char *)(param_1 + 0x74) == '\0') {
      if (*(int *)(param_1 + 0x6c) < 1) {
        fVar17 = 0.0;
        fVar16 = 0.0;
      }
      else {
        iVar10 = 0;
        bVar3 = false;
        iVar11 = 0;
        do {
          fVar16 = (float)SandFlowRenderer_ReformJob__Gap_24c4e18
                                    (*(undefined4 *)(param_1 + 0x78),param_1,iVar11,&fStack_c4,
                                     &uStack_c0,(long)&uStack_c0 + 4);
          fVar12 = *(float *)(param_1 + 0x88);
          fVar13 = *(float *)(param_1 + 0x84);
          fVar16 = fVar16 / *(float *)(param_1 + 0x8c);
          bVar4 = false;
          bVar5 = false;
          bVar6 = false;
          if ((uint)ABS(fVar16) < 0x7f800001) {
            bVar4 = false;
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar16)) {
              bVar4 = fVar16 < 1.0;
              bVar5 = fVar16 == 1.0;
              bVar6 = false;
            }
          }
          fVar20 = 1.0;
          if (bVar5 || bVar4 != bVar6) {
            fVar20 = fVar16;
          }
          bVar4 = true;
          if (((uint)ABS(fVar20) < 0x7f800001) && (bVar4 = false, !NAN(fVar20))) {
            bVar4 = fVar20 < 0.0;
          }
          fVar16 = 0.0;
          if (!bVar4) {
            fVar16 = fVar20;
          }
          fVar16 = fVar13 * fVar16;
          if (fVar16 <= fStack_c4 && (uint)ABS(fStack_c4) < 0x7f800001) {
            fVar16 = fStack_c4;
          }
          iVar1 = *(int *)(param_1 + 0x70) * 0x407;
          fVar20 = (float)SandFlowRenderer_ReformJob__Hash_24c5128(iVar11 + 0x1b65 + iVar1);
          fVar12 = 1.0 - fVar12;
          fVar13 = (1.0 - fVar13) * (fVar12 + (1.0 - fVar12) * fVar20);
          fVar12 = 1.0 - fVar16;
          if (fVar13 <= 1.0 - fVar16 && (uint)ABS(fVar13) < 0x7f800001) {
            fVar12 = fVar13;
          }
          bVar4 = true;
          if (((uint)ABS(fVar12) < 0x7f800001) && (bVar4 = false, !NAN(fVar12) && !NAN(fVar17))) {
            bVar4 = fVar12 < fVar17;
          }
          fVar13 = fVar17;
          if (!bVar4) {
            fVar13 = fVar12;
          }
          fVar20 = *(float *)(param_1 + 0x7c);
          fVar12 = *(float *)(param_1 + 0x80);
          if (fVar20 <= 0.0) {
            if (fVar12 < fVar16 + fVar13) goto LAB_025c4d8c;
LAB_025c4d9c:
            iVar10 = iVar10 + 1;
          }
          else {
            if (fVar12 < fVar16 + fVar13) {
LAB_025c4d8c:
              if (fVar12 <= fVar16) goto LAB_025c4da0;
            }
            else {
              fVar16 = (float)SandFlowRenderer_ReformJob__Hash_24c5128(iVar11 + iVar1 + 0x245f);
              if ((*(float *)(param_1 + 0x78) - fVar20) * *(float *)(param_1 + 0x58) <
                  fVar16 * *(float *)(param_1 + 0x5c)) goto LAB_025c4d9c;
            }
            bVar3 = true;
          }
LAB_025c4da0:
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(param_1 + 0x6c));
        fVar17 = (float)iVar10;
        fVar16 = 1.0;
        if (!bVar3) {
          fVar16 = 0.0;
        }
      }
      pfVar7 = *(float **)(param_1 + 0x30);
      *pfVar7 = fVar17;
      pfVar7[1] = fVar16;
    }
    else {
      if (*(int *)(param_1 + 0x6c) < 1) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = 0.0;
        iVar10 = 0;
        do {
          fVar17 = (float)SandFlowRenderer_ReformJob__Gap_24c4e18
                                    (0,param_1,iVar10,&uStack_b8,(long)&uStack_c0 + 4,&uStack_c0);
          iVar10 = iVar10 + 1;
          bVar3 = false;
          bVar4 = false;
          bVar5 = false;
          if ((uint)ABS(fVar17) < 0x7f800001) {
            bVar3 = false;
            bVar4 = false;
            bVar5 = true;
            if (!NAN(fVar16) && !NAN(fVar17)) {
              bVar3 = fVar16 < fVar17;
              bVar4 = fVar16 == fVar17;
              bVar5 = false;
            }
          }
          if (bVar4 || bVar3 != bVar5) {
            fVar16 = fVar17;
          }
        } while (iVar10 < *(int *)(param_1 + 0x6c));
      }
      *(float *)(*(long *)(param_1 + 0x30) + 8) = fVar16;
    }
  }
  else {
                    /* try { // try from 025c45a4 to 026c45a7 has its CatchHandler @ 025c45c8 */
                    /* try { // try from 025c45a8 to 026c45d7 has its CatchHandler @ 025c441c */
    if (*(int *)(param_1 + 0x6c) < 1) {
      fVar16 = 0.0;
    }
    else {
                    /* catch() { ... } // from try @ 025c45a4 with catch @ 025c45c8 */
      lVar9 = 0;
      uVar8 = 0;
      iVar10 = 0;
                    /* try { // try from 025c45d8 to 026c45df has its CatchHandler @ 025c45e0 */
      iVar11 = 0x245f;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025c45d8 with catch @ 025c45e0
                        */
                    /* catch() { ... } // from try @ 025c45fc with catch @ 025c45e4
                       catch() { ... } // from try @ 025c4634 with catch @ 025c45e4
                       catch() { ... } // from try @ 025c465c with catch @ 025c45e4 */
                    /* try { // try from 025c45f8 to 026c45fb has its CatchHandler @ 025c4614 */
      do {
                    /* try { // try from 025c45fc to 026c462f has its CatchHandler @ 025c45e4 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c45f8 with catch @ 025c4614
                        */
        fVar12 = (float)SandFlowRenderer_ReformJob__Gap_24c4e18
                                  (*(undefined4 *)(param_1 + 0x78),param_1,uVar8 & 0xffffffff,
                                   (long)&uStack_b0 + 4,&uStack_b0,(long)&uStack_b8 + 4);
        fVar20 = *(float *)(param_1 + 0x80);
        fVar21 = *(float *)(param_1 + 0x84);
        fVar13 = fVar12 / *(float *)(param_1 + 0x8c);
                    /* try { // try from 025c4630 to 026c4633 has its CatchHandler @ 025c4650 */
                    /* try { // try from 025c4634 to 026c4653 has its CatchHandler @ 025c45e4 */
        bVar3 = false;
        bVar4 = false;
        bVar5 = false;
        if ((uint)ABS(fVar13) < 0x7f800001) {
          bVar3 = false;
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar13)) {
            bVar3 = fVar13 < 1.0;
            bVar4 = fVar13 == 1.0;
            bVar5 = false;
          }
        }
        fVar14 = 1.0;
        if (bVar4 || bVar3 != bVar5) {
          fVar14 = fVar13;
        }
                    /* catch() { ... } // from try @ 025c4630 with catch @ 025c4650 */
        bVar3 = true;
        if (((uint)ABS(fVar14) < 0x7f800001) && (bVar3 = false, !NAN(fVar14))) {
          bVar3 = fVar14 < 0.0;
        }
                    /* try { // try from 025c4654 to 026c465b has its CatchHandler @ 025c4664 */
        fVar13 = 0.0;
        if (!bVar3) {
          fVar13 = fVar14;
        }
                    /* try { // try from 025c465c to 026c4667 has its CatchHandler @ 025c45e4 */
        fVar13 = fVar21 * fVar13;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025c4654 with catch @ 025c4664
                        */
                    /* try { // try from 025c4668 to 026c46b3 has its CatchHandler @ 025c4668
                       catch() { ... } // from try @ 025c4668 with catch @ 025c4668
                       catch() { ... } // from try @ 025c4704 with catch @ 025c4668
                       catch() { ... } // from try @ 025c4778 with catch @ 025c4668 */
        if (fVar13 <= uStack_b0._4_4_ && (uint)ABS(uStack_b0._4_4_) < 0x7f800001) {
          fVar13 = uStack_b0._4_4_;
        }
        if (fVar20 <= fVar13) {
          fVar12 = uStack_b8._4_4_;
        }
        else {
          fVar23 = *(float *)(param_1 + 0x88);
          fVar14 = (float)SandFlowRenderer_ReformJob__Hash_24c5128
                                    (iVar11 + *(int *)(param_1 + 0x70) * 0x407 + -0x8fa);
          fVar23 = 1.0 - fVar23;
          fVar14 = (1.0 - fVar21) * (fVar23 + (1.0 - fVar23) * fVar14);
          fVar21 = 1.0 - fVar13;
          bVar3 = true;
          if (((uint)ABS(fVar14) < 0x7f800001) && (bVar3 = false, !NAN(fVar21) && !NAN(fVar14))) {
            bVar3 = fVar21 < fVar14;
          }
                    /* try { // try from 025c46b4 to 026c46e7 has its CatchHandler @ 025c4744 */
          if (!bVar3) {
            fVar21 = fVar14;
          }
          bVar3 = true;
          if (((uint)ABS(fVar21) < 0x7f800001) && (bVar3 = false, !NAN(fVar21) && !NAN(fVar17))) {
            bVar3 = fVar21 < fVar17;
          }
          fVar14 = fVar17;
          if (!bVar3) {
            fVar14 = fVar21;
          }
          fVar21 = *(float *)(param_1 + 0x44);
          fVar20 = (fVar20 - fVar13) / fVar14;
          bVar3 = false;
          bVar4 = false;
          bVar5 = false;
          if ((uint)ABS(fVar20) < 0x7f800001) {
            bVar3 = false;
            bVar4 = false;
            bVar5 = true;
            if (!NAN(fVar20)) {
              bVar3 = fVar20 < 1.0;
              bVar4 = fVar20 == 1.0;
              bVar5 = false;
            }
          }
                    /* try { // try from 025c46f0 to 026c4703 has its CatchHandler @ 025c4740 */
          fVar23 = 1.0;
          if (bVar4 || bVar3 != bVar5) {
            fVar23 = fVar20;
          }
                    /* try { // try from 025c4704 to 026c475f has its CatchHandler @ 025c4668 */
          bVar3 = true;
          if (((uint)ABS(fVar23) < 0x7f800001) && (bVar3 = false, !NAN(fVar23))) {
            bVar3 = fVar23 < 0.0;
          }
          fVar20 = 0.0;
          if (!bVar3) {
            fVar20 = fVar23;
          }
          if (cRam0000000004f4bc0e == '\0') {
            FUN_021f03f8(puVar2);
            cRam0000000004f4bc0e = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          dVar18 = (double)System_Math__Pow_30ffdfc((double)fVar20,(double)fVar21,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c46f0 with catch @ 025c4740
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c46b4 with catch @ 025c4744
                        */
          fVar21 = *(float *)(param_1 + 0x78) - fVar13;
          bVar3 = true;
          if (((uint)ABS(fVar21) < 0x7f800001) && (bVar3 = false, !NAN(fVar21))) {
            bVar3 = fVar21 < 0.0;
          }
                    /* try { // try from 025c4760 to 026c4763 has its CatchHandler @ 025c476c */
          fVar23 = 0.0;
          if (!bVar3) {
            fVar23 = fVar21;
          }
          fVar21 = (float)uStack_b0;
                    /* catch() { ... } // from try @ 025c4760 with catch @ 025c476c */
          fVar26 = *(float *)(param_1 + 0xa4);
                    /* try { // try from 025c4770 to 026c4777 has its CatchHandler @ 025c4780 */
                    /* try { // try from 025c4778 to 026c4783 has its CatchHandler @ 025c4668 */
          fVar15 = (float)SandFlowRenderer_ReformJob__Hash_24c5128
                                    (iVar11 + *(int *)(param_1 + 0x70) * 0x407 + -0xe4c);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025c4770 with catch @ 025c4780
                        */
          fVar25 = *(float *)(param_1 + 0xb0);
          fVar24 = *(float *)(param_1 + 0xb4);
          fVar27 = *(float *)(param_1 + 0xa0);
          if (cRam0000000004f4bc0f == '\0') {
            FUN_021f03f8(puVar2);
            cRam0000000004f4bc0f = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          fVar23 = fVar21 - fVar26 * fVar23;
          fVar27 = fVar27 - fVar23;
          fVar25 = fVar27 / fVar25;
          dVar22 = (double)fVar25;
          dVar19 = (double)FUN_04608690(dVar22,&dStack_a8);
          if (0.0 <= fVar25) {
            if (dVar19 == 0.5) {
              dVar19 = 1.0;
              goto LAB_025c4814;
            }
            dVar22 = (double)(long)(dVar22 + 0.5);
          }
          else if (dVar19 == -0.5) {
            dVar19 = -1.0;
LAB_025c4814:
            dVar22 = dStack_a8;
            if (((long)dStack_a8 & 1U) != 0) {
              dVar22 = dStack_a8 + dVar19;
            }
          }
          else {
            dVar22 = (double)(long)(dVar22 + -0.5);
          }
          fVar26 = *(float *)(param_1 + 0xb0);
          fVar25 = *(float *)(param_1 + 0x48);
          fVar14 = fVar14 * *(float *)(param_1 + 0xa4) * 0.5;
          fVar13 = (fVar12 - fVar15 * fVar24) - fVar13 * *(float *)(param_1 + 0xa4);
          fVar12 = (fVar27 - fVar26 * (float)dVar22) + *(float *)(param_1 + 0x68);
                    /* try { // try from 025c4890 to 026c490f has its CatchHandler @ 025c4890
                       catch() { ... } // from try @ 025c4890 with catch @ 025c4890
                       catch() { ... } // from try @ 025c4940 with catch @ 025c4890
                       catch() { ... } // from try @ 025c49a8 with catch @ 025c4890
                       catch() { ... } // from try @ 025c49e4 with catch @ 025c4890 */
          bVar3 = false;
          bVar4 = false;
          bVar5 = false;
          if ((uint)ABS(fVar13) < 0x7f800001) {
            bVar3 = false;
            bVar4 = false;
            bVar5 = true;
            if (!NAN(fVar14) && !NAN(fVar13)) {
              bVar3 = fVar14 < fVar13;
              bVar4 = fVar14 == fVar13;
              bVar5 = false;
            }
          }
          if (bVar4 || bVar3 != bVar5) {
            fVar14 = fVar13;
          }
          bVar3 = true;
          if (((uint)ABS(fVar12) < 0x7f800001) && (bVar3 = false, !NAN(fVar12))) {
            bVar3 = fVar12 < 0.0;
          }
          fVar14 = *(float *)(param_1 + 0x68) + fVar14;
          fVar13 = 0.0;
          if (!bVar3) {
            fVar13 = fVar12;
          }
          bVar3 = true;
          if (((uint)ABS(fVar13) < 0x7f800001) && (bVar3 = false, !NAN(fVar14) && !NAN(fVar13))) {
            bVar3 = fVar14 < fVar13;
          }
          if (!bVar3) {
            fVar14 = fVar13;
          }
          if (cRam0000000004f4bc0f == '\0') {
            FUN_021f03f8(puVar2);
            cRam0000000004f4bc0f = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          fVar25 = fVar25 - fVar23;
          fVar26 = fVar25 / fVar26;
          dVar22 = (double)fVar26;
          dVar19 = (double)FUN_04608690(dVar22,&dStack_a8);
          if (0.0 <= fVar26) {
            if (dVar19 == 0.5) {
              dVar19 = 1.0;
              goto LAB_025c493c;
            }
            dVar22 = (double)(long)(dVar22 + 0.5);
          }
          else {
                    /* try { // try from 025c4910 to 026c491b has its CatchHandler @ 025c49ac */
            if (dVar19 == -0.5) {
              dVar19 = -1.0;
LAB_025c493c:
                    /* try { // try from 025c493c to 026c493f has its CatchHandler @ 025c49a8 */
                    /* try { // try from 025c4940 to 026c49a3 has its CatchHandler @ 025c4890 */
              dVar22 = dStack_a8;
              if (((long)dStack_a8 & 1U) != 0) {
                dVar22 = dStack_a8 + dVar19;
              }
            }
            else {
              dVar22 = (double)(long)(dVar22 + -0.5);
            }
          }
          fVar13 = *(float *)(param_1 + 0xb0);
          fVar12 = *(float *)(param_1 + 0x4c);
          if (cRam0000000004f4bc0f == '\0') {
            FUN_021f03f8(puVar2);
            cRam0000000004f4bc0f = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
                    /* try { // try from 025c49a4 to 026c49a7 has its CatchHandler @ 025c49a8 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c493c with catch @ 025c49a8
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025c49a4 with catch @ 025c49a8
                       try { // try from 025c49a8 to 026c49c7 has its CatchHandler @ 025c4890 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c4910 with catch @ 025c49ac
                        */
          fVar15 = (fVar20 - (float)dVar18) * fVar16 + (float)dVar18;
                    /* try { // try from 025c49c8 to 026c49cb has its CatchHandler @ 025c49d8 */
                    /* catch() { ... } // from try @ 025c49c8 with catch @ 025c49d8 */
                    /* try { // try from 025c49dc to 026c49e3 has its CatchHandler @ 025c49ec */
          fVar12 = (fVar23 + (fVar15 + fVar15) * (1.0 - fVar15) * fVar14 +
                   fVar15 * fVar15 * (fVar25 - fVar13 * (float)dVar22)) - fVar12;
                    /* try { // try from 025c49e4 to 026c49ef has its CatchHandler @ 025c4890 */
          fVar13 = fVar12 / fVar13;
          dVar19 = (double)fVar13;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025c49dc with catch @ 025c49ec
                        */
          dVar18 = (double)FUN_04608690(dVar19,&dStack_a8);
          if (0.0 <= fVar13) {
            if (dVar18 == 0.5) {
              dVar18 = 1.0;
              goto LAB_025c4a28;
            }
            dVar19 = (double)(long)(dVar19 + 0.5);
          }
          else if (dVar18 == -0.5) {
            dVar18 = -1.0;
LAB_025c4a28:
            dVar19 = dStack_a8;
            if (((long)dStack_a8 & 1U) != 0) {
              dVar19 = dStack_a8 + dVar18;
            }
          }
          else {
            dVar19 = (double)(long)(dVar19 + -0.5);
          }
          fVar13 = 0.0;
          fVar14 = *(float *)(param_1 + 0xb0);
          if (1.0 <= fVar20) {
            fVar13 = (float)SandFlowRenderer_ReformJob__Hash_24c5128
                                      (iVar11 + *(int *)(param_1 + 0x70) * 0x407);
            fVar13 = fVar13 * *(float *)(param_1 + 0x5c);
          }
          fVar25 = *(float *)(param_1 + 0x4c);
          fVar24 = *(float *)(param_1 + 0x50);
          fVar27 = *(float *)(param_1 + 0x60);
          fVar28 = *(float *)(param_1 + 100);
          fVar15 = uStack_b8._4_4_;
          fVar26 = *(float *)(param_1 + 0x54);
          fVar12 = fVar12 - fVar14 * (float)dVar19;
          fVar23 = fVar24;
          if (fVar12 <= fVar24 && (uint)ABS(fVar12) < 0x7f800001) {
            fVar23 = fVar12;
          }
          fVar24 = -fVar24;
          bVar3 = true;
          if (((uint)ABS(fVar23) < 0x7f800001) && (bVar3 = false, !NAN(fVar23) && !NAN(fVar24))) {
            bVar3 = fVar23 < fVar24;
          }
          if (!bVar3) {
            fVar24 = fVar23;
          }
          if (cRam0000000004f4bc0f == '\0') {
            FUN_021f03f8(puVar2);
            cRam0000000004f4bc0f = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          fVar21 = ((fVar15 + fVar25 + fVar24) -
                   fVar26 * (fVar13 + fVar27 + fVar20 * (fVar28 - fVar27))) - fVar21;
          fVar14 = fVar21 / fVar14;
          dVar19 = (double)fVar14;
          dVar18 = (double)FUN_04608690(dVar19,&dStack_a8);
          if (0.0 <= fVar14) {
            if (dVar18 == 0.5) {
              dVar18 = 1.0;
              goto LAB_025c4b6c;
            }
            dVar19 = (double)(long)(dVar19 + 0.5);
          }
          else if (dVar18 == -0.5) {
            dVar18 = -1.0;
LAB_025c4b6c:
            dVar19 = dStack_a8;
            if (((long)dStack_a8 & 1U) != 0) {
              dVar19 = dStack_a8 + dVar18;
            }
          }
          else {
            dVar19 = (double)(long)(dVar19 + -0.5);
          }
          iVar10 = iVar10 + 1;
          fVar12 = fVar21 - *(float *)(param_1 + 0xb0) * (float)dVar19;
        }
        uVar8 = uVar8 + 1;
        iVar11 = iVar11 + 1;
        *(float *)(*(long *)(param_1 + 0x20) + lVar9) = fVar12;
        lVar9 = lVar9 + 4;
      } while ((long)uVar8 < (long)*(int *)(param_1 + 0x6c));
      fVar16 = (float)iVar10;
    }
    **(float **)(param_1 + 0x30) = fVar16;
  }
  return;
}

