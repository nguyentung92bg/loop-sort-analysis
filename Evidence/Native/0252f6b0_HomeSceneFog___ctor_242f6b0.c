/* IL2CPP: HomeSceneFog$$.ctor
void HomeSceneFog___ctor (HomeSceneFog_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, System_Random_o* random, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFog$$.ctor
   void HomeSceneFog___ctor (HomeSceneFog_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o*
   parent, System_Random_o* random, const MethodInfo* method); */

void HomeSceneFog___ctor_242f6b0(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float fStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  puVar5 = PTR_DAT_049c3808;
  puVar4 = PTR_DAT_049c3800;
  if ((bRam0000000004f4b7d2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c32d0);
    FUN_021f03f8(PTR_DAT_049c3020);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c3810);
    FUN_021f03f8(PTR_DAT_049c3808);
    FUN_021f03f8(PTR_DAT_049c3800);
    FUN_021f03f8(PTR_DAT_049c3818);
    FUN_021f03f8(PTR_DAT_049c3820);
    bRam0000000004f4b7d2 = 1;
  }
  lVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar7,*(undefined8 *)puVar5);
  plVar10 = (long *)(param_1 + 0x10);
  *plVar10 = lVar7;
  thunk_FUN_021f190c(plVar10,lVar7);
  HomeSceneFxRunner___ctor_24229c4(param_1,0);
  puVar6 = PTR_DAT_049c3818;
  puVar5 = PTR_DAT_049c3810;
  puVar4 = PTR_DAT_049c3020;
  if (param_2 != 0) {
    uVar13 = 0x3f800000;
    uVar22 = 0x3f800000;
    uVar23 = 0x3f800000;
    uVar12 = HomeSceneFx__ColorOr_241f57c(0x3f800000,param_2,0);
    *(undefined4 *)(param_1 + 0x18) = uVar12;
    *(undefined4 *)(param_1 + 0x1c) = uVar13;
    uVar12 = _UNK_013aa8dc;
    *(undefined4 *)(param_1 + 0x20) = uVar22;
    *(undefined4 *)(param_1 + 0x24) = uVar23;
    uVar13 = HomeSceneFx__OpacityOr_241f53c(param_2,0);
    fVar21 = *(float *)(param_2 + 0xf4);
    *(undefined4 *)(param_1 + 0x28) = uVar13;
    iVar2 = *(int *)(param_2 + 0xf8);
    if (fVar21 <= 0.0) {
      fVar21 = 900.0;
    }
    *(uint *)(param_1 + 0x2c) = *(int *)(param_2 + 0xfc) >> 0x1f | 1;
    if (iVar2 < 1) {
      iVar2 = 3;
    }
    fVar14 = (float)HomeSceneFx__DurOr_241f50c(0x428c0000,param_2,0);
    uVar22 = _UNK_013aa868;
    fVar3 = _UNK_013aa734;
    uVar13 = _UNK_013aa4f4;
    fVar15 = *(float *)(param_2 + 0x94);
    fVar24 = *(float *)(param_2 + 0x98);
    fVar25 = fVar15 / fVar21;
    uVar23 = *(undefined4 *)(param_2 + 0x8c);
    fVar16 = *(float *)(param_2 + 0x90);
    iVar11 = 0;
    iVar1 = iVar2;
    if (iVar2 < 2) {
      iVar1 = 1;
    }
    while( true ) {
      fVar17 = (float)HomeSceneFxRunner__Rand_2422750(uVar12,0x3f400000,param_4,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      fVar17 = fVar24 * fVar17;
      uVar8 = HomeSceneFog__Puffs_242facc(fVar21,fVar17,param_4);
      if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049c3110);
      }
      lVar7 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)PTR_DAT_049c3820,param_3);
      HomeSceneView__Place_2427788
                (uVar23,fVar16 + (((float)iVar11 + 0.5) * (fVar24 - fVar17)) / (float)iVar2,fVar15,
                 fVar17);
      if (((lVar7 == 0) ||
          (lVar7 = UnityEngine_Component__get_gameObject_3c187f4(lVar7,0), lVar7 == 0)) ||
         (plVar9 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                     (lVar7,*(undefined8 *)PTR_DAT_049c32d0), plVar9 == (long *)0x0)
         ) break;
      (**(code **)(*plVar9 + 0x2c8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x2d0));
      plVar9[0x1d] = **(long **)(*(long *)puVar4 + 0xb8);
      thunk_FUN_021f190c();
      HomeSceneQuad__SetTexture_2429bd4(0,0,fVar25,0x3f800000,plVar9,uVar8);
      fVar17 = (float)HomeSceneFxRunner__Rand_2422750(uVar13,uVar22,param_4,0);
      if (param_4 == (long *)0x0) break;
      lVar7 = *plVar10;
      fVar17 = ((float)iVar11 * fVar3 + 1.0) * fVar14 * fVar17;
      dVar19 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
      uVar18 = HomeSceneFxRunner__Rand_2422750(0x41100000,0x41800000,param_4,0);
      dVar20 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      fStack_ac = -((float)dVar19 * fVar17);
      uStack_c0 = 0;
      fStack_b4 = (float)dVar20 * -9.0;
      uStack_b0 = uVar18;
      fStack_a8 = fVar17;
      fStack_a4 = fVar25;
      System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_____2a1a410
                (&uStack_e0,plVar9,uVar8,&fStack_a4,&fStack_a8,&fStack_ac,&uStack_b0,&fStack_b4,
                 *(undefined8 *)puVar6);
      if (lVar7 == 0) break;
      uStack_108 = uStack_d8;
      uStack_110 = uStack_e0;
      uStack_f8 = uStack_c8;
      uStack_100 = uStack_d0;
      uStack_f0 = uStack_c0;
      FUN_02333498(lVar7,&uStack_110,*(undefined8 *)puVar5);
      iVar11 = iVar11 + 1;
      if (iVar1 == iVar11) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

