/* IL2CPP: SandFlowRenderer$$DepositSlice
void SandFlowRenderer__DepositSlice (SandFlowRenderer_o* __this, SandFlowPacket_array* packets, int32_t count, int32_t grains, float time, float heightScale, int32_t slice, int32_t slices, bool schedule, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$DepositSlice
   void SandFlowRenderer__DepositSlice (SandFlowRenderer_o* __this, SandFlowPacket_array* packets,
   int32_t count, int32_t grains, float time, float heightScale, int32_t slice, int32_t slices, bool
   schedule, const MethodInfo* method); */

void SandFlowRenderer__DepositSlice_24c2074
               (float param_1,float param_2,long param_3,long param_4,uint param_5,int param_6,
               int param_7,int param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte extraout_var;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_230;
  undefined8 uStack_228;
  int iStack_220;
  undefined8 uStack_21c;
  undefined8 uStack_214;
  undefined4 uStack_20c;
  int iStack_208;
  float fStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  float fStack_1f8;
  int iStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  undefined8 uStack_1e4;
  undefined8 uStack_1dc;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  int iStack_190;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  undefined4 uStack_17c;
  int iStack_178;
  float fStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  float fStack_168;
  int iStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  undefined8 uStack_154;
  undefined8 uStack_14c;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  long lStack_a8;
  
  lVar8 = tpidr_el0;
  lStack_a8 = *(long *)(lVar8 + 0x28);
  if ((bRam0000000004f4bbd1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6f38);
    FUN_021f03f8(PTR_DAT_049c6f40);
    FUN_021f03f8(PTR_DAT_049c6f48);
    bRam0000000004f4bbd1 = 1;
  }
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  *(float *)(param_3 + 0x204) = param_1;
  if (*(long *)(param_3 + 0xa0) == 0) {
    lVar8 = *(long *)(lVar8 + 0x28);
  }
  else {
    iVar9 = *(int *)(*(long *)(param_3 + 0xa0) + 0xcc);
    if (iVar9 == 0) goto LAB_025c2564;
    SandFlowRenderer__EnsureDepositBuffers_24c25e0(param_3,(ulong)param_5,param_6,iVar9 * 0xc);
    fVar23 = _UNK_013aa688;
    if ((int)param_5 < 1) {
      iVar9 = 0;
LAB_025c2348:
      lVar6 = *(long *)(param_3 + 0xa0);
      if (lVar6 != 0) {
        uStack_e8 = *(undefined8 *)(param_3 + 0x1d8);
        uStack_f0 = *(undefined8 *)(param_3 + 0x1d0);
        iVar10 = *(int *)(lVar6 + 0xcc);
        fVar20 = *(float *)(lVar6 + 0xd0);
        uStack_c0 = 0;
        uStack_d8 = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        fVar23 = 0.0;
        if (0.0 <= param_2) {
          fVar23 = param_2;
        }
        fVar14 = *(float *)(param_3 + 0x318);
        uStack_c8 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_b4 = (undefined4)*(undefined8 *)(param_3 + 0x1b8);
        uStack_b0 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x1b8) >> 0x20);
        uStack_bc = (undefined4)*(undefined8 *)(param_3 + 0x1b0);
        uStack_b8 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x1b0) >> 0x20);
        if (param_4 != 0) {
          if (*(int *)(param_4 + 0x18) == 0) {
LAB_025c25a4:
            if (*(long *)(lVar8 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            goto LAB_025c25dc;
          }
          uVar22 = *(undefined4 *)(param_3 + 800);
          uVar21 = *(undefined4 *)(param_3 + 0x328);
          fVar17 = _UNK_013aa94c;
          if (_UNK_013aa94c <= *(float *)(param_4 + 0x9c)) {
            fVar17 = *(float *)(param_4 + 0x9c);
          }
          fVar17 = (float)func_0x046086a0(_UNK_013aa50c / fVar17,0x40400000);
          uStack_cc = (undefined4)*(undefined8 *)(param_3 + 0x188);
          uStack_c8 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x188) >> 0x20);
          uStack_d4 = (undefined4)*(undefined8 *)(param_3 + 0x180);
          uStack_d0 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x180) >> 0x20);
          uStack_f8 = *(undefined8 *)(param_3 + 0x298);
          uStack_100 = *(undefined8 *)(param_3 + 0x290);
          if (1.0 <= *(float *)(param_3 + 400)) {
            uVar5 = *(undefined4 *)(param_3 + 0x2fc);
          }
          else {
            uVar5 = 0;
          }
          fVar18 = 1.0 / ((fVar14 / (float)iVar10) * ((fVar20 + fVar20) / 12.0));
          fVar17 = (_UNK_013aa4cc / (float)param_6) * fVar23 * fVar17;
          uStack_108 = *(undefined8 *)(param_3 + 0x1e8);
          uStack_110 = *(undefined8 *)(param_3 + 0x1e0);
          if ((param_9 & 1) == 0) {
            uStack_228 = uStack_e8;
            uStack_230 = uStack_f0;
            uStack_214 = CONCAT44(uStack_b4,uStack_b8);
            uStack_21c = CONCAT44(uStack_bc,uStack_c0);
            uStack_20c = uStack_b0;
            uStack_1dc = CONCAT44(uStack_cc,uStack_d0);
            uStack_1e4 = CONCAT44(uStack_d4,uStack_d8);
            uStack_1d4 = uStack_c8;
            iStack_220 = iVar9;
            iStack_208 = param_6;
            fStack_204 = param_1;
            uStack_200 = uVar22;
            uStack_1fc = uVar21;
            fStack_1f8 = fVar17;
            iStack_1f4 = iVar10;
            fStack_1f0 = fVar14;
            fStack_1ec = fVar20;
            fStack_1e8 = fVar18;
            uStack_1d0 = uStack_100;
            uStack_1c8 = uStack_f8;
            uStack_1c0 = uVar5;
            uStack_1bc = *(undefined4 *)(param_3 + 0x16c);
            uStack_1b8 = uStack_110;
            uStack_1b0 = uStack_108;
            Unity_Jobs_IJobExtensions__Run___Il2CppFullySharedGenericStructType__2643b3c
                      (&uStack_230,*(undefined8 *)PTR_DAT_049c6f38);
            if (*(long *)(param_3 + 0xa0) == 0) goto LAB_025c25bc;
            SandPileField__SetSlice_24d4290
                      (*(long *)(param_3 + 0xa0),param_7,*(undefined8 *)(param_3 + 0x1e0),
                       *(undefined8 *)(param_3 + 0x1e8),0);
          }
          else {
            uStack_184 = CONCAT44(uStack_b4,uStack_b8);
            uStack_18c = CONCAT44(uStack_bc,uStack_c0);
            uStack_17c = uStack_b0;
            uStack_14c = CONCAT44(uStack_cc,uStack_d0);
            uStack_154 = CONCAT44(uStack_d4,uStack_d8);
            uStack_198 = uStack_e8;
            uStack_1a0 = uStack_f0;
            uStack_144 = uStack_c8;
            iStack_190 = iVar9;
            iStack_178 = param_6;
            fStack_174 = param_1;
            uStack_170 = uVar22;
            uStack_16c = uVar21;
            fStack_168 = fVar17;
            iStack_164 = iVar10;
            fStack_160 = fVar14;
            fStack_15c = fVar20;
            fStack_158 = fVar18;
            uStack_140 = uStack_100;
            uStack_138 = uStack_f8;
            uStack_130 = uVar5;
            uStack_12c = *(undefined4 *)(param_3 + 0x16c);
            uStack_128 = uStack_110;
            uStack_120 = uStack_108;
            auVar24 = Unity_Jobs_IJobExtensions__Schedule___Il2CppFullySharedGenericStructType__2643bb4
                                (&uStack_1a0,0,0,*(undefined8 *)PTR_DAT_049c6f40);
            *(long *)(param_3 + 0x220) = auVar24._0_8_;
            *(int *)(param_3 + 0x230) = param_7;
            *(long *)(param_3 + 0x228) = auVar24._8_8_;
            Unity_Jobs_JobHandle__ScheduleBatchedJobs_3bbf2c8(0);
          }
LAB_025c2564:
          if (*(long *)(lVar8 + 0x28) == lStack_a8) {
            return;
          }
          goto LAB_025c25dc;
        }
      }
    }
    else if (param_4 != 0) {
      iVar10 = 0;
      uVar11 = 0;
      iVar9 = 0;
      piVar12 = (int *)(param_4 + 0x5c);
      do {
        if (*(uint *)(param_4 + 0x18) <= uVar11) goto LAB_025c25a4;
        iVar1 = -0x80000000;
        if ((float)piVar12[0x11] != INFINITY) {
          iVar1 = (int)(float)piVar12[0x11];
        }
        iVar2 = 0;
        if (param_8 != 0) {
          iVar2 = iVar1 / param_8;
        }
        if ((iVar1 - iVar2 * param_8 == param_7) && ((float)piVar12[-4] <= 1.5)) {
          piVar7 = piVar12 + -0xf;
          uVar4 = SandFlowRenderer__GetPileLayout_24c1528
                            (param_3,uVar11 & 0xffffffff,piVar7,param_6);
          lVar6 = *(long *)(param_3 + 0x1c8);
          if (lVar6 == 0) goto LAB_025c25bc;
          if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_025c25a4;
          iVar1 = iVar10;
          if (*(char *)(lVar6 + uVar11 + 0x20) == '\0') {
            Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Copy_28f526c
                      (uVar4,0,*(undefined8 *)(param_3 + 0x1b0),*(undefined8 *)(param_3 + 0x1b8),
                       iVar10,param_6,*(undefined8 *)PTR_DAT_049c6f48);
            lVar6 = *(long *)(param_3 + 0x1c8);
            if (lVar6 == 0) goto LAB_025c25bc;
            if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_025c25a4;
            iVar1 = (int)uVar11 * param_6;
            *(undefined1 *)(lVar6 + uVar11 + 0x20) = 1;
          }
          uVar3 = SandFlowRenderer__SplitSlotOf_24c0f28(param_3,piVar7);
          iVar2 = *(int *)(param_3 + 0x2a8);
          SandFlowRenderer__SplitSlotOf_24c0f28(param_3,piVar7);
          fVar14 = (float)piVar12[-0xc];
          piVar7 = (int *)(*(long *)(param_3 + 0x1d0) + (long)iVar9 * 0x28);
          iVar16 = piVar12[-10];
          fVar18 = (float)piVar12[0x14];
          fVar17 = *(float *)(param_3 + 800);
          fVar19 = (float)piVar12[-4];
          fVar20 = fVar23;
          if (fVar23 <= (float)piVar12[4]) {
            fVar20 = (float)piVar12[4];
          }
          fVar13 = fVar23;
          if (fVar23 <= (float)piVar12[-8]) {
            fVar13 = (float)piVar12[-8];
          }
          iVar15 = *piVar12;
          piVar7[3] = piVar12[0x13];
          piVar7[4] = iVar16;
          *piVar7 = iVar1;
          piVar7[1] = iVar2 * (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
          *(byte *)(piVar7 + 2) = (byte)~extraout_var >> 7;
          *(undefined2 *)((long)piVar7 + 9) = 0;
          *(undefined1 *)((long)piVar7 + 0xb) = 0;
          *(undefined2 *)((long)piVar7 + 0x25) = 0;
          piVar7[5] = iVar15;
          piVar7[6] = (int)fVar20;
          *(bool *)(piVar7 + 9) = fVar19 < 0.5;
          *(undefined1 *)((long)piVar7 + 0x27) = 0;
          piVar7[7] = (int)((param_1 - fVar14) / fVar13);
          piVar7[8] = (int)(fVar17 - fVar18);
          iVar9 = iVar9 + 1;
        }
        uVar11 = uVar11 + 1;
        piVar12 = piVar12 + 0x24;
        iVar10 = iVar10 + param_6;
      } while (param_5 != uVar11);
      goto LAB_025c2348;
    }
LAB_025c25bc:
    lVar8 = *(long *)(lVar8 + 0x28);
  }
  if (lVar8 == lStack_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_025c25dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

