/* IL2CPP: SandFlowSystem$$DrawJellyPieces
void SandFlowSystem__DrawJellyPieces (SandFlowSystem_o* __this, Carrier_o* carrier, SandFlowSystem_JellyState_o* state, float fill, int32_t groupSize, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$DrawJellyPieces
   void SandFlowSystem__DrawJellyPieces (SandFlowSystem_o* __this, Carrier_o* carrier,
   SandFlowSystem_JellyState_o* state, float fill, int32_t groupSize, const MethodInfo* method); */

void SandFlowSystem__DrawJellyPieces_24cf588
               (undefined4 param_1,undefined1 param_2 [16],float param_3,long param_4,long param_5,
               long param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  int iVar13;
  undefined4 uVar14;
  int extraout_w1;
  undefined8 in_x7;
  int iVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
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
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025cf574 with catch @ 025cf594
                        */
                    /* try { // try from 025cf5b0 to 026cf5b3 has its CatchHandler @ 025cf5d0 */
                    /* try { // try from 025cf5b4 to 026cf5d3 has its CatchHandler @ 025cf558 */
                    /* catch() { ... } // from try @ 025cf5b0 with catch @ 025cf5d0 */
  if ((bRam0000000004f4bbfa & 1) == 0) {
                    /* try { // try from 025cf5d4 to 026cf5db has its CatchHandler @ 025cf5e4 */
                    /* try { // try from 025cf5dc to 026cf5e7 has its CatchHandler @ 025cf558 */
    FUN_021f03f8(PTR_DAT_049c1550);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025cf5d4 with catch @ 025cf5e4
                        */
                    /* try { // try from 025cf5e8 to 026cf673 has its CatchHandler @ 025cf5e8
                       catch() { ... } // from try @ 025cf5e8 with catch @ 025cf5e8
                       catch() { ... } // from try @ 025cf70c with catch @ 025cf5e8
                       catch() { ... } // from try @ 025cf788 with catch @ 025cf5e8 */
    FUN_021f03f8(PTR_DAT_049bed78);
    bRam0000000004f4bbfa = 1;
  }
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (param_6 != 0) {
    *(undefined4 *)(param_6 + 0x18) = param_1;
    *(undefined4 *)(param_6 + 0x1c) = 0;
    SandFlowSystem__Shape_24ce8c4(&uStack_120,param_4,param_5);
    uVar9 = uStack_100;
    if (param_5 != 0) {
      uVar7 = (undefined4)uStack_108;
      uVar8 = uStack_108._4_4_;
      fVar26 = (float)uStack_100;
      fVar12 = uStack_f8._4_4_;
      uVar10 = uStack_100._4_4_;
      uVar11 = (undefined4)uStack_f8;
      Carrier__get_BlockSize_240813c(param_5,0);
      if (cRam0000000004f4b729 == '\0') {
        FUN_021f03f8(PTR_DAT_049c1440);
        cRam0000000004f4b729 = '\x01';
      }
                    /* try { // try from 025cf674 to 026cf67f has its CatchHandler @ 025cf74c */
      Carrier__CoordinateToLocalPosition_2408cbc
                (param_5,**(undefined8 **)(*(long *)PTR_DAT_049c1440 + 0xb8),
                 *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_049c1440 + 0xb8) + 1),0);
      iVar13 = extraout_w1 + -1;
                    /* try { // try from 025cf6ac to 026cf6bb has its CatchHandler @ 025cf748 */
      if (iVar13 < 2) {
        iVar13 = 1;
      }
      fVar25 = param_3;
      Carrier__CoordinateToLocalPosition_2408cbc(param_5,0,iVar13,0);
                    /* try { // try from 025cf6c0 to 026cf6e7 has its CatchHandler @ 025cf750 */
      fVar24 = -1.0;
      if (param_3 <= fVar25) {
        fVar24 = 1.0;
      }
      fVar25 = fVar26;
      if (fVar24 <= 0.0) {
        fVar25 = fVar12;
      }
      iVar13 = Carrier__GetMaxBlockCount_23faf24(param_5,0);
      if (iVar13 < 2) {
        iVar13 = 1;
      }
      if (*(long *)(param_5 + 0xc0) != 0) {
                    /* try { // try from 025cf6fc to 026cf70b has its CatchHandler @ 025cf754 */
        UnityEngine_Transform__get_localToWorldMatrix_3c2cf18
                  (&uStack_e0,*(long *)(param_5 + 0xc0),0);
        puVar4 = PTR_DAT_049bed78;
        fVar3 = _UNK_013aa548;
        lVar16 = *(long *)(param_4 + 0x208);
        if (lVar16 != 0) {
                    /* try { // try from 025cf70c to 026cf76f has its CatchHandler @ 025cf5e8 */
          fVar26 = (fVar12 - fVar26) / (float)iVar13;
          iVar13 = 0;
          while( true ) {
            if (*(int *)(lVar16 + 0x18) <= iVar13) {
              return;
            }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025cf6ac with catch @ 025cf748
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025cf674 with catch @ 025cf74c
                        */
            if (*(long *)(param_4 + 0x210) == 0) break;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025cf6c0 with catch @ 025cf750
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025cf6fc with catch @ 025cf754
                        */
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (*(long *)(param_4 + 0x210),iVar13,&uStack_120,*(undefined8 *)puVar4);
            uVar6 = uStack_118;
            uVar5 = uStack_120;
            fVar22 = (float)uStack_118;
            iVar2 = 1;
            do {
              iVar15 = iVar2;
                    /* try { // try from 025cf770 to 026cf773 has its CatchHandler @ 025cf77c */
              if (*(long *)(param_4 + 0x208) == 0) goto LAB_025cf9e8;
                    /* catch() { ... } // from try @ 025cf770 with catch @ 025cf77c */
                    /* try { // try from 025cf780 to 026cf787 has its CatchHandler @ 025cf790 */
                    /* try { // try from 025cf788 to 026cf793 has its CatchHandler @ 025cf5e8 */
              if (*(int *)(*(long *)(param_4 + 0x208) + 0x18) <= iVar13 + iVar15) break;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025cf780 with catch @ 025cf790
                        */
              if (*(long *)(param_4 + 0x210) == 0) goto LAB_025cf9e8;
              System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                        (*(long *)(param_4 + 0x210),iVar13 + iVar15,&uStack_120,
                         *(undefined8 *)puVar4);
              fVar21 = (float)uStack_120 - (float)uVar5;
              fVar23 = (float)(uStack_120 >> 0x20) - (float)(uVar5 >> 0x20);
              iVar2 = iVar15 + 1;
            } while (fVar21 * fVar21 + fVar23 * fVar23 +
                     ((float)uStack_118 - fVar22) * ((float)uStack_118 - fVar22) <= fVar3);
            if (cRam0000000004f4b79c == '\0') {
              FUN_021f03f8(PTR_DAT_049b8758);
              cRam0000000004f4b79c = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
              FUN_021f0574();
            }
            iVar2 = 0;
            if (param_7 != 0) {
              iVar2 = iVar13 / param_7;
            }
            uVar17 = 0;
            fVar22 = (float)iVar15 / (float)param_7;
            uVar18 = (uint)fVar22;
            if (0xf < (int)uVar18) {
              uVar18 = 0x10;
            }
            if ((int)uVar18 < 2) {
              uVar18 = 1;
            }
            if ((float)(int)fVar22 == INFINITY) {
              uVar18 = 1;
            }
            do {
              lVar16 = *(long *)(param_6 + 0x10);
              if (lVar16 == 0) goto LAB_025cf9e8;
              uVar1 = iVar2 + (int)uVar17;
              if (0xe < (int)uVar1) {
                uVar1 = 0xf;
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar1) {
LAB_025cfa1c:
                    /* WARNING: Subroutine does not return */
                FUN_021f06a8();
              }
              lVar19 = *(long *)(param_4 + 0x200);
              if (lVar19 == 0) goto LAB_025cf9e8;
              if (*(uint *)(lVar19 + 0x18) <= uVar17) goto LAB_025cfa1c;
              lVar16 = lVar16 + (long)(int)uVar1 * 0x10;
              uVar20 = *(undefined8 *)(lVar16 + 0x20);
              lVar19 = lVar19 + uVar17 * 0x10;
              uVar17 = uVar17 + 1;
              *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(lVar16 + 0x28);
              *(undefined8 *)(lVar19 + 0x20) = uVar20;
            } while (uVar18 != uVar17);
            lVar16 = *(long *)(param_4 + 0x1c8);
            uStack_118 = uStack_d8;
            uStack_120 = uStack_e0;
            uStack_108 = uStack_c8;
            uStack_110 = uStack_d0;
            uStack_f8 = uStack_b8;
            uStack_100 = uStack_c0;
            uStack_e8 = uStack_a8;
            uStack_f0 = uStack_b0;
            UnityEngine_Matrix4x4__Translate_3c07ad8
                      (&uStack_160,uVar5,uVar5 >> 0x20,uVar6 & 0xffffffff,0);
            uStack_1d8 = uStack_118;
            uStack_1e0 = uStack_120;
            uStack_1c8 = uStack_108;
            uStack_1d0 = uStack_110;
            uStack_1b8 = uStack_f8;
            uStack_1c0 = uStack_100;
            uStack_1a8 = uStack_e8;
            uStack_1b0 = uStack_f0;
            uStack_218 = uStack_158;
            uStack_220 = uStack_160;
            uStack_208 = uStack_148;
            uStack_210 = uStack_150;
            uStack_1f8 = uStack_138;
            uStack_200 = uStack_140;
            uStack_1e8 = uStack_128;
            uStack_1f0 = uStack_130;
            UnityEngine_Matrix4x4__op_Multiply_3c075f4(&uStack_1a0,&uStack_1e0,&uStack_220,0);
            uVar20 = *(undefined8 *)(param_4 + 0x200);
            if (cRam0000000004f49d59 == '\0') {
              FUN_021f03f8(PTR_DAT_049b8a38);
              cRam0000000004f49d59 = '\x01';
            }
            uVar28 = **(undefined4 **)(*(long *)PTR_DAT_049b8a38 + 0xb8);
            uVar27 = (*(undefined4 **)(*(long *)PTR_DAT_049b8a38 + 0xb8))[2];
            lVar19 = UnityEngine_Component__get_gameObject_3c187f4(param_5,0);
            if ((lVar19 == 0) ||
               (uVar14 = UnityEngine_GameObject__get_layer_3c1cb44(lVar19,0), lVar16 == 0)) break;
            uStack_258 = uStack_198;
            uStack_260 = uStack_1a0;
            uStack_248 = uStack_188;
            uStack_250 = uStack_190;
            uStack_238 = uStack_178;
            uStack_240 = uStack_180;
            uStack_228 = uStack_168;
            uStack_230 = uStack_170;
            SandJellyRenderer__Draw_24d3078
                      (uVar7,uVar8,uVar9 & 0xffffffff,uVar10,uVar11,fVar12,
                       fVar25 + fVar26 * fVar24 * (float)iVar13,
                       fVar25 + fVar26 * fVar24 * (float)(iVar13 + iVar15),lVar16,&uStack_260,uVar20
                       ,(ulong)uVar18,uVar14,*(undefined8 *)(param_4 + 0x68),0,in_x7,
                       fVar26 * (float)param_7,0,uVar28,uVar27);
            lVar16 = *(long *)(param_4 + 0x208);
            iVar13 = iVar13 + iVar15;
            if (lVar16 == 0) break;
          }
        }
      }
    }
  }
LAB_025cf9e8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

