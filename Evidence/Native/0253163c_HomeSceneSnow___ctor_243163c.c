/* IL2CPP: HomeSceneSnow$$.ctor
void HomeSceneSnow___ctor (HomeSceneSnow_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, System_Random_o* random, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneSnow$$.ctor
   void HomeSceneSnow___ctor (HomeSceneSnow_o* __this, HomeSceneFx_o* fx,
   UnityEngine_RectTransform_o* parent, System_Random_o* random, const MethodInfo* method); */

void HomeSceneSnow___ctor_243163c(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float afStack_b0 [3];
  float fStack_a4;
  
  puVar6 = PTR_DAT_049c38d0;
  puVar5 = PTR_DAT_049c38c8;
  if ((bRam0000000004f4b7dc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c32d0);
    FUN_021f03f8(PTR_DAT_049c3040);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c38d8);
    FUN_021f03f8(PTR_DAT_049c38d0);
    FUN_021f03f8(PTR_DAT_049c38c8);
    FUN_021f03f8(PTR_DAT_049c38e0);
    FUN_021f03f8(PTR_DAT_049c38e8);
    bRam0000000004f4b7dc = 1;
  }
  lVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar7,*(undefined8 *)puVar6);
  plVar12 = (long *)(param_1 + 0x10);
  *plVar12 = lVar7;
  thunk_FUN_021f190c(plVar12,lVar7);
  HomeSceneFxRunner___ctor_24229c4(param_1,0);
  puVar5 = PTR_DAT_049c3040;
  if (param_2 != 0) {
    uVar21 = 0x3f800000;
    uVar22 = 0x3f800000;
    uVar15 = HomeSceneFx__ColorOr_241f57c(0x3f800000,0x3f800000,0x3f800000,0x3f800000,param_2,0);
    fVar16 = (float)HomeSceneFx__OpacityOr_241f53c(_UNK_013aa540,param_2,0);
    fVar17 = (float)HomeSceneFx__DurOr_241f50c(0x41100000,param_2,0);
    fVar4 = _UNK_013aa8f4;
    fVar3 = _UNK_013aa5f0;
    uVar24 = *(undefined4 *)(param_2 + 0x8c);
    uVar23 = *(undefined4 *)(param_2 + 0x90);
    fVar25 = *(float *)(param_2 + 0x94);
    fVar28 = *(float *)(param_2 + 0x98);
    lVar7 = 0;
    iVar13 = 0;
    uVar14 = 0;
    fVar18 = 0.25;
    if ((uint)ABS(*(float *)(param_2 + 0x104)) < 0x7f800001) {
      fVar18 = *(float *)(param_2 + 0x104);
    }
    while( true ) {
      lVar8 = *(long *)puVar5;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_021f0574();
        lVar8 = *(long *)puVar5;
      }
      lVar11 = **(long **)(lVar8 + 0xb8);
      if (lVar11 == 0) break;
      if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar14) {
        return;
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_021f0574();
        lVar11 = **(long **)(*(long *)puVar5 + 0xb8);
        if (lVar11 == 0) break;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      lVar11 = lVar11 + lVar7;
      iVar1 = *(int *)(lVar11 + 0x20);
      iVar2 = *(int *)(lVar11 + 0x24);
      fVar32 = *(float *)(lVar11 + 0x34);
      uVar9 = HomeSceneSnow__Flakes_2431ad8
                        (*(undefined4 *)(lVar11 + 0x2c),*(undefined4 *)(lVar11 + 0x30),param_4,iVar1
                         ,iVar2,*(undefined4 *)(lVar11 + 0x28));
      if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049c3110);
      }
      lVar8 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)PTR_DAT_049c38e8,param_3);
      HomeSceneView__Place_2427788(uVar24,uVar23,fVar25,fVar28);
      if (((lVar8 == 0) ||
          (lVar8 = UnityEngine_Component__get_gameObject_3c187f4(lVar8,0), lVar8 == 0)) ||
         (plVar10 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                      (lVar8,*(undefined8 *)PTR_DAT_049c32d0),
         plVar10 == (long *)0x0)) break;
      (**(code **)(*plVar10 + 0x2c8))(plVar10,0,*(undefined8 *)(*plVar10 + 0x2d0));
      (**(code **)(*plVar10 + 0x2a8))
                (uVar15,uVar21,uVar22,fVar16 * ((float)(int)uVar14 * fVar3 + fVar4),plVar10,
                 *(undefined8 *)(*plVar10 + 0x2b0));
      fVar31 = (float)iVar1;
      fVar33 = (float)iVar2;
      fVar27 = fVar25 / fVar31;
      fVar30 = ((float)iVar13 * 61.0) / fVar31;
      fVar29 = fVar28 / fVar33;
      HomeSceneQuad__SetTexture_2429bd4(fVar30,0,fVar27,fVar29,plVar10,uVar9);
      if (param_4 == (long *)0x0) break;
      lVar8 = *plVar12;
      dVar19 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
      fVar26 = fVar18 * fVar31;
      dVar20 = (double)FUN_04608690((double)fVar26,&dStack_f0);
      if (0.0 <= fVar26) {
        if (dVar20 == 0.5) {
          fVar26 = 1.0;
          goto LAB_025319c8;
        }
        fStack_bc = (float)(int)(fVar26 + 0.5);
      }
      else if (dVar20 == -0.5) {
        fVar26 = -1.0;
LAB_025319c8:
        fStack_bc = (float)dStack_f0;
        if (((long)dStack_f0 & 1U) != 0) {
          fStack_bc = (float)dStack_f0 + fVar26;
        }
      }
      else {
        fStack_bc = (float)(int)(fVar26 + -0.5);
      }
      fStack_bc = fStack_bc / fVar31;
      afStack_b0[1] = 0.0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      dStack_f0 = 0.0;
      fStack_b4 = ((fVar17 * fVar33) / 480.0) / fVar32;
      fStack_b8 = -((float)dVar19 * fStack_b4);
      afStack_b0[0] = fVar30;
      afStack_b0[2] = fVar27;
      fStack_a4 = fVar29;
      System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_____2a13a50
                (&dStack_f0,plVar10,uVar9,afStack_b0,&fStack_b4,&fStack_b8,&fStack_bc,
                 *(undefined8 *)PTR_DAT_049c38e0);
      if (lVar8 == 0) break;
      uStack_118 = uStack_e8;
      dStack_120 = dStack_f0;
      uStack_108 = uStack_d8;
      uStack_110 = uStack_e0;
      uStack_f8 = uStack_c8;
      uStack_100 = uStack_d0;
      FUN_02333498(lVar8,&dStack_120,*(undefined8 *)PTR_DAT_049c38d8);
      uVar14 = uVar14 + 1;
      iVar13 = iVar13 + -1;
      lVar7 = lVar7 + 0x18;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

