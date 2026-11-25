/* IL2CPP: GarageSaleSubMonitor.<>c__DisplayClass12_0$$<CreateProgressElement>b__0
void GarageSaleSubMonitor___c__DisplayClass12_0___CreateProgressElement_b__0 (GarageSaleSubMonitor___c__DisplayClass12_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GarageSaleSubMonitor.<>c__DisplayClass12_0$$<CreateProgressElement>b__0
   void GarageSaleSubMonitor___c__DisplayClass12_0___CreateProgressElement_b__0
   (GarageSaleSubMonitor___c__DisplayClass12_0_o* __this, const MethodInfo* method); */

void GarageSaleSubMonitor___c__DisplayClass12_0___CreateProgressElement_b__0_2477eb4(long param_1)

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
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
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
  
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar14 = *(long *)(param_1 + 0x18);
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
  if (lVar14 != 0) {
    if (*(int *)(lVar14 + 0x20) < 1) {
      lVar15 = *(long *)(lVar15 + 0x40);
      if (lVar15 != 0) {
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
        lVar14 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
        System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                  (lVar14,*(undefined8 *)puVar4);
        if (*(long *)(lVar15 + 0x10) != 0) {
          uStack_98 = *(undefined8 *)(lVar15 + 0x38);
          uStack_a0 = *(undefined8 *)(lVar15 + 0x30);
          uStack_88 = *(undefined8 *)(lVar15 + 0x48);
          uStack_90 = *(undefined8 *)(lVar15 + 0x40);
          lVar10 = *(long *)(*(long *)(lVar15 + 0x10) + 0xc0);
          iVar9 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_a0,0);
          if (lVar10 != 0) {
            pdStack_b8 = (double *)CONCAT44(pdStack_b8._4_4_,iVar9 + 1);
            lVar10 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                               (lVar10,&pdStack_b8,*(undefined8 *)PTR_DAT_049c57b8);
            if ((lVar10 != 0) &&
               (lVar12 = GarageSaleSheet_Row__GetPayouts_2560104(lVar10,0),
               puVar8 = PTR_DAT_049c59c8, puVar7 = PTR_DAT_049b6350, puVar6 = PTR_DAT_049b6348,
               puVar5 = PTR_DAT_049b6330, puVar4 = PTR_DAT_049b61d0, puVar3 = PTR_DAT_049b5390,
               lVar12 != 0)) {
              System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                        (lVar12,&pdStack_b8,*(undefined8 *)PTR_DAT_049b6370);
              uStack_70 = uStack_a8;
              dStack_78 = dStack_b0;
              pdStack_80 = pdStack_b8;
              while (uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                        (&pdStack_80,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
                lVar17 = *(long *)puVar7;
                lVar16 = *(long *)(lVar17 + 0x20);
                uVar2 = *(ushort *)(lVar16 + 0x135);
                lVar12 = lVar16;
                if ((uVar2 & 1) == 0) {
                  lVar12 = FUN_02229718();
                  lVar16 = *(long *)(lVar17 + 0x20);
                  uVar2 = *(ushort *)(lVar16 + 0x135);
                }
                uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
                if ((uVar2 & 1) == 0) {
                  lVar16 = FUN_02229718();
                }
                uVar13 = thunk_FUN_0224e54c(&pdStack_80,
                                            *(long *)(*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80
                                                     ) + 0x60);
                func_0x04608620(&pdStack_b8,uVar13,uVar1);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                pdVar18 = (double *)((ulong)pdStack_b8 & 0xffffffff);
                dVar19 = (double)(int)((ulong)pdStack_b8 >> 0x20);
                pdStack_b8 = pdVar18;
                dStack_b0 = dVar19;
                FUN_02333498(lVar14,&pdStack_b8,*(undefined8 *)puVar3);
                if (*(int *)(lVar10 + 0x20) < 1) {
                  if (*(long *)(lVar15 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  FulfillModule__FulfillFreePayout_254358c
                            (*(long *)(lVar15 + 0x20),pdVar18,dVar19,*(undefined8 *)puVar4,0);
                }
              }
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                        (&pdStack_80,*(undefined8 *)puVar5);
              iVar9 = CloudPrefsInt__get_Value_24e99c0(lVar15 + 0x30,0);
              CloudPrefsInt__set_Value_24e9a2c(lVar15 + 0x30,iVar9 + 1,0);
              if (*(long *)(lVar15 + 0x28) != 0) {
                uVar11 = Monitors__IsActive_object__2688ab4
                                   (*(long *)(lVar15 + 0x28),*(undefined8 *)puVar8);
                if ((uVar11 & 1) != 0) {
                  if (((*(long *)(lVar15 + 0x28) == 0) ||
                      (lVar15 = Monitors__Get_object__26889d0
                                          (*(long *)(lVar15 + 0x28),*(undefined8 *)PTR_DAT_049c9160)
                      , lVar15 == 0)) ||
                     (lVar15 = MonitorBase__GetSubMonitor_object__2688828
                                         (lVar15,*(undefined8 *)PTR_DAT_049c9420), lVar15 == 0))
                  goto LAB_026181b0;
                  GarageSaleSubMonitor__HandleBuyNextProgress_2477b3c(lVar15,lVar14,0);
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
    else if (*(long *)(lVar15 + 0x78) != 0) {
      uStack_88 = CONCAT44(uStack_88._4_4_,*(int *)(lVar14 + 0x20));
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (*(long *)(lVar15 + 0x78),&uStack_88,&stack0xffffffffffffffa0,
                 *(undefined8 *)PTR_DAT_049c57d0);
      lVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
      System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                (lVar10,*(undefined8 *)puVar4);
      lVar14 = GarageSaleSheet_Row__GetPayouts_2560104(lVar14,0);
      puVar7 = PTR_DAT_049b6350;
      puVar6 = PTR_DAT_049b6348;
      puVar5 = PTR_DAT_049b6330;
      puVar4 = PTR_DAT_049b61d0;
      puVar3 = PTR_DAT_049b5390;
      if (lVar14 != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (lVar14,&dStack_78,*(undefined8 *)PTR_DAT_049b6370);
        uStack_88 = 0;
        pdStack_80 = &dStack_78;
        while (uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                  (&dStack_78,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
          lVar16 = *(long *)puVar7;
          lVar12 = *(long *)(lVar16 + 0x20);
          uVar2 = *(ushort *)(lVar12 + 0x135);
          lVar14 = lVar12;
          if ((uVar2 & 1) == 0) {
            lVar14 = FUN_02229718();
            lVar12 = *(long *)(lVar16 + 0x20);
            uVar2 = *(ushort *)(lVar12 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar12 = FUN_02229718();
          }
          uVar13 = thunk_FUN_0224e54c(&dStack_78,
                                      *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&stack0xffffffffffffffa0,uVar13,uVar1);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          FUN_02333498(lVar10,&stack0xffffffffffffffa0,*(undefined8 *)puVar3);
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&dStack_78,*(undefined8 *)puVar5);
        if (*(long *)(lVar15 + 0x58) != 0) {
          PurchasingModule__StartPurchase_2549728
                    (*(long *)(lVar15 + 0x58),in_stack_ffffffffffffffa0,*(undefined8 *)puVar4,0x14,
                     lVar10,*(undefined8 *)(lVar15 + 0x30),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

