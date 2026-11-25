/* IL2CPP: FulfillRewardMonitor$$GetCustomFulfillPayouts
System_Collections_Generic_List_FulfillPayout__o* FulfillRewardMonitor__GetCustomFulfillPayouts (FulfillRewardMonitor_o* __this, System_Collections_Generic_Dictionary_Item__FulfillPayout__o* fulfillPayouts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillRewardMonitor$$GetCustomFulfillPayouts
   System_Collections_Generic_List_FulfillPayout__o* FulfillRewardMonitor__GetCustomFulfillPayouts
   (FulfillRewardMonitor_o* __this, System_Collections_Generic_Dictionary_Item__FulfillPayout__o*
   fulfillPayouts, const MethodInfo* method); */

long FulfillRewardMonitor__GetCustomFulfillPayouts_2440bc4(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  int iStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar6 = PTR_DAT_049b5388;
  puVar5 = PTR_DAT_049b5380;
  if ((bRam0000000004f4b848 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4098);
    FUN_021f03f8(PTR_DAT_049c40a0);
    FUN_021f03f8(PTR_DAT_049c40a8);
    FUN_021f03f8(PTR_DAT_049c40b0);
    FUN_021f03f8(PTR_DAT_049c40b8);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c40c0);
    FUN_021f03f8(PTR_DAT_049b5390);
    FUN_021f03f8(PTR_DAT_049b5388);
    FUN_021f03f8(PTR_DAT_049c40c8);
    FUN_021f03f8(PTR_DAT_049c40d0);
    FUN_021f03f8(PTR_DAT_049b5380);
    bRam0000000004f4b848 = 1;
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d4 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar9,*(undefined8 *)puVar6);
  puVar8 = PTR_DAT_049c40c0;
  puVar7 = PTR_DAT_049c40b0;
  puVar6 = PTR_DAT_049c40a8;
  puVar5 = PTR_DAT_049b5390;
  if (param_2 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
              (param_2,&iStack_118,*(undefined8 *)PTR_DAT_049c4098);
    uStack_b0 = CONCAT44(uStack_114,iStack_118);
    uStack_a8 = uStack_110;
    uStack_98 = uStack_100;
    uStack_a0 = uStack_108;
    uStack_88 = uStack_f0;
    uStack_90 = uStack_f8;
    while (uVar10 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                              (&uStack_b0,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
      lVar15 = *(long *)puVar7;
      lVar11 = *(long *)(lVar15 + 0x20);
      uVar4 = *(ushort *)(lVar11 + 0x135);
      lVar12 = lVar11;
      if ((uVar4 & 1) == 0) {
        lVar12 = FUN_02229718();
        lVar11 = *(long *)(lVar15 + 0x20);
        uVar4 = *(ushort *)(lVar11 + 0x135);
      }
      uVar3 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
      if ((uVar4 & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      uVar13 = thunk_FUN_0224e54c(&uStack_b0,
                                  *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&iStack_118,uVar13,uVar3);
      uStack_d0 = CONCAT44(uStack_114,iStack_118);
      uStack_c8 = uStack_110;
      uStack_c0 = uStack_108;
      System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
                (&uStack_d0,&uStack_d4,&uStack_e8,*(undefined8 *)puVar8);
      uVar13 = uStack_e0;
      if ((int)uStack_e8 == 0x13) {
        uStack_e8 = 0xd;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uStack_80 = 0xb;
        uStack_78 = uStack_e0;
        FUN_02333498(lVar9,&uStack_80,*(undefined8 *)puVar5);
        uStack_80 = 10;
        uStack_78 = uVar13;
        FUN_02333498(lVar9,&uStack_80,*(undefined8 *)puVar5);
        uStack_80 = 0xc;
        uStack_78 = uVar13;
        FUN_02333498(lVar9,&uStack_80,*(undefined8 *)puVar5);
        uStack_80 = 0xd;
        uStack_78 = uVar13;
        FUN_02333498(lVar9,&uStack_80,*(undefined8 *)puVar5);
      }
      else {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uStack_80 = uStack_e8;
        uStack_78 = uStack_e0;
        FUN_02333498(lVar9,&uStack_80,*(undefined8 *)puVar5);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
              (&uStack_b0,*(undefined8 *)PTR_DAT_049c40a0);
    puVar7 = PTR_DAT_049c40d0;
    puVar6 = PTR_DAT_049c40b8;
    puVar5 = PTR_DAT_049b5480;
    if (lVar9 != 0) {
      if (0 < *(int *)(lVar9 + 0x18)) {
        iVar14 = 0;
        do {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar9,iVar14,&iStack_118,*(undefined8 *)puVar7);
          iVar1 = -1;
          if (iStack_118 == 2) {
            iVar1 = 1;
          }
          iVar2 = 0;
          if (iStack_118 != 1) {
            iVar2 = iVar1;
          }
          if ((-1 < iVar2) && (iVar2 < *(int *)(lVar9 + 0x18))) {
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              FUN_021f0574();
            }
            Extensions__Swap___Il2CppFullySharedGenericType__25f11bc
                      (lVar9,iVar14,iVar2,*(undefined8 *)puVar6);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < *(int *)(lVar9 + 0x18));
      }
      return lVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

