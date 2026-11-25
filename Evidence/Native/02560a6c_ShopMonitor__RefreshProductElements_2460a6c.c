/* IL2CPP: ShopMonitor$$RefreshProductElements
void ShopMonitor__RefreshProductElements (ShopMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$RefreshProductElements
   void ShopMonitor__RefreshProductElements (ShopMonitor_o* __this, const MethodInfo* method); */

void ShopMonitor__RefreshProductElements_2460a6c(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f4b945 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5010);
    FUN_021f03f8(PTR_DAT_049c5038);
    FUN_021f03f8(PTR_DAT_049c5040);
    FUN_021f03f8(PTR_DAT_049c5048);
    FUN_021f03f8(PTR_DAT_049c5050);
    bRam0000000004f4b945 = 1;
  }
  puVar6 = PTR_DAT_049c5048;
  puVar5 = PTR_DAT_049c5040;
  puVar4 = PTR_DAT_049c5038;
  puVar3 = PTR_DAT_049c5010;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if ((*(long *)(param_1 + 0x98) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x98) + 0x20), lVar7 != 0)) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lVar7,&uStack_90,*(undefined8 *)PTR_DAT_049c5050);
    uStack_d0 = 0;
    puStack_c8 = &uStack_90;
    while( true ) {
      uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_90,*(undefined8 *)puVar5);
      if ((uVar8 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_90,*(undefined8 *)puVar4);
        return;
      }
      lVar11 = *(long *)puVar6;
      lVar9 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
      lVar7 = lVar9;
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_02229718();
        lVar9 = *(long *)(lVar11 + 0x20);
        uVar2 = *(ushort *)(lVar9 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_02229718();
      }
      uVar10 = thunk_FUN_0224e54c(&uStack_90,
                                  *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_100,uVar10,uVar1);
      uVar10 = uStack_100;
      uStack_b8 = uStack_f0;
      uStack_c0 = uStack_f8;
      uStack_a8 = uStack_e0;
      uStack_b0 = uStack_e8;
      uStack_a0 = uStack_d8;
      if (*(long *)(param_1 + 0x100) == 0) break;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (*(long *)(param_1 + 0x100),uStack_100,&uStack_100,*(undefined8 *)puVar3);
      uStack_130 = uVar10;
      uStack_108 = uStack_a0;
      uStack_120 = uStack_b8;
      uStack_128 = uStack_c0;
      uStack_110 = uStack_a8;
      uStack_118 = uStack_b0;
      ShopMonitor__RefreshProductElement_2462148(param_1,uStack_100,&uStack_130);
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

