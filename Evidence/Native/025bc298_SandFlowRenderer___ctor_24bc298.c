/* IL2CPP: SandFlowRenderer$$.ctor
void SandFlowRenderer___ctor (SandFlowRenderer_o* __this, UnityEngine_Shader_o* shader, UnityEngine_ComputeShader_o* compute, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$.ctor
   void SandFlowRenderer___ctor (SandFlowRenderer_o* __this, UnityEngine_Shader_o* shader,
   UnityEngine_ComputeShader_o* compute, const MethodInfo* method); */

void SandFlowRenderer___ctor_24bc298(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ushort *puVar19;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000004f4bbb8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ba690);
    FUN_021f03f8(PTR_DAT_049c6e18);
    FUN_021f03f8(PTR_DAT_049c6e20);
    FUN_021f03f8(PTR_DAT_049b4e08);
    FUN_021f03f8(PTR_DAT_049bccd0);
    FUN_021f03f8(PTR_DAT_049b89f8);
    FUN_021f03f8(PTR_DAT_049c6e28);
    FUN_021f03f8(PTR_DAT_049c6e30);
    FUN_021f03f8(PTR_DAT_049c6e10);
    FUN_021f03f8(PTR_DAT_049c6e38);
    FUN_021f03f8(PTR_DAT_049be640);
    FUN_021f03f8(PTR_DAT_049c6e40);
    FUN_021f03f8(PTR_DAT_049bdd68);
    FUN_021f03f8(PTR_DAT_049c6e48);
    FUN_021f03f8(PTR_DAT_049c6e50);
    bRam0000000004f4bbb8 = 1;
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (cRam0000000004f4a55c == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a55c = '\x01';
  }
  puVar10 = PTR_DAT_049c6e38;
  puVar9 = PTR_DAT_049c6e30;
  puVar8 = PTR_DAT_049c6e28;
  puVar7 = PTR_DAT_049be640;
  puVar6 = PTR_DAT_049bdd68;
  puVar5 = PTR_DAT_049ba690;
  puVar4 = PTR_DAT_049b4e08;
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar14 = _UNK_013a8cf8;
  uVar3 = _UNK_013a8cf0;
  uVar13 = _UNK_013a7870;
  uVar12 = *(undefined8 *)puVar10;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined8 *)(param_1 + 100) = uVar14;
  *(undefined8 *)(param_1 + 0x5c) = uVar3;
  *(undefined8 *)(param_1 + 0x6c) = uVar13;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  uVar13 = thunk_FUN_0222ca34(uVar12);
  SandPileField___ctor_24d47c4(uVar13,0);
  *(undefined8 *)(param_1 + 0xa0) = uVar13;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xa0),uVar13);
  uVar13 = FUN_021f04e4(*(undefined8 *)puVar9,0x400);
  *(undefined8 *)(param_1 + 0xa8) = uVar13;
  thunk_FUN_021f190c();
  uVar13 = *(undefined8 *)puVar7;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb4) = 1;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  uVar13 = FUN_021f04e4(uVar13,0x200);
  *(undefined8 *)(param_1 + 0x148) = uVar13;
  thunk_FUN_021f190c(param_1 + 0x148,uVar13);
  uVar13 = FUN_021f04e4(*(undefined8 *)puVar7,0x200);
  *(undefined8 *)(param_1 + 0x150) = uVar13;
  thunk_FUN_021f190c(param_1 + 0x150,uVar13);
  uVar3 = _UNK_013a8fb0;
  uVar13 = _UNK_013a7e48;
  uVar14 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x160) = _UNK_013a8fb8;
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  *(undefined8 *)(param_1 + 0x168) = uVar13;
  uVar13 = FUN_021f04e4(uVar14,0x200);
  *(undefined8 *)(param_1 + 0x170) = uVar13;
  thunk_FUN_021f190c(param_1 + 0x170,uVar13);
  uVar13 = FUN_021f04e4(*(undefined8 *)puVar7,0x200);
  *(undefined8 *)(param_1 + 0x178) = uVar13;
  thunk_FUN_021f190c(param_1 + 0x178,uVar13);
  uVar13 = *(undefined8 *)puVar8;
  *(undefined1 *)(param_1 + 0x1a0) = 1;
  uVar13 = FUN_021f04e4(uVar13,0x400);
  *(undefined8 *)(param_1 + 0x1a8) = uVar13;
  thunk_FUN_021f190c(param_1 + 0x1a8,uVar13);
  uVar13 = FUN_021f04e4(*(undefined8 *)puVar5,0x400);
  *(undefined8 *)(param_1 + 0x1c8) = uVar13;
  thunk_FUN_021f190c(param_1 + 0x1c8,uVar13);
  uVar13 = FUN_021f04e4(*(undefined8 *)puVar9,0x400);
  *(undefined8 *)(param_1 + 0x1f0) = uVar13;
  thunk_FUN_021f190c(param_1 + 0x1f0,uVar13);
  uVar13 = FUN_021f04e4(*(undefined8 *)puVar4,0x400);
  *(undefined8 *)(param_1 + 0x1f8) = uVar13;
  thunk_FUN_021f190c(param_1 + 0x1f8,uVar13);
  uVar13 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x200) = 0xff80000000000001;
  *(undefined4 *)(param_1 + 0x214) = 0xff800000;
  *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
  uVar13 = FUN_021f04e4(uVar13,0x100);
  *(undefined8 *)(param_1 + 0x278) = uVar13;
  thunk_FUN_021f190c(param_1 + 0x278,uVar13);
  uVar13 = FUN_021f04e4(*(undefined8 *)puVar5,0x100);
  *(undefined8 *)(param_1 + 0x280) = uVar13;
  thunk_FUN_021f190c(param_1 + 0x280,uVar13);
  uVar13 = FUN_021f04e4(*(undefined8 *)puVar5,0x100);
  *(undefined8 *)(param_1 + 0x288) = uVar13;
  thunk_FUN_021f190c(param_1 + 0x288,uVar13);
  uVar13 = FUN_021f04e4(*(undefined8 *)puVar6,0x400);
  *(undefined8 *)(param_1 + 0x2c8) = uVar13;
  thunk_FUN_021f190c(param_1 + 0x2c8,uVar13);
  uVar13 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049bccd0);
  UnityEngine_MaterialPropertyBlock___ctor_3bdbb78(uVar13,0);
  plVar1 = (long *)(param_1 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2d8) = uVar13;
  thunk_FUN_021f190c(plVar1,uVar13);
  *(undefined4 *)(param_1 + 0x330) = 0x3f400000;
  *(undefined8 *)(param_1 + 0x324) = 0x3f4ccccd00000280;
  System_Object___ctor_3142338(param_1,0);
  *(long *)(param_1 + 0xb8) = param_3;
  thunk_FUN_021f190c((long *)(param_1 + 0xb8),param_3);
  puVar4 = PTR_DAT_049b89f8;
  if (param_3 != 0) {
    uVar11 = UnityEngine_ComputeShader__FindKernel_3c27364
                       (param_3,*(undefined8 *)PTR_DAT_049c6e48,0);
    uVar13 = *(undefined8 *)puVar4;
    *(undefined4 *)(param_1 + 0xc0) = uVar11;
    lVar15 = thunk_FUN_0222ca34(uVar13);
    UnityEngine_Material___ctor_3be5d2c(lVar15,param_2,0);
    puVar5 = PTR_DAT_049c6e18;
    puVar4 = PTR_DAT_049c6e10;
    if (lVar15 != 0) {
      UnityEngine_Object__set_name_3c233fc(lVar15,*(undefined8 *)PTR_DAT_049c6e50,0);
      UnityEngine_Object__set_hideFlags_3c2489c(lVar15,0x3d,0);
      *(long *)(param_1 + 0x2d0) = lVar15;
      thunk_FUN_021f190c(param_1 + 0x2d0,lVar15);
      uVar13 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
      UnityEngine_ComputeBuffer___ctor_3c26e60(uVar13,0x400,0x90,0x10,0);
      *(undefined8 *)(param_1 + 0x2b0) = uVar13;
      thunk_FUN_021f190c((undefined8 *)(param_1 + 0x2b0),uVar13);
      uVar13 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
      UnityEngine_ComputeBuffer___ctor_3c26e60(uVar13,0x1e00,0x10,0x10,0);
      *(undefined8 *)(param_1 + 0x2b8) = uVar13;
      thunk_FUN_021f190c((undefined8 *)(param_1 + 0x2b8),uVar13);
      lVar15 = *(long *)(param_1 + 0x2d8);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (lVar15 != 0) {
        UnityEngine_MaterialPropertyBlock__SetBuffer_3bdbd9c
                  (lVar15,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 4),
                   *(undefined8 *)(param_1 + 0x2b0),0);
        puVar5 = PTR_DAT_049c6e40;
        if (*plVar1 != 0) {
          UnityEngine_MaterialPropertyBlock__SetBuffer_3bdbd9c
                    (*plVar1,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x14),
                     *(undefined8 *)(param_1 + 0x2b8),0);
          lVar15 = FUN_021f04e4(*(undefined8 *)puVar5,0x1800);
          puVar5 = PTR_DAT_049c6e20;
          if (lVar15 != 0) {
            uVar18 = (ulong)*(uint *)(lVar15 + 0x18);
            uVar16 = 0;
            lVar17 = 0;
            puVar19 = (ushort *)(lVar15 + 0x2a);
            do {
              if (uVar18 <= uVar16) {
LAB_025bc9d0:
                    /* WARNING: Subroutine does not return */
                FUN_021f06a8();
              }
              uVar2 = (ushort)((int)lVar17 << 2);
              puVar19[-5] = uVar2;
              if ((uVar18 <= uVar16 + 1) || (puVar19[-4] = uVar2 | 1, uVar18 <= uVar16 + 2))
              goto LAB_025bc9d0;
              puVar19[-3] = uVar2 | 2;
              if ((uVar18 <= uVar16 + 3) ||
                 ((puVar19[-2] = uVar2, uVar18 <= uVar16 + 4 ||
                  (puVar19[-1] = uVar2 | 2, uVar18 <= uVar16 + 5)))) goto LAB_025bc9d0;
              lVar17 = lVar17 + 1;
              uVar16 = uVar16 + 6;
              *puVar19 = uVar2 | 3;
              puVar19 = puVar19 + 6;
            } while (lVar17 != 0x400);
            uVar13 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
            UnityEngine_GraphicsBuffer___ctor_3beeb90(uVar13,2,*(undefined4 *)(lVar15 + 0x18),2,0);
            *(undefined8 *)(param_1 + 0x2c0) = uVar13;
            thunk_FUN_021f190c(param_1 + 0x2c0,uVar13);
            if (*(long *)(param_1 + 0x2c0) != 0) {
              UnityEngine_GraphicsBuffer__SetData_3beeed8(*(long *)(param_1 + 0x2c0),lVar15,0);
              lVar15 = *plVar1;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                FUN_021f0574();
              }
              if (lVar15 != 0) {
                UnityEngine_MaterialPropertyBlock__SetInt_3bdbcd4
                          (lVar15,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58),0x400,0)
                ;
                uStack_70 = 0;
                uStack_98 = _UNK_013a8818;
                uStack_a0 = _UNK_013a8810;
                uStack_88 = 0;
                uStack_90 = 0;
                uStack_78 = 0;
                uStack_80 = 0;
                SandFlowRenderer__SetPourStyle_24bc9d8(param_1,&uStack_a0);
                SandFlowRenderer__UpdateShading_24bcb60
                          (0x3f800000,_UNK_013aa62c,_UNK_013aa8ac,param_1);
                if (*(long *)(param_1 + 0x2d8) != 0) {
                  UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                            (*(undefined4 *)(param_1 + 0x328),*(undefined4 *)(param_1 + 0x330),
                             *(undefined4 *)(param_1 + 0x32c),0,*(long *)(param_1 + 0x2d8),
                             *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x44),0);
                  lVar15 = *(long *)(param_1 + 0x2d8);
                  uVar11 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
                  if (cRam0000000004f49d59 == '\0') {
                    FUN_021f03f8(PTR_DAT_049b8a38);
                    cRam0000000004f49d59 = '\x01';
                  }
                  if (lVar15 != 0) {
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0(0,uVar11,0);
                    }
                    lVar17 = *(long *)(lVar15 + 0x10);
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c
                                (lVar15,0);
                    }
                    if (pcRam0000000004f56e88 == (code *)0x0) {
                      pcRam0000000004f56e88 = (code *)FUN_021f03bc(&UNK_013b9000);
                    }
                    (*pcRam0000000004f56e88)(lVar17,uVar11,&stack0xffffffffffffffd0);
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
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

