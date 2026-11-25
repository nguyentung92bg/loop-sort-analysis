/* IL2CPP: ShopMonitor$$RefreshBundleElements
void ShopMonitor__RefreshBundleElements (ShopMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$RefreshBundleElements
   void ShopMonitor__RefreshBundleElements (ShopMonitor_o* __this, const MethodInfo* method); */

void ShopMonitor__RefreshBundleElements_246082c(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f4b941 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5010);
    FUN_021f03f8(PTR_DAT_049c5018);
    FUN_021f03f8(PTR_DAT_049c5020);
    FUN_021f03f8(PTR_DAT_049c5028);
    FUN_021f03f8(PTR_DAT_049c5030);
    bRam0000000004f4b941 = 1;
  }
  puVar6 = PTR_DAT_049c5028;
  puVar5 = PTR_DAT_049c5020;
  puVar4 = PTR_DAT_049c5018;
  puVar3 = PTR_DAT_049c5010;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((*(long *)(param_1 + 0x98) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x98) + 0x18), lVar8 != 0)) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lVar8,&uStack_c0,*(undefined8 *)PTR_DAT_049c5030);
    uStack_110 = 0;
    puStack_108 = &uStack_c0;
    while( true ) {
      uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_c0,*(undefined8 *)puVar5);
      if ((uVar9 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_c0,*(undefined8 *)puVar4);
        return;
      }
      lVar12 = *(long *)puVar6;
      lVar10 = *(long *)(lVar12 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
      lVar8 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
        lVar10 = *(long *)(lVar12 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_02229718();
      }
      uVar11 = thunk_FUN_0224e54c(&uStack_c0,
                                  *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_160,uVar11,uVar1);
      uVar7 = uStack_158;
      uVar11 = uStack_160;
      uStack_f8 = uStack_148;
      uStack_100 = uStack_150;
      uStack_e8 = uStack_138;
      uStack_f0 = uStack_140;
      uStack_d8 = uStack_128;
      uStack_e0 = uStack_130;
      uStack_c8 = uStack_118;
      uStack_d0 = uStack_120;
      if (*(long *)(param_1 + 0x100) == 0) break;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (*(long *)(param_1 + 0x100),uStack_158,&uStack_160,*(undefined8 *)puVar3);
      uStack_1b0 = uVar11;
      uStack_1a8 = uVar7;
      uStack_198 = uStack_f8;
      uStack_1a0 = uStack_100;
      uStack_188 = uStack_e8;
      uStack_190 = uStack_f0;
      uStack_178 = uStack_d8;
      uStack_180 = uStack_e0;
      uStack_168 = uStack_c8;
      uStack_170 = uStack_d0;
      ShopMonitor__RefreshBundleElement_246129c(param_1,uStack_160,&uStack_1b0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

