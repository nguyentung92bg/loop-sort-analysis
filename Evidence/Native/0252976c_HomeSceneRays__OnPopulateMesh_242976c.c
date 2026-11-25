/* IL2CPP: HomeSceneRays$$OnPopulateMesh
void HomeSceneRays__OnPopulateMesh (HomeSceneRays_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneRays$$OnPopulateMesh
   void HomeSceneRays__OnPopulateMesh (HomeSceneRays_o* __this, UnityEngine_UI_VertexHelper_o* vh,
   const MethodInfo* method); */

void HomeSceneRays__OnPopulateMesh_242976c
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5,
               long param_6)

{
  int iVar1;
  int iVar2;
  float fVar3;
  long lVar4;
  float fVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack_a8;
  float fStack_a4;
  
  if ((bRam0000000004f4b7ae & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049be640);
    bRam0000000004f4b7ae = 1;
  }
  puVar6 = PTR_DAT_049be640;
  if (param_6 != 0) {
    UnityEngine_UI_VertexHelper__Clear_3edd4d4(param_6,0);
    fVar15 = (float)UnityEngine_UI_Graphic__GetPixelAdjustedRect_3cf8e94(param_5,0);
    iVar2 = (int)param_5[0x1b];
    fVar3 = param_3;
    if (param_4 <= param_3) {
      fVar3 = param_4;
    }
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    lVar9 = FUN_021f04e4(*(undefined8 *)puVar6,2);
    if (lVar9 != 0) {
      if ((*(int *)(lVar9 + 0x18) != 0) &&
         (*(undefined4 *)(lVar9 + 0x20) = 0x3e800000, *(int *)(lVar9 + 0x18) != 1)) {
        uVar10 = *(undefined8 *)puVar6;
        *(undefined4 *)(lVar9 + 0x24) = 0x3f800000;
        lVar11 = FUN_021f04e4(uVar10,2);
        if (lVar11 == 0) goto LAB_02529b24;
        if (*(int *)(lVar11 + 0x18) != 0) {
          lVar4 = param_5[0x1b];
          *(undefined4 *)(lVar11 + 0x20) = 0x3f2b851f;
          puVar6 = PTR_DAT_049b8a18;
          fVar5 = _UNK_013aa948;
          if (0 < (int)lVar4) {
            iVar12 = 0;
            fVar15 = fVar15 + param_3 * 0.5;
            param_2 = param_2 + param_4 * 0.5;
            fVar16 = (360.0 / (float)iVar2) * _UNK_013aa7f0;
            do {
              iVar7 = UnityEngine_UI_VertexHelper__get_currentVertCount_3eedc5c(param_6,0);
              (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
              uVar8 = FUN_023aa3cc(0);
              if (cRam0000000004f49d57 == '\0') {
                FUN_021f03f8(puVar6);
                cRam0000000004f49d57 = '\x01';
              }
              UnityEngine_UI_VertexHelper__AddVert_3edd860
                        (fVar15,param_2,0,**(undefined4 **)(*(long *)puVar6 + 0xb8),
                         (*(undefined4 **)(*(long *)puVar6 + 0xb8))[1],0,0,param_6,uVar8,0);
              uVar10 = *(undefined8 *)(lVar9 + 0x18);
              iVar13 = 0;
              do {
                if (0 < (int)uVar10) {
                  sincosf((90.0 - (fVar16 * (float)iVar13 * 0.25 +
                                  (360.0 / (float)iVar2) * (float)iVar12 +
                                  *(float *)((long)param_5 + 0xdc))) * fVar5,&fStack_a4,&fStack_a8);
                  uVar14 = 0;
                  fVar19 = fVar3 * 0.5 * fStack_a4;
                  fVar17 = fVar3 * 0.5 * fStack_a8;
                  do {
                    (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
                    if ((*(uint *)(lVar11 + 0x18) <= uVar14) || (*(uint *)(lVar9 + 0x18) <= uVar14))
                    goto LAB_02529b20;
                    fVar18 = *(float *)(lVar9 + 0x20 + uVar14 * 4);
                    uVar8 = FUN_023aa3cc(0);
                    if (cRam0000000004f49d57 == '\0') {
                      FUN_021f03f8(puVar6);
                      cRam0000000004f49d57 = '\x01';
                    }
                    UnityEngine_UI_VertexHelper__AddVert_3edd860
                              (fVar15 + fVar17 * fVar18,param_2 + fVar19 * fVar18,0,
                               **(undefined4 **)(*(long *)puVar6 + 0xb8),
                               (*(undefined4 **)(*(long *)puVar6 + 0xb8))[1],0,0,param_6,uVar8,0);
                    uVar10 = *(undefined8 *)(lVar9 + 0x18);
                    uVar14 = uVar14 + 1;
                  } while ((long)uVar14 < (long)(int)uVar10);
                }
                iVar13 = iVar13 + 1;
              } while (iVar13 != 5);
              iVar13 = -8;
              do {
                iVar1 = iVar7 + iVar13;
                UnityEngine_UI_VertexHelper__AddTriangle_3edd990
                          (param_6,iVar7,iVar1 + 9,iVar1 + 0xb,0);
                UnityEngine_UI_VertexHelper__AddTriangle_3edd990
                          (param_6,iVar1 + 9,iVar1 + 10,iVar1 + 0xc,0);
                UnityEngine_UI_VertexHelper__AddTriangle_3edd990
                          (param_6,iVar1 + 9,iVar1 + 0xc,iVar1 + 0xb,0);
                iVar13 = iVar13 + 2;
              } while (iVar13 != 0);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)param_5[0x1b]);
          }
          return;
        }
      }
LAB_02529b20:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
  }
LAB_02529b24:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

