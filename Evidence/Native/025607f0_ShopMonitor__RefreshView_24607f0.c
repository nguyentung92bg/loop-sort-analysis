/* IL2CPP: ShopMonitor$$RefreshView
void ShopMonitor__RefreshView (ShopMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Type propagation algorithm not settling */
/* IL2CPP: ShopMonitor$$RefreshView
   void ShopMonitor__RefreshView (ShopMonitor_o* __this, const MethodInfo* method); */

void ShopMonitor__RefreshView_24607f0(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  long alStack_178 [13];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  uint uStack_ec;
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
  undefined8 uStack_60;
  long lStack_58;
  
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x5f10e269,0);
  ShopMonitor__RefreshBundleElements_246082c(param_1);
  ShopMonitor__RefreshProductElements_2460a6c(param_1);
  ShopMonitor__UpdateGold_2460ca8(param_1);
  lVar3 = tpidr_el0;
  lStack_58 = *(long *)(lVar3 + 0x28);
  if ((bRam0000000004f4b94a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5058);
    FUN_021f03f8(PTR_DAT_049c5018);
    FUN_021f03f8(PTR_DAT_049c5020);
    FUN_021f03f8(PTR_DAT_049c5028);
    FUN_021f03f8(PTR_DAT_049c5030);
    bRam0000000004f4b94a = 1;
  }
  puVar7 = PTR_DAT_049c5058;
  puVar6 = PTR_DAT_049c5028;
  puVar5 = PTR_DAT_049c5020;
  puVar4 = PTR_DAT_049c5018;
  alStack_178[0] = 0;
  uStack_60 = 0;
  alStack_178[2] = 0;
  alStack_178[1] = 0;
  alStack_178[4] = 0;
  alStack_178[3] = 0;
  alStack_178[6] = 0;
  alStack_178[5] = 0;
  alStack_178[8] = 0;
  alStack_178[7] = 0;
  alStack_178[10] = 0;
  alStack_178[9] = 0;
  alStack_178[0xc] = 0;
  alStack_178[0xb] = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if ((*(long *)(param_1 + 0x98) == 0) ||
     (lVar9 = *(long *)(*(long *)(param_1 + 0x98) + 0x18), lVar9 == 0)) {
    if (*(long *)(lVar3 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lVar9,auStack_110,*(undefined8 *)PTR_DAT_049c5030);
    func_0x04608620(alStack_178 + 1,auStack_110,0x60);
    uVar14 = 0;
    while (uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (alStack_178 + 1,*(undefined8 *)puVar5), (uVar10 & 1) != 0) {
      lVar13 = *(long *)puVar6;
      lVar11 = *(long *)(lVar13 + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
      lVar9 = lVar11;
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_02229718();
        lVar11 = *(long *)(lVar13 + 0x20);
        uVar2 = *(ushort *)(lVar11 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      uVar12 = thunk_FUN_0224e54c(alStack_178 + 1,
                                  *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(auStack_110,uVar12,uVar1);
      uVar12 = uStack_108;
      if ((uStack_ec >> 2 & 1) != 0) {
        if (*(long *)(param_1 + 0x100) == 0) {
          if (*(long *)(lVar3 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          goto LAB_0256104c;
        }
        uVar10 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                           (*(long *)(param_1 + 0x100),uStack_108,alStack_178,*(undefined8 *)puVar7)
        ;
        if ((uVar10 & 1) != 0) {
          if (*(long *)(param_1 + 0xa0) == 0) {
            if (*(long *)(lVar3 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            goto LAB_0256104c;
          }
          PurchasingModule__GetProductMetadata_2549880
                    (auStack_110,*(long *)(param_1 + 0xa0),uVar12,0);
          func_0x04608620(&uStack_b0,auStack_110,0x58);
          uVar8 = ProductMetadata__get_IsPurchased_254b044(&uStack_b0,0);
          if (alStack_178[0] == 0) {
            if (*(long *)(lVar3 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            goto LAB_0256104c;
          }
          lVar9 = UnityEngine_Component__get_gameObject_3c187f4(alStack_178[0],0);
          if (lVar9 == 0) {
            if (*(long *)(lVar3 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            goto LAB_0256104c;
          }
          UnityEngine_GameObject__SetActive_3c1ce34(lVar9,(uVar8 ^ 1) & 1,0);
          uVar14 = uVar8 ^ 1 | uVar14;
        }
      }
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (alStack_178 + 1,*(undefined8 *)puVar4);
    if ((uVar14 & 1) != 0) {
      StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0xdbf7a871,0);
    }
    if (*(long *)(lVar3 + 0x28) == lStack_58) {
      return;
    }
  }
LAB_0256104c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

