/* IL2CPP: SceneScope$$HandleSystems
void SceneScope__HandleSystems (SceneScope_o* __this, VContainer_IContainerBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02655328) */
/* WARNING: Removing unreachable block (ram,0x02655508) */
/* WARNING: Removing unreachable block (ram,0x026554fc) */
/* IL2CPP: SceneScope$$HandleSystems
   void SceneScope__HandleSystems (SceneScope_o* __this, VContainer_IContainerBuilder_o* builder,
   const MethodInfo* method); */

void SceneScope__HandleSystems_2554f6c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uStack_108;
  ulong *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
  ulong uStack_d0;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_94;
  long lStack_90;
  undefined1 auStack_88 [16];
  long lStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_58;
  
  if ((bRam0000000004f4c09d & 1) == 0) {
                    /* try { // try from 02654fa0 to 02754fb7 has its CatchHandler @ 02654e58 */
    FUN_021f03f8(PTR_DAT_049cb080);
    FUN_021f03f8(PTR_DAT_049cb088);
                    /* try { // try from 02654fb8 to 02754fc7 has its CatchHandler @ 0265502c */
    FUN_021f03f8(PTR_DAT_049cb090);
    FUN_021f03f8(PTR_DAT_049c8170);
                    /* try { // try from 02654fd4 to 02754fdf has its CatchHandler @ 02655028 */
    FUN_021f03f8(PTR_DAT_049cb098);
    FUN_021f03f8(PTR_DAT_049cb0a0);
                    /* try { // try from 02654fe8 to 02754ff3 has its CatchHandler @ 02655024 */
    FUN_021f03f8(PTR_DAT_049c8178);
                    /* try { // try from 02654ff4 to 0275504f has its CatchHandler @ 02654e58 */
    FUN_021f03f8(PTR_DAT_049cb0a8);
    FUN_021f03f8(PTR_DAT_049c8180);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049cb0b0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02654fe8 with catch @ 02655024
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02654fd4 with catch @ 02655028
                        */
    FUN_021f03f8(PTR_DAT_049cb0b8);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02654fb8 with catch @ 0265502c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02654f34 with catch @ 02655030
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02654f54 with catch @ 02655034
                        */
    FUN_021f03f8(PTR_DAT_049c81a0);
    FUN_021f03f8(PTR_DAT_049cb0c0);
    FUN_021f03f8(PTR_DAT_049c81a8);
                    /* try { // try from 02655050 to 02755053 has its CatchHandler @ 0265506c */
                    /* try { // try from 02655054 to 0275506f has its CatchHandler @ 02654e58 */
    FUN_021f03f8(PTR_DAT_049cb0c8);
    FUN_021f03f8(PTR_DAT_049cb0d0);
                    /* catch() { ... } // from try @ 02655050 with catch @ 0265506c */
                    /* try { // try from 02655070 to 02755077 has its CatchHandler @ 02655080 */
    FUN_021f03f8(PTR_DAT_049cb0d8);
                    /* try { // try from 02655078 to 02755083 has its CatchHandler @ 02654e58 */
    bRam0000000004f4c09d = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02655070 with catch @ 02655080
                        */
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  auStack_88._8_8_ = 0;
  lStack_78 = 0;
  lStack_90 = 0;
  auStack_88._0_8_ = 0;
  uStack_94 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_d0 = 0;
  puStack_c8 = (ulong *)0x0;
  uStack_c0 = 0;
  lVar10 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 026554e8 to 027554f3 has its CatchHandler @ 0265596c */
    FUN_021f06a0();
  }
  uStack_94 = UnityEngine_GameObject__get_scene_3c1e648(lVar10,0);
  iVar9 = UnityEngine_SceneManagement_Scene__get_buildIndex_3c335d0(&uStack_94,0);
  if (iVar9 == 6) {
    uVar15 = *(undefined8 *)(param_1 + 0x78);
    if (cRam0000000004f4c0eb == '\0') {
      FUN_021f03f8(PTR_DAT_049cb0e0);
      cRam0000000004f4c0eb = '\x01';
    }
    uVar11 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb0e0);
    Scellecs_Morpeh_SystemsGroup___ctor_32ba048(uVar11,uVar15,0);
    uVar15 = *(undefined8 *)PTR_DAT_049cb0c8;
    if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar15 = System_Type__GetTypeFromHandle_310ebfc(uVar15,0);
    if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
      FUN_021f0574(*(long *)PTR_DAT_049b5480);
    }
    auStack_70 = Extensions__GetDerivedClassTypes_3f0c910(uVar15,&lStack_78,0);
    puStack_d8 = auStack_70;
    lStack_e0 = 0;
    if (*(int *)(*(long *)PTR_DAT_049cb088 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_88 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                           (&lStack_90,*(undefined8 *)PTR_DAT_049cb080);
    puStack_e8 = auStack_88;
    lStack_f0 = 0;
    if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lStack_78,&uStack_108,*(undefined8 *)PTR_DAT_049c81a0);
    puVar8 = PTR_DAT_049cb0d8;
    puVar7 = PTR_DAT_049cb0d0;
    puVar6 = PTR_DAT_049cb0b0;
    puVar5 = PTR_DAT_049c8180;
    puVar4 = PTR_DAT_049c8178;
    uStack_a8 = puStack_100;
    uStack_b0 = uStack_108;
    uStack_a0 = uStack_f8;
    puStack_100 = &uStack_b0;
    uStack_108 = 0;
    while( true ) {
      uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&uStack_b0,*(undefined8 *)puVar4);
      if ((uVar12 & 1) == 0) break;
      lVar16 = *(long *)puVar5;
      lVar13 = *(long *)(lVar16 + 0x20);
      uVar3 = *(ushort *)(lVar13 + 0x135);
      lVar10 = lVar13;
      if ((uVar3 & 1) == 0) {
        lVar10 = FUN_02229718();
        lVar13 = *(long *)(lVar16 + 0x20);
        uVar3 = *(ushort *)(lVar13 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar13 = FUN_02229718();
      }
      uVar15 = thunk_FUN_0224e54c(&uStack_b0,
                                  *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_58,uVar15,uVar1);
      plVar14 = (long *)System_Activator__CreateInstance_312a8a4(uStack_58,0);
      if (plVar14 == (long *)0x0) {
LAB_026552b8:
        plVar14 = (long *)0x0;
      }
      else {
        bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
        if (*(byte *)(*plVar14 + 0x130) < bVar2) goto LAB_026552b8;
                    /* try { // try from 026552d0 to 027553d7 has its CatchHandler @ 026552d0
                       catch() { ... } // from try @ 026552d0 with catch @ 026552d0
                       catch() { ... } // from try @ 02655804 with catch @ 026552d0
                       catch() { ... } // from try @ 0265592c with catch @ 026552d0
                       catch() { ... } // from try @ 026559d4 with catch @ 026552d0
                       catch() { ... } // from try @ 02655a3c with catch @ 026552d0 */
        if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar7) {
          plVar14 = (long *)0x0;
        }
      }
      if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      FUN_02333498(lStack_90,plVar14,*(undefined8 *)puVar6);
      FUN_0265c34c(uVar11,plVar14,1,*(undefined8 *)puVar8);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_b0,*(undefined8 *)PTR_DAT_049c8170);
    if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lStack_90,&uStack_108,*(undefined8 *)PTR_DAT_049cb0b8);
    puVar6 = PTR_DAT_049cb0a8;
    puVar5 = PTR_DAT_049cb0a0;
    puVar4 = PTR_DAT_049cb090;
    puStack_c8 = puStack_100;
    uStack_d0 = uStack_108;
    puStack_100 = &uStack_d0;
    uStack_c0 = uStack_f8;
    uStack_108 = 0;
    while( true ) {
      uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&uStack_d0,*(undefined8 *)puVar5);
      if ((uVar12 & 1) == 0) break;
      lVar16 = *(long *)puVar6;
      lVar13 = *(long *)(lVar16 + 0x20);
      uVar3 = *(ushort *)(lVar13 + 0x135);
      lVar10 = lVar13;
      if ((uVar3 & 1) == 0) {
        lVar10 = FUN_02229718();
        lVar13 = *(long *)(lVar16 + 0x20);
        uVar3 = *(ushort *)(lVar13 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar13 = FUN_02229718();
      }
                    /* try { // try from 026553d8 to 0275543b has its CatchHandler @ 026559a0 */
      uVar15 = thunk_FUN_0224e54c(&uStack_d0,
                                  *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_58,uVar15,uVar1);
      lVar10 = VContainer_Unity_ContainerBuilderUnityExtensions__RegisterComponent___Il2CppFullySharedGenericType__25c7a64
                         (param_2,uStack_58,*(undefined8 *)puVar4);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar14 = (long *)VContainer_RegistrationBuilder__AsSelf_3f1c334(lVar10,0);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_d0,*(undefined8 *)PTR_DAT_049cb098);
    lVar10 = *(long *)(param_1 + 0x78);
    if (cRam0000000004f4c0ec == '\0') {
                    /* try { // try from 02655458 to 0275546f has its CatchHandler @ 02655994 */
      FUN_021f03f8(PTR_DAT_049cb0e8);
      cRam0000000004f4c0ec = '\x01';
    }
                    /* try { // try from 02655470 to 0275549b has its CatchHandler @ 0265597c */
    uStack_108 = uStack_108 & 0xffffffff00000000;
    System_Collections_Generic_SortedList___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_29907b4
              (*(undefined8 *)(lVar10 + 0x48),&uStack_108,uVar11,*(undefined8 *)PTR_DAT_049cb0e8);
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (puStack_e8,*(undefined8 *)PTR_DAT_049cb0c0);
    lVar10 = lStack_e0;
                    /* try { // try from 0265549c to 027554a7 has its CatchHandler @ 02655974 */
    if (lStack_f0 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0698();
    }
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (puStack_d8,*(undefined8 *)PTR_DAT_049c81a8);
                    /* try { // try from 026554b8 to 027554cb has its CatchHandler @ 02655990 */
    if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0698(lVar10);
    }
  }
  return;
}

