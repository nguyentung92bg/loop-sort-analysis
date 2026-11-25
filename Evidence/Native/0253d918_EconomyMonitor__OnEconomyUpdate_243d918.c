/* IL2CPP: EconomyMonitor$$OnEconomyUpdate
void EconomyMonitor__OnEconomyUpdate (EconomyMonitor_o* __this, EconomyUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyMonitor$$OnEconomyUpdate
   void EconomyMonitor__OnEconomyUpdate (EconomyMonitor_o* __this, EconomyUpdateMessage_o m, const
   MethodInfo* method); */

void EconomyMonitor__OnEconomyUpdate_243d918(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [12];
  
  puVar5 = PTR_DAT_049c2698;
  if ((bRam0000000004f4b82c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2698);
    bRam0000000004f4b82c = 1;
  }
  lVar13 = *(long *)(*(long *)puVar5 + 0x20);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_02229718();
  }
  pcVar14 = (char *)thunk_FUN_0224e54c(param_2 + 0x30,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80));
  if (*pcVar14 != '\0') {
    return;
  }
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x50);
  uVar2 = *(undefined4 *)(param_2 + 0x54);
  if ((bRam0000000004f4b82e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3ea8);
    FUN_021f03f8(PTR_DAT_049c3e30);
    FUN_021f03f8(PTR_DAT_049c3eb0);
    FUN_021f03f8(PTR_DAT_049c3e70);
    FUN_021f03f8(PTR_DAT_049c3e78);
    FUN_021f03f8(PTR_DAT_049c3e80);
    FUN_021f03f8(PTR_DAT_049c3e88);
    FUN_021f03f8(PTR_DAT_049c3eb8);
    FUN_021f03f8(PTR_DAT_049c3ef0);
    FUN_021f03f8(PTR_DAT_049c2288);
    bRam0000000004f4b82e = 1;
  }
  uStack_80 = 0;
  lStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  auStack_b0._8_8_ = 0;
  uStack_a0 = 0;
  auStack_b0._0_8_ = 0;
  if (*(long *)(param_1 + 200) == 0) {
LAB_0253d88c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar3);
  uVar10 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                     (*(long *)(param_1 + 200),&uStack_c8,&lStack_78,*(undefined8 *)PTR_DAT_049c3e30
                     );
  if ((uVar10 & 1) != 0) {
    if (lStack_78 == 0) goto LAB_0253d88c;
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lStack_78,&uStack_c8,*(undefined8 *)PTR_DAT_049c3e88);
    puVar9 = PTR_DAT_049c3eb8;
    puVar8 = PTR_DAT_049c3eb0;
    puVar7 = PTR_DAT_049c3ea8;
    puVar6 = PTR_DAT_049c3e78;
    puVar5 = PTR_DAT_049c2288;
    uStack_88 = puStack_c0;
    uStack_90 = uStack_c8;
    uStack_80 = uStack_b8;
    puStack_c0 = &uStack_90;
    uStack_c8 = 0;
    while( true ) {
      uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&uStack_90,*(undefined8 *)puVar6);
      if ((uVar10 & 1) == 0) break;
      lVar15 = *(long *)PTR_DAT_049c3e80;
      lVar11 = *(long *)(lVar15 + 0x20);
      uVar4 = *(ushort *)(lVar11 + 0x135);
      lVar13 = lVar11;
      if ((uVar4 & 1) == 0) {
        lVar13 = FUN_02229718();
        lVar11 = *(long *)(lVar15 + 0x20);
        uVar4 = *(ushort *)(lVar11 + 0x135);
      }
      uVar3 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
      if ((uVar4 & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      uVar12 = thunk_FUN_0224e54c(&uStack_90,
                                  *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(auStack_70,uVar12,uVar3);
      uVar12 = auStack_70._0_8_;
      lVar13 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                         (auStack_70._0_8_,0x9927ed9b,0);
      auVar16 = LitMotion_LMotion__Create_2eaa070(0x3f800000,uVar1,uVar2,0);
      lVar11 = *(long *)puVar5;
      auStack_b0 = auVar16;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        FUN_021f0574();
        lVar11 = *(long *)puVar5;
      }
      auVar16 = FUN_02526574(auStack_b0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x60),
                             *(undefined8 *)PTR_DAT_049c3ef0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auVar17 = LitMotion_Extensions_LitMotionTextMeshProExtensions__BindToText___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__266f34c
                          (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(lVar13 + 0x38),
                           *(undefined8 *)puVar9);
      if (*(long *)(param_1 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                (*(long *)(param_1 + 0xd0),uVar12,&uStack_a0,*(undefined8 *)puVar7);
      FUN_024f75b8(uStack_a0,uStack_98,1,0);
      if (*(long *)(param_1 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auStack_70 = auVar17;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_1 + 0xd0),uVar12,auStack_70,*(undefined8 *)puVar8);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_90,*(undefined8 *)PTR_DAT_049c3e70);
  }
  return;
}

