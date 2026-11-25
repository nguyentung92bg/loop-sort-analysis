/* IL2CPP: CoinRushSubMonitor$$Setup
void CoinRushSubMonitor__Setup (CoinRushSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRushSubMonitor$$Setup
   void CoinRushSubMonitor__Setup (CoinRushSubMonitor_o* __this, const MethodInfo* method); */

void CoinRushSubMonitor__Setup_247043c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_a4;
  long alStack_a0 [5];
  undefined8 uStack_78;
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  if ((bRam0000000004f4b9a0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049c5580);
    FUN_021f03f8(PTR_DAT_049c5588);
    FUN_021f03f8(PTR_DAT_049c5590);
    FUN_021f03f8(PTR_DAT_049c4b40);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049c5598);
    bRam0000000004f4b9a0 = 1;
  }
  uStack_a4 = 0;
  SubMonitorBase__Setup_2481334(param_1,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x5f10e269,0);
  if (*(long *)(param_1 + 0x40) != 0) {
    CoinRush__OnMonitorActive_250e174(*(long *)(param_1 + 0x40),0);
    puVar3 = PTR_DAT_049c5580;
    puVar4 = PTR_DAT_049b8d80;
    lVar10 = *(long *)(param_1 + 0x40);
    if (lVar10 != 0) {
      uStack_c8 = *(undefined8 *)(lVar10 + 0x38);
      uStack_d0 = *(undefined8 *)(lVar10 + 0x30);
      uStack_b8 = *(undefined8 *)(lVar10 + 0x48);
      uStack_c0 = *(undefined8 *)(lVar10 + 0x40);
      uVar8 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_d0,0);
      if ((uVar8 & 1) != 0) {
        StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x2af94178,0);
      }
      uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
      UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar3,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
                (param_1,0x89a31dce,uVar9,0);
      puVar4 = PTR_DAT_049c5598;
      if (*(long *)(param_1 + 0x50) != 0) {
        PurchasingModule__GetProductMetadata_2549880
                  (alStack_a0,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_049c5598,0);
        lVar10 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc
                           (param_1,0x8bf4b3bd,0);
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x38) != 0)) {
          TMPro_TMP_Text__SetText_3b0f78c(*(long *)(lVar10 + 0x38),uStack_78,0);
          puVar3 = PTR_DAT_049b4540;
          if (*(long *)(param_1 + 0x40) != 0) {
            uStack_a4 = CoinRush__GetTotalReward_250e178(*(long *)(param_1 + 0x40),0);
            lVar10 = FUN_021f04e4(*(undefined8 *)puVar3,1);
            uVar9 = System_Int32__ToString_30fbaa0(&uStack_a4,0);
            puVar5 = PTR_DAT_049c5588;
            puVar3 = PTR_DAT_049c2f50;
            if (lVar10 != 0) {
              if (*(int *)(lVar10 + 0x18) == 0) {
                if (*(long *)(lVar2 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a8();
                }
                goto LAB_02570790;
              }
              *(undefined8 *)(lVar10 + 0x20) = uVar9;
              thunk_FUN_021f190c();
              StatefulUISupport_Scripts_Components_StatefulView__SetFormattedText_33519ec
                        (param_1,0x993134c1,lVar10,0);
              lVar10 = *(long *)(param_1 + 0x50);
              uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
              System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                        (uVar9,param_1,*(undefined8 *)puVar5,0);
              if (lVar10 != 0) {
                PurchasingModule__AddPurchaseListener_254a360(lVar10,*(undefined8 *)puVar4,uVar9,0);
                if ((*(long *)(param_1 + 0x48) != 0) &&
                   (lVar10 = *(long *)(*(long *)(param_1 + 0x48) + 0xd0), lVar10 != 0)) {
                  iVar6 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                                    (lVar10,*(undefined8 *)PTR_DAT_049c5590);
                  lVar10 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                                     (param_1,0x21c0801,0);
                  if (lVar10 != 0) {
                    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                              (lVar10,alStack_a0,*(undefined8 *)PTR_DAT_049c4b40);
                    if (alStack_a0[0] != 0) {
                      *(long *)(alStack_a0[0] + 0x20) = param_1;
                      thunk_FUN_021f190c((long *)(alStack_a0[0] + 0x20),param_1);
                      *(long *)(alStack_a0[0] + 400) = param_1;
                      thunk_FUN_021f190c(alStack_a0[0] + 400,param_1);
                      *(int *)(alStack_a0[0] + 0x28) = iVar6;
                      if (*(long *)(param_1 + 0x40) != 0) {
                        iVar7 = CoinRush__GetFocusId_250e2cc(*(long *)(param_1 + 0x40),0);
                        iVar7 = iVar7 + -1;
                        iVar1 = iVar7;
                        if (iVar6 + -1 <= iVar7) {
                          iVar1 = iVar6 + -1;
                        }
                        iVar6 = 0;
                        if (-1 < iVar7) {
                          iVar6 = iVar1;
                        }
                        UnityEngine_UI_LoopScrollRectBase__RefillCells_2ebe22c
                                  (0,alStack_a0[0],iVar6,0);
                        if (*(long *)(lVar2 + 0x28) == lStack_48) {
                          return;
                        }
                        goto LAB_02570790;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_02570790:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

