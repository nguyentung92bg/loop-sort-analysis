/* IL2CPP: HomeSceneRain$$.ctor
void HomeSceneRain___ctor (HomeSceneRain_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, System_Random_o* random, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneRain$$.ctor
   void HomeSceneRain___ctor (HomeSceneRain_o* __this, HomeSceneFx_o* fx,
   UnityEngine_RectTransform_o* parent, System_Random_o* random, const MethodInfo* method); */

void HomeSceneRain___ctor_2430574(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  float afStack_b0 [3];
  float fStack_a4;
  
  puVar8 = PTR_DAT_049c3870;
  puVar7 = PTR_DAT_049c3868;
  if ((bRam0000000004f4b7d7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c32d0);
    FUN_021f03f8(PTR_DAT_049c3028);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c3878);
    FUN_021f03f8(PTR_DAT_049c3870);
    FUN_021f03f8(PTR_DAT_049c3868);
    FUN_021f03f8(PTR_DAT_049c3880);
    FUN_021f03f8(PTR_DAT_049c3888);
    FUN_021f03f8(PTR_DAT_049c3890);
    bRam0000000004f4b7d7 = 1;
  }
  lVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar7);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar9,*(undefined8 *)puVar8);
  plVar14 = (long *)(param_1 + 0x10);
  *plVar14 = lVar9;
  thunk_FUN_021f190c(plVar14,lVar9);
  HomeSceneFxRunner___ctor_24229c4(param_1,0);
  puVar7 = PTR_DAT_049c3028;
  if (param_2 != 0) {
    uVar25 = 0x3f800000;
    uVar28 = 0x3f800000;
    uVar26 = _UNK_013aa7bc;
    uVar17 = HomeSceneFx__ColorOr_241f57c(0x3f600000,param_2,0);
    *(undefined4 *)(param_1 + 0x18) = uVar17;
    *(undefined4 *)(param_1 + 0x1c) = uVar26;
    fVar4 = _UNK_013aa734;
    *(undefined4 *)(param_1 + 0x20) = uVar25;
    *(undefined4 *)(param_1 + 0x24) = uVar28;
    fVar18 = (float)HomeSceneFx__OpacityOr_241f53c(param_2,0);
    fVar19 = (float)HomeSceneFx__DurOr_241f50c(_UNK_013aa8f4,param_2,0);
    fVar6 = _UNK_013aa948;
    fVar5 = _UNK_013aa810;
    fVar3 = _UNK_013aa5f0;
    fVar2 = _UNK_013aa540;
    fVar29 = *(float *)(param_2 + 0x8c);
    uVar26 = *(undefined4 *)(param_2 + 0x90);
    iVar15 = 0;
    fVar31 = *(float *)(param_2 + 0x94);
    fVar33 = *(float *)(param_2 + 0x98);
    uVar16 = 0;
    lVar9 = 0x3c;
    fVar20 = -10.0;
    if ((uint)ABS(*(float *)(param_2 + 0x100)) < 0x7f800001) {
      fVar20 = *(float *)(param_2 + 0x100);
    }
    while( true ) {
      lVar10 = *(long *)puVar7;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_021f0574();
        lVar10 = *(long *)puVar7;
      }
      lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar13 == 0) break;
      if ((long)*(int *)(lVar13 + 0x18) <= (long)uVar16) {
        return;
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_021f0574();
        lVar13 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
        if (lVar13 == 0) break;
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      pfVar1 = (float *)(lVar13 + lVar9);
      fVar22 = pfVar1[-7];
      fVar32 = pfVar1[-6];
      fVar30 = *pfVar1;
      uVar11 = HomeSceneRain__Streaks_2430a74
                         (pfVar1[-4],pfVar1[-3],pfVar1[-2],pfVar1[-1],param_4,fVar22,fVar32,
                          pfVar1[-5]);
      fVar21 = (float)FUN_04608710(fVar20 * ((float)(int)uVar16 * fVar3 + fVar2) * fVar6);
      if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
        FUN_021f0574();
      }
      lVar10 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)PTR_DAT_049c3890,param_3);
      HomeSceneView__Place_2427788(fVar29 + -(fVar21 * fVar33) * -0.5,uVar26,fVar31,fVar33);
      if (((lVar10 == 0) ||
          (lVar10 = UnityEngine_Component__get_gameObject_3c187f4(lVar10,0), lVar10 == 0)) ||
         (plVar12 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                      (lVar10,*(undefined8 *)PTR_DAT_049c32d0),
         plVar12 == (long *)0x0)) break;
      (**(code **)(*plVar12 + 0x2c8))(plVar12,0,*(undefined8 *)(*plVar12 + 0x2d0));
      plVar12[0x1d] = **(long **)(*(long *)puVar7 + 0xb8);
      thunk_FUN_021f190c();
      fVar27 = (float)(int)fVar22;
      *(float *)((long)plVar12 + 0xe4) = -(fVar21 * fVar33);
      fVar21 = fVar31 / fVar27;
      fVar32 = (float)(int)fVar32;
      fVar27 = ((float)iVar15 * 97.0) / fVar27;
      fVar34 = fVar33 / fVar32;
      HomeSceneQuad__SetTexture_2429bd4(fVar27,0,fVar21,fVar34,plVar12,uVar11);
      fVar22 = (float)HomeSceneFxRunner__Rand_2422750(0x40c00000,0x41300000,param_4,0);
      if (param_4 == (long *)0x0) break;
      lVar10 = *plVar14;
      fVar30 = ((fVar19 * fVar32) / 420.0) / fVar30;
      dVar23 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
      dVar24 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
      uStack_d0 = 0;
      fVar32 = (float)(int)uVar16 * fVar5;
      afStack_b0[0] = fVar18 * (fVar32 + fVar4);
      uStack_110 = CONCAT44(uStack_110._4_4_,fVar18 * (fVar32 + 0.75));
      System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a02e24
                (&uStack_d0,&uStack_110,afStack_b0,*(undefined8 *)PTR_DAT_049c3880);
      uStack_e0 = 0;
      afStack_b0[1] = 0.0;
      fStack_c0 = -((float)dVar23 * fVar30);
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_b8 = uStack_d0;
      fStack_c8 = -((float)dVar24 * fVar22);
      fStack_c4 = fVar22;
      fStack_bc = fVar30;
      afStack_b0[0] = fVar27;
      afStack_b0[2] = fVar21;
      fStack_a4 = fVar34;
      System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_____2a21d34
                (&uStack_110,plVar12,uVar11,afStack_b0,&fStack_bc,&fStack_c0,&fStack_c4,&fStack_c8,
                 &uStack_b8,*(undefined8 *)PTR_DAT_049c3888);
      if (lVar10 == 0) break;
      uStack_148 = uStack_108;
      uStack_150 = uStack_110;
      uStack_138 = uStack_f8;
      uStack_140 = uStack_100;
      uStack_128 = uStack_e8;
      uStack_130 = uStack_f0;
      uStack_120 = uStack_e0;
      FUN_02333498(lVar10,&uStack_150,*(undefined8 *)PTR_DAT_049c3878);
      uVar16 = uVar16 + 1;
      iVar15 = iVar15 + -1;
      lVar9 = lVar9 + 0x20;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

