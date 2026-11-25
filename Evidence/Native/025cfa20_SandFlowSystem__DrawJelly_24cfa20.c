/* IL2CPP: SandFlowSystem$$DrawJelly
void SandFlowSystem__DrawJelly (SandFlowSystem_o* __this, Carrier_o* carrier, SandFlowSystem_JellyState_o* state, float fill, int32_t groupSize, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$DrawJelly
   void SandFlowSystem__DrawJelly (SandFlowSystem_o* __this, Carrier_o* carrier,
   SandFlowSystem_JellyState_o* state, float fill, int32_t groupSize, const MethodInfo* method); */

void SandFlowSystem__DrawJelly_24cfa20
               (float param_1,long param_2,long param_3,long param_4,int param_5)

{
  int iVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int extraout_w1;
  undefined8 in_x7;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  float fStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000004f4bbfb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c72a8);
    FUN_021f03f8(PTR_DAT_049c7130);
    bRam0000000004f4bbfb = 1;
  }
  uStack_34 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (param_4 != 0) {
    fVar26 = (float)param_5;
    fVar28 = *(float *)(param_4 + 0x18);
    if (fVar26 <= ABS(param_1 - *(float *)(param_4 + 0x18))) {
      *(float *)(param_4 + 0x18) = param_1;
      *(undefined4 *)(param_4 + 0x1c) = 0;
      fVar28 = param_1;
    }
    uVar12 = UnityEngine_Time__get_deltaTime_3c29670(0);
    fVar20 = _UNK_013aa764;
    fVar13 = (float)UnityEngine_Mathf__SmoothDamp_3c0b8cc
                              (fVar28,param_1,_UNK_013aa764,0x7f800000,uVar12,
                               (float *)(param_4 + 0x1c),0);
    *(float *)(param_4 + 0x18) = fVar13;
    fVar17 = _UNK_013aa94c;
    if ((ABS(fVar13 - param_1) < _UNK_013aa94c) && (ABS(*(float *)(param_4 + 0x1c)) < _UNK_013aa94c)
       ) {
      *(float *)(param_4 + 0x18) = param_1;
    }
    puVar2 = PTR_DAT_049c7130;
    if (*(long *)(param_2 + 0x1e8) != 0) {
      uVar7 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                        (*(long *)(param_2 + 0x1e8),param_3,&uStack_34,
                         *(undefined8 *)PTR_DAT_049c72a8);
      uVar12 = uStack_34;
      if ((uVar7 & 1) == 0) {
        uVar12 = 0;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      SandFlowSystem__UpdateNeck_24cffd4(uVar12,param_4);
      if (*(float *)(param_4 + 0x18) <= _UNK_013aa688) {
                    /* try { // try from 025cffb4 to 026cffb7 has its CatchHandler @ 025cffc0 */
                    /* catch() { ... } // from try @ 025cffb4 with catch @ 025cffc0 */
                    /* try { // try from 025cffc4 to 026cffcb has its CatchHandler @ 025cffd4 */
                    /* try { // try from 025cffcc to 026cffd7 has its CatchHandler @ 025cfe2c */
        return;
      }
      if ((param_3 != 0) &&
         (lVar8 = UnityEngine_Component__get_gameObject_3c187f4(param_3,0), lVar8 != 0)) {
        uVar7 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar8,0);
        if ((uVar7 & 1) == 0) {
          return;
        }
        SandFlowSystem__Shape_24ce8c4(&uStack_180,param_2,param_3);
        fVar5 = fStack_154;
        fVar27 = fStack_158;
        fVar19 = fStack_15c;
        fVar4 = fStack_160;
        fVar3 = fStack_164;
        fVar13 = fStack_168;
        Carrier__get_BlockSize_240813c(param_3,0);
        if (cRam0000000004f4b729 == '\0') {
          FUN_021f03f8(PTR_DAT_049c1440);
          cRam0000000004f4b729 = '\x01';
        }
        Carrier__CoordinateToLocalPosition_2408cbc
                  (param_3,**(undefined8 **)(*(long *)PTR_DAT_049c1440 + 0xb8),
                   *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_049c1440 + 0xb8) + 1),0);
        iVar6 = extraout_w1 + -1;
        if (iVar6 < 2) {
          iVar6 = 1;
        }
        fVar21 = fVar20;
        Carrier__CoordinateToLocalPosition_2408cbc(param_3,0,iVar6,0);
        iVar6 = Carrier__GetMaxBlockCount_23faf24(param_3,0);
        fVar23 = _UNK_013aa470;
        fVar14 = fVar5 - fVar4;
        if (iVar6 < 2) {
          iVar6 = 1;
        }
        fVar22 = fVar14 / (float)iVar6;
        fVar18 = *(float *)(param_4 + 0x18);
        fStack_38 = fVar18 * fVar22;
        if (fVar14 <= fStack_38) {
          fStack_38 = fVar14;
        }
        if (cRam0000000004f4b79c == '\0') {
          FUN_021f03f8(PTR_DAT_049b8758);
          cRam0000000004f4b79c = '\x01';
        }
        fVar23 = fVar18 / fVar26 + fVar23;
        if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
          FUN_021f0574();
        }
        iVar6 = (int)fVar23;
        fVar14 = *(float *)(param_4 + 0x18);
        if (0xf < iVar6) {
          iVar6 = 0x10;
        }
        if (iVar6 < 2) {
          iVar6 = 1;
        }
        iVar1 = iVar6;
        if ((float)(int)fVar23 == INFINITY) {
          iVar1 = 1;
        }
        fVar23 = (float)UnityEngine_Time__get_deltaTime_3c29670(iVar6,0);
        lVar8 = *(long *)(param_2 + 0x160);
        if (lVar8 != 0) {
          fVar18 = 1.0;
          fVar24 = *(float *)(param_4 + 0x1c);
          fVar16 = _UNK_013aa8d8;
          if (_UNK_013aa8d8 <= fVar23) {
            fVar16 = fVar23;
          }
          fVar23 = fVar22 * ((fVar14 - fVar28) / fVar16);
          fVar28 = fVar18;
          if (fVar23 <= 1.0) {
            fVar28 = fVar23;
          }
          fVar14 = -1.0;
          if (-1.0 <= fVar23) {
            fVar14 = fVar28;
          }
          fVar28 = 0.0;
          if (0.0 <= *(float *)(lVar8 + 0x188)) {
            fVar28 = *(float *)(lVar8 + 0x188);
          }
          if (fVar21 < fVar20) {
            fVar28 = -fVar28;
          }
          fVar23 = *(float *)(lVar8 + 0x180);
          if (fVar17 < ABS(fVar24)) {
            fVar25 = *(float *)(param_4 + 0x28);
            fVar15 = (float)UnityEngine_Time__get_deltaTime_3c29670(0);
                    /* catch() { ... } // from try @ 025cfdc0 with catch @ 025cfd9c
                       catch() { ... } // from try @ 025cfdf8 with catch @ 025cfd9c
                       catch() { ... } // from try @ 025cfe20 with catch @ 025cfd9c */
            fVar16 = fVar18;
            if (fVar24 <= 0.0) {
              fVar16 = 0.0;
            }
                    /* try { // try from 025cfdb8 to 026cfdbf has its CatchHandler @ 025cfdd8 */
            fVar24 = -(fVar15 * 8.0);
            if (0.0 <= fVar16 - fVar25) {
              fVar24 = fVar15 * 8.0;
            }
                    /* try { // try from 025cfdc0 to 026cfdf3 has its CatchHandler @ 025cfd9c */
            fVar24 = fVar25 + fVar24;
            if (ABS(fVar16 - fVar25) <= fVar15 * 8.0) {
              fVar24 = fVar16;
            }
            *(float *)(param_4 + 0x28) = fVar24;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025cfdb8 with catch @ 025cfdd8
                        */
            lVar8 = *(long *)(param_2 + 0x160);
            if (lVar8 == 0) goto LAB_025cffd0;
          }
          fVar16 = *(float *)(lVar8 + 0x16c) + *(float *)(lVar8 + 0x16c);
          if (fVar17 <= fVar16) {
            fVar17 = fVar16;
          }
                    /* try { // try from 025cfdf4 to 026cfdf7 has its CatchHandler @ 025cfe14 */
          fVar17 = fStack_38 / fVar17;
                    /* try { // try from 025cfdf8 to 026cfe17 has its CatchHandler @ 025cfd9c */
          fVar24 = *(float *)(param_4 + 0x28);
          fVar16 = fVar18;
          if (fVar17 <= 1.0) {
            fVar16 = fVar17;
          }
          fVar15 = fVar18;
          if (fVar24 <= 1.0) {
            fVar15 = fVar24;
          }
                    /* catch() { ... } // from try @ 025cfdf4 with catch @ 025cfe14 */
          fVar25 = 0.0;
                    /* try { // try from 025cfe18 to 026cfe1f has its CatchHandler @ 025cfe28 */
          if (0.0 <= fVar24) {
            fVar25 = fVar15;
          }
                    /* try { // try from 025cfe20 to 026cfe2b has its CatchHandler @ 025cfd9c */
          if (0.0 <= fVar17) {
            fVar18 = 1.0 - fVar16;
          }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025cfe18 with catch @ 025cfe28
                        */
                    /* try { // try from 025cfe2c to 026cfeb7 has its CatchHandler @ 025cfe2c
                       catch() { ... } // from try @ 025cfe2c with catch @ 025cfe2c
                       catch() { ... } // from try @ 025cff50 with catch @ 025cfe2c
                       catch() { ... } // from try @ 025cffcc with catch @ 025cfe2c */
          fVar17 = (float)func_0x046086a0(fVar18,fVar25 * 3.0 + 1.0);
          fVar17 = 1.0 - fVar17;
          if (fVar17 < 1.0) {
            fVar18 = (fVar13 + fVar19) * 0.5;
            fVar19 = (fVar19 - fVar13) * 0.5 * (fVar17 + fVar25 * (1.0 - fVar17));
            fVar27 = fVar3 + (fVar27 - fVar3) * fVar17;
            fVar13 = fVar18 - fVar19;
            fVar19 = fVar18 + fVar19;
          }
          if (*(long *)(param_3 + 0xc0) != 0) {
            lVar8 = *(long *)(param_2 + 0x1c8);
            UnityEngine_Transform__get_localToWorldMatrix_3c2cf18
                      (&uStack_180,*(long *)(param_3 + 0xc0),0);
            if (fVar21 < fVar20) {
              uStack_e8 = CONCAT44(fStack_164,fStack_168);
              puVar10 = &uStack_100;
              fStack_38 = -fStack_38;
              uStack_f8 = uStack_178;
              uStack_100 = uStack_180;
              uStack_f0 = uStack_170;
              uStack_d8 = CONCAT44(fStack_154,fStack_158);
              uStack_e0 = CONCAT44(fStack_15c,fStack_160);
              uStack_c8 = uStack_148;
              uStack_d0 = uStack_150;
              fVar17 = fVar5;
            }
            else {
              uStack_a8 = CONCAT44(fStack_164,fStack_168);
                    /* try { // try from 025cfeb8 to 026cfec3 has its CatchHandler @ 025cff90 */
              puVar10 = &uStack_c0;
              uStack_b8 = uStack_178;
              uStack_c0 = uStack_180;
              uStack_b0 = uStack_170;
              uStack_98 = CONCAT44(fStack_154,fStack_158);
              uStack_a0 = CONCAT44(fStack_15c,fStack_160);
              uStack_88 = uStack_148;
              uStack_90 = uStack_150;
              fVar17 = fVar4;
            }
                    /* try { // try from 025cfef0 to 026cfeff has its CatchHandler @ 025cff8c */
            uStack_138 = puVar10[1];
            uStack_140 = *puVar10;
            uStack_128 = puVar10[3];
            uStack_130 = puVar10[2];
            uVar11 = *(undefined8 *)(param_4 + 0x10);
                    /* try { // try from 025cff04 to 026cff2b has its CatchHandler @ 025cff94 */
            uStack_118 = puVar10[5];
            uStack_120 = puVar10[4];
            uStack_108 = puVar10[7];
            uStack_110 = puVar10[6];
            lVar9 = UnityEngine_Component__get_gameObject_3c187f4(param_3,0);
            if ((lVar9 != 0) &&
               (uVar12 = UnityEngine_GameObject__get_layer_3c1cb44(lVar9,0), lVar8 != 0)) {
                    /* try { // try from 025cff40 to 026cff4f has its CatchHandler @ 025cff98 */
                    /* try { // try from 025cff50 to 026cffb3 has its CatchHandler @ 025cfe2c */
              uStack_1b8 = uStack_138;
              uStack_1c0 = uStack_140;
              uStack_1a8 = uStack_128;
              uStack_1b0 = uStack_130;
              uStack_198 = uStack_118;
              uStack_1a0 = uStack_120;
              uStack_188 = uStack_108;
              uStack_190 = uStack_110;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025cfef0 with catch @ 025cff8c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025cfeb8 with catch @ 025cff90
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025cff04 with catch @ 025cff94
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025cff40 with catch @ 025cff98
                        */
              SandJellyRenderer__Draw_24d3078
                        (fVar13,fVar3,fVar4,fVar19,fVar27,fVar5,fVar17,fVar17 + fStack_38,lVar8,
                         &uStack_1c0,uVar11,iVar1,uVar12,*(undefined8 *)(param_2 + 0x68),0,in_x7,
                         fVar22 * fVar26,fVar14 * fVar23,0,fVar28);
              return;
            }
          }
        }
      }
    }
  }
LAB_025cffd0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

