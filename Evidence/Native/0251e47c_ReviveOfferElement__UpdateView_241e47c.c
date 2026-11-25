/* IL2CPP: ReviveOfferElement$$UpdateView
void ReviveOfferElement__UpdateView (ReviveOfferElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveOfferElement$$UpdateView
   void ReviveOfferElement__UpdateView (ReviveOfferElement_o* __this, const MethodInfo* method); */

void ReviveOfferElement__UpdateView_241e47c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_f0;
  double dStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_78;
  
  lVar4 = tpidr_el0;
  lStack_78 = *(long *)(lVar4 + 0x28);
  if ((bRam0000000004f4b76e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6098);
    FUN_021f03f8(PTR_DAT_049b60a0);
    FUN_021f03f8(PTR_DAT_049b60a8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b60b8);
    bRam0000000004f4b76e = 1;
  }
  dStack_e8 = 0.0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    PurchasingModule__GetProductMetadata_2549880
              (&uStack_d0,*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
              (param_1,0x8bf4b3bd,uStack_a8,0);
    puVar8 = PTR_DAT_049b6110;
    puVar7 = PTR_DAT_049b60a8;
    puVar6 = PTR_DAT_049b60a0;
    puVar5 = PTR_DAT_049b6098;
    if (lStack_a0 != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (lStack_a0,&uStack_d0,*(undefined8 *)PTR_DAT_049b60b8);
      uStack_f0 = CONCAT44(uStack_cc,uStack_d0);
      dStack_e8 = dStack_c8;
      uStack_d8 = uStack_b8;
      uStack_e0 = uStack_c0;
      while (uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (&uStack_f0,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
        lVar15 = *(long *)puVar7;
        lVar12 = *(long *)(lVar15 + 0x20);
        uVar3 = *(ushort *)(lVar12 + 0x135);
        lVar13 = lVar12;
        if ((uVar3 & 1) == 0) {
          lVar13 = FUN_02229718();
          lVar12 = *(long *)(lVar15 + 0x20);
          uVar3 = *(ushort *)(lVar12 + 0x135);
        }
        uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
        if ((uVar3 & 1) == 0) {
          lVar12 = FUN_02229718();
        }
        uVar14 = thunk_FUN_0224e54c(&uStack_f0,
                                    *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&uStack_d0,uVar14,uVar2);
        dVar9 = dStack_c8;
        uVar2 = uStack_d0;
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          FUN_021f0574();
        }
        iVar10 = Extensions__ToTextRole_24e6ac0(uVar2,0);
        if (iVar10 != 0) {
          if (*(long *)(param_1 + 0x40) == 0) {
            if (*(long *)(lVar4 + 0x28) == lStack_78) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            goto LAB_0251e758;
          }
          iVar1 = -0x80000000;
          if (dVar9 != INFINITY) {
            iVar1 = (int)dVar9;
          }
          uVar14 = Shop__FormatItemQuantity_257016c(*(long *)(param_1 + 0x40),uVar2,iVar1,0);
          StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                    (param_1,iVar10,uVar14,0);
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_f0,*(undefined8 *)puVar5);
      if (*(long *)(lVar4 + 0x28) == lStack_78) {
        return;
      }
      goto LAB_0251e758;
    }
  }
  if (*(long *)(lVar4 + 0x28) == lStack_78) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_0251e758:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

