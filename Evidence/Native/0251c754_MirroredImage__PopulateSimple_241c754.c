/* IL2CPP: MirroredImage$$PopulateSimple
void MirroredImage__PopulateSimple (MirroredImage_o* __this, UnityEngine_UI_VertexHelper_o* vh, UnityEngine_Sprite_o* sp, UnityEngine_Rect_o rect, UnityEngine_Color32_o color32, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MirroredImage$$PopulateSimple
   void MirroredImage__PopulateSimple (MirroredImage_o* __this, UnityEngine_UI_VertexHelper_o* vh,
   UnityEngine_Sprite_o* sp, UnityEngine_Rect_o rect, UnityEngine_Color32_o color32, const
   MethodInfo* method); */

void MirroredImage__PopulateSimple_241c754
               (float param_1,float param_2,float param_3,float param_4,long param_5,
               undefined8 param_6,undefined8 param_7,ulong param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float *pfVar10;
  undefined8 in_x7;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float afStack_100 [4];
  float afStack_f0 [4];
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  float afStack_d0 [6];
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  puVar4 = PTR_DAT_049c2f00;
  lVar1 = tpidr_el0;
  lStack_a8 = *(long *)(lVar1 + 0x28);
  fVar15 = param_2;
  fVar16 = param_3;
  fVar17 = param_4;
  uStack_b8 = param_8;
  uStack_b0 = param_6;
  if ((bRam0000000004f4b758 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ef8);
    FUN_021f03f8(PTR_DAT_049c2f00);
    FUN_021f03f8(PTR_DAT_049c2f08);
    bRam0000000004f4b758 = 1;
  }
  uVar14 = UnityEngine_Sprites_DataUtility__GetOuterUV_3c4603c(param_7,0);
  pfVar7 = afStack_d0;
  lVar11 = *(long *)puVar4;
  afStack_d0[2] = 0.0;
  afStack_d0[0] = 0.0;
  afStack_d0[1] = 0.0;
  lVar5 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02229718();
  }
  uVar6 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40));
  puVar2 = PTR_DAT_049b3bd0;
  if ((uVar6 & 1) != 0) {
    lVar5 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      FUN_021f0574(*(long *)(puVar2 + 0xe0));
    }
    uVar12 = System_Type__GetTypeFromHandle_310ebfc(uVar12,0);
    System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar12,0);
  }
  puVar8 = &uStack_e0;
  lVar11 = *(long *)puVar4;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar5 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02229718();
  }
  uVar6 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40));
  if ((uVar6 & 1) != 0) {
    lVar5 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      FUN_021f0574(*(long *)(puVar2 + 0xe0));
    }
    uVar12 = System_Type__GetTypeFromHandle_310ebfc(uVar12,0);
    System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar12,0);
  }
  puVar3 = PTR_DAT_049c2ef8;
  if (*(char *)(param_5 + 0x110) == '\0') {
    lVar11 = *(long *)PTR_DAT_049c2ef8;
    lVar5 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    pfVar7 = (float *)System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                                (pfVar7,0,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
    lVar5 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      FUN_02229718(lVar5);
    }
                    /* try { // try from 0251c988 to 0261c98b has its CatchHandler @ 0251cad8 */
    lVar11 = *(long *)puVar3;
                    /* try { // try from 0251c98c to 0261c997 has its CatchHandler @ 0251cadc */
    lVar5 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
                    /* try { // try from 0251c9b0 to 0261c9cf has its CatchHandler @ 0251cae0 */
    puVar8 = (undefined8 *)
             System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                       (puVar8,0,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
    lVar5 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      FUN_02229718(lVar5);
    }
    uVar12 = 2;
                    /* try { // try from 0251c9d8 to 0261ca0f has its CatchHandler @ 0251cae4 */
    *pfVar7 = param_1;
    pfVar7[1] = param_3 + param_1;
    *(undefined4 *)puVar8 = uVar14;
    *(float *)((long)puVar8 + 4) = fVar16;
  }
  else {
    afStack_d0[2] = param_3 + param_1;
    uStack_e0 = CONCAT44(fVar16,uVar14);
    uVar12 = 3;
    afStack_d0[1] = param_1 + param_3 * 0.5;
    afStack_d0[0] = param_1;
    uStack_d8 = uVar14;
  }
  pfVar9 = afStack_f0;
  lVar11 = *(long *)puVar4;
  afStack_f0[2] = 0.0;
  afStack_f0[0] = 0.0;
  afStack_f0[1] = 0.0;
  lVar5 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02229718();
  }
                    /* try { // try from 0251ca10 to 0261cafb has its CatchHandler @ 0251c6dc */
  uVar6 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40));
  if ((uVar6 & 1) != 0) {
    lVar5 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      FUN_021f0574(*(long *)(puVar2 + 0xe0));
    }
    uVar13 = System_Type__GetTypeFromHandle_310ebfc(uVar13,0);
    System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar13,0);
  }
  pfVar10 = afStack_100;
  lVar11 = *(long *)puVar4;
  afStack_100[2] = 0.0;
  afStack_100[0] = 0.0;
  afStack_100[1] = 0.0;
  lVar5 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02229718();
  }
  uVar6 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40));
  if ((uVar6 & 1) != 0) {
    lVar5 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      FUN_021f0574(*(long *)(puVar2 + 0xe0));
    }
    uVar13 = System_Type__GetTypeFromHandle_310ebfc(uVar13,0);
    System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar13,0);
  }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0251c988 with catch @ 0251cad8
                        */
  puVar2 = PTR_DAT_049c2f08;
  puVar4 = PTR_DAT_049c2ef8;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0251c98c with catch @ 0251cadc
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0251c9b0 with catch @ 0251cae0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0251c9d8 with catch @ 0251cae4
                        */
  if (*(char *)(param_5 + 0x111) == '\0') {
                    /* try { // try from 0251cb14 to 0261cb53 has its CatchHandler @ 0251c6dc */
    lVar11 = *(long *)PTR_DAT_049c2ef8;
    lVar5 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    pfVar9 = (float *)System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                                (pfVar9,0,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
    lVar5 = *(long *)(lVar11 + 0x20);
                    /* try { // try from 0251cb54 to 0261cb63 has its CatchHandler @ 0251cb64 */
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      FUN_02229718(lVar5);
    }
    lVar11 = *(long *)puVar4;
                    /* catch() { ... } // from try @ 0251cafc with catch @ 0251cb64
                       catch() { ... } // from try @ 0251cb54 with catch @ 0251cb64 */
    lVar5 = *(long *)(lVar11 + 0x20);
                    /* try { // try from 0251cb68 to 0261cb6b has its CatchHandler @ 0251cb74 */
                    /* try { // try from 0251cb6c to 0261cb77 has its CatchHandler @ 0251c6dc */
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0251cb68 with catch @ 0251cb74
                        */
      lVar5 = FUN_02229718();
    }
                    /* try { // try from 0251cb78 to 0261cc8b has its CatchHandler @ 0251cb78
                       catch() { ... } // from try @ 0251cb78 with catch @ 0251cb78
                       catch() { ... } // from try @ 0251cebc with catch @ 0251cb78
                       catch() { ... } // from try @ 0251cf20 with catch @ 0251cb78
                       catch() { ... } // from try @ 0251cfd8 with catch @ 0251cb78 */
    pfVar10 = (float *)System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                                 (pfVar10,0,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
    lVar5 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      FUN_02229718(lVar5);
    }
    uVar13 = 2;
    *pfVar9 = param_2;
    pfVar9[1] = param_4 + param_2;
    *pfVar10 = fVar15;
    pfVar10[1] = fVar17;
  }
  else {
    afStack_f0[2] = param_4 + param_2;
    afStack_100[1] = fVar17;
    afStack_100[0] = fVar15;
    uVar13 = 3;
                    /* try { // try from 0251cafc to 0261cb13 has its CatchHandler @ 0251cb64 */
    afStack_f0[1] = param_2 + param_4 * 0.5;
    afStack_f0[0] = param_2;
    afStack_100[2] = fVar15;
  }
  auVar18 = System_Span___Il2CppFullySharedGenericType___op_Implicit_2999244
                      (pfVar7,uVar12,*(undefined8 *)puVar2);
  auVar19 = System_Span___Il2CppFullySharedGenericType___op_Implicit_2999244
                      (pfVar9,uVar13,*(undefined8 *)puVar2);
  auVar20 = System_Span___Il2CppFullySharedGenericType___op_Implicit_2999244
                      (puVar8,uVar12,*(undefined8 *)puVar2);
  auVar21 = System_Span___Il2CppFullySharedGenericType___op_Implicit_2999244
                      (pfVar10,uVar13,*(undefined8 *)puVar2);
  MirroredImage__GenerateGrid_241cc94
            (uStack_b0,auVar18._0_8_,auVar18._8_8_,auVar19._0_8_,auVar19._8_8_,auVar20._0_8_,
             auVar20._8_8_,in_x7,auVar21,uStack_b8 & 0xffffffff,0);
  if (*(long *)(lVar1 + 0x28) == lStack_a8) {
                    /* try { // try from 0251cc8c to 0261cc8f has its CatchHandler @ 0251cebc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

