/* IL2CPP: HomeSceneFxRunner.Flash$$Tick
void HomeSceneFxRunner_Flash__Tick (HomeSceneFxRunner_Flash_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneFxRunner.Flash$$Tick
   void HomeSceneFxRunner_Flash__Tick (HomeSceneFxRunner_Flash_o* __this, float t, const MethodInfo*
   method); */

void HomeSceneFxRunner_Flash__Tick_2422c04(undefined4 param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long *plStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000004f4b781 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3210);
    FUN_021f03f8(PTR_DAT_049c3218);
    FUN_021f03f8(PTR_DAT_049c3220);
    FUN_021f03f8(PTR_DAT_049c3010);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c3228);
    bRam0000000004f4b781 = 1;
  }
  puVar6 = PTR_DAT_049c3220;
  puVar5 = PTR_DAT_049c3218;
  puVar4 = PTR_DAT_049c3210;
  puVar3 = PTR_DAT_049c3110;
  puVar2 = PTR_DAT_049c3010;
  uStack_70 = 0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_2 + 0x10),&plStack_b8,*(undefined8 *)PTR_DAT_049c3228);
  uStack_70 = uStack_98;
  plStack_90 = plStack_b8;
  uStack_78 = uStack_a0;
  uStack_80 = uStack_a8;
  while( true ) {
    uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&plStack_90,*(undefined8 *)puVar5);
    if ((uVar8 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&plStack_90,*(undefined8 *)puVar4);
      return;
    }
    lVar12 = *(long *)puVar6;
    lVar9 = *(long *)(lVar12 + 0x20);
    uVar1 = *(ushort *)(lVar9 + 0x135);
    lVar10 = lVar9;
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_02229718();
      lVar9 = *(long *)(lVar12 + 0x20);
      uVar1 = *(ushort *)(lVar9 + 0x135);
    }
    uVar13 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    uVar11 = thunk_FUN_0224e54c(&plStack_90,
                                *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&plStack_b8,uVar11,uVar13);
    uVar11 = uStack_a8;
    uVar14 = uStack_ac;
    uVar13 = uStack_b0;
    plVar7 = plStack_b8;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar13 = HomeSceneView__Phase_24280b4(param_1,uVar14,uVar13,0);
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_021f0574();
      lVar10 = *(long *)puVar2;
    }
    uVar14 = HomeSceneFxRunner__Track_2422880
                       (uVar13,uVar11,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 8),0);
    if (plVar7 == (long *)0x0) break;
    (**(code **)(*plVar7 + 0x2a8))
              (0x3f800000,0x3f800000,0x3f800000,uVar14,plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
    uVar13 = HomeSceneFxRunner__Track_2422880
                       (uVar13,uVar11,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
    lVar10 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(plVar7,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__set_localScale_3c2ddfc(uVar13,uVar13,0x3f800000,lVar10,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

