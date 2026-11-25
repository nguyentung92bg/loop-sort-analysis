/* IL2CPP: HomeSceneFxRunner.Motes$$Tick
void HomeSceneFxRunner_Motes__Tick (HomeSceneFxRunner_Motes_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneFxRunner.Motes$$Tick
   void HomeSceneFxRunner_Motes__Tick (HomeSceneFxRunner_Motes_o* __this, float t, const MethodInfo*
   method); */

void HomeSceneFxRunner_Motes__Tick_2423590(undefined4 param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  long *plStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000004f4b78a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3270);
    FUN_021f03f8(PTR_DAT_049c3278);
    FUN_021f03f8(PTR_DAT_049c3280);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c3288);
    FUN_021f03f8(PTR_DAT_049c3058);
    bRam0000000004f4b78a = 1;
  }
  puVar6 = PTR_DAT_049c3280;
  puVar5 = PTR_DAT_049c3278;
  puVar4 = PTR_DAT_049c3270;
  puVar3 = PTR_DAT_049c3110;
  puVar2 = PTR_DAT_049c3058;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_2 + 0x10),&plStack_e0,*(undefined8 *)PTR_DAT_049c3288);
  plStack_b0 = plStack_e0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  while( true ) {
    uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&plStack_b0,*(undefined8 *)puVar5);
    if ((uVar12 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&plStack_b0,*(undefined8 *)puVar4);
      return;
    }
    lVar16 = *(long *)puVar6;
    lVar13 = *(long *)(lVar16 + 0x20);
    uVar1 = *(ushort *)(lVar13 + 0x135);
    lVar14 = lVar13;
    if ((uVar1 & 1) == 0) {
      lVar14 = FUN_02229718();
      lVar13 = *(long *)(lVar16 + 0x20);
      uVar1 = *(ushort *)(lVar13 + 0x135);
    }
    uVar17 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
    if ((uVar1 & 1) == 0) {
      lVar13 = FUN_02229718();
    }
    uVar15 = thunk_FUN_0224e54c(&plStack_b0,
                                *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&plStack_e0,uVar15,uVar17);
    uVar20 = uStack_c4;
    uVar17 = uStack_c8;
    fVar11 = fStack_cc;
    fVar10 = fStack_d0;
    fVar9 = fStack_d4;
    fVar8 = fStack_d8;
    plVar7 = plStack_e0;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar17 = HomeSceneView__Phase_24280b4(param_1,uVar20,uVar17,0);
    lVar14 = *(long *)puVar2;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      FUN_021f0574();
      lVar14 = *(long *)puVar2;
    }
    fVar18 = (float)HomeSceneFxRunner__Track_2422880
                              (uVar17,**(undefined8 **)(lVar14 + 0xb8),
                               (*(undefined8 **)(lVar14 + 0xb8))[2],
                               *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10));
    fVar19 = (float)HomeSceneFxRunner__Track_2422880
                              (uVar17,**(undefined8 **)(*(long *)puVar2 + 0xb8),
                               (*(undefined8 **)(*(long *)puVar2 + 0xb8))[3],
                               *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10));
    if (plVar7 == (long *)0x0) break;
    lVar14 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(plVar7,0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
              (fVar8 + fVar10 * fVar18,-(fVar9 + fVar11 * fVar19),lVar14,0);
    uVar22 = *(undefined4 *)(param_2 + 0x20);
    uVar20 = *(undefined4 *)(param_2 + 0x18);
    uVar21 = *(undefined4 *)(param_2 + 0x1c);
    uVar17 = HomeSceneFxRunner__Track_2422880
                       (uVar17,**(undefined8 **)(*(long *)puVar2 + 0xb8),
                        (*(undefined8 **)(*(long *)puVar2 + 0xb8))[1],
                        *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10));
    (**(code **)(*plVar7 + 0x2a8))
              (uVar20,uVar21,uVar22,uVar17,plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

