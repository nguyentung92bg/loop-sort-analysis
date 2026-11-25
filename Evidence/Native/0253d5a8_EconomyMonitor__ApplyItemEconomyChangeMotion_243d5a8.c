/* IL2CPP: EconomyMonitor$$ApplyItemEconomyChangeMotion
void EconomyMonitor__ApplyItemEconomyChangeMotion (EconomyMonitor_o* __this, int32_t item, int32_t from, int32_t to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyMonitor$$ApplyItemEconomyChangeMotion
   void EconomyMonitor__ApplyItemEconomyChangeMotion (EconomyMonitor_o* __this, int32_t item,
   int32_t from, int32_t to, const MethodInfo* method); */

void EconomyMonitor__ApplyItemEconomyChangeMotion_243d5a8
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
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
  uStack_c8 = CONCAT44(uStack_c8._4_4_,param_2);
  uVar8 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                    (*(long *)(param_1 + 200),&uStack_c8,&lStack_78,*(undefined8 *)PTR_DAT_049c3e30)
  ;
  if ((uVar8 & 1) != 0) {
    if (lStack_78 == 0) goto LAB_0253d88c;
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lStack_78,&uStack_c8,*(undefined8 *)PTR_DAT_049c3e88);
    puVar7 = PTR_DAT_049c3eb8;
    puVar6 = PTR_DAT_049c3eb0;
    puVar5 = PTR_DAT_049c3ea8;
    puVar4 = PTR_DAT_049c3e78;
    puVar3 = PTR_DAT_049c2288;
    uStack_88 = puStack_c0;
    uStack_90 = uStack_c8;
    uStack_80 = uStack_b8;
    puStack_c0 = &uStack_90;
    uStack_c8 = 0;
    while( true ) {
      uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_90,*(undefined8 *)puVar4);
      if ((uVar8 & 1) == 0) break;
      lVar12 = *(long *)PTR_DAT_049c3e80;
      lVar9 = *(long *)(lVar12 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
      lVar10 = lVar9;
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_02229718();
        lVar9 = *(long *)(lVar12 + 0x20);
        uVar2 = *(ushort *)(lVar9 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_02229718();
      }
      uVar11 = thunk_FUN_0224e54c(&uStack_90,
                                  *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(auStack_70,uVar11,uVar1);
      uVar11 = auStack_70._0_8_;
      lVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                         (auStack_70._0_8_,0x9927ed9b,0);
      auVar13 = LitMotion_LMotion__Create_2eaa070(0x3f800000,param_3,param_4,0);
      lVar9 = *(long *)puVar3;
      auStack_b0 = auVar13;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        FUN_021f0574();
        lVar9 = *(long *)puVar3;
      }
      auVar13 = FUN_02526574(auStack_b0,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x60),
                             *(undefined8 *)PTR_DAT_049c3ef0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auVar14 = LitMotion_Extensions_LitMotionTextMeshProExtensions__BindToText___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__266f34c
                          (auVar13._0_8_,auVar13._8_8_,*(undefined8 *)(lVar10 + 0x38),
                           *(undefined8 *)puVar7);
      if (*(long *)(param_1 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                (*(long *)(param_1 + 0xd0),uVar11,&uStack_a0,*(undefined8 *)puVar5);
      FUN_024f75b8(uStack_a0,uStack_98,1,0);
      if (*(long *)(param_1 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auStack_70 = auVar14;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_1 + 0xd0),uVar11,auStack_70,*(undefined8 *)puVar6);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_90,*(undefined8 *)PTR_DAT_049c3e70);
  }
  return;
}

