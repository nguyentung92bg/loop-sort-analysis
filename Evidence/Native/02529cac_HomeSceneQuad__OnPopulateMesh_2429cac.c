/* IL2CPP: HomeSceneQuad$$OnPopulateMesh
void HomeSceneQuad__OnPopulateMesh (HomeSceneQuad_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneQuad$$OnPopulateMesh
   void HomeSceneQuad__OnPopulateMesh (HomeSceneQuad_o* __this, UnityEngine_UI_VertexHelper_o* vh,
   const MethodInfo* method); */

void HomeSceneQuad__OnPopulateMesh_2429cac
               (undefined1 param_1 [16],float param_2,undefined8 param_3,float param_4,long *param_5
               ,long param_6)

{
  float fVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (param_6 != 0) {
    UnityEngine_UI_VertexHelper__Clear_3edd4d4(param_6,0);
    fVar9 = (float)UnityEngine_UI_Graphic__GetPixelAdjustedRect_3cf8e94(param_5,0);
    fVar1 = (float)param_3;
    lVar5 = param_5[0x1d];
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) < 2)) {
      fVar10 = param_4;
      fVar12 = param_2;
      fVar14 = fVar1;
      uVar13 = (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
      fVar18 = fVar10 * *(float *)(param_5 + 0x1b);
      fVar19 = fVar12;
      fVar20 = fVar14;
      uVar11 = (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
      fVar17 = *(float *)((long)param_5 + 0xdc);
      fVar21 = fVar1 * (1.0 - *(float *)(param_5 + 0x1c)) * 0.5;
      uVar4 = FUN_023aa3cc(0);
      UnityEngine_UI_VertexHelper__AddVert_3edd860
                (fVar9,param_2,0,(int)param_5[0x1f],*(undefined4 *)((long)param_5 + 0xfc),0,0,
                 param_6,uVar4,0);
      fVar15 = *(float *)((long)param_5 + 0xe4);
      uVar4 = FUN_023aa3cc(uVar13,fVar12,fVar14,fVar18,0);
      UnityEngine_UI_VertexHelper__AddVert_3edd860
                (fVar9 + fVar21 + fVar15,param_4 + param_2,0,(int)param_5[0x1f],
                 *(float *)((long)param_5 + 0x104) + *(float *)((long)param_5 + 0xfc),0,0,param_6,
                 uVar4,0);
      fVar15 = *(float *)((long)param_5 + 0xe4);
      uVar4 = FUN_023aa3cc(uVar13,fVar12,fVar14,fVar18,0);
      UnityEngine_UI_VertexHelper__AddVert_3edd860
                (((fVar1 + fVar9) - fVar21) + fVar15,param_4 + param_2,0,
                 (float)param_5[0x20] + (float)param_5[0x1f],
                 (float)((ulong)param_5[0x20] >> 0x20) + (float)((ulong)param_5[0x1f] >> 0x20),0,0,
                 param_6,uVar4,0);
      uVar4 = FUN_023aa3cc(uVar11,fVar19,fVar20,fVar10 * fVar17,0);
      UnityEngine_UI_VertexHelper__AddVert_3edd860
                (fVar1 + fVar9,param_2,0,*(float *)(param_5 + 0x20) + *(float *)(param_5 + 0x1f),
                 *(undefined4 *)((long)param_5 + 0xfc),0,0,param_6,uVar4,0);
      UnityEngine_UI_VertexHelper__AddTriangle_3edd990(param_6,0,1,2,0);
      if ((bRam0000000004f5c088 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049be138);
        bRam0000000004f5c088 = 1;
      }
      UnityEngine_UI_VertexHelper__InitializeListIfRequired_3eed800(param_6);
      puVar2 = PTR_DAT_049be138;
      if (*(long *)(param_6 + 0x50) != 0) {
        FUN_02333498(*(long *)(param_6 + 0x50),&stack0xffffffffffffffc4,
                     *(undefined8 *)PTR_DAT_049be138);
        if (*(long *)(param_6 + 0x50) != 0) {
          FUN_02333498(*(long *)(param_6 + 0x50),&stack0xffffffffffffffc8,*(undefined8 *)puVar2);
          if (*(long *)(param_6 + 0x50) != 0) {
            FUN_02333498(*(long *)(param_6 + 0x50),&stack0xffffffffffffffcc,*(undefined8 *)puVar2);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar10 = param_4 + param_2;
    uVar7 = 0;
    uVar8 = 0;
    param_2 = param_2 - fVar10;
    uVar16 = (ulong)(uint)param_2;
    do {
      uVar13 = (undefined4)param_3;
      uVar4 = (undefined4)uVar16;
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar8) {
        return;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar8) {
LAB_0252a0d0:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      fVar19 = *(float *)(lVar5 + uVar7 * 4 + 0x20);
      uVar11 = (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
      lVar5 = param_5[0x1d];
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_0252a0d0;
      fVar14 = *(float *)((long)param_5 + 0xfc);
      fVar12 = *(float *)((long)param_5 + 0x104) + fVar14;
      fVar20 = 1.0;
      if (fVar19 <= 1.0) {
        fVar20 = fVar19;
      }
      fVar15 = 0.0;
      if (0.0 <= fVar19) {
        fVar15 = fVar20;
      }
      fVar19 = (1.0 - fVar19) * *(float *)((long)param_5 + 0xe4);
      param_4 = param_4 * *(float *)(lVar5 + uVar7 * 4 + 0x24);
      fVar20 = fVar10 + param_2 * fVar15;
      uVar3 = FUN_023aa3cc(uVar11,uVar4,uVar13,param_4,0);
      UnityEngine_UI_VertexHelper__AddVert_3edd860
                (fVar9 + fVar19,fVar20,0,(int)param_5[0x1f],fVar12 + fVar15 * (fVar14 - fVar12),0,0,
                 param_6,uVar3,0);
      uVar4 = FUN_023aa3cc(uVar11,uVar4,uVar13,param_4,0);
      param_3 = 0;
      param_4 = *(float *)(param_5 + 0x20) + *(float *)(param_5 + 0x1f);
      uVar16 = (ulong)(uint)fVar20;
      UnityEngine_UI_VertexHelper__AddVert_3edd860(fVar1 + fVar9 + fVar19,param_6,uVar4,0);
      if (uVar7 != 0) {
        iVar6 = (int)uVar7;
        UnityEngine_UI_VertexHelper__AddTriangle_3edd990(param_6,iVar6 + -2,iVar6 + -1,iVar6 + 1,0);
        UnityEngine_UI_VertexHelper__AddTriangle_3edd990
                  (param_6,iVar6 + -2,iVar6 + 1,uVar7 & 0xffffffff,0);
      }
      lVar5 = param_5[0x1d];
      uVar8 = uVar8 + 1;
      uVar7 = uVar7 + 2;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

