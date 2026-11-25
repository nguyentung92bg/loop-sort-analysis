/* IL2CPP: VoodooPurchasingProvider$$StartRestorePurchases
void VoodooPurchasingProvider__StartRestorePurchases (VoodooPurchasingProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooPurchasingProvider$$StartRestorePurchases
   void VoodooPurchasingProvider__StartRestorePurchases (VoodooPurchasingProvider_o* __this, const
   MethodInfo* method); */

void VoodooPurchasingProvider__StartRestorePurchases_2253b54(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  undefined8 uStack_30;
  int iStack_28;
  uint uStack_24;
  
  puVar3 = PTR_DAT_049b5670;
  if ((bRam0000000004f49ba8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6170);
    FUN_021f03f8(PTR_DAT_049b5378);
    FUN_021f03f8(PTR_DAT_049b60c0);
    FUN_021f03f8(PTR_DAT_049b60d8);
    FUN_021f03f8(PTR_DAT_049b6178);
    FUN_021f03f8(PTR_DAT_049b5670);
    FUN_021f03f8(PTR_DAT_049b60e8);
    bRam0000000004f49ba8 = 1;
  }
  uStack_30 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar4 = VoodooSauce__GetIAPStatus_4378b44(0);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x10) == 4) {
      lVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b6170);
      System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_27af730
                (lVar4,param_1,*(undefined8 *)PTR_DAT_049b6178,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      puVar3 = PTR_DAT_049b5670;
      uVar8 = 0;
      if ((bRam0000000004f5f49a & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b5670,0);
        bRam0000000004f5f49a = 1;
        uVar8 = extraout_x1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
        uVar8 = extraout_x1_00;
      }
      if (cRam0000000004f5f5b5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b6458,uVar8);
        cRam0000000004f5f5b5 = '\x01';
      }
      puVar3 = PTR_DAT_049b6458;
      lVar7 = *(long *)PTR_DAT_049b6458;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_021f0574();
        lVar7 = *(long *)puVar3;
      }
      if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar7 = Voodoo_Sauce_IAP_VoodooPurchasing__get_PurchasingManager_3f52ca0(lVar4,0,0);
      puVar3 = PTR_DAT_04a3b980;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if ((bRam0000000004f5c60a & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b6170,lVar4,0);
        FUN_021f03f8(PTR_DAT_049b3c58);
        FUN_021f03f8(PTR_DAT_04a3b960);
        FUN_021f03f8(PTR_DAT_04a3b988);
        FUN_021f03f8(PTR_DAT_04a3b980);
        FUN_021f03f8(PTR_DAT_04a3b990);
        FUN_021f03f8(PTR_DAT_04a3b970);
        FUN_021f03f8(PTR_DAT_04a3b998);
        bRam0000000004f5c60a = 1;
      }
      lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
      System_Object___ctor_3142338(lVar5,0);
      if (lVar5 != 0) {
        plVar12 = (long *)(lVar5 + 0x10);
        *plVar12 = lVar4;
        thunk_FUN_021f190c(plVar12,lVar4);
        lVar4 = Voodoo_Sauce_IAP_PurchasingManager__get_StatusDefault_3f460a8(lVar7);
        if (lVar4 != 0) {
          iStack_28 = *(int *)(lVar4 + 0x10);
          if (iStack_28 != 4) {
            uVar8 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_04a3b960,&iStack_28);
            uVar8 = System_String__Format_2f7dfac
                              (*(undefined8 *)PTR_DAT_04a3b990,*(undefined8 *)PTR_DAT_04a3b970,uVar8
                               ,0);
            if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
              FUN_021f0574(*(long *)PTR_DAT_049b3c58);
            }
            UnityEngine_Debug__LogWarning_3bcf90c(uVar8,0);
            lVar4 = *plVar12;
            if (lVar4 != 0) {
              uStack_24 = uStack_24 & 0xffffff00;
              (**(code **)(lVar4 + 0x18))
                        (*(undefined8 *)(lVar4 + 0x40),&uStack_24,*(undefined8 *)PTR_DAT_04a3b998,
                         *(undefined8 *)(lVar4 + 0x28));
            }
            return;
          }
          lVar4 = *(long *)(lVar7 + 0x48);
          uVar8 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b6170);
          System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_27af730
                    (uVar8,lVar5,*(undefined8 *)PTR_DAT_04a3b988,0);
          if (lVar4 != 0) {
            lVar4 = Voodoo_Sauce_IAP_PurchaseServiceHandler__GetService_3f4c7b4(lVar4,0);
            if (lVar4 == 0) {
              return;
            }
            if ((bRam0000000004f5c645 & 1) == 0) {
              FUN_021f03f8(PTR_DAT_04a1bdb0);
              bRam0000000004f5c645 = 1;
            }
            plVar12 = *(long **)(lVar4 + 0x10);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar4 = *plVar12;
            uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04a1bdb0) {
                  puVar6 = (undefined8 *)(lVar4 + (long)(*piVar10 + 7) * 0x10 + 0x138);
                  goto LAB_0404cbe8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_04a1bdb0,7);
LAB_0404cbe8:
                    /* WARNING: Could not recover jumptable at 0x0404cbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar6)(plVar12,uVar8,puVar6[1]);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar12 = *(long **)(param_1 + 0x40);
    uStack_30 = 0;
    lVar11 = *(long *)PTR_DAT_049b60c0;
    lVar5 = *(long *)(lVar11 + 0x20);
    uVar2 = *(ushort *)(lVar5 + 0x135);
    lVar7 = lVar5;
    if ((uVar2 & 1) == 0) {
      lVar5 = FUN_02229718(lVar5);
      lVar7 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
    }
    uVar1 = *(undefined4 *)(**(long **)(lVar5 + 0xc0) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_02229718(lVar7);
    }
    uVar8 = thunk_FUN_0224e54c(lVar4 + 0x14,
                               *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x20);
    func_0x04608620(&uStack_24,uVar8,uVar1);
                    /* try { // try from 02353ce8 to 02453d53 has its CatchHandler @ 02353ce8
                       catch() { ... } // from try @ 02353ce8 with catch @ 02353ce8
                       catch() { ... } // from try @ 02353d5c with catch @ 02353ce8
                       catch() { ... } // from try @ 02353de0 with catch @ 02353ce8 */
    uVar8 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049b60d8,&uStack_24);
    uStack_30 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049b60e8,uVar8,0);
    thunk_FUN_021f190c(&uStack_30,uStack_30);
    uVar8 = uStack_30;
    if (plVar12 != (long *)0x0) {
      lVar4 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
                    /* try { // try from 02353d54 to 02453d5b has its CatchHandler @ 02353e20 */
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b5378) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02353d84;
          }
                    /* try { // try from 02353d5c to 02453d8b has its CatchHandler @ 02353ce8 */
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049b5378,0);
LAB_02353d84:
                    /* try { // try from 02353d8c to 02453ddf has its CatchHandler @ 02353e24 */
      (*(code *)*puVar6)(plVar12,0,uVar8,puVar6[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

