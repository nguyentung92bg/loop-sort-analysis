/* IL2CPP: HomeSceneFadeX$$OnPopulateMesh
void HomeSceneFadeX__OnPopulateMesh (HomeSceneFadeX_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneFadeX$$OnPopulateMesh
   void HomeSceneFadeX__OnPopulateMesh (HomeSceneFadeX_o* __this, UnityEngine_UI_VertexHelper_o* vh,
   const MethodInfo* method); */

void HomeSceneFadeX__OnPopulateMesh_2429548
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5,
               long param_6)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((param_5[0x1e] == 0) || (*(int *)(param_5[0x1e] + 0x18) < 2)) {
    if ((bRam0000000004f5bfe9 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049b3b98,param_6,0);
      bRam0000000004f5bfe9 = 1;
    }
    plVar4 = (long *)(**(code **)(*param_5 + 0x368))(param_5,*(undefined8 *)(*param_5 + 0x370));
    puVar1 = PTR_DAT_049b3b98;
    if (param_6 != 0) {
      UnityEngine_UI_VertexHelper__Clear_3edd4d4(param_6);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar7 = UnityEngine_Object__op_Inequality_3c1b96c(plVar4,0,0);
      if ((uVar7 & 1) == 0) {
        return;
      }
      fVar13 = (float)UnityEngine_UI_Graphic__GetPixelAdjustedRect_3cf8e94(param_5,0);
      if (plVar4 != (long *)0x0) {
        fVar18 = param_2;
        fVar14 = (float)UnityEngine_Texture__get_texelSize_3bf6754(plVar4,0);
        iVar3 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
        fVar14 = fVar14 * (float)iVar3;
        iVar3 = (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
        fVar18 = fVar18 * (float)iVar3;
        (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
        uVar11 = FUN_023aa3cc(0);
        UnityEngine_UI_VertexHelper__AddVert_3edd860
                  (fVar13,param_2,0,fVar14 * *(float *)(param_5 + 0x1c),
                   fVar18 * *(float *)((long)param_5 + 0xe4),0,0,param_6,uVar11);
        UnityEngine_UI_VertexHelper__AddVert_3edd860
                  (fVar13,param_2 + param_4,0,fVar14 * *(float *)(param_5 + 0x1c),
                   fVar18 * (*(float *)((long)param_5 + 0xec) + *(float *)((long)param_5 + 0xe4)),0,
                   0,param_6,uVar11);
        UnityEngine_UI_VertexHelper__AddVert_3edd860
                  (fVar13 + param_3,param_2 + param_4,0,
                   fVar14 * (*(float *)(param_5 + 0x1d) + *(float *)(param_5 + 0x1c)),
                   fVar18 * (*(float *)((long)param_5 + 0xec) + *(float *)((long)param_5 + 0xe4)),0,
                   0,param_6,uVar11);
        UnityEngine_UI_VertexHelper__AddVert_3edd860
                  (fVar13 + param_3,param_2,0,
                   fVar14 * (*(float *)(param_5 + 0x1d) + *(float *)(param_5 + 0x1c)),
                   fVar18 * *(float *)((long)param_5 + 0xe4),0,0,param_6,uVar11);
        UnityEngine_UI_VertexHelper__AddTriangle_3edd990(param_6,0,1,2);
        if ((bRam0000000004f5c088 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049be138);
          bRam0000000004f5c088 = 1;
        }
        UnityEngine_UI_VertexHelper__InitializeListIfRequired_3eed800(param_6);
        puVar1 = PTR_DAT_049be138;
        if (*(long *)(param_6 + 0x50) != 0) {
          FUN_02333498(*(long *)(param_6 + 0x50),&stack0xffffffffffffffc4,
                       *(undefined8 *)PTR_DAT_049be138);
          if (*(long *)(param_6 + 0x50) != 0) {
            FUN_02333498(*(long *)(param_6 + 0x50),&stack0xffffffffffffffc8,*(undefined8 *)puVar1);
            if (*(long *)(param_6 + 0x50) != 0) {
              FUN_02333498(*(long *)(param_6 + 0x50),&stack0xffffffffffffffcc,*(undefined8 *)puVar1)
              ;
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (param_6 != 0) {
    UnityEngine_UI_VertexHelper__Clear_3edd4d4(param_6,0);
    fVar8 = (float)UnityEngine_UI_Graphic__GetPixelAdjustedRect_3cf8e94(param_5,0);
    fVar15 = *(float *)(param_5 + 0x1c);
    fVar9 = *(float *)((long)param_5 + 0xe4);
    fVar10 = *(float *)(param_5 + 0x1d);
    fVar16 = *(float *)((long)param_5 + 0xec);
    fVar13 = param_2;
    fVar18 = param_4;
    fVar14 = param_3;
    uVar11 = (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
    lVar5 = param_5[0x1e];
    if (lVar5 != 0) {
      uVar6 = 0;
      uVar7 = 0;
      do {
        if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar7) {
          return;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar5 = lVar5 + uVar6 * 4;
        fVar12 = *(float *)(lVar5 + 0x20);
        fVar17 = fVar8 + param_3 * fVar12;
        fVar12 = fVar15 + fVar10 * fVar12;
        fVar19 = fVar18 * *(float *)(lVar5 + 0x24);
        uVar2 = FUN_023aa3cc(uVar11,fVar13,fVar14,fVar19,0);
        UnityEngine_UI_VertexHelper__AddVert_3edd860
                  (fVar17,param_2,0,fVar12,fVar9,0,0,param_6,uVar2,0);
        uVar2 = FUN_023aa3cc(uVar11,fVar13,fVar14,fVar19,0);
        UnityEngine_UI_VertexHelper__AddVert_3edd860
                  (fVar17,param_4 + param_2,0,fVar12,fVar9 + fVar16,0,0,param_6,uVar2,0);
        if (uVar6 != 0) {
          iVar3 = (int)uVar6;
          UnityEngine_UI_VertexHelper__AddTriangle_3edd990
                    (param_6,iVar3 + -2,iVar3 + -1,iVar3 + 1,0);
          UnityEngine_UI_VertexHelper__AddTriangle_3edd990
                    (param_6,iVar3 + -2,iVar3 + 1,uVar6 & 0xffffffff,0);
        }
        lVar5 = param_5[0x1e];
        uVar7 = uVar7 + 1;
        uVar6 = uVar6 + 2;
      } while (lVar5 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

