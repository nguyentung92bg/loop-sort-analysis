/* IL2CPP: MirroredImage$$PopulateSliced
void MirroredImage__PopulateSliced (MirroredImage_o* __this, UnityEngine_UI_VertexHelper_o* vh, UnityEngine_Sprite_o* sp, UnityEngine_Rect_o rect, UnityEngine_Color32_o color32, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MirroredImage$$PopulateSliced
   void MirroredImage__PopulateSliced (MirroredImage_o* __this, UnityEngine_UI_VertexHelper_o* vh,
   UnityEngine_Sprite_o* sp, UnityEngine_Rect_o rect, UnityEngine_Color32_o color32, const
   MethodInfo* method); */

void MirroredImage__PopulateSliced_241c000
               (float param_1,float param_2,float param_3,float param_4,long param_5,
               undefined8 param_6,long param_7,ulong param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float *pfVar10;
  undefined8 in_x7;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float afStack_170 [8];
  float afStack_150 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  float afStack_110 [10];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  long lStack_a8;
  
  lVar6 = tpidr_el0;
  lStack_a8 = *(long *)(lVar6 + 0x28);
  fVar17 = param_3;
  fVar19 = param_4;
  fStack_ac = param_2;
  if ((bRam0000000004f4b759 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ef8);
    FUN_021f03f8(PTR_DAT_049c2f00);
    FUN_021f03f8(PTR_DAT_049c2f08);
    bRam0000000004f4b759 = 1;
  }
  uVar14 = UnityEngine_Sprites_DataUtility__GetOuterUV_3c4603c(param_7,0);
  uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar17);
  fStack_b4 = fVar19;
  fStack_b0 = param_2;
  uVar15 = UnityEngine_Sprites_DataUtility__GetInnerUV_3c46028(param_7,0);
  puVar3 = PTR_DAT_049c2f00;
  fStack_bc = fVar19;
  fStack_b8 = param_2;
  if (param_7 == 0) {
                    /* catch() { ... } // from try @ 0251c43c with catch @ 0251c664 */
                    /* catch() { ... } // from try @ 0251c434 with catch @ 0251c668 */
                    /* catch() { ... } // from try @ 0251c654 with catch @ 0251c66c */
                    /* catch() { ... } // from try @ 0251c650 with catch @ 0251c670 */
    if (*(long *)(lVar6 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0251c414 with catch @ 0251c674 */
      FUN_021f06a0();
    }
  }
  else {
    fVar18 = fVar17;
    fVar16 = (float)UnityEngine_Sprite__get_border_3bc3cc0(param_7,0);
    fVar20 = *(float *)(param_5 + 0x108);
    param_2 = param_2 / fVar20;
    fVar18 = fVar18 / fVar20;
    fVar19 = fVar19 / fVar20;
    fStack_e8 = param_4 * 0.5;
    fStack_dc = param_4;
    fVar16 = (float)MirroredImage__ClampBorder_241cfd4(fVar16 / fVar20);
    pfVar7 = afStack_110;
    lVar11 = *(long *)puVar3;
    afStack_110[0] = 0.0;
    afStack_110[1] = 0.0;
    afStack_110[2] = 0.0;
    afStack_110[3] = 0.0;
    afStack_110[6] = 0.0;
    lVar4 = *(long *)(lVar11 + 0x20);
    afStack_110[4] = 0.0;
    afStack_110[5] = 0.0;
    fStack_e4 = fVar19;
    fStack_e0 = param_2;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718();
    }
    lStack_d0 = lVar6;
    uVar5 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40));
    puVar1 = PTR_DAT_049b3bd0;
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)(lVar11 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02229718();
      }
      uVar12 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        FUN_021f0574(*(long *)(puVar1 + 0xe0));
      }
      uVar12 = System_Type__GetTypeFromHandle_310ebfc(uVar12,0);
      System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar12,0);
    }
    puVar8 = &uStack_130;
    lVar4 = *(long *)puVar3;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_118 = 0;
    lVar6 = *(long *)(lVar4 + 0x20);
    uStack_120 = 0;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
    uVar5 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40));
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)(lVar4 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02229718();
      }
      uVar12 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        FUN_021f0574(*(long *)(puVar1 + 0xe0));
      }
      uVar12 = System_Type__GetTypeFromHandle_310ebfc(uVar12,0);
      System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar12,0);
    }
    puVar2 = PTR_DAT_049c2ef8;
    uStack_d8 = param_6;
    if (*(char *)(param_5 + 0x110) == '\0') {
      lVar4 = *(long *)PTR_DAT_049c2ef8;
      lVar6 = *(long *)(lVar4 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02229718();
      }
                    /* try { // try from 0251c2b0 to 0261c3d7 has its CatchHandler @ 0251c2b0
                       catch() { ... } // from try @ 0251c2b0 with catch @ 0251c2b0
                       catch() { ... } // from try @ 0251c538 with catch @ 0251c2b0
                       catch() { ... } // from try @ 0251c570 with catch @ 0251c2b0
                       catch() { ... } // from try @ 0251c624 with catch @ 0251c2b0
                       catch() { ... } // from try @ 0251c640 with catch @ 0251c2b0
                       catch() { ... } // from try @ 0251c658 with catch @ 0251c2b0
                       catch() { ... } // from try @ 0251c6d0 with catch @ 0251c2b0 */
      pfVar7 = (float *)System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                                  (pfVar7,0,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
      lVar6 = *(long *)(lVar4 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        FUN_02229718(lVar6);
      }
      lVar4 = *(long *)puVar2;
      lVar6 = *(long *)(lVar4 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02229718();
      }
      puVar8 = (undefined8 *)
               System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                         (puVar8,0,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
      lVar6 = *(long *)(lVar4 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        FUN_02229718(lVar6);
      }
      uVar12 = 4;
      *pfVar7 = param_1;
      pfVar7[1] = param_1 + fVar16;
      pfVar7[2] = (param_3 + param_1) - fVar18;
      pfVar7[3] = param_3 + param_1;
      *(undefined4 *)puVar8 = uVar14;
      *(undefined4 *)((long)puVar8 + 4) = uVar15;
      uVar15 = (undefined4)uStack_c8;
    }
    else {
      afStack_110[3] = param_1 + param_3 * 0.5;
      uStack_130 = CONCAT44(uVar15,uVar14);
      afStack_110[6] = param_3 + param_1;
      uStack_120 = CONCAT44(uVar15,fVar17);
      uVar12 = 7;
      afStack_110[1] = param_1 + fVar16;
      afStack_110[0] = param_1;
      afStack_110[2] = afStack_110[3] - fVar18;
      afStack_110[5] = afStack_110[6] - fVar16;
      afStack_110[4] = afStack_110[3] + fVar18;
      uVar15 = (undefined4)uStack_c8;
      uStack_118 = uVar14;
    }
    *(float *)(puVar8 + 1) = fVar17;
    *(undefined4 *)((long)puVar8 + 0xc) = uVar15;
    fVar17 = fStack_dc;
    pfVar9 = afStack_150;
    lVar4 = *(long *)puVar3;
    afStack_150[0] = 0.0;
    afStack_150[1] = 0.0;
    afStack_150[2] = 0.0;
    afStack_150[3] = 0.0;
    afStack_150[6] = 0.0;
    lVar6 = *(long *)(lVar4 + 0x20);
    afStack_150[4] = 0.0;
    afStack_150[5] = 0.0;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
    uStack_c8 = param_8;
    uVar5 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40));
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)(lVar4 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02229718();
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        FUN_021f0574(*(long *)(puVar1 + 0xe0));
      }
      uVar13 = System_Type__GetTypeFromHandle_310ebfc(uVar13,0);
      System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar13,0);
    }
    pfVar10 = afStack_170;
    lVar4 = *(long *)puVar3;
    afStack_170[0] = 0.0;
    afStack_170[1] = 0.0;
                    /* try { // try from 0251c3d8 to 0261c3e3 has its CatchHandler @ 0251c688 */
    afStack_170[2] = 0.0;
    afStack_170[3] = 0.0;
    afStack_170[6] = 0.0;
    lVar6 = *(long *)(lVar4 + 0x20);
    afStack_170[4] = 0.0;
    afStack_170[5] = 0.0;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
                    /* try { // try from 0251c3f4 to 0261c3ff has its CatchHandler @ 0251c684 */
    uVar5 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40));
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)(lVar4 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 0251c414 to 0261c41b has its CatchHandler @ 0251c674 */
        lVar6 = FUN_02229718();
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        FUN_021f0574(*(long *)(puVar1 + 0xe0));
      }
                    /* try { // try from 0251c434 to 0261c43b has its CatchHandler @ 0251c668 */
                    /* try { // try from 0251c43c to 0261c44b has its CatchHandler @ 0251c664 */
      uVar13 = System_Type__GetTypeFromHandle_310ebfc(uVar13,0);
      System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar13,0);
    }
    puVar1 = PTR_DAT_049c2f08;
    puVar3 = PTR_DAT_049c2ef8;
    if (*(char *)(param_5 + 0x111) == '\0') {
                    /* try { // try from 0251c4b4 to 0261c4b7 has its CatchHandler @ 0251c544 */
      lVar4 = *(long *)PTR_DAT_049c2ef8;
      lVar6 = *(long *)(lVar4 + 0x20);
                    /* try { // try from 0251c4c4 to 0261c4c7 has its CatchHandler @ 0251c540 */
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 0251c4cc to 0261c4cf has its CatchHandler @ 0251c53c */
        lVar6 = FUN_02229718();
      }
                    /* try { // try from 0251c4d4 to 0261c4eb has its CatchHandler @ 0251c550 */
      pfVar9 = (float *)System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                                  (pfVar9,0,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
      lVar6 = *(long *)(lVar4 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 0251c4fc to 0261c50b has its CatchHandler @ 0251c698 */
        FUN_02229718(lVar6);
      }
      lVar4 = *(long *)puVar3;
      lVar6 = *(long *)(lVar4 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02229718();
      }
      pfVar10 = (float *)System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                                   (pfVar10,0,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
                    /* try { // try from 0251c52c to 0261c52f has its CatchHandler @ 0251c54c */
      lVar6 = *(long *)(lVar4 + 0x20);
                    /* try { // try from 0251c534 to 0261c537 has its CatchHandler @ 0251c550 */
                    /* try { // try from 0251c538 to 0261c56b has its CatchHandler @ 0251c2b0 */
                    /* catch() { ... } // from try @ 0251c4cc with catch @ 0251c53c */
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 0251c4c4 with catch @ 0251c540 */
                    /* catch() { ... } // from try @ 0251c4b4 with catch @ 0251c544 */
        FUN_02229718(lVar6);
      }
                    /* catch() { ... } // from try @ 0251c4ac with catch @ 0251c548 */
                    /* catch() { ... } // from try @ 0251c52c with catch @ 0251c54c */
                    /* catch() { ... } // from try @ 0251c4d4 with catch @ 0251c550
                       catch() { ... } // from try @ 0251c534 with catch @ 0251c550 */
      uVar13 = 4;
      fVar17 = fVar17 + fStack_ac;
      *pfVar9 = fStack_ac;
      pfVar9[1] = fStack_ac + fStack_e0;
      pfVar9[2] = fVar17 - fStack_e4;
      pfVar9[3] = fVar17;
                    /* try { // try from 0251c56c to 0261c56f has its CatchHandler @ 0251c658 */
                    /* try { // try from 0251c570 to 0261c61b has its CatchHandler @ 0251c2b0 */
      *pfVar10 = fStack_b0;
      pfVar10[1] = fStack_b8;
      pfVar10[2] = fStack_bc;
      pfVar10[3] = fStack_b4;
    }
    else {
      uVar13 = 7;
                    /* try { // try from 0251c46c to 0261c47b has its CatchHandler @ 0251c694 */
      afStack_150[6] = fVar17 + fStack_ac;
      afStack_170[6] = fStack_b0;
      afStack_150[3] = fStack_ac + fStack_e8;
      afStack_170[1] = fStack_b8;
      afStack_170[0] = fStack_b0;
      afStack_150[1] = fStack_ac + fStack_e0;
      afStack_150[0] = fStack_ac;
                    /* try { // try from 0251c480 to 0261c48f has its CatchHandler @ 0251c68c */
      afStack_150[2] = afStack_150[3] - fStack_e4;
      afStack_150[5] = afStack_150[6] - fStack_e0;
      afStack_150[4] = afStack_150[3] + fStack_e4;
      afStack_170[3] = fStack_b4;
      afStack_170[2] = fStack_bc;
      afStack_170[5] = fStack_b8;
      afStack_170[4] = fStack_bc;
                    /* try { // try from 0251c4ac to 0261c4af has its CatchHandler @ 0251c548 */
    }
    auVar21 = System_Span___Il2CppFullySharedGenericType___op_Implicit_2999244
                        (pfVar7,uVar12,*(undefined8 *)puVar1);
    auVar22 = System_Span___Il2CppFullySharedGenericType___op_Implicit_2999244
                        (pfVar9,uVar13,*(undefined8 *)puVar1);
    auVar23 = System_Span___Il2CppFullySharedGenericType___op_Implicit_2999244
                        (puVar8,uVar12,*(undefined8 *)puVar1);
    auVar24 = System_Span___Il2CppFullySharedGenericType___op_Implicit_2999244
                        (pfVar10,uVar13,*(undefined8 *)puVar1);
    MirroredImage__GenerateGrid_241cc94
              (uStack_d8,auVar21._0_8_,auVar21._8_8_,auVar22._0_8_,auVar22._8_8_,auVar23._0_8_,
               auVar23._8_8_,in_x7,auVar24,uStack_c8 & 0xffffffff,*(char *)(param_5 + 0xed) == '\0')
    ;
                    /* try { // try from 0251c61c to 0261c623 has its CatchHandler @ 0251c690 */
                    /* try { // try from 0251c624 to 0261c62b has its CatchHandler @ 0251c2b0 */
                    /* try { // try from 0251c62c to 0261c633 has its CatchHandler @ 0251c6d8 */
    if (*(long *)(lStack_d0 + 0x28) == lStack_a8) {
                    /* try { // try from 0251c638 to 0261c63b has its CatchHandler @ 0251c688 */
                    /* try { // try from 0251c63c to 0261c63f has its CatchHandler @ 0251c680 */
                    /* try { // try from 0251c640 to 0261c643 has its CatchHandler @ 0251c2b0 */
                    /* try { // try from 0251c644 to 0261c647 has its CatchHandler @ 0251c684 */
                    /* try { // try from 0251c648 to 0261c64b has its CatchHandler @ 0251c67c */
                    /* try { // try from 0251c64c to 0261c64f has its CatchHandler @ 0251c678 */
                    /* try { // try from 0251c650 to 0261c653 has its CatchHandler @ 0251c670 */
                    /* try { // try from 0251c654 to 0261c657 has its CatchHandler @ 0251c66c */
                    /* catch() { ... } // from try @ 0251c56c with catch @ 0251c658
                       try { // try from 0251c658 to 0261c6b7 has its CatchHandler @ 0251c2b0 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0251c64c with catch @ 0251c678 */
  __stack_chk_fail();
}

