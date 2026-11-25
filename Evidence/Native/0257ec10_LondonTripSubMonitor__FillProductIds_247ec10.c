/* IL2CPP: LondonTripSubMonitor$$FillProductIds
void LondonTripSubMonitor__FillProductIds (LondonTripSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LondonTripSubMonitor$$FillProductIds
   void LondonTripSubMonitor__FillProductIds (LondonTripSubMonitor_o* __this, const MethodInfo*
   method); */

void LondonTripSubMonitor__FillProductIds_247ec10(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_049c57a0;
  if ((bRam0000000004f4b9f2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b90e8);
    FUN_021f03f8(PTR_DAT_049b3ca0);
    FUN_021f03f8(PTR_DAT_049b3ca8);
    FUN_021f03f8(PTR_DAT_049b3cb0);
    FUN_021f03f8(PTR_DAT_049b3cd0);
    FUN_021f03f8(PTR_DAT_049c57a0);
    FUN_021f03f8(PTR_DAT_049c57a8);
    bRam0000000004f4b9f2 = 1;
  }
  lVar8 = *(long *)puVar2;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
    lVar8 = *(long *)puVar2;
  }
  puVar6 = PTR_DAT_049c57a8;
  puVar5 = PTR_DAT_049b90e8;
  puVar4 = PTR_DAT_049b3cb0;
  puVar3 = PTR_DAT_049b3ca8;
  puVar2 = PTR_DAT_049b3ca0;
  if (**(long **)(lVar8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (**(long **)(lVar8 + 0xb8),&uStack_78,*(undefined8 *)PTR_DAT_049b3cd0);
  uStack_50 = uStack_68;
  uStack_58 = puStack_70;
  uStack_60 = uStack_78;
  uStack_78 = 0;
  puStack_70 = &uStack_60;
  while( true ) {
    uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_60,*(undefined8 *)puVar3);
    if ((uVar9 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_60,*(undefined8 *)puVar2);
      return;
    }
    lVar12 = *(long *)puVar4;
    lVar10 = *(long *)(lVar12 + 0x20);
    uVar1 = *(ushort *)(lVar10 + 0x135);
    lVar8 = lVar10;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_02229718();
      lVar10 = *(long *)(lVar12 + 0x20);
      uVar1 = *(ushort *)(lVar10 + 0x135);
    }
    uVar7 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    uVar11 = thunk_FUN_0224e54c(&uStack_60,
                                *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_48,uVar11,uVar7);
    lVar8 = CONCAT44(uStack_44,uStack_48);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar10 = System_String__Split_2f81014(lVar8,*(undefined8 *)puVar6,0,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) break;
    uVar7 = System_Int32__Parse_30fbdd0(*(undefined8 *)(lVar10 + 0x28),0);
    if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_48 = uVar7;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (*(long *)(param_1 + 0x90),&uStack_48,lVar8,*(undefined8 *)puVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a8();
}

