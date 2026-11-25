/* IL2CPP: GarageSaleSubMonitor$$OnBuyClicked
void GarageSaleSubMonitor__OnBuyClicked (GarageSaleSubMonitor_o* __this, GarageSaleSheet_Row_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GarageSaleSubMonitor$$OnBuyClicked
   void GarageSaleSubMonitor__OnBuyClicked (GarageSaleSubMonitor_o* __this, GarageSaleSheet_Row_o*
   data, const MethodInfo* method); */

void GarageSaleSubMonitor__OnBuyClicked_2477860(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  double *pdVar18;
  double dVar19;
  double *pdStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double *pdStack_80;
  double dStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 in_stack_ffffffffffffffa0;
  
  if ((bRam0000000004f4b9d0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c57d0);
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049b5390);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049b5388);
    FUN_021f03f8(PTR_DAT_049b5380);
    FUN_021f03f8(PTR_DAT_049b61d0);
    bRam0000000004f4b9d0 = 1;
  }
  puVar4 = PTR_DAT_049b5388;
  puVar3 = PTR_DAT_049b5380;
  dStack_78 = 0.0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x20) < 1) {
      lVar10 = *(long *)(param_1 + 0x40);
      if (lVar10 != 0) {
        if ((bRam0000000004f4be2b & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049b6330,0);
          FUN_021f03f8(PTR_DAT_049b6348);
          FUN_021f03f8(PTR_DAT_049b6350);
          FUN_021f03f8(PTR_DAT_049b5390);
          FUN_021f03f8(PTR_DAT_049b6370);
          FUN_021f03f8(PTR_DAT_049b5388);
          FUN_021f03f8(PTR_DAT_049b5380);
          FUN_021f03f8(PTR_DAT_049c9420);
          FUN_021f03f8(PTR_DAT_049c9160);
          FUN_021f03f8(PTR_DAT_049c59c8);
          FUN_021f03f8(PTR_DAT_049c57b8);
          FUN_021f03f8(PTR_DAT_049b61d0);
          bRam0000000004f4be2b = 1;
        }
        pdStack_80 = (double *)0x0;
        dStack_78 = 0.0;
        uStack_70 = 0;
        lVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
        System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                  (lVar11,*(undefined8 *)puVar4);
        if (*(long *)(lVar10 + 0x10) != 0) {
          uStack_98 = *(undefined8 *)(lVar10 + 0x38);
          uStack_a0 = *(undefined8 *)(lVar10 + 0x30);
          uStack_88 = *(undefined8 *)(lVar10 + 0x48);
          uStack_90 = *(undefined8 *)(lVar10 + 0x40);
          lVar13 = *(long *)(*(long *)(lVar10 + 0x10) + 0xc0);
          iVar9 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_a0,0);
          if (lVar13 != 0) {
            pdStack_b8 = (double *)CONCAT44(pdStack_b8._4_4_,iVar9 + 1);
            lVar13 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                               (lVar13,&pdStack_b8,*(undefined8 *)PTR_DAT_049c57b8);
            if ((lVar13 != 0) &&
               (lVar16 = GarageSaleSheet_Row__GetPayouts_2560104(lVar13,0),
               puVar8 = PTR_DAT_049c59c8, puVar7 = PTR_DAT_049b6350, puVar6 = PTR_DAT_049b6348,
               puVar5 = PTR_DAT_049b6330, puVar4 = PTR_DAT_049b61d0, puVar3 = PTR_DAT_049b5390,
               lVar16 != 0)) {
              System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                        (lVar16,&pdStack_b8,*(undefined8 *)PTR_DAT_049b6370);
              uStack_70 = uStack_a8;
              dStack_78 = dStack_b0;
              pdStack_80 = pdStack_b8;
              while (uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                        (&pdStack_80,*(undefined8 *)puVar6), (uVar12 & 1) != 0) {
                lVar17 = *(long *)puVar7;
                lVar15 = *(long *)(lVar17 + 0x20);
                uVar2 = *(ushort *)(lVar15 + 0x135);
                lVar16 = lVar15;
                if ((uVar2 & 1) == 0) {
                  lVar16 = FUN_02229718();
                  lVar15 = *(long *)(lVar17 + 0x20);
                  uVar2 = *(ushort *)(lVar15 + 0x135);
                }
                uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc);
                if ((uVar2 & 1) == 0) {
                  lVar15 = FUN_02229718();
                }
                uVar14 = thunk_FUN_0224e54c(&pdStack_80,
                                            *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80
                                                     ) + 0x60);
                func_0x04608620(&pdStack_b8,uVar14,uVar1);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                pdVar18 = (double *)((ulong)pdStack_b8 & 0xffffffff);
                dVar19 = (double)(int)((ulong)pdStack_b8 >> 0x20);
                pdStack_b8 = pdVar18;
                dStack_b0 = dVar19;
                FUN_02333498(lVar11,&pdStack_b8,*(undefined8 *)puVar3);
                if (*(int *)(lVar13 + 0x20) < 1) {
                  if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  FulfillModule__FulfillFreePayout_254358c
                            (*(long *)(lVar10 + 0x20),pdVar18,dVar19,*(undefined8 *)puVar4,0);
                }
              }
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                        (&pdStack_80,*(undefined8 *)puVar5);
              iVar9 = CloudPrefsInt__get_Value_24e99c0(lVar10 + 0x30,0);
              CloudPrefsInt__set_Value_24e9a2c(lVar10 + 0x30,iVar9 + 1,0);
              if (*(long *)(lVar10 + 0x28) != 0) {
                uVar12 = Monitors__IsActive_object__2688ab4
                                   (*(long *)(lVar10 + 0x28),*(undefined8 *)puVar8);
                if ((uVar12 & 1) != 0) {
                  if (((*(long *)(lVar10 + 0x28) == 0) ||
                      (lVar10 = Monitors__Get_object__26889d0
                                          (*(long *)(lVar10 + 0x28),*(undefined8 *)PTR_DAT_049c9160)
                      , lVar10 == 0)) ||
                     (lVar10 = MonitorBase__GetSubMonitor_object__2688828
                                         (lVar10,*(undefined8 *)PTR_DAT_049c9420), lVar10 == 0))
                  goto LAB_026181b0;
                  GarageSaleSubMonitor__HandleBuyNextProgress_2477b3c(lVar10,lVar11,0);
                }
                return;
              }
            }
          }
        }
LAB_026181b0:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
    else if (*(long *)(param_1 + 0x78) != 0) {
      uStack_88 = CONCAT44(uStack_88._4_4_,*(int *)(param_2 + 0x20));
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (*(long *)(param_1 + 0x78),&uStack_88,&stack0xffffffffffffffa0,
                 *(undefined8 *)PTR_DAT_049c57d0);
      lVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
      System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                (lVar10,*(undefined8 *)puVar4);
      lVar11 = GarageSaleSheet_Row__GetPayouts_2560104(param_2,0);
      puVar7 = PTR_DAT_049b6350;
      puVar6 = PTR_DAT_049b6348;
      puVar5 = PTR_DAT_049b6330;
      puVar4 = PTR_DAT_049b61d0;
      puVar3 = PTR_DAT_049b5390;
      if (lVar11 != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (lVar11,&dStack_78,*(undefined8 *)PTR_DAT_049b6370);
        uStack_88 = 0;
        pdStack_80 = &dStack_78;
        while (uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                  (&dStack_78,*(undefined8 *)puVar6), (uVar12 & 1) != 0) {
          lVar16 = *(long *)puVar7;
          lVar13 = *(long *)(lVar16 + 0x20);
          uVar2 = *(ushort *)(lVar13 + 0x135);
          lVar11 = lVar13;
          if ((uVar2 & 1) == 0) {
            lVar11 = FUN_02229718();
            lVar13 = *(long *)(lVar16 + 0x20);
            uVar2 = *(ushort *)(lVar13 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar13 = FUN_02229718();
          }
          uVar14 = thunk_FUN_0224e54c(&dStack_78,
                                      *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&stack0xffffffffffffffa0,uVar14,uVar1);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          FUN_02333498(lVar10,&stack0xffffffffffffffa0,*(undefined8 *)puVar3);
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&dStack_78,*(undefined8 *)puVar5);
        if (*(long *)(param_1 + 0x58) != 0) {
          PurchasingModule__StartPurchase_2549728
                    (*(long *)(param_1 + 0x58),in_stack_ffffffffffffffa0,*(undefined8 *)puVar4,0x14,
                     lVar10,*(undefined8 *)(param_1 + 0x30),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

