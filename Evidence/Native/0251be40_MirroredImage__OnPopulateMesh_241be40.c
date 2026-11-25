/* IL2CPP: MirroredImage$$OnPopulateMesh
void MirroredImage__OnPopulateMesh (MirroredImage_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MirroredImage$$OnPopulateMesh
   void MirroredImage__OnPopulateMesh (MirroredImage_o* __this, UnityEngine_UI_VertexHelper_o* vh,
   const MethodInfo* method); */

void MirroredImage__OnPopulateMesh_241be40
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5,
               long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  uint *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  float *pfVar11;
  undefined8 in_x7;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  float afStack_150 [8];
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  uint uStack_118;
  float afStack_110 [8];
  float afStack_f0 [4];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  if ((bRam0000000004f4b757 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b757 = 1;
  }
  puVar1 = PTR_DAT_049b3b98;
  if (param_6 != 0) {
    UnityEngine_UI_VertexHelper__Clear_3edd4d4(param_6,0);
    lVar4 = MirroredImage__get_ActiveSprite_241bd74(param_5);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(lVar4,0,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    fVar16 = (float)UnityEngine_UI_Graphic__GetPixelAdjustedRect_3cf8e94(param_5,0);
    fVar20 = param_2;
    fVar23 = param_3;
    fVar22 = param_4;
    (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
    uVar5 = FUN_023aa3cc(0);
    if (lVar4 != 0) {
      uVar5 = uVar5 & 0xffffffff;
      fVar17 = (float)UnityEngine_Sprite__get_border_3bc3cc0(lVar4,0);
      if ((*(char *)((long)param_5 + 0x112) != '\0') &&
         (0.0 < fVar22 * fVar22 + fVar23 * fVar23 + fVar17 * fVar17 + fVar20 * fVar20)) {
        lVar13 = tpidr_el0;
        lStack_a8 = *(long *)(lVar13 + 0x28);
        fVar20 = param_3;
        fVar23 = param_4;
        uStack_b0._4_4_ = param_2;
        if ((bRam0000000004f4b759 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049c2ef8);
          FUN_021f03f8(PTR_DAT_049c2f00);
          FUN_021f03f8(PTR_DAT_049c2f08);
          bRam0000000004f4b759 = 1;
        }
        uVar18 = UnityEngine_Sprites_DataUtility__GetOuterUV_3c4603c(lVar4,0);
        uStack_b0 = CONCAT44(uStack_b0._4_4_,param_2);
        uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar20);
        uStack_b8._4_4_ = fVar23;
        uVar19 = UnityEngine_Sprites_DataUtility__GetInnerUV_3c46028(lVar4,0);
        puVar1 = PTR_DAT_049c2f00;
        uStack_b8 = CONCAT44(uStack_b8._4_4_,param_2);
        fStack_bc = fVar23;
        if (lVar4 == 0) {
          if (*(long *)(lVar13 + 0x28) == lStack_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        }
        else {
          fVar22 = fVar20;
          fVar17 = (float)UnityEngine_Sprite__get_border_3bc3cc0(lVar4,0);
          fVar24 = *(float *)(param_5 + 0x21);
          param_2 = param_2 / fVar24;
          fVar22 = fVar22 / fVar24;
          fVar23 = fVar23 / fVar24;
          afStack_f0[2] = param_4 * 0.5;
          uStack_e0._4_4_ = param_4;
          fVar17 = (float)MirroredImage__ClampBorder_241cfd4(fVar17 / fVar24);
          pfVar7 = afStack_110;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,param_2);
          lVar12 = *(long *)puVar1;
          afStack_110[0] = 0.0;
          afStack_110[1] = 0.0;
          afStack_110[2] = 0.0;
          afStack_110[3] = 0.0;
          afStack_110[6] = 0.0;
          lVar4 = *(long *)(lVar12 + 0x20);
          afStack_110[4] = 0.0;
          afStack_110[5] = 0.0;
          afStack_f0[3] = fVar23;
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02229718();
          }
          uStack_d0 = lVar13;
          uVar6 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40));
          puVar2 = PTR_DAT_049b3bd0;
          if ((uVar6 & 1) != 0) {
            lVar4 = *(long *)(lVar12 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02229718();
            }
            uVar14 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              FUN_021f0574(*(long *)(puVar2 + 0xe0));
            }
            uVar14 = System_Type__GetTypeFromHandle_310ebfc(uVar14,0);
            System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar14,0);
          }
          puVar8 = (uint *)auStack_130;
          lVar13 = *(long *)puVar1;
          auStack_130._0_8_ = 0;
          auStack_130._8_8_ = 0;
          uStack_118 = 0;
          lVar4 = *(long *)(lVar13 + 0x20);
          uStack_120 = 0;
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02229718();
          }
          uVar6 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40));
          if ((uVar6 & 1) != 0) {
            lVar4 = *(long *)(lVar13 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02229718();
            }
            uVar14 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              FUN_021f0574(*(long *)(puVar2 + 0xe0));
            }
            uVar14 = System_Type__GetTypeFromHandle_310ebfc(uVar14,0);
            System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar14,0);
          }
          puVar3 = PTR_DAT_049c2ef8;
          uStack_d8 = param_6;
          if ((char)param_5[0x22] == '\0') {
            lVar13 = *(long *)PTR_DAT_049c2ef8;
            lVar4 = *(long *)(lVar13 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02229718();
            }
            pfVar7 = (float *)System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                                        (pfVar7,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
            lVar4 = *(long *)(lVar13 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              FUN_02229718(lVar4);
            }
            lVar13 = *(long *)puVar3;
            lVar4 = *(long *)(lVar13 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02229718();
            }
            puVar8 = (uint *)System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                                       (puVar8,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
            lVar4 = *(long *)(lVar13 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              FUN_02229718(lVar4);
            }
            uVar14 = 4;
            *pfVar7 = fVar16;
            pfVar7[1] = fVar16 + fVar17;
            pfVar7[2] = (param_3 + fVar16) - fVar22;
            pfVar7[3] = param_3 + fVar16;
            *puVar8 = uVar18;
            puVar8[1] = uVar19;
            uVar19 = (uint)uStack_c8;
          }
          else {
            afStack_110[3] = fVar16 + param_3 * 0.5;
            auStack_130._4_4_ = uVar19;
            auStack_130._0_4_ = uVar18;
            afStack_110[6] = param_3 + fVar16;
            uStack_120 = CONCAT44(uVar19,fVar20);
            uVar14 = 7;
            afStack_110[1] = fVar16 + fVar17;
            afStack_110[0] = fVar16;
            afStack_110[2] = afStack_110[3] - fVar22;
            afStack_110[5] = afStack_110[6] - fVar17;
            afStack_110[4] = afStack_110[3] + fVar22;
            uVar19 = (uint)uStack_c8;
            uStack_118 = uVar18;
          }
          puVar8[2] = (uint)fVar20;
          puVar8[3] = uVar19;
          pfVar9 = afStack_150;
          lVar13 = *(long *)puVar1;
          fVar20 = uStack_e0._4_4_;
          afStack_150[0] = 0.0;
          afStack_150[1] = 0.0;
          afStack_150[2] = 0.0;
          afStack_150[3] = 0.0;
          afStack_150[6] = 0.0;
          lVar4 = *(long *)(lVar13 + 0x20);
          afStack_150[4] = 0.0;
          afStack_150[5] = 0.0;
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02229718();
          }
          uStack_c8 = uVar5;
          uVar5 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40));
          if ((uVar5 & 1) != 0) {
            lVar4 = *(long *)(lVar13 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02229718();
            }
            uVar15 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              FUN_021f0574(*(long *)(puVar2 + 0xe0));
            }
            uVar15 = System_Type__GetTypeFromHandle_310ebfc(uVar15,0);
            System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar15,0);
          }
          puVar10 = &uStack_170;
          lVar13 = *(long *)puVar1;
          uStack_170 = 0;
          uStack_168 = 0;
          uStack_158 = 0;
          lVar4 = *(long *)(lVar13 + 0x20);
          uStack_160 = 0;
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02229718();
          }
          uVar5 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40));
          if ((uVar5 & 1) != 0) {
            lVar4 = *(long *)(lVar13 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02229718();
            }
            uVar15 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
            if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
              FUN_021f0574(*(long *)(puVar2 + 0xe0));
            }
            uVar15 = System_Type__GetTypeFromHandle_310ebfc(uVar15,0);
            System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar15,0);
          }
          puVar2 = PTR_DAT_049c2f08;
          puVar1 = PTR_DAT_049c2ef8;
          if (*(char *)((long)param_5 + 0x111) == '\0') {
            lVar13 = *(long *)PTR_DAT_049c2ef8;
            lVar4 = *(long *)(lVar13 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02229718();
            }
            pfVar9 = (float *)System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                                        (pfVar9,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
            lVar4 = *(long *)(lVar13 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              FUN_02229718(lVar4);
            }
            lVar13 = *(long *)puVar1;
            lVar4 = *(long *)(lVar13 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02229718();
            }
            puVar10 = (undefined8 *)
                      System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                                (puVar10,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
            lVar4 = *(long *)(lVar13 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              FUN_02229718(lVar4);
            }
            uVar15 = 4;
            fVar20 = fVar20 + uStack_b0._4_4_;
            *pfVar9 = uStack_b0._4_4_;
            pfVar9[1] = uStack_b0._4_4_ + (float)uStack_e0;
            pfVar9[2] = fVar20 - afStack_f0[3];
            pfVar9[3] = fVar20;
            *(undefined4 *)puVar10 = (undefined4)uStack_b0;
            *(undefined4 *)((long)puVar10 + 4) = (undefined4)uStack_b8;
            *(float *)(puVar10 + 1) = fStack_bc;
            *(float *)((long)puVar10 + 0xc) = uStack_b8._4_4_;
          }
          else {
            uVar15 = 7;
            afStack_150[6] = fVar20 + uStack_b0._4_4_;
            uStack_158 = (undefined4)uStack_b0;
            afStack_150[3] = uStack_b0._4_4_ + afStack_f0[2];
            uStack_170 = CONCAT44((undefined4)uStack_b8,(undefined4)uStack_b0);
            afStack_150[1] = uStack_b0._4_4_ + (float)uStack_e0;
            afStack_150[0] = uStack_b0._4_4_;
            afStack_150[2] = afStack_150[3] - afStack_f0[3];
            afStack_150[5] = afStack_150[6] - (float)uStack_e0;
            afStack_150[4] = afStack_150[3] + afStack_f0[3];
            uStack_168 = CONCAT44(uStack_b8._4_4_,fStack_bc);
            uStack_160 = CONCAT44((undefined4)uStack_b8,fStack_bc);
          }
          auVar25 = System_Span___Il2CppFullySharedGenericType___op_Implicit_2999244
                              (pfVar7,uVar14,*(undefined8 *)puVar2);
          auVar26 = System_Span___Il2CppFullySharedGenericType___op_Implicit_2999244
                              (pfVar9,uVar15,*(undefined8 *)puVar2);
          auVar27 = System_Span___Il2CppFullySharedGenericType___op_Implicit_2999244
                              (puVar8,uVar14,*(undefined8 *)puVar2);
          auVar28 = System_Span___Il2CppFullySharedGenericType___op_Implicit_2999244
                              (puVar10,uVar15,*(undefined8 *)puVar2);
          MirroredImage__GenerateGrid_241cc94
                    (uStack_d8,auVar25._0_8_,auVar25._8_8_,auVar26._0_8_,auVar26._8_8_,auVar27._0_8_
                     ,auVar27._8_8_,in_x7,auVar28,uStack_c8 & 0xffffffff,
                     *(char *)((long)param_5 + 0xed) == '\0');
          if (*(long *)(uStack_d0 + 0x28) == lStack_a8) {
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (*(char *)((long)param_5 + 0xec) != '\0') {
        fVar16 = (float)MirroredImage__FitToAspect_241c67c(fVar16,param_5,lVar4);
      }
      puVar1 = PTR_DAT_049c2f00;
      lVar13 = tpidr_el0;
      lStack_a8 = *(long *)(lVar13 + 0x28);
      fVar20 = param_2;
      fVar23 = param_3;
      fVar22 = param_4;
      uStack_b8 = uVar5;
      uStack_b0 = param_6;
      if ((bRam0000000004f4b758 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c2ef8);
        FUN_021f03f8(PTR_DAT_049c2f00);
        FUN_021f03f8(PTR_DAT_049c2f08);
        bRam0000000004f4b758 = 1;
      }
      uVar21 = UnityEngine_Sprites_DataUtility__GetOuterUV_3c4603c(lVar4,0);
      pfVar7 = (float *)&uStack_d0;
      lVar12 = *(long *)puVar1;
      uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
      uStack_d0 = 0;
      lVar4 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02229718();
      }
      uVar5 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40));
      puVar2 = PTR_DAT_049b3bd0;
      if ((uVar5 & 1) != 0) {
        lVar4 = *(long *)(lVar12 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02229718();
        }
        uVar14 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          FUN_021f0574(*(long *)(puVar2 + 0xe0));
        }
        uVar14 = System_Type__GetTypeFromHandle_310ebfc(uVar14,0);
        System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar14,0);
      }
      puVar10 = &uStack_e0;
      lVar12 = *(long *)puVar1;
      uStack_d8 = (ulong)uStack_d8._4_4_ << 0x20;
      uStack_e0 = 0;
      lVar4 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02229718();
      }
      uVar5 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40));
      if ((uVar5 & 1) != 0) {
        lVar4 = *(long *)(lVar12 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02229718();
        }
        uVar14 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          FUN_021f0574(*(long *)(puVar2 + 0xe0));
        }
        uVar14 = System_Type__GetTypeFromHandle_310ebfc(uVar14,0);
        System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar14,0);
      }
      puVar3 = PTR_DAT_049c2ef8;
      if ((char)param_5[0x22] == '\0') {
        lVar12 = *(long *)PTR_DAT_049c2ef8;
        lVar4 = *(long *)(lVar12 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02229718();
        }
        pfVar7 = (float *)System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                                    (pfVar7,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
        lVar4 = *(long *)(lVar12 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          FUN_02229718(lVar4);
        }
        lVar12 = *(long *)puVar3;
        lVar4 = *(long *)(lVar12 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02229718();
        }
        puVar10 = (undefined8 *)
                  System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                            (puVar10,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
        lVar4 = *(long *)(lVar12 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          FUN_02229718(lVar4);
        }
        uVar14 = 2;
        *pfVar7 = fVar16;
        pfVar7[1] = param_3 + fVar16;
        *(undefined4 *)puVar10 = uVar21;
        *(float *)((long)puVar10 + 4) = fVar23;
      }
      else {
        uStack_e0 = CONCAT44(fVar23,uVar21);
        uVar14 = 3;
        uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar21);
        uStack_d0 = CONCAT44(fVar16 + param_3 * 0.5,fVar16);
        uStack_c8 = CONCAT44(uStack_c8._4_4_,param_3 + fVar16);
      }
      pfVar9 = afStack_f0;
      lVar12 = *(long *)puVar1;
      afStack_f0[2] = 0.0;
      afStack_f0[0] = 0.0;
      afStack_f0[1] = 0.0;
      lVar4 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02229718();
      }
      uVar5 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40));
      if ((uVar5 & 1) != 0) {
        lVar4 = *(long *)(lVar12 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02229718();
        }
        uVar15 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          FUN_021f0574(*(long *)(puVar2 + 0xe0));
        }
        uVar15 = System_Type__GetTypeFromHandle_310ebfc(uVar15,0);
        System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar15,0);
      }
      pfVar11 = afStack_110 + 4;
      lVar12 = *(long *)puVar1;
      afStack_110[6] = 0.0;
      afStack_110[4] = 0.0;
      afStack_110[5] = 0.0;
      lVar4 = *(long *)(lVar12 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02229718();
      }
      uVar5 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40));
      if ((uVar5 & 1) != 0) {
        lVar4 = *(long *)(lVar12 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02229718();
        }
        uVar15 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          FUN_021f0574(*(long *)(puVar2 + 0xe0));
        }
        uVar15 = System_Type__GetTypeFromHandle_310ebfc(uVar15,0);
        System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar15,0);
      }
      puVar2 = PTR_DAT_049c2f08;
      puVar1 = PTR_DAT_049c2ef8;
      if (*(char *)((long)param_5 + 0x111) == '\0') {
        lVar12 = *(long *)PTR_DAT_049c2ef8;
        lVar4 = *(long *)(lVar12 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02229718();
        }
        pfVar9 = (float *)System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                                    (pfVar9,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
        lVar4 = *(long *)(lVar12 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          FUN_02229718(lVar4);
        }
        lVar12 = *(long *)puVar1;
        lVar4 = *(long *)(lVar12 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02229718();
        }
        pfVar11 = (float *)System_Runtime_CompilerServices_Unsafe__Add___Il2CppFullySharedGenericType__2724938
                                     (pfVar11,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
        lVar4 = *(long *)(lVar12 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          FUN_02229718(lVar4);
        }
        uVar15 = 2;
        *pfVar9 = param_2;
        pfVar9[1] = param_4 + param_2;
        *pfVar11 = fVar20;
        pfVar11[1] = fVar22;
      }
      else {
        afStack_f0[2] = param_4 + param_2;
        afStack_110[5] = fVar22;
        afStack_110[4] = fVar20;
        uVar15 = 3;
        afStack_f0[1] = param_2 + param_4 * 0.5;
        afStack_f0[0] = param_2;
        afStack_110[6] = fVar20;
      }
      auVar25 = System_Span___Il2CppFullySharedGenericType___op_Implicit_2999244
                          (pfVar7,uVar14,*(undefined8 *)puVar2);
      auVar26 = System_Span___Il2CppFullySharedGenericType___op_Implicit_2999244
                          (pfVar9,uVar15,*(undefined8 *)puVar2);
      auVar27 = System_Span___Il2CppFullySharedGenericType___op_Implicit_2999244
                          (puVar10,uVar14,*(undefined8 *)puVar2);
      auStack_130 = System_Span___Il2CppFullySharedGenericType___op_Implicit_2999244
                              (pfVar11,uVar15,*(undefined8 *)puVar2);
      uStack_120 = uStack_b8 & 0xffffffff;
      uStack_118 = uStack_118 & 0xffffff00;
      MirroredImage__GenerateGrid_241cc94
                (uStack_b0,auVar25._0_8_,auVar25._8_8_,auVar26._0_8_,auVar26._8_8_,auVar27._0_8_,
                 auVar27._8_8_);
      if (*(long *)(lVar13 + 0x28) == lStack_a8) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

