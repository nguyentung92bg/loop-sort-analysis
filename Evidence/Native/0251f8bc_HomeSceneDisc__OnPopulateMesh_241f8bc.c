/* IL2CPP: HomeSceneDisc$$OnPopulateMesh
void HomeSceneDisc__OnPopulateMesh (HomeSceneDisc_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneDisc$$OnPopulateMesh
   void HomeSceneDisc__OnPopulateMesh (HomeSceneDisc_o* __this, UnityEngine_UI_VertexHelper_o* vh,
   const MethodInfo* method); */

void HomeSceneDisc__OnPopulateMesh_241f8bc
               (undefined1 param_1 [16],ulong param_2,undefined8 param_3,ulong param_4,long *param_5
               ,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_58;
  float fStack_54;
  
                    /* try { // try from 0251f8d4 to 0261f8df has its CatchHandler @ 0251f94c */
                    /* try { // try from 0251f8f8 to 0261f90f has its CatchHandler @ 0251f948 */
  if ((bRam0000000004f4b779 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2fe0);
                    /* try { // try from 0251f910 to 0261f967 has its CatchHandler @ 0251f8a8 */
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b779 = 1;
  }
  puVar2 = PTR_DAT_049b3b98;
  if (param_6 != 0) {
    UnityEngine_UI_VertexHelper__Clear_3edd4d4(param_6,0);
    fVar15 = (float)UnityEngine_UI_Graphic__GetPixelAdjustedRect_3cf8e94(param_5,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0251f8f8 with catch @ 0251f948
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0251f8d4 with catch @ 0251f94c
                        */
    fVar17 = (float)param_4;
    fVar27 = (float)param_2;
    lVar12 = param_5[0x1c];
    fVar28 = (float)param_3;
    fVar31 = fVar28 * 0.5;
    fVar32 = fVar17 * 0.5;
                    /* try { // try from 0251f968 to 0261f96b has its CatchHandler @ 0251f974 */
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* catch() { ... } // from try @ 0251f968 with catch @ 0251f974 */
                    /* try { // try from 0251f978 to 0261f97f has its CatchHandler @ 0251f988 */
    fVar29 = fVar15 + fVar31;
                    /* try { // try from 0251f980 to 0261f98b has its CatchHandler @ 0251f8a8 */
    fVar30 = fVar27 + fVar32;
    uVar5 = UnityEngine_Object__op_Inequality_3c1b96c(lVar12,0,0);
    puVar3 = PTR_DAT_049c2fe0;
    puVar2 = PTR_DAT_049b8a18;
    fVar33 = _UNK_013aa860;
    uVar22 = (undefined4)param_3;
    uVar4 = (undefined4)param_2;
    fVar21 = (float)param_4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0251f978 with catch @ 0251f988
                        */
    fVar16 = *(float *)(param_5 + 0x1b);
    if (fVar16 <= 0.0) {
      if ((uVar5 & 1) == 0) {
        if (*(char *)((long)param_5 + 0xdc) == '\0') {
          uVar18 = (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
          fVar27 = fVar21;
          uVar23 = uVar4;
          uVar25 = uVar22;
          uVar19 = (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
          fVar27 = fVar27 * _UNK_013aa5c8;
          uVar24 = uVar23;
          uVar26 = uVar25;
          uVar20 = (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
          uVar4 = FUN_023aa3cc(uVar18,uVar4,uVar22,fVar21,0);
          if (cRam0000000004f49d57 == '\0') {
            FUN_021f03f8(PTR_DAT_049b8a18);
            cRam0000000004f49d57 = '\x01';
          }
          puVar2 = PTR_DAT_049b8a18;
          UnityEngine_UI_VertexHelper__AddVert_3edd860
                    (fVar29,fVar30,0,**(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8),
                     (*(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8))[1],0,0,param_6,uVar4,0);
          fVar17 = _UNK_013aa900;
          fVar28 = _UNK_013aa860;
          fVar15 = _UNK_013aa660;
          iVar13 = 0;
          do {
            sincosf(((float)iVar13 * fVar28 + (float)iVar13 * fVar28) / 28.0,&fStack_54,&fStack_58);
            fVar16 = fStack_54;
            fVar33 = fStack_58;
            uVar4 = FUN_023aa3cc(uVar19,uVar23,uVar25,fVar27,0);
            if (cRam0000000004f49d57 == '\0') {
              FUN_021f03f8(puVar2);
              cRam0000000004f49d57 = '\x01';
            }
            UnityEngine_UI_VertexHelper__AddVert_3edd860
                      (fVar29 + fVar31 * fVar33 * fVar15,fVar30 + fVar32 * fVar16 * fVar15,0,
                       **(undefined4 **)(*(long *)puVar2 + 0xb8),
                       (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],0,0,param_6,uVar4,0);
            uVar4 = FUN_023aa3cc(uVar20,uVar24,uVar26,0,0);
            if (cRam0000000004f49d57 == '\0') {
              FUN_021f03f8(puVar2);
              cRam0000000004f49d57 = '\x01';
            }
            UnityEngine_UI_VertexHelper__AddVert_3edd860
                      (fVar29 + fVar31 * fVar33 * fVar17,fVar30 + fVar32 * fVar16 * fVar17,0,
                       **(undefined4 **)(*(long *)puVar2 + 0xb8),
                       (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],0,0,param_6,uVar4,0);
            iVar13 = iVar13 + 1;
          } while (iVar13 != 0x1c);
          iVar13 = 3;
          do {
            iVar14 = iVar13 + -2;
            iVar11 = iVar13;
            if (iVar13 == 0x39) {
              iVar11 = 1;
            }
            UnityEngine_UI_VertexHelper__AddTriangle_3edd990(param_6,0,iVar14,iVar11,0);
            UnityEngine_UI_VertexHelper__AddTriangle_3edd990
                      (param_6,iVar14,iVar13 + -1,iVar11 + 1,0);
            UnityEngine_UI_VertexHelper__AddTriangle_3edd990(param_6,iVar14,iVar11 + 1,iVar11,0);
            iVar13 = iVar13 + 2;
          } while (iVar13 != 0x3b);
        }
        else {
          uVar5 = 0;
          do {
            lVar12 = 8;
            do {
              fVar31 = (float)param_4;
              uVar24 = (undefined4)param_3;
              uVar22 = (undefined4)param_2;
              uVar4 = (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
              lVar6 = *(long *)puVar3;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                FUN_021f0574();
                lVar6 = *(long *)puVar3;
              }
              plVar7 = *(long **)(lVar6 + 0xb8);
              lVar6 = plVar7[1];
              if (lVar6 == 0) goto LAB_025200c0;
              if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar12 - 8U) {
LAB_025200c4:
                    /* WARNING: Subroutine does not return */
                FUN_021f06a8();
              }
              lVar9 = plVar7[3];
              if (lVar9 == 0) goto LAB_025200c0;
              if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_025200c4;
              lVar10 = *plVar7;
              if (lVar10 == 0) goto LAB_025200c0;
              if ((ulong)*(uint *)(lVar10 + 0x18) <= lVar12 - 8U) goto LAB_025200c4;
              lVar8 = plVar7[2];
              if (lVar8 == 0) goto LAB_025200c0;
              if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_025200c4;
              fVar32 = *(float *)(lVar10 + lVar12 * 4);
              fVar33 = *(float *)(lVar8 + uVar5 * 4 + 0x20);
              uVar4 = FUN_023aa3cc(uVar4,uVar22,uVar24,
                                   fVar31 * *(float *)(lVar6 + lVar12 * 4) *
                                            *(float *)(lVar9 + uVar5 * 4 + 0x20),0);
              if (cRam0000000004f49d57 == '\0') {
                FUN_021f03f8(puVar2);
                cRam0000000004f49d57 = '\x01';
              }
              param_3 = 0;
              param_2 = (ulong)(uint)(fVar27 + fVar17 * fVar33);
              param_4 = (ulong)**(uint **)(*(long *)puVar2 + 0xb8);
              UnityEngine_UI_VertexHelper__AddVert_3edd860(fVar15 + fVar28 * fVar32,param_6,uVar4,0)
              ;
              lVar12 = lVar12 + 1;
            } while (lVar12 != 0xc);
            uVar5 = uVar5 + 1;
          } while (uVar5 != 4);
          iVar11 = 0;
          iVar13 = 0;
          do {
            iVar14 = 0;
            do {
              iVar1 = iVar11 + iVar14;
              UnityEngine_UI_VertexHelper__AddTriangle_3edd990(param_6,iVar1,iVar1 + 4,iVar1 + 5,0);
              UnityEngine_UI_VertexHelper__AddTriangle_3edd990(param_6,iVar1,iVar1 + 5,iVar1 + 1,0);
              iVar14 = iVar14 + 1;
            } while (iVar14 != 3);
            iVar13 = iVar13 + 1;
            iVar11 = iVar11 + 4;
          } while (iVar13 != 3);
        }
      }
      else {
        (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
        uVar4 = FUN_023aa3cc(0);
        fVar27 = (float)((ulong)param_5[0x1d] >> 0x20) + (float)((ulong)param_5[0x1e] >> 0x20) * 0.5
        ;
        UnityEngine_UI_VertexHelper__AddVert_3edd860
                  (fVar29,fVar30,0,
                   CONCAT44(fVar27,(float)param_5[0x1d] + (float)param_5[0x1e] * 0.5),fVar27,0,0,
                   param_6,uVar4,0);
        fVar27 = _UNK_013aa860;
        iVar13 = 0;
        do {
          sincosf(((float)iVar13 * fVar27 + (float)iVar13 * fVar27) / 28.0,&fStack_a4,&fStack_a8);
          fVar28 = fStack_a4;
          fVar15 = fStack_a8;
          fVar21 = fVar32 * fStack_a4;
          fVar17 = fVar31 * fStack_a8;
          (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
          uVar4 = FUN_023aa3cc(0);
          fVar33 = (float)param_5[0x1e];
          fVar16 = (float)((ulong)param_5[0x1e] >> 0x20);
          fVar28 = (float)((ulong)param_5[0x1d] >> 0x20) + fVar16 * 0.5 + fVar28 * fVar16 * 0.5;
          UnityEngine_UI_VertexHelper__AddVert_3edd860
                    (fVar29 + fVar17,fVar30 + fVar21,0,
                     CONCAT44(fVar28,(float)param_5[0x1d] + fVar33 * 0.5 + fVar15 * fVar33 * 0.5),
                     fVar28,0,0,param_6,uVar4,0);
          iVar13 = iVar13 + 1;
        } while (iVar13 != 0x1d);
        iVar13 = 2;
        do {
          UnityEngine_UI_VertexHelper__AddTriangle_3edd990(param_6,0,iVar13 + -1,iVar13,0);
          iVar13 = iVar13 + 1;
        } while (iVar13 != 0x1e);
      }
    }
    else {
      iVar13 = 0;
      fVar27 = 0.0;
      if (0.0 <= fVar31 - fVar16) {
        fVar27 = fVar31 - fVar16;
      }
      fVar15 = 0.0;
      if (0.0 <= fVar32 - fVar16) {
        fVar15 = fVar32 - fVar16;
      }
      do {
        sincosf(((float)iVar13 * fVar33 + (float)iVar13 * fVar33) / 28.0,&fStack_ac,&fStack_b0);
        fVar17 = fStack_ac;
        fVar28 = fStack_b0;
        (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
        uVar4 = FUN_023aa3cc(0);
        if (cRam0000000004f49d57 == '\0') {
          FUN_021f03f8(puVar2);
          cRam0000000004f49d57 = '\x01';
        }
        UnityEngine_UI_VertexHelper__AddVert_3edd860
                  (fVar29 + fVar31 * fVar28,fVar30 + fVar32 * fVar17,0,
                   **(undefined4 **)(*(long *)puVar2 + 0xb8),
                   (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],0,0,param_6,uVar4,0);
        (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
        uVar4 = FUN_023aa3cc(0);
        if (cRam0000000004f49d57 == '\0') {
          FUN_021f03f8(puVar2);
          cRam0000000004f49d57 = '\x01';
        }
        UnityEngine_UI_VertexHelper__AddVert_3edd860
                  (fVar29 + fVar27 * fVar28,fVar30 + fVar15 * fVar17,0,
                   **(undefined4 **)(*(long *)puVar2 + 0xb8),
                   (*(undefined4 **)(*(long *)puVar2 + 0xb8))[1],0,0,param_6,uVar4,0);
        iVar13 = iVar13 + 1;
      } while (iVar13 != 0x1d);
      iVar13 = 3;
      do {
        UnityEngine_UI_VertexHelper__AddTriangle_3edd990(param_6,iVar13 + -3,iVar13 + -2,iVar13,0);
        UnityEngine_UI_VertexHelper__AddTriangle_3edd990(param_6,iVar13 + -3,iVar13,iVar13 + -1,0);
        iVar13 = iVar13 + 2;
      } while (iVar13 != 0x3b);
    }
    return;
  }
LAB_025200c0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

