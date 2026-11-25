/* IL2CPP: VoodooPurchasingProvider$$StartPurchase
void VoodooPurchasingProvider__StartPurchase (VoodooPurchasingProvider_o* __this, PurchaseRequest_o request, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooPurchasingProvider$$StartPurchase
   void VoodooPurchasingProvider__StartPurchase (VoodooPurchasingProvider_o* __this,
   PurchaseRequest_o request, const MethodInfo* method); */

void VoodooPurchasingProvider__StartPurchase_2252dbc(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  undefined8 uVar20;
  code *pcVar21;
  long lVar22;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  double dStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [72];
  undefined1 auStack_268 [72];
  undefined1 auStack_220 [104];
  undefined1 auStack_1b8 [104];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  double dStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  long lStack_78;
  
  puVar4 = PTR_DAT_049b5670;
  lVar17 = tpidr_el0;
  lStack_78 = *(long *)(lVar17 + 0x28);
  if ((bRam0000000004f49ba7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6090);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b6098);
    FUN_021f03f8(PTR_DAT_049b60a0);
    FUN_021f03f8(PTR_DAT_049b60a8);
    FUN_021f03f8(PTR_DAT_049b5370);
    FUN_021f03f8(PTR_DAT_049b5298);
    FUN_021f03f8(PTR_DAT_049b60b0);
    FUN_021f03f8(PTR_DAT_049b60b8);
    FUN_021f03f8(PTR_DAT_049b60c0);
    FUN_021f03f8(PTR_DAT_049b60c8);
    FUN_021f03f8(PTR_DAT_049b60d0);
    FUN_021f03f8(PTR_DAT_049b60d8);
    FUN_021f03f8(PTR_DAT_049b5670);
    FUN_021f03f8(PTR_DAT_049b60e0);
    FUN_021f03f8(PTR_DAT_049b60e8);
    bRam0000000004f49ba7 = 1;
  }
  uStack_f0 = 0;
  dStack_2c8 = 0.0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar10 = VoodooSauce__GetIAPStatus_4378b44(0);
  if (lVar10 == 0) {
LAB_02353498:
    lVar17 = *(long *)(lVar17 + 0x28);
  }
  else {
    if (*(int *)(lVar10 + 0x10) != 4) {
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      plVar19 = *(long **)(param_1 + 0x38);
      uStack_f8 = 0;
      uStack_100 = 0;
      lVar22 = *(long *)PTR_DAT_049b60c0;
      uStack_f0 = 0;
      uStack_148 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      lVar13 = *(long *)(lVar22 + 0x20);
      uStack_150 = 2;
      uVar3 = *(ushort *)(lVar13 + 0x135);
      lVar11 = lVar13;
      if ((uVar3 & 1) == 0) {
        lVar13 = FUN_02229718(lVar13);
        lVar11 = *(long *)(lVar22 + 0x20);
        uVar3 = *(ushort *)(lVar11 + 0x135);
      }
      uVar2 = *(undefined4 *)(**(long **)(lVar13 + 0xc0) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar11 = FUN_02229718(lVar11);
      }
      uVar20 = thunk_FUN_0224e54c(lVar10 + 0x14,
                                  *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x20);
      func_0x04608620(&uStack_e0,uVar20,uVar2);
                    /* try { // try from 02353220 to 024533b7 has its CatchHandler @ 02352fb8 */
      uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(undefined4)uStack_e0);
      uVar20 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049b60d8,&uStack_2e0);
      uStack_148 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049b60e8,uVar20,0);
      thunk_FUN_021f190c((ulong)&uStack_150 | 8,uStack_148);
      func_0x04608620(&uStack_140,param_2,0x48);
      thunk_FUN_021f190c(&uStack_140,0);
      if (plVar19 != (long *)0x0) {
        lVar11 = *(long *)PTR_DAT_049b5370;
        func_0x04608620(auStack_1b8,&uStack_150,0x68);
        lVar10 = *plVar19;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar11) {
              puVar15 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_023533f4;
            }
            uVar12 = uVar12 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar12 != 0);
        }
        puVar15 = (undefined8 *)FUN_02229a4c(plVar19,lVar11,0);
LAB_023533f4:
        pcVar21 = (code *)*puVar15;
        puVar16 = auStack_1b8;
LAB_0235341c:
        func_0x04608620(&uStack_e0,puVar16,0x68);
        (*pcVar21)(plVar19,&uStack_e0,puVar15[1]);
LAB_02353434:
        if (*(long *)(lVar17 + 0x28) == lStack_78) {
          return;
        }
        goto LAB_0235354c;
      }
      goto LAB_02353498;
    }
    uVar20 = *param_2;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar10 = VoodooSauce__GetProduct_437936c(uVar20,0);
    puVar4 = PTR_DAT_049b60e0;
    uVar20 = *param_2;
    if (lVar10 == 0) {
      uVar20 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049b60e0,uVar20,0);
      if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b3c58);
      }
      UnityEngine_Debug__LogError_3bd1230(uVar20,0);
      plVar19 = *(long **)(param_1 + 0x38);
      uStack_f0 = 0;
      uStack_148 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_150 = 2;
      uStack_148 = System_String__Concat_2f72b28(*(undefined8 *)puVar4,*param_2,0);
      thunk_FUN_021f190c((ulong)&uStack_150 | 8,uStack_148);
      func_0x04608620(&uStack_140,param_2,0x48);
      thunk_FUN_021f190c(&uStack_140,0);
      if (plVar19 != (long *)0x0) {
                    /* catch() { ... } // from try @ 023531b4 with catch @ 0235339c */
        lVar11 = *(long *)PTR_DAT_049b5370;
        func_0x04608620(auStack_220,&uStack_150,0x68);
        lVar10 = *plVar19;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar11) {
              puVar15 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_02353410;
            }
            uVar12 = uVar12 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar12 != 0);
        }
        puVar15 = (undefined8 *)FUN_02229a4c(plVar19,lVar11,0);
LAB_02353410:
        pcVar21 = (code *)*puVar15;
        puVar16 = auStack_220;
        goto LAB_0235341c;
      }
      goto LAB_02353498;
    }
    lVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b6090);
    Voodoo_Sauce_IAP_Bundle___ctor_3f35650(lVar10,uVar20,0);
    func_0x04608620(auStack_268,param_2,0x48);
    lVar11 = VoodooPurchasingProvider__CreatePayouts_2253554(param_1,auStack_268);
    if (lVar11 != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (lVar11,&uStack_e0,*(undefined8 *)PTR_DAT_049b60b8);
      puVar8 = PTR_DAT_049b60d0;
      puVar7 = PTR_DAT_049b60b0;
      puVar6 = PTR_DAT_049b60a8;
      puVar5 = PTR_DAT_049b60a0;
      puVar4 = PTR_DAT_049b5298;
      uStack_2c0 = CONCAT44(uStack_cc,uStack_d0);
      puStack_2d8 = &uStack_2d0;
                    /* try { // try from 02352fb8 to 024531b3 has its CatchHandler @ 02352fb8
                       catch() { ... } // from try @ 02352fb8 with catch @ 02352fb8
                       catch() { ... } // from try @ 02353220 with catch @ 02352fb8 */
      dStack_2c8 = dStack_d8;
      uStack_2d0 = uStack_e0;
      uStack_2b8 = uStack_c8;
      uStack_2e0 = 0;
      while (uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (&uStack_2d0,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
        lVar22 = *(long *)puVar6;
        lVar13 = *(long *)(lVar22 + 0x20);
        uVar3 = *(ushort *)(lVar13 + 0x135);
        lVar11 = lVar13;
        if ((uVar3 & 1) == 0) {
          lVar11 = FUN_02229718();
          lVar13 = *(long *)(lVar22 + 0x20);
          uVar3 = *(ushort *)(lVar13 + 0x135);
        }
        uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
        if ((uVar3 & 1) == 0) {
          lVar13 = FUN_02229718();
        }
        uVar20 = thunk_FUN_0224e54c(&uStack_2d0,
                                    *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&uStack_e0,uVar20,uVar2);
        dVar9 = dStack_d8;
        dStack_d8 = -NAN;
        uStack_d0 = (undefined4)uStack_e0;
        uStack_e0 = *(undefined8 *)puVar4;
        uVar20 = System_Enum__ToString_3135e00(&uStack_e0,0);
        uVar14 = thunk_FUN_0222ca34(*(undefined8 *)puVar8);
        iVar1 = -0x80000000;
        if (dVar9 != INFINITY) {
          iVar1 = (int)dVar9;
        }
        Voodoo_Sauce_IAP_Reward___ctor_3f35a54(uVar14,uVar20,iVar1,0,0);
        if (lVar10 == 0) {
          if (*(long *)(lVar17 + 0x28) == lStack_78) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          goto LAB_0235354c;
        }
        if (*(long *)(lVar10 + 0x20) == 0) {
          if (*(long *)(lVar17 + 0x28) == lStack_78) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          goto LAB_0235354c;
        }
        FUN_02333498(*(long *)(lVar10 + 0x20),uVar14,*(undefined8 *)puVar7);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_2d0,*(undefined8 *)PTR_DAT_049b6098);
      func_0x04608620(auStack_2b0,param_2,0x48);
      uVar20 = VoodooPurchasingProvider__GetPurchaseContextProperties_2253620(param_1,auStack_2b0);
      puVar4 = PTR_DAT_049b5670;
      if (lVar10 == 0) goto LAB_02353498;
      *(undefined8 *)(lVar10 + 0x58) = uVar20;
      thunk_FUN_021f190c();
      if (*(int *)(*(long *)PTR_DAT_049b60c8 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar20 = PurchaseRequest__ToJson_254ab5c(param_2,0);
      *(undefined8 *)(lVar10 + 0x40) = uVar20;
      thunk_FUN_021f190c();
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    /* try { // try from 023531b4 to 0245321f has its CatchHandler @ 0235339c */
        FUN_021f0574();
      }
      VoodooSauce__Purchase_4378fe0(lVar10,0,0);
      goto LAB_02353434;
    }
    lVar17 = *(long *)(lVar17 + 0x28);
  }
  if (lVar17 == lStack_78) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_0235354c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

