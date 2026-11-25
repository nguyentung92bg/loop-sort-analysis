/* IL2CPP: HomeSceneFxRunner.Motes$$.ctor
void HomeSceneFxRunner_Motes___ctor (HomeSceneFxRunner_Motes_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, System_Random_o* random, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFxRunner.Motes$$.ctor
   void HomeSceneFxRunner_Motes___ctor (HomeSceneFxRunner_Motes_o* __this, HomeSceneFx_o* fx,
   UnityEngine_RectTransform_o* parent, System_Random_o* random, const MethodInfo* method); */

void HomeSceneFxRunner_Motes___ctor_2421854
               (long param_1,long param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  float fVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack_134;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  float fStack_a8;
  float fStack_a4;
  
  puVar3 = PTR_DAT_049c3178;
  puVar2 = PTR_DAT_049c3170;
                    /* catch() { ... } // from try @ 025217dc with catch @ 02521878 */
                    /* try { // try from 0252187c to 02621883 has its CatchHandler @ 0252188c */
                    /* try { // try from 02521884 to 0262188f has its CatchHandler @ 025212b4 */
                    /* catch() { ... } // from try @ 0252177c with catch @ 0252188c
                       catch() { ... } // from try @ 0252187c with catch @ 0252188c */
  if ((bRam0000000004f4b789 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c3180);
    FUN_021f03f8(PTR_DAT_049c3178);
    FUN_021f03f8(PTR_DAT_049c3170);
    FUN_021f03f8(PTR_DAT_049c3188);
    FUN_021f03f8(PTR_DAT_049c3190);
    bRam0000000004f4b789 = 1;
  }
  lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar4,*(undefined8 *)puVar3);
  plVar7 = (long *)(param_1 + 0x10);
  *plVar7 = lVar4;
  thunk_FUN_021f190c(plVar7,lVar4);
  System_Object___ctor_3142338(param_1,0);
  if (param_2 != 0) {
    uVar10 = _UNK_013a9fe0;
    uVar17 = _UNK_013a9fe8;
    if (*(char *)(param_2 + 0x28) != '\0') {
      uVar10 = *(undefined8 *)(param_2 + 0x2c);
      uVar17 = *(undefined8 *)(param_2 + 0x34);
    }
    *(undefined8 *)(param_1 + 0x20) = uVar17;
    *(undefined8 *)(param_1 + 0x18) = uVar10;
    puVar3 = PTR_DAT_049c3188;
    puVar2 = PTR_DAT_049c3180;
    uVar17 = _UNK_013a7de0;
    uVar10 = _UNK_013a7a90;
    fStack_134 = *(float *)(param_2 + 0x5c);
    if (0.0 <= fStack_134) {
      fVar9 = *(float *)(param_2 + 0x60);
    }
    else {
      fVar9 = 14.0;
      fStack_134 = 6.0;
    }
    if (*(int *)(param_2 + 0x54) != 0) {
      if (param_4 == (long *)0x0) goto LAB_02521c0c;
      iVar8 = 0;
      do {
        dVar11 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
        fVar18 = *(float *)(param_2 + 0x8c);
        dVar12 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
        fVar19 = *(float *)(param_2 + 0x90);
        fVar22 = *(float *)(param_2 + 0x94);
        dVar13 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
        fVar23 = *(float *)(param_2 + 0x98);
        dVar14 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
        dVar15 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
        fVar21 = *(float *)(param_2 + 0x48);
        if (0.0 <= fVar21) {
          fVar20 = *(float *)(param_2 + 0x4c);
        }
        else {
          fVar20 = 16.0;
          fVar21 = 9.0;
        }
        dVar16 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
        uVar5 = HomeSceneShapes__get_SoftDisc_242699c(0);
        plVar6 = (long *)HomeSceneShapes__Add_2426acc
                                   (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                                    *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                                    param_3,*(undefined8 *)PTR_DAT_049c3190,uVar5,0);
        uVar5 = HomeSceneShapes__get_Screen_2428a54(0);
        if (plVar6 == (long *)0x0) goto LAB_02521c0c;
        (**(code **)(*plVar6 + 0x348))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x350));
        uVar5 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(plVar6,0);
        if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
          FUN_021f0574(*(long *)PTR_DAT_049c3110);
        }
        fVar21 = fVar21 + (fVar20 - fVar21) * (float)dVar16;
        fVar20 = fStack_134 + (fVar9 - fStack_134) * (float)dVar11;
        fVar18 = fVar18 + fVar22 * (float)dVar12;
        fVar19 = fVar19 + fVar23 * (float)dVar13;
        HomeSceneView__Place_2427788(fVar18,fVar19,fVar20,fVar20,uVar5,0);
        lVar4 = *plVar7;
        dVar11 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
        fStack_b8 = -((float)dVar11 * fVar21);
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        fStack_b4 = fVar21;
        uStack_b0 = CONCAT44((float)dVar15 * (float)((ulong)uVar10 >> 0x20) +
                             (float)((ulong)uVar17 >> 0x20),
                             (float)dVar14 * (float)uVar10 + (float)uVar17);
        fStack_a8 = fVar18;
        fStack_a4 = fVar19;
        System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_____2a0e034
                  (&uStack_e0,plVar6,&fStack_a8,&uStack_b0,&fStack_b4,&fStack_b8,
                   *(undefined8 *)puVar3);
        if (lVar4 == 0) goto LAB_02521c0c;
        uStack_f8 = uStack_d8;
        uStack_100 = uStack_e0;
        uStack_e8 = uStack_c8;
        uStack_f0 = uStack_d0;
        FUN_02333498(lVar4,&uStack_100,*(undefined8 *)puVar2);
        iVar8 = iVar8 + 1;
        iVar1 = 0x1e;
        if (-1 < *(int *)(param_2 + 0x54)) {
          iVar1 = *(int *)(param_2 + 0x54);
        }
      } while (iVar8 < iVar1);
    }
    return;
  }
LAB_02521c0c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

