/* IL2CPP: SandJellyRenderer$$BuildMesh
UnityEngine_Mesh_o* SandJellyRenderer__BuildMesh (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandJellyRenderer$$BuildMesh
   UnityEngine_Mesh_o* SandJellyRenderer__BuildMesh (const MethodInfo* method); */

long SandJellyRenderer__BuildMesh_24d21c0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  uint uVar23;
  float *pfVar24;
  undefined4 *puVar25;
  undefined8 *puVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  ulong uVar30;
  int iVar31;
  ulong uVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  float fStack_cc;
  float afStack_c4 [7];
  float fStack_a8;
  float fStack_a4;
  
  if ((bRam0000000004f4bc24 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bed58);
    FUN_021f03f8(PTR_DAT_049be160);
    FUN_021f03f8(PTR_DAT_049bed68);
    FUN_021f03f8(PTR_DAT_049bed70);
    FUN_021f03f8(PTR_DAT_049be168);
    FUN_021f03f8(PTR_DAT_049bed80);
    FUN_021f03f8(PTR_DAT_049bbe18);
    FUN_021f03f8(PTR_DAT_049c7138);
    FUN_021f03f8(PTR_DAT_049c75b8);
    bRam0000000004f4bc24 = 1;
  }
  puVar15 = PTR_DAT_049bed80;
  puVar14 = PTR_DAT_049bed68;
  puVar13 = PTR_DAT_049be168;
  puVar12 = PTR_DAT_049be160;
  afStack_c4[4] = 0.0;
  afStack_c4[5] = 0.0;
  afStack_c4[2] = 0.0;
  afStack_c4[3] = 0.0;
  afStack_c4[0] = 0.0;
  afStack_c4[1] = 0.0;
  if (*(int *)(*(long *)PTR_DAT_049c7138 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar16 = SandJellyRenderer__Grid_24d32d0(0);
  lVar17 = SandJellyRenderer__Grid_24d32d0(1);
  lVar18 = thunk_FUN_0222ca34(*(undefined8 *)puVar15);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar18,*(undefined8 *)puVar14);
  lVar19 = thunk_FUN_0222ca34(*(undefined8 *)puVar15);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar19,*(undefined8 *)puVar14);
  uVar20 = thunk_FUN_0222ca34(*(undefined8 *)puVar13);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar20,*(undefined8 *)puVar12);
  lVar21 = thunk_FUN_0222ca34(*(undefined8 *)puVar15);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar21,*(undefined8 *)puVar14);
  fVar11 = _UNK_013aa920;
  if (lVar18 != 0) {
    fVar41 = 0.5;
    fVar42 = -0.5;
    iVar29 = 0;
    do {
      iVar2 = iVar29 + 1;
      iVar6 = 0;
      if (iVar2 != 3) {
        iVar6 = iVar29 + 1;
      }
      uVar10 = (iVar29 + 2U) % 3;
      lVar4 = lVar17;
      if (iVar6 != 2) {
        lVar4 = lVar16;
      }
      lVar5 = lVar17;
      if (uVar10 != 2) {
        lVar5 = lVar16;
      }
      if (lVar4 == 0) goto LAB_025d2924;
      uVar23 = 0xffffffff;
      do {
        iVar7 = *(int *)(lVar18 + 0x18);
        if (0 < *(int *)(lVar4 + 0x18)) {
          uVar30 = 0;
          while (lVar5 != 0) {
            if (0 < *(int *)(lVar5 + 0x18)) {
              uVar32 = 0;
              do {
                if (cRam0000000004f4a233 == '\0') {
                  FUN_021f03f8(PTR_DAT_049bbf90);
                  cRam0000000004f4a233 = '\x01';
                }
                pfVar24 = *(float **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
                afStack_c4[2] = *pfVar24;
                afStack_c4[1] = pfVar24[1];
                afStack_c4[0] = pfVar24[2];
                if (iVar29 == 0) {
                  pfVar24 = afStack_c4 + 2;
                }
                else if (iVar29 == 2) {
                  pfVar24 = afStack_c4;
                }
                else {
                  if (iVar29 != 1) goto LAB_025d292c;
                  pfVar24 = afStack_c4 + 1;
                }
                uVar8 = *(uint *)(lVar4 + 0x18);
                *pfVar24 = (float)(int)uVar23;
                if (uVar8 <= uVar30) {
LAB_025d2928:
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a8();
                }
                if (iVar6 == 0) {
                  pfVar24 = afStack_c4 + 2;
                }
                else if (iVar6 == 2) {
                  pfVar24 = afStack_c4;
                }
                else {
                  if (iVar6 != 1) goto LAB_025d292c;
                  pfVar24 = afStack_c4 + 1;
                }
                uVar8 = *(uint *)(lVar5 + 0x18);
                *pfVar24 = *(float *)(lVar4 + uVar30 * 4 + 0x20);
                if (uVar8 <= uVar32) goto LAB_025d2928;
                if (uVar10 == 0) {
                  pfVar24 = afStack_c4 + 2;
                }
                else if (uVar10 == 2) {
                  pfVar24 = afStack_c4;
                }
                else {
                  pfVar24 = afStack_c4 + 1;
                }
                *pfVar24 = *(float *)(lVar5 + 0x20 + uVar32 * 4);
                fVar34 = afStack_c4[2];
                fVar35 = afStack_c4[1];
                fVar36 = afStack_c4[0];
                fVar37 = fVar41;
                if (afStack_c4[2] <= 0.5) {
                  fVar37 = afStack_c4[2];
                }
                fVar38 = fVar42;
                if (-0.5 <= afStack_c4[2]) {
                  fVar38 = fVar37;
                }
                fVar37 = fVar41;
                if (afStack_c4[1] <= 0.5) {
                  fVar37 = afStack_c4[1];
                }
                fVar40 = fVar42;
                if (-0.5 <= afStack_c4[1]) {
                  fVar40 = fVar37;
                }
                fVar37 = fVar41;
                if (afStack_c4[0] <= 0.5) {
                  fVar37 = afStack_c4[0];
                }
                fVar43 = fVar42;
                if (-0.5 <= afStack_c4[0]) {
                  fVar43 = fVar37;
                }
                if (cRam0000000004f4a55c == '\0') {
                  FUN_021f03f8(PTR_DAT_049b8758);
                  cRam0000000004f4a55c = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                fVar34 = fVar34 - fVar38;
                fVar35 = fVar35 - fVar40;
                fVar36 = fVar36 - fVar43;
                fVar37 = SQRT(fVar36 * fVar36 + fVar34 * fVar34 + fVar35 * fVar35);
                if (fVar37 <= fVar11) {
                  if (cRam0000000004f4a233 == '\0') {
                    FUN_021f03f8(PTR_DAT_049bbf90);
                    cRam0000000004f4a233 = '\x01';
                  }
                  pfVar24 = *(float **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
                  fVar34 = *pfVar24;
                  fVar35 = pfVar24[1];
                  fVar36 = pfVar24[2];
                }
                else {
                  fVar34 = fVar34 / fVar37;
                  fVar35 = fVar35 / fVar37;
                  fVar36 = fVar36 / fVar37;
                }
                puVar12 = PTR_DAT_049bed58;
                afStack_c4[6] = fVar38 + fVar38;
                fStack_a8 = fVar40 + fVar40;
                fStack_a4 = fVar43 + fVar43;
                FUN_02333498(lVar18,afStack_c4 + 6,*(undefined8 *)PTR_DAT_049bed58);
                if ((lVar19 == 0) ||
                   (afStack_c4[6] = fVar34, fStack_a8 = fVar35, fStack_a4 = fVar36,
                   FUN_02333498(lVar19,afStack_c4 + 6,*(undefined8 *)puVar12), lVar21 == 0))
                goto LAB_025d2924;
                afStack_c4[6] = fVar38 + fVar34 * 0.5;
                fStack_a8 = fVar40 + fVar35 * 0.5;
                fStack_a4 = fVar43 + fVar36 * 0.5;
                FUN_02333498(lVar21,afStack_c4 + 6,*(undefined8 *)puVar12);
                uVar32 = uVar32 + 1;
              } while ((long)uVar32 < (long)*(int *)(lVar5 + 0x18));
            }
            uVar30 = uVar30 + 1;
            if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar30) goto LAB_025d2658;
          }
          goto LAB_025d2924;
        }
LAB_025d2658:
        puVar12 = PTR_DAT_049bbf90;
        if (cRam0000000004f4a233 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a233 = '\x01';
        }
        puVar25 = *(undefined4 **)(*(long *)puVar12 + 0xb8);
        afStack_c4[5] = (float)*puVar25;
        afStack_c4[4] = (float)puVar25[1];
        afStack_c4[3] = (float)puVar25[2];
        if (iVar29 == 0) {
          pfVar24 = afStack_c4 + 5;
        }
        else if (iVar29 == 2) {
          pfVar24 = afStack_c4 + 3;
        }
        else {
          if (iVar29 != 1) {
LAB_025d292c:
            thunk_FUN_02256840(PTR_DAT_049bc690);
            uVar20 = thunk_FUN_0222ca34();
            uVar22 = thunk_FUN_02256840(PTR_DAT_049c75c0);
            System_IndexOutOfRangeException___ctor_30f97dc(uVar20,uVar22,0);
            uVar22 = thunk_FUN_02256840(PTR_DAT_049c75c8);
                    /* WARNING: Subroutine does not return */
            FUN_021f0564(uVar20,uVar22);
          }
          pfVar24 = afStack_c4 + 4;
        }
        iVar28 = *(int *)(lVar4 + 0x18);
        *pfVar24 = (float)(int)uVar23;
        fVar34 = afStack_c4[5];
        fVar35 = afStack_c4[4];
        fVar36 = afStack_c4[3];
        if (0 < iVar28 + -1) {
          if (lVar5 == 0) goto LAB_025d2924;
          iVar28 = 0;
          iVar33 = 1;
          do {
            iVar31 = *(int *)(lVar5 + 0x18);
            if (0 < iVar31 + -1) {
              iVar27 = 0;
              do {
                if (*(int *)(*(long *)PTR_DAT_049c7138 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                iVar3 = iVar7 + iVar27;
                iVar9 = iVar3 + iVar28 * iVar31;
                iVar3 = iVar3 + iVar33 * iVar31;
                SandJellyRenderer__AddTriangle_24d34b0
                          (fVar34,fVar35,fVar36,uVar20,lVar21,iVar9,iVar3,iVar3 + 1);
                SandJellyRenderer__AddTriangle_24d34b0
                          (fVar34,fVar35,fVar36,uVar20,lVar21,iVar9,iVar3 + 1,iVar9 + 1);
                iVar31 = *(int *)(lVar5 + 0x18);
                iVar27 = iVar27 + 1;
              } while (iVar27 < iVar31 + -1);
            }
            iVar28 = iVar28 + 1;
            iVar33 = iVar33 + 1;
          } while (iVar28 < *(int *)(lVar4 + 0x18) + -1);
        }
        bVar1 = 0x7ffffffd < uVar23;
        uVar23 = uVar23 + 2;
      } while (bVar1);
      iVar29 = iVar2;
    } while (iVar2 != 3);
    lVar16 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049bbe18);
    UnityEngine_Mesh___ctor_3befe90(lVar16,0);
    if (lVar16 != 0) {
      UnityEngine_Object__set_name_3c233fc(lVar16,*(undefined8 *)PTR_DAT_049c75b8,0);
      UnityEngine_Object__set_hideFlags_3c2489c(lVar16,0x3d,0);
      UnityEngine_Mesh__SetVertices_3bf2e44(lVar16,lVar18,0);
      UnityEngine_Mesh__SetNormals_3bf2ff8(lVar16,lVar19,0);
      UnityEngine_Mesh__SetTriangles_3bf47d4(lVar16,uVar20,0,0);
      if (cRam0000000004f4a233 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a233 = '\x01';
      }
      puVar12 = PTR_DAT_049bbf90;
      puVar26 = *(undefined8 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      uVar20 = *puVar26;
      uVar39 = *(undefined4 *)(puVar26 + 1);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
        puVar26 = *(undefined8 **)(*(long *)puVar12 + 0xb8);
      }
      fStack_cc = *(float *)((long)puVar26 + 0x14) * 100.0 * 0.5;
      uStack_d4 = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar26 + 0xc) >> 0x20) * 100.0 *
                           0.5,(float)*(undefined8 *)((long)puVar26 + 0xc) * 100.0 * 0.5);
      uStack_e0 = uVar20;
      uStack_d8 = uVar39;
      UnityEngine_Mesh__set_bounds_3bf1ca8(lVar16,&uStack_e0,0);
      return lVar16;
    }
  }
LAB_025d2924:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

