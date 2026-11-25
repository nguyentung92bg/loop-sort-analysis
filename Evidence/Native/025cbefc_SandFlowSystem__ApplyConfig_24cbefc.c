/* IL2CPP: SandFlowSystem$$ApplyConfig
void SandFlowSystem__ApplyConfig (SandFlowSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$ApplyConfig
   void SandFlowSystem__ApplyConfig (SandFlowSystem_o* __this, const MethodInfo* method); */

void SandFlowSystem__ApplyConfig_24cbefc(long param_1)

{
  int iVar1;
  long lVar2;
  char cVar3;
  float fVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  double dStack_38;
  
  lVar7 = *(long *)(param_1 + 0x160);
  uStack_50 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  if (lVar7 == 0) goto LAB_025cc37c;
  fVar17 = _UNK_013aa970;
  if (_UNK_013aa970 <= *(float *)(lVar7 + 0x30)) {
    fVar17 = *(float *)(lVar7 + 0x30);
  }
  if (fVar17 != *(float *)(param_1 + 0x1a4)) {
    uVar8 = (ulong)*(uint *)(param_1 + 0x188);
    *(float *)(param_1 + 0x1a4) = fVar17;
    if (0 < (int)*(uint *)(param_1 + 0x188)) {
      lVar10 = *(long *)(param_1 + 0xb0);
      if (lVar10 == 0) goto LAB_025cc37c;
      uVar9 = (ulong)*(uint *)(lVar10 + 0x18);
      pfVar11 = (float *)(lVar10 + 0x9c);
      do {
        if (uVar9 == 0) goto LAB_025cc380;
        uVar8 = uVar8 - 1;
        uVar9 = uVar9 - 1;
        *pfVar11 = fVar17;
        pfVar11 = pfVar11 + 0x24;
      } while (uVar8 != 0);
    }
  }
  fVar18 = _UNK_013aa698;
  if (_UNK_013aa698 <= *(float *)(lVar7 + 0x84)) {
    fVar18 = *(float *)(lVar7 + 0x84);
  }
  if (fVar18 != *(float *)(param_1 + 0x1a8)) {
    uVar8 = (ulong)*(uint *)(param_1 + 0x188);
    *(float *)(param_1 + 0x1a8) = fVar18;
    if (0 < (int)*(uint *)(param_1 + 0x188)) {
      lVar10 = *(long *)(param_1 + 0xb0);
      if (lVar10 == 0) goto LAB_025cc37c;
      uVar9 = (ulong)*(uint *)(lVar10 + 0x18);
      pfVar11 = (float *)(lVar10 + 0x6c);
      do {
        if (uVar9 == 0) {
LAB_025cc380:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        uVar8 = uVar8 - 1;
        uVar9 = uVar9 - 1;
        *pfVar11 = fVar18;
        pfVar11 = pfVar11 + 0x24;
      } while (uVar8 != 0);
    }
  }
  fVar14 = *(float *)(param_1 + 0x19c);
  lVar10 = *(long *)(param_1 + 0x168);
  fVar18 = 0.0;
  if (0.0 <= *(float *)(lVar7 + 0x2c)) {
    fVar18 = *(float *)(lVar7 + 0x2c);
  }
  if (cRam0000000004f4a004 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a004 = '\x01';
  }
  fVar18 = fVar14 * 640.0 * fVar18;
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  dVar16 = (double)fVar18;
  dVar12 = (double)FUN_04608690(dVar16,&dStack_38);
  if (0.0 <= fVar18) {
    if (dVar12 == 0.5) {
      dVar12 = 1.0;
      goto LAB_025cc088;
    }
    dStack_38 = (double)(long)(dVar16 + 0.5);
  }
  else if (dVar12 == -0.5) {
    dVar12 = -1.0;
LAB_025cc088:
    if (((long)dStack_38 & 1U) != 0) {
      dStack_38 = dStack_38 + dVar12;
    }
  }
  else {
    dStack_38 = (double)(long)(dVar16 + -0.5);
  }
  if (lVar10 != 0) {
    cVar3 = *(char *)(param_1 + 0x1c1);
    iVar1 = -0x80000000;
    if (dStack_38 != INFINITY) {
      iVar1 = (int)dStack_38;
    }
    lVar7 = *(long *)(param_1 + 0x160);
    lVar2 = *(long *)(param_1 + 0x168);
    *(int *)(lVar10 + 0x324) = iVar1;
    fVar18 = _UNK_013aa688;
    if (cVar3 == '\0') {
      if (lVar7 == 0) goto LAB_025cc37c;
      uVar6 = 0;
    }
    else {
      if (lVar7 == 0) goto LAB_025cc37c;
      uVar6 = *(undefined8 *)(lVar7 + 0x100);
    }
    if (lVar2 != 0) {
      fVar14 = 1.0;
      if (1.0 <= *(float *)(lVar7 + 0x194)) {
        fVar14 = *(float *)(lVar7 + 0x194);
      }
      fVar13 = _UNK_013aa688;
      if (_UNK_013aa688 <= *(float *)(lVar7 + 0x11c)) {
        fVar13 = *(float *)(lVar7 + 0x11c);
      }
      fVar4 = 0.0;
      if (0.0 <= *(float *)(lVar7 + 0x118)) {
        fVar4 = *(float *)(lVar7 + 0x118);
      }
      SandFlowRenderer__SetLiquid_24bce78
                (*(undefined4 *)(lVar7 + 0x110),*(undefined4 *)(lVar7 + 0x114),fVar4,fVar17 * fVar13
                 ,*(undefined4 *)(lVar7 + 0x134),fVar14,*(undefined4 *)(lVar7 + 0x198),lVar2,uVar6,
                 *(undefined8 *)(param_1 + 0x68));
      bVar5 = false;
      if (*(char *)(param_1 + 0x1c1) != '\0') {
        if (*(long *)(param_1 + 0x168) == 0) goto LAB_025cc37c;
        uVar8 = SandFlowRenderer__get_LiquidActive_24bc21c();
        if ((uVar8 & 1) == 0) {
          bVar5 = false;
        }
        else {
          bVar5 = *(long *)(param_1 + 0x1c8) != 0;
        }
      }
      *(bool *)(param_1 + 0x1c2) = bVar5;
      if (*(long *)(param_1 + 0x1c8) != 0) {
        lVar7 = *(long *)(param_1 + 0x160);
        if (lVar7 == 0) goto LAB_025cc37c;
        SandJellyRenderer__SetStyle_24d2a48
                  (*(undefined4 *)(lVar7 + 0x16c),*(undefined4 *)(lVar7 + 0x168),
                   *(undefined4 *)(lVar7 + 0x184),*(undefined4 *)(lVar7 + 0x170),
                   *(undefined4 *)(lVar7 + 0x174),*(undefined4 *)(lVar7 + 0x178),
                   *(undefined4 *)(lVar7 + 0x17c),*(undefined4 *)(lVar7 + 0x144),
                   *(long *)(param_1 + 0x1c8),0);
      }
      lVar7 = *(long *)(param_1 + 0x160);
      if (lVar7 != 0) {
        if (*(char *)(param_1 + 0x1c1) == '\0') {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined4 *)(lVar7 + 400);
        }
        if (*(long *)(param_1 + 0x168) != 0) {
          SandFlowRenderer__SetGrainDrift_24bc0c4
                    (*(float *)(lVar7 + 0x40) * *(float *)(param_1 + 0x19c),
                     *(undefined4 *)(lVar7 + 0x44),uVar15);
          lVar7 = *(long *)(param_1 + 0x160);
          if ((lVar7 != 0) && (*(long *)(param_1 + 0x168) != 0)) {
            SandFlowRenderer__SetSwing_24bbfc0
                      (*(undefined4 *)(lVar7 + 0x6c),*(undefined4 *)(lVar7 + 0x70),
                       *(undefined4 *)(lVar7 + 0x74));
            lVar7 = *(long *)(param_1 + 0x160);
            if ((lVar7 != 0) && (*(long *)(param_1 + 0x168) != 0)) {
              SandFlowRenderer__SetCornerFlow_24bc038
                        (*(undefined4 *)(lVar7 + 0x78),*(undefined4 *)(lVar7 + 0x7c),
                         *(undefined4 *)(lVar7 + 0x80));
              lVar7 = *(long *)(param_1 + 0x160);
              if ((lVar7 != 0) && (*(long *)(param_1 + 0x168) != 0)) {
                SandFlowRenderer__UpdateShading_24bcb60
                          (*(undefined4 *)(lVar7 + 0x34),*(undefined4 *)(lVar7 + 0x38),
                           *(undefined4 *)(lVar7 + 0x3c));
                lVar7 = *(long *)(param_1 + 0x160);
                uStack_50 = 0;
                uStack_78 = 0;
                uStack_80 = 0;
                uStack_68 = 0;
                uStack_70 = 0;
                uStack_58 = 0;
                uStack_60 = 0;
                if (lVar7 != 0) {
                  uStack_60 = *(undefined8 *)(lVar7 + 0xc4);
                  uStack_68 = *(undefined8 *)(lVar7 + 0xbc);
                  uStack_70 = CONCAT44(*(undefined4 *)(lVar7 + 0xb8),*(undefined4 *)(lVar7 + 0xa4));
                  uStack_58 = CONCAT44(*(undefined4 *)(lVar7 + 0xd4),*(undefined4 *)(lVar7 + 0xcc));
                  uStack_78 = *(undefined8 *)(lVar7 + 0xb0);
                  uStack_80 = *(undefined8 *)(lVar7 + 0xa8);
                  if (*(char *)(param_1 + 0x1c2) == '\0') {
                    fVar18 = 0.0;
                  }
                  else if (fVar18 <= *(float *)(lVar7 + 0x18c)) {
                    fVar18 = *(float *)(lVar7 + 0x18c);
                  }
                  uStack_50 = CONCAT44(fVar18,*(undefined4 *)(lVar7 + 0xd8));
                  if (*(long *)(param_1 + 0x168) != 0) {
                    SandFlowRenderer__SetPourStyle_24bc9d8(*(long *)(param_1 + 0x168),&uStack_80);
                    lVar7 = *(long *)(param_1 + 0x160);
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a0 = 0;
                    uStack_88 = 0;
                    if (lVar7 != 0) {
                      uStack_a0 = *(undefined8 *)(lVar7 + 0x54);
                      uStack_98 = *(undefined8 *)(lVar7 + 0x5c);
                      uStack_88 = *(undefined4 *)(lVar7 + 0x50);
                      uStack_90 = CONCAT44(*(undefined4 *)(lVar7 + 0x68),
                                           *(float *)(lVar7 + 100) * *(float *)(param_1 + 0x19c));
                      if ((*(long *)(param_1 + 0x168) != 0) &&
                         (lVar7 = *(long *)(*(long *)(param_1 + 0x168) + 0xa0), lVar7 != 0)) {
                        SandPileField__SetDynamics_24d3e00(lVar7,&uStack_a0,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_025cc37c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

