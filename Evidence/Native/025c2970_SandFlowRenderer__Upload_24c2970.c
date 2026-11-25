/* IL2CPP: SandFlowRenderer$$Upload
void SandFlowRenderer__Upload (SandFlowRenderer_o* __this, SandFlowPacket_array* packets, int32_t count, float time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025c306c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$Upload
   void SandFlowRenderer__Upload (SandFlowRenderer_o* __this, SandFlowPacket_array* packets, int32_t
   count, float time, const MethodInfo* method); */

void SandFlowRenderer__Upload_24c2970(undefined4 param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar19;
  float fVar20;
  ulong uVar18;
  float fVar21;
  float fVar22;
  ulong uVar23;
  float fVar24;
  ulong uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  puVar7 = PTR_DAT_049c6e10;
  if ((bRam0000000004f4bbd4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbd4 = 1;
  }
  lVar10 = *(long *)puVar7;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
    lVar10 = *(long *)puVar7;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0xa8);
  if (lVar10 != 0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__BeginSample_3bc0d70(lVar10,0);
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar3 = *(int *)(param_3 + 0x18);
  lVar11 = *(long *)puVar7;
  *(undefined4 *)(param_2 + 0x140) = param_1;
  if (param_4 <= iVar3) {
    iVar3 = param_4;
  }
  if (0x3ff < iVar3) {
    iVar3 = 0x400;
  }
  iVar4 = *(int *)(lVar11 + 0xe4);
  lVar11 = *(long *)(param_2 + 0x2d8);
  iVar2 = 0;
  if (-1 < param_4) {
    iVar2 = iVar3;
  }
  *(int *)(param_2 + 0x2f8) = iVar2;
  if (iVar4 == 0) {
    FUN_021f0574();
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_MaterialPropertyBlock__SetFloat_3bdbd10
            (param_1,lVar11,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 8),0);
  if (*(long *)(param_2 + 0x2d8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_MaterialPropertyBlock__SetFloat_3bdbd10
            (*(undefined4 *)(param_2 + 800),*(long *)(param_2 + 0x2d8),
             *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xc),0);
  if (*(long *)(param_2 + 0x2d8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar3 = *(int *)(param_2 + 0x324);
  if (iVar3 < 0x21) {
    iVar3 = 0x20;
  }
  UnityEngine_MaterialPropertyBlock__SetInt_3bdbcd4
            (*(long *)(param_2 + 0x2d8),*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10),
             iVar3,0);
  if (cRam0000000004f4a233 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a233 = '\x01';
  }
  puVar6 = PTR_DAT_049bbf90;
  lVar11 = *(long *)PTR_DAT_049bbf90;
  puVar13 = *(undefined8 **)(lVar11 + 0xb8);
  uVar28 = *puVar13;
  uVar27 = *(undefined4 *)(puVar13 + 1);
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    lVar11 = *(long *)puVar6;
    cRam0000000004f4a190 = '\x01';
    puVar13 = *(undefined8 **)(lVar11 + 0xb8);
  }
  uVar17 = *(undefined8 *)((long)puVar13 + 0xc);
  fVar21 = *(float *)((long)puVar13 + 0x14);
  puVar13 = (undefined8 *)(param_2 + 0x2ec);
  *(undefined8 *)(param_2 + 0x2e0) = uVar28;
  *(undefined4 *)(param_2 + 0x2e8) = uVar27;
  *(float *)(param_2 + 0x2f4) = fVar21 * 0.5;
  *puVar13 = CONCAT44((float)((ulong)uVar17 >> 0x20) * 0.5,(float)uVar17 * 0.5);
  puVar6 = PTR_DAT_049bbf90;
  if (*(int *)(param_2 + 0x2f8) == 0) {
    if (*(long *)(param_2 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    SandPileField__Clear_24d3f5c(*(long *)(param_2 + 0xa0),0);
    cVar8 = cRam0000000004f49d59;
    *(undefined1 *)(param_2 + 0xb4) = 1;
    *(undefined4 *)(param_2 + 0x204) = 0xff800000;
    if (cVar8 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8a38);
      cRam0000000004f49d59 = '\x01';
    }
    puVar6 = PTR_DAT_049b8a38;
    lVar11 = *(long *)(param_2 + 0x2d8);
    uVar28 = **(undefined8 **)(*(long *)PTR_DAT_049b8a38 + 0xb8);
    *(undefined8 *)(param_2 + 0x130) = (*(undefined8 **)(*(long *)PTR_DAT_049b8a38 + 0xb8))[1];
    *(undefined8 *)(param_2 + 0x128) = uVar28;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      FUN_021f0574();
      uVar27 = **(undefined4 **)(*(long *)puVar7 + 0xb8);
      if (cRam0000000004f49d59 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8a38);
        cRam0000000004f49d59 = '\x01';
      }
    }
    else {
      uVar27 = **(undefined4 **)(*(long *)puVar7 + 0xb8);
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    puVar12 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
    UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
              (*puVar12,puVar12[1],puVar12[2],puVar12[3],lVar11,uVar27,0);
    *(undefined4 *)(param_2 + 0xb0) = 0;
  }
  else {
    if (*(int *)(param_3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    uVar28 = *(undefined8 *)(param_3 + 0x40);
    fVar21 = *(float *)(param_3 + 0x48);
    if (cRam0000000004f4a233 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      lVar11 = *(long *)puVar6;
      cRam0000000004f4a233 = '\x01';
    }
    fVar31 = _UNK_013aa94c;
    uVar17 = **(undefined8 **)(lVar11 + 0xb8);
    fVar22 = *(float *)(*(undefined8 **)(lVar11 + 0xb8) + 1);
    *(undefined8 *)(param_2 + 0x2e0) = uVar28;
    fVar16 = (float)uVar17 * 0.5;
    fVar19 = (float)((ulong)uVar17 >> 0x20) * 0.5;
    fVar22 = fVar22 * 0.5;
    *(float *)(param_2 + 0x2e8) = fVar21;
    *puVar13 = CONCAT44(fVar19,fVar16);
    *(float *)(param_2 + 0x2f4) = fVar22;
    if (fVar31 < *(float *)(param_2 + 0x318)) {
      fVar32 = (float)uVar28 - fVar16;
      fVar20 = (float)((ulong)uVar28 >> 0x20);
      fVar33 = fVar20 - fVar19;
      fVar24 = *(float *)(param_2 + 0x308) - *(float *)(param_2 + 0x314);
      fVar16 = (float)uVar28 + fVar16;
      fVar20 = fVar20 + fVar19;
      uVar18 = CONCAT44(fVar20,fVar16);
      fVar29 = (float)*(undefined8 *)(param_2 + 0x300);
      fVar31 = (float)*(undefined8 *)(param_2 + 0x30c);
      fVar34 = fVar29 - fVar31;
      fVar30 = (float)((ulong)*(undefined8 *)(param_2 + 0x300) >> 0x20);
      fVar26 = (float)((ulong)*(undefined8 *)(param_2 + 0x30c) >> 0x20);
      fVar35 = fVar30 - fVar26;
      fVar19 = *(float *)(param_2 + 0x308) + *(float *)(param_2 + 0x314);
      fVar29 = fVar29 + fVar31;
      fVar30 = fVar30 + fVar26;
      uVar14 = CONCAT44(fVar30,fVar29);
      fVar31 = fVar21 - fVar22;
      if (fVar24 <= fVar21 - fVar22) {
        fVar31 = fVar24;
      }
      uVar18 = uVar18 ^ (uVar18 ^ CONCAT44(fVar35,fVar34)) &
                        ~CONCAT44(-(uint)(fVar35 < fVar20),-(uint)(fVar34 < fVar16));
      fVar16 = fVar21 + fVar22;
      if (fVar21 + fVar22 <= fVar24) {
        fVar16 = fVar24;
      }
      uVar25 = CONCAT44(fVar35,fVar34) ^
               (CONCAT44(fVar35,fVar34) ^ CONCAT44(fVar33,fVar32)) &
               CONCAT44(-(uint)(fVar33 < fVar35),-(uint)(fVar32 < fVar34));
      fVar24 = (float)uVar25;
      fVar26 = (float)(uVar25 >> 0x20);
      fVar16 = (fVar16 - fVar31) * 0.5;
      fVar22 = ((float)uVar18 - fVar24) * 0.5;
      fVar20 = ((float)(uVar18 >> 0x20) - fVar26) * 0.5;
      fVar24 = fVar24 + fVar22;
      fVar26 = fVar26 + fVar20;
      fVar21 = (fVar31 + fVar16) - fVar16;
      fVar16 = fVar16 + fVar31 + fVar16;
      fVar31 = fVar24 - fVar22;
      fVar32 = fVar26 - fVar20;
      fVar22 = fVar22 + fVar24;
      fVar20 = fVar20 + fVar26;
      uVar18 = CONCAT44(fVar20,fVar22);
      if (fVar19 <= fVar21) {
        fVar21 = fVar19;
      }
      uVar25 = uVar14 ^ (uVar14 ^ CONCAT44(fVar32,fVar31)) &
                        CONCAT44(-(uint)(fVar32 < fVar30),-(uint)(fVar31 < fVar29));
      uVar18 = uVar18 ^ (uVar18 ^ uVar14) &
                        ~CONCAT44(-(uint)(fVar30 < fVar20),-(uint)(fVar29 < fVar22));
      if (fVar16 <= fVar19) {
        fVar16 = fVar19;
      }
      fVar22 = (float)uVar25;
      fVar20 = (float)(uVar25 >> 0x20);
      fVar31 = ((float)uVar18 - fVar22) * 0.5;
      fVar19 = ((float)(uVar18 >> 0x20) - fVar20) * 0.5;
      fVar16 = (fVar16 - fVar21) * 0.5;
      *(float *)(param_2 + 0x2f4) = fVar16;
      *puVar13 = CONCAT44(fVar19,fVar31);
      *(ulong *)(param_2 + 0x2e0) = CONCAT44(fVar20 + fVar19,fVar22 + fVar31);
      *(float *)(param_2 + 0x2e8) = fVar21 + fVar16;
    }
    uVar5 = *(uint *)(param_2 + 0x2f8);
    uVar18 = (ulong)uVar5;
    bVar9 = *(uint *)(param_2 + 0xb0) != uVar5;
    if (0 < (int)uVar5) {
      lVar11 = 0;
      uVar14 = 0;
      do {
        if ((bVar9 & 1) == 0) {
          lVar15 = *(long *)(param_2 + 0xa8);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar18 = (ulong)*(uint *)(param_3 + 0x18);
          if ((uVar18 <= uVar14) || (*(uint *)(lVar15 + 0x18) <= uVar14)) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          bVar9 = SandFlowRenderer__Same_24c27fc(param_3 + lVar11 + 0x20,lVar15 + lVar11 + 0x20);
          bVar9 = bVar9 ^ 1;
        }
        else {
          uVar18 = (ulong)*(uint *)(param_3 + 0x18);
          bVar9 = 1;
        }
        if (uVar18 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar15 = param_3 + lVar11;
        fVar21 = *(float *)(param_2 + 0x2e8) - *(float *)(param_2 + 0x2f4);
        fVar31 = *(float *)(param_2 + 0x2e8) + *(float *)(param_2 + 0x2f4);
        uVar18 = *(ulong *)(lVar15 + 0x40);
        fVar19 = (float)*(undefined8 *)(param_2 + 0x2e0);
        fVar16 = (float)*puVar13;
        fVar24 = fVar19 - fVar16;
        fVar22 = (float)((ulong)*(undefined8 *)(param_2 + 0x2e0) >> 0x20);
        fVar20 = (float)((ulong)*puVar13 >> 0x20);
        fVar29 = fVar22 - fVar20;
        uVar25 = CONCAT44(fVar29,fVar24);
        fVar19 = fVar19 + fVar16;
        fVar22 = fVar22 + fVar20;
        fVar20 = *(float *)(lVar15 + 0x48);
        fVar16 = (float)(uVar18 >> 0x20);
        if (fVar20 <= fVar21) {
          fVar21 = fVar20;
        }
        uVar25 = uVar25 ^ (uVar25 ^ uVar18) &
                          ~CONCAT44(-(uint)(fVar29 < fVar16),-(uint)(fVar24 < (float)uVar18));
        uVar18 = uVar18 ^ (uVar18 ^ CONCAT44(fVar22,fVar19)) &
                          CONCAT44(-(uint)(fVar16 < fVar22),-(uint)((float)uVar18 < fVar19));
        if (fVar31 <= fVar20) {
          fVar31 = fVar20;
        }
        fVar22 = (float)uVar25;
        fVar20 = (float)(uVar25 >> 0x20);
        fVar16 = ((float)uVar18 - fVar22) * 0.5;
        fVar19 = ((float)(uVar18 >> 0x20) - fVar20) * 0.5;
        fVar31 = (fVar31 - fVar21) * 0.5;
        fVar22 = fVar22 + fVar16;
        fVar20 = fVar20 + fVar19;
        *puVar13 = CONCAT44(fVar19,fVar16);
        fVar21 = fVar21 + fVar31;
        *(float *)(param_2 + 0x2f4) = fVar31;
        *(ulong *)(param_2 + 0x2e0) = CONCAT44(fVar20,fVar22);
        *(float *)(param_2 + 0x2e8) = fVar21;
        if (*(uint *)(param_3 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        uVar23 = CONCAT44(fVar20 - fVar19,fVar22 - fVar16);
        uVar18 = CONCAT44(fVar19 + fVar20,fVar16 + fVar22);
        fVar30 = *(float *)(lVar15 + 0x98);
        uVar25 = *(ulong *)(lVar15 + 0x90);
        fVar29 = (float)(uVar25 >> 0x20);
        fVar24 = fVar21 - fVar31;
        if (fVar30 <= fVar21 - fVar31) {
          fVar24 = fVar30;
        }
        uVar23 = uVar23 ^ (uVar23 ^ uVar25) &
                          ~CONCAT44(-(uint)(fVar20 - fVar19 < fVar29),
                                    -(uint)(fVar22 - fVar16 < (float)uVar25));
        uVar18 = uVar18 ^ (uVar18 ^ uVar25) &
                          ~CONCAT44(-(uint)(fVar29 < fVar19 + fVar20),
                                    -(uint)((float)uVar25 < fVar16 + fVar22));
        fVar16 = fVar31 + fVar21;
        if (fVar31 + fVar21 <= fVar30) {
          fVar16 = fVar30;
        }
        fVar22 = (float)uVar23;
        fVar20 = (float)(uVar23 >> 0x20);
        fVar31 = ((float)uVar18 - fVar22) * 0.5;
        fVar19 = ((float)(uVar18 >> 0x20) - fVar20) * 0.5;
        fVar21 = (fVar16 - fVar24) * 0.5;
        fVar22 = fVar22 + fVar31;
        fVar20 = fVar20 + fVar19;
        *puVar13 = CONCAT44(fVar19,fVar31);
        fVar24 = fVar24 + fVar21;
        *(float *)(param_2 + 0x2f4) = fVar21;
        *(ulong *)(param_2 + 0x2e0) = CONCAT44(fVar20,fVar22);
        *(float *)(param_2 + 0x2e8) = fVar24;
        if (*(uint *)(param_3 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        if (*(float *)(lVar15 + 0x4c) < 0.5) {
          lVar1 = param_3 + lVar11;
          uVar23 = CONCAT44(fVar20 - fVar19,fVar22 - fVar31);
          uVar18 = CONCAT44(fVar19 + fVar20,fVar31 + fVar22);
          fVar30 = *(float *)(lVar1 + 0x28);
          uVar25 = *(ulong *)(lVar15 + 0x20);
          fVar29 = (float)(uVar25 >> 0x20);
          fVar16 = fVar24 - fVar21;
          if (fVar30 <= fVar24 - fVar21) {
            fVar16 = fVar30;
          }
          uVar23 = uVar23 ^ (uVar23 ^ uVar25) &
                            ~CONCAT44(-(uint)(fVar20 - fVar19 < fVar29),
                                      -(uint)(fVar22 - fVar31 < (float)uVar25));
          uVar18 = uVar18 ^ (uVar18 ^ uVar25) &
                            ~CONCAT44(-(uint)(fVar29 < fVar19 + fVar20),
                                      -(uint)((float)uVar25 < fVar31 + fVar22));
          fVar31 = fVar21 + fVar24;
          if (fVar21 + fVar24 <= fVar30) {
            fVar31 = fVar30;
          }
          fVar20 = (float)uVar23;
          fVar24 = (float)(uVar23 >> 0x20);
          fVar19 = ((float)uVar18 - fVar20) * 0.5;
          fVar22 = ((float)(uVar18 >> 0x20) - fVar24) * 0.5;
          fVar21 = (fVar31 - fVar16) * 0.5;
          fVar20 = fVar20 + fVar19;
          fVar24 = fVar24 + fVar22;
          *puVar13 = CONCAT44(fVar22,fVar19);
          fVar16 = fVar16 + fVar21;
          *(float *)(param_2 + 0x2f4) = fVar21;
          *(ulong *)(param_2 + 0x2e0) = CONCAT44(fVar24,fVar20);
          *(float *)(param_2 + 0x2e8) = fVar16;
          if (*(uint *)(param_3 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          uVar23 = CONCAT44(fVar24 - fVar22,fVar20 - fVar19);
          uVar18 = CONCAT44(fVar22 + fVar24,fVar19 + fVar20);
          fVar30 = *(float *)(lVar1 + 0x38);
          uVar25 = *(ulong *)(lVar1 + 0x30);
          fVar29 = (float)(uVar25 >> 0x20);
          fVar31 = fVar16 - fVar21;
          if (fVar30 <= fVar16 - fVar21) {
            fVar31 = fVar30;
          }
          uVar23 = uVar23 ^ (uVar23 ^ uVar25) &
                            ~CONCAT44(-(uint)(fVar24 - fVar22 < fVar29),
                                      -(uint)(fVar20 - fVar19 < (float)uVar25));
          uVar18 = uVar18 ^ (uVar18 ^ uVar25) &
                            ~CONCAT44(-(uint)(fVar29 < fVar22 + fVar24),
                                      -(uint)((float)uVar25 < fVar19 + fVar20));
          fVar19 = fVar21 + fVar16;
          if (fVar21 + fVar16 <= fVar30) {
            fVar19 = fVar30;
          }
          fVar20 = (float)uVar23;
          fVar24 = (float)(uVar23 >> 0x20);
          fVar16 = ((float)uVar18 - fVar20) * 0.5;
          fVar22 = ((float)(uVar18 >> 0x20) - fVar24) * 0.5;
          fVar21 = (fVar19 - fVar31) * 0.5;
          *puVar13 = CONCAT44(fVar22,fVar16);
          *(float *)(param_2 + 0x2f4) = fVar21;
          *(ulong *)(param_2 + 0x2e0) = CONCAT44(fVar24 + fVar22,fVar20 + fVar16);
          *(float *)(param_2 + 0x2e8) = fVar31 + fVar21;
        }
        uVar18 = (ulong)*(int *)(param_2 + 0x2f8);
        uVar14 = uVar14 + 1;
        lVar11 = lVar11 + 0x90;
      } while ((long)uVar14 < (long)uVar18);
    }
    if ((bVar9 & 1) != 0) {
      if (*(long *)(param_2 + 0x2b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_ComputeBuffer__SetData_3c26f20(*(long *)(param_2 + 0x2b0),param_3,0,0,uVar18,0);
      System_Array__Copy_3123bf0
                (param_3,*(undefined8 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0x2f8),0);
      *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_2 + 0x2f8);
    }
    if (*(long *)(param_2 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar21 = *(float *)(*(long *)(param_2 + 0xa0) + 0xd4);
    UnityEngine_Bounds__Expand_3bd48e4(fVar21 + fVar21 + 3.0,param_2 + 0x2e0,0);
  }
  if (lVar10 != 0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample_3bc0df8(lVar10,0);
  }
  return;
}

