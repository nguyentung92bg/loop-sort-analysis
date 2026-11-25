/* IL2CPP: SandFlowSystem$$DrawLanding
void SandFlowSystem__DrawLanding (SandFlowSystem_o* __this, Block_o* block, float share, bool undo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$DrawLanding
   void SandFlowSystem__DrawLanding (SandFlowSystem_o* __this, Block_o* block, float share, bool
   undo, const MethodInfo* method); */

void SandFlowSystem__DrawLanding_24ca4c8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5,
               ulong param_6)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 auStack_338 [72];
  undefined1 auStack_2f0 [16];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
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
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  undefined8 auStack_f0 [2];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_38;
  
  if ((bRam0000000004f4bbf1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1818);
    FUN_021f03f8(PTR_DAT_049c72c0);
    FUN_021f03f8(PTR_DAT_049c1520);
    FUN_021f03f8(PTR_DAT_049c1528);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bbf1 = 1;
  }
  puVar3 = PTR_DAT_049b3b98;
  lStack_38 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
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
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  auStack_f0[0] = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  if ((param_6 & 1) == 0) {
    if ((param_5 == 0) || (*(long *)(param_5 + 0x108) == 0)) goto LAB_025ca950;
    uVar11 = UnityEngine_MeshFilter__get_sharedMesh_3befabc(*(long *)(param_5 + 0x108),0);
  }
  else {
    if (param_5 == 0) goto LAB_025ca950;
    uVar11 = *(undefined8 *)(param_5 + 0x110);
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar11,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_4 + 0x58) == 0) goto LAB_025ca950;
      uVar11 = *(undefined8 *)(*(long *)(param_4 + 0x58) + 0x18);
    }
    else {
      uVar11 = *(undefined8 *)(param_5 + 0x110);
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = UnityEngine_Object__op_Equality_3c1eeb4(uVar11,0,0);
  if ((((uVar4 & 1) != 0) || (plVar13 = *(long **)(param_5 + 0x100), plVar13 == (long *)0x0)) ||
     (*plVar13 != *(long *)PTR_DAT_049c1818)) {
    return;
  }
  if (((param_6 & 1) != 0) &&
     (uVar4 = Carrier__TryGetGroupBlockOf_23ff3b0(plVar13,param_5,&lStack_38,0), (uVar4 & 1) != 0))
  {
    if ((lStack_38 == 0) ||
       (lVar5 = UnityEngine_Component__get_gameObject_3c187f4(lStack_38,0), lVar5 == 0))
    goto LAB_025ca950;
    uVar4 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar5,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  if (plVar13[0x18] != 0) {
    UnityEngine_Transform__get_localToWorldMatrix_3c2cf18(&uStack_230,plVar13[0x18],0);
    auVar15 = Carrier__GetBlockCoordinate_2408c2c(plVar13,param_5,0);
    uVar14 = Carrier__CoordinateToLocalPosition_2408cbc
                       (plVar13,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,0);
    uStack_d8 = *(undefined8 *)(param_5 + 0x128);
    uStack_e0 = *(undefined8 *)(param_5 + 0x120);
    lVar5 = *(long *)(*(long *)PTR_DAT_049c1528 + 0x20);
    uStack_d0 = *(undefined4 *)(param_5 + 0x130);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    pcVar6 = (char *)thunk_FUN_0224e54c(&uStack_e0,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80));
    if (*pcVar6 == '\0') {
      uStack_1a8 = CONCAT44(uStack_224,uStack_228);
      uStack_1b0 = CONCAT44(uStack_22c,uStack_230);
      uStack_198 = uStack_218;
      uStack_1a0 = uStack_220;
      uStack_188 = uStack_208;
      uStack_190 = uStack_210;
      uStack_178 = uStack_1f8;
      uStack_180 = uStack_200;
      if (cRam0000000004f4a191 == '\0') {
        FUN_021f03f8(PTR_DAT_049bc158);
        cRam0000000004f4a191 = '\x01';
      }
      puVar9 = *(undefined4 **)(*(long *)PTR_DAT_049bc158 + 0xb8);
      uStack_230 = *puVar9;
      uStack_22c = puVar9[1];
      uStack_228 = puVar9[2];
      uStack_224 = puVar9[3];
      puVar10 = &uStack_1b0;
    }
    else {
      uStack_168 = CONCAT44(uStack_224,uStack_228);
      uStack_170 = CONCAT44(uStack_22c,uStack_230);
      lVar12 = *(long *)PTR_DAT_049c1520;
      uStack_158 = uStack_218;
      uStack_160 = uStack_220;
      lVar8 = *(long *)(lVar12 + 0x20);
      uStack_148 = uStack_208;
      uStack_150 = uStack_210;
      uStack_138 = uStack_1f8;
      uStack_140 = uStack_200;
      uVar2 = *(ushort *)(lVar8 + 0x135);
      lVar5 = lVar8;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718(lVar8);
        lVar5 = *(long *)(lVar12 + 0x20);
        uVar2 = *(ushort *)(lVar5 + 0x135);
      }
      uVar1 = *(undefined4 *)(**(long **)(lVar8 + 0xc0) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar5 = FUN_02229718(lVar5);
      }
      uVar7 = thunk_FUN_0224e54c(&uStack_e0,
                                 *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80) + 0x20);
      func_0x04608620(&uStack_230,uVar7,uVar1);
      puVar10 = &uStack_170;
    }
    uStack_1e8 = puVar10[1];
    uStack_1f0 = *puVar10;
    uStack_1d8 = puVar10[3];
    uStack_1e0 = puVar10[2];
    uStack_1c8 = puVar10[5];
    uStack_1d0 = puVar10[4];
    uStack_1b8 = puVar10[7];
    uStack_1c0 = puVar10[6];
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    UnityEngine_Matrix4x4__TRS_3c06ad0
              (&uStack_230,uVar14,param_2,param_3,uStack_230,uStack_22c,uStack_228,uStack_224,0);
    uStack_2a8 = uStack_1e8;
    uStack_2b0 = uStack_1f0;
    uStack_298 = uStack_1d8;
    uStack_2a0 = uStack_1e0;
    uStack_288 = uStack_1c8;
    uStack_290 = uStack_1d0;
    uStack_278 = uStack_1b8;
    uStack_280 = uStack_1c0;
    uStack_2d8 = uStack_218;
    uStack_2e0 = uStack_220;
    uStack_2c8 = uStack_208;
    uStack_2d0 = uStack_210;
    uStack_2b8 = uStack_1f8;
    uStack_2c0 = uStack_200;
    UnityEngine_Matrix4x4__op_Multiply_3c075f4(&uStack_270,&uStack_2b0,auStack_2f0,0);
    lVar5 = *(long *)(param_4 + 600);
    uStack_128 = uStack_268;
    uStack_130 = uStack_270;
    uStack_118 = uStack_258;
    uStack_120 = uStack_260;
    uStack_108 = uStack_248;
    uStack_110 = uStack_250;
    uStack_f8 = uStack_238;
    uStack_100 = uStack_240;
    uStack_b8 = uStack_268;
    uStack_c0 = uStack_270;
    uStack_a8 = uStack_258;
    uStack_b0 = uStack_260;
    uStack_98 = uStack_248;
    uStack_a0 = uStack_250;
    uStack_88 = uStack_238;
    uStack_90 = uStack_240;
    auStack_f0[0] = uVar11;
    thunk_FUN_021f190c(auStack_f0,uVar11);
    if (lVar5 != 0) {
      func_0x04608620(auStack_338,&uStack_130,0x48);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar5,param_5,auStack_338,*(undefined8 *)PTR_DAT_049c72c0);
      uStack_378 = uStack_b8;
      uStack_380 = uStack_c0;
      uStack_368 = uStack_a8;
      uStack_370 = uStack_b0;
      uStack_358 = uStack_98;
      uStack_360 = uStack_a0;
      uStack_348 = uStack_88;
      uStack_350 = uStack_90;
      SandFlowSystem__DrawCube_24ca0d8(param_1,param_4,param_5,uVar11,&uStack_380);
      return;
    }
  }
LAB_025ca950:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

