/* IL2CPP: CarpetCarrierGroupControl$$Initialize
void CarpetCarrierGroupControl__Initialize (CarpetCarrierGroupControl_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarpetCarrierGroupControl$$Initialize
   void CarpetCarrierGroupControl__Initialize (CarpetCarrierGroupControl_o* __this, const
   MethodInfo* method); */

void CarpetCarrierGroupControl__Initialize_24030ac(long param_1)

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
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_48;
  
  if ((bRam0000000004f4b6a3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2620);
    FUN_021f03f8(PTR_DAT_049c2628);
    FUN_021f03f8(PTR_DAT_049c2630);
    FUN_021f03f8(PTR_DAT_049c2638);
    FUN_021f03f8(PTR_DAT_049c2640);
    FUN_021f03f8(PTR_DAT_049c2648);
    FUN_021f03f8(PTR_DAT_049c2650);
    FUN_021f03f8(PTR_DAT_049c2658);
    bRam0000000004f4b6a3 = 1;
  }
  puVar7 = PTR_DAT_049c2658;
  puVar6 = PTR_DAT_049c2648;
  puVar5 = PTR_DAT_049c2638;
  puVar4 = PTR_DAT_049c2630;
  puVar3 = PTR_DAT_049c2628;
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0xd0) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0xd0),&uStack_88,*(undefined8 *)PTR_DAT_049c2640);
    uStack_60 = uStack_78;
    puStack_68 = puStack_80;
    uStack_70 = uStack_88;
    uStack_88 = 0;
    puStack_80 = &uStack_70;
    while (uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_70,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
      lVar14 = *(long *)puVar5;
      lVar9 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
      lVar10 = lVar9;
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_02229718();
        lVar9 = *(long *)(lVar14 + 0x20);
        uVar2 = *(ushort *)(lVar9 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_02229718();
      }
      uVar11 = thunk_FUN_0224e54c(&uStack_70,
                                  *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_48,uVar11,uVar1);
      lVar10 = lStack_48;
      uVar11 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0(uVar11,uVar11);
      }
      Carrier__DisableInteraction_2403394(lVar10);
      uVar11 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
      Carrier__DisableTransferEnter_2408aa4(lVar10,uVar11);
      Carrier__DisableTransferExit_2408b08(lVar10,uVar11);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_70,*(undefined8 *)puVar3);
    lVar10 = *(long *)puVar7;
    lVar9 = *(long *)(param_1 + 0xd0);
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_021f0574();
      lVar10 = *(long *)puVar7;
    }
    puVar13 = *(undefined8 **)(lVar10 + 0xb8);
    lVar14 = puVar13[1];
    if (lVar14 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_021f0574();
        puVar13 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar11 = *puVar13;
      lVar14 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2620);
      System_Comparison___Il2CppFullySharedGenericType____ctor_280c240
                (lVar14,uVar11,*(undefined8 *)PTR_DAT_049c2650,0);
      plVar12 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
      *plVar12 = lVar14;
      thunk_FUN_021f190c(plVar12,lVar14);
    }
    if (lVar9 != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d0a68
                (lVar9,lVar14,*(undefined8 *)puVar6);
      CarpetCarrierGroupControl__UpdateModel_24034a0(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

