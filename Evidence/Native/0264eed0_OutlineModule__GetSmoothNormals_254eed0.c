/* IL2CPP: OutlineModule$$GetSmoothNormals
System_Collections_Generic_List_Vector3__o* OutlineModule__GetSmoothNormals (OutlineModule_o* __this, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: OutlineModule$$GetSmoothNormals
   System_Collections_Generic_List_Vector3__o* OutlineModule__GetSmoothNormals (OutlineModule_o*
   __this, UnityEngine_Mesh_o* mesh, const MethodInfo* method); */

long OutlineModule__GetSmoothNormals_254eed0(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  undefined8 *puVar16;
  long lVar17;
  int *piVar18;
  undefined4 *puVar19;
  float fVar20;
  undefined4 uStack_84;
  long lStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  if ((bRam0000000004f4c068 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cabe8);
    FUN_021f03f8(PTR_DAT_049cabf0);
                    /* try { // try from 0264ef18 to 0274ef1f has its CatchHandler @ 0264f080 */
    FUN_021f03f8(PTR_DAT_049cabf8);
    FUN_021f03f8(PTR_DAT_049cac00);
                    /* try { // try from 0264ef30 to 0274ef3b has its CatchHandler @ 0264f07c */
    FUN_021f03f8(PTR_DAT_049cac08);
    FUN_021f03f8(PTR_DAT_049cac10);
    FUN_021f03f8(PTR_DAT_049cac18);
                    /* try { // try from 0264ef5c to 0274ef9b has its CatchHandler @ 0264f094 */
    FUN_021f03f8(PTR_DAT_049b4e08);
    FUN_021f03f8(PTR_DAT_049bed58);
    FUN_021f03f8(PTR_DAT_049c58f8);
    FUN_021f03f8(PTR_DAT_049bed80);
    FUN_021f03f8(PTR_DAT_049b8a28);
    bRam0000000004f4c068 = 1;
  }
  lStack_80 = 0;
  uStack_84 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 0264efac to 0274efb7 has its CatchHandler @ 0264f070 */
    uVar8 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x38),param_2,&lStack_80,*(undefined8 *)PTR_DAT_049cabf0)
    ;
    if ((uVar8 & 1) != 0) {
      return lStack_80;
    }
    if (param_2 != 0) {
      uVar5 = UnityEngine_Mesh__get_vertexCount_3bf1994(param_2,0);
      lVar9 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049b4e08,uVar5);
                    /* try { // try from 0264eff8 to 0274f003 has its CatchHandler @ 0264f08c */
      lVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cac18);
                    /* try { // try from 0264f010 to 0274f017 has its CatchHandler @ 0264f090 */
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
                (lVar10,*(undefined8 *)PTR_DAT_049cac00);
                    /* try { // try from 0264f028 to 0274f02f has its CatchHandler @ 0264f078 */
      lVar11 = UnityEngine_Mesh__get_vertices_3bf2764(param_2,0);
                    /* try { // try from 0264f030 to 0274f057 has its CatchHandler @ 0264ee9c */
      uVar6 = UnityEngine_Mesh__get_vertexCount_3bf1994(param_2,0);
      puVar4 = PTR_DAT_049cac08;
      puVar3 = PTR_DAT_049cabf8;
      puVar2 = PTR_DAT_049cabe8;
      if ((int)uVar6 < 1) {
        if (lVar10 == 0) goto LAB_0264f3fc;
      }
      else {
        if (lVar11 == 0) goto LAB_0264f3fc;
                    /* try { // try from 0264f058 to 0274f05b has its CatchHandler @ 0264f088 */
                    /* try { // try from 0264f05c to 0274f05f has its CatchHandler @ 0264f084 */
                    /* try { // try from 0264f060 to 0274f063 has its CatchHandler @ 0264f090 */
                    /* try { // try from 0264f064 to 0274f067 has its CatchHandler @ 0264f074 */
        uVar8 = 0;
                    /* try { // try from 0264f068 to 0274f06b has its CatchHandler @ 0264f078 */
                    /* catch() { ... } // from try @ 0264efc4 with catch @ 0264f06c
                       try { // try from 0264f06c to 0274f0ab has its CatchHandler @ 0264ee9c */
        puVar19 = (undefined4 *)(lVar11 + 0x28);
                    /* catch() { ... } // from try @ 0264efac with catch @ 0264f070 */
        do {
                    /* catch() { ... } // from try @ 0264f064 with catch @ 0264f074 */
                    /* catch() { ... } // from try @ 0264f028 with catch @ 0264f078
                       catch() { ... } // from try @ 0264f068 with catch @ 0264f078 */
                    /* catch() { ... } // from try @ 0264ef30 with catch @ 0264f07c */
          if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_0264f3f8;
                    /* catch() { ... } // from try @ 0264ef18 with catch @ 0264f080 */
          if (lVar10 == 0) goto LAB_0264f3fc;
                    /* catch() { ... } // from try @ 0264f05c with catch @ 0264f084 */
          uStack_70 = *(undefined8 *)(puVar19 + -2);
                    /* catch() { ... } // from try @ 0264f058 with catch @ 0264f088 */
          uStack_68 = *puVar19;
                    /* catch() { ... } // from try @ 0264eff8 with catch @ 0264f08c */
                    /* catch() { ... } // from try @ 0264f010 with catch @ 0264f090
                       catch() { ... } // from try @ 0264f060 with catch @ 0264f090 */
                    /* catch() { ... } // from try @ 0264ef5c with catch @ 0264f094 */
          uVar12 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                             (lVar10,&uStack_70,&uStack_84,*(undefined8 *)puVar3);
          if ((uVar12 & 1) == 0) {
                    /* try { // try from 0264f0ac to 0274f0c3 has its CatchHandler @ 0264f124 */
            uStack_84 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Count_282b138
                                  (lVar10,*(undefined8 *)puVar4);
                    /* try { // try from 0264f0c4 to 0274f113 has its CatchHandler @ 0264ee9c */
            if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_0264f3f8;
            uStack_70 = *(undefined8 *)(puVar19 + -2);
            uStack_68 = *puVar19;
            uStack_74 = uStack_84;
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                      (lVar10,&uStack_70,&uStack_74,*(undefined8 *)puVar2);
          }
          if (lVar9 == 0) goto LAB_0264f3fc;
          if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0264f3f8;
          puVar19 = puVar19 + 3;
          *(undefined4 *)(lVar9 + 0x20 + uVar8 * 4) = uStack_84;
          uVar8 = uVar8 + 1;
                    /* try { // try from 0264f114 to 0274f123 has its CatchHandler @ 0264f124 */
        } while (uVar6 != uVar8);
      }
                    /* catch() { ... } // from try @ 0264f0ac with catch @ 0264f124
                       catch() { ... } // from try @ 0264f114 with catch @ 0264f124 */
                    /* try { // try from 0264f128 to 0274f12b has its CatchHandler @ 0264f134 */
                    /* try { // try from 0264f12c to 0274f137 has its CatchHandler @ 0264ee9c */
      uVar5 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Count_282b138
                        (lVar10,*(undefined8 *)PTR_DAT_049cac08);
                    /* catch() { ... } // from try @ 0264f128 with catch @ 0264f134 */
      lVar10 = UnityEngine_Mesh__get_normals_3bf2810(param_2,0);
      lVar11 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049b8a28,uVar5);
      lVar13 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049b4e08,uVar5);
      iVar7 = UnityEngine_Mesh__get_vertexCount_3bf1994(param_2,0);
      if (iVar7 < 1) {
        if (lVar11 == 0) goto LAB_0264f3fc;
      }
      else {
        if (lVar9 == 0) goto LAB_0264f3fc;
        lVar14 = 0;
        pfVar15 = (float *)(lVar10 + 0x28);
        do {
          uVar6 = (uint)lVar14;
          if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_0264f3f8;
          if (lVar13 == 0) goto LAB_0264f3fc;
          uVar1 = *(uint *)(lVar9 + 0x20 + lVar14 * 4);
          if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_0264f3f8;
          piVar18 = (int *)(lVar13 + (long)(int)uVar1 * 4 + 0x20);
          if (*piVar18 == 0) {
            *piVar18 = 1;
            if (lVar10 == 0) goto LAB_0264f3fc;
            if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0264f3f8;
            if (lVar11 == 0) goto LAB_0264f3fc;
            if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0264f3f8;
            lVar17 = lVar11 + (long)(int)uVar1 * 0xc;
            fVar20 = *pfVar15;
            *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)(pfVar15 + -2);
            *(float *)(lVar17 + 0x28) = fVar20;
          }
          else {
            *piVar18 = *piVar18 + 1;
            if (lVar11 == 0) goto LAB_0264f3fc;
            if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0264f3f8;
            if (lVar10 == 0) goto LAB_0264f3fc;
            if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0264f3f8;
            puVar16 = (undefined8 *)(lVar11 + 0x20 + (long)(int)uVar1 * 0xc);
            fVar20 = *pfVar15;
            *puVar16 = CONCAT44((float)((ulong)*puVar16 >> 0x20) +
                                (float)((ulong)*(undefined8 *)(pfVar15 + -2) >> 0x20),
                                (float)*puVar16 + (float)*(undefined8 *)(pfVar15 + -2));
            *(float *)(puVar16 + 1) = *(float *)(puVar16 + 1) + fVar20;
          }
          lVar14 = lVar14 + 1;
          pfVar15 = pfVar15 + 3;
        } while (iVar7 != (int)lVar14);
      }
      uVar8 = *(ulong *)(lVar11 + 0x18);
      if (0 < (int)uVar8) {
        if (lVar13 == 0) goto LAB_0264f3fc;
        uVar12 = 0;
        pfVar15 = (float *)(lVar11 + 0x28);
        do {
          if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_0264f3f8;
          iVar7 = *(int *)(lVar13 + 0x20 + uVar12 * 4);
          if (iVar7 != 1) {
            if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_0264f3f8;
            fVar20 = (float)iVar7;
            *(ulong *)(pfVar15 + -2) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar15 + -2) >> 0x20) / fVar20,
                          (float)*(undefined8 *)(pfVar15 + -2) / fVar20);
            *pfVar15 = *pfVar15 / fVar20;
          }
          uVar12 = uVar12 + 1;
          pfVar15 = pfVar15 + 3;
        } while ((uVar8 & 0xffffffff) != uVar12);
      }
      uVar5 = UnityEngine_Mesh__get_vertexCount_3bf1994(param_2,0);
      lVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049bed80);
      System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd184
                (lVar10,uVar5,*(undefined8 *)PTR_DAT_049c58f8);
      iVar7 = UnityEngine_Mesh__get_vertexCount_3bf1994(param_2,0);
      puVar2 = PTR_DAT_049bed58;
      if (0 < iVar7) {
        if (lVar9 == 0) goto LAB_0264f3fc;
        lVar13 = 0;
        do {
          if ((*(uint *)(lVar9 + 0x18) <= (uint)lVar13) ||
             (uVar6 = *(uint *)(lVar9 + 0x20 + lVar13 * 4), *(uint *)(lVar11 + 0x18) <= uVar6)) {
LAB_0264f3f8:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          if (lVar10 == 0) goto LAB_0264f3fc;
          lVar14 = lVar11 + (long)(int)uVar6 * 0xc;
          uStack_70 = *(undefined8 *)(lVar14 + 0x20);
          uStack_68 = *(undefined4 *)(lVar14 + 0x28);
          FUN_02333498(lVar10,&uStack_70,*(undefined8 *)puVar2);
          lVar13 = lVar13 + 1;
        } while (iVar7 != (int)lVar13);
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                  (*(long *)(param_1 + 0x38),param_2,lVar10,*(undefined8 *)PTR_DAT_049cac10);
        return lVar10;
      }
    }
  }
LAB_0264f3fc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

