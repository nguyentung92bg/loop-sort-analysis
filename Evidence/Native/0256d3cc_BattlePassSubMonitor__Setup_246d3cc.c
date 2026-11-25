/* IL2CPP: BattlePassSubMonitor$$Setup
void BattlePassSubMonitor__Setup (BattlePassSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSubMonitor$$Setup
   void BattlePassSubMonitor__Setup (BattlePassSubMonitor_o* __this, const MethodInfo* method); */

void BattlePassSubMonitor__Setup_246d3cc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_88;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4b98c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049c5490);
    FUN_021f03f8(PTR_DAT_049c5498);
    FUN_021f03f8(PTR_DAT_049c54a0);
    FUN_021f03f8(PTR_DAT_049c54a8);
    FUN_021f03f8(PTR_DAT_049c54b0);
    FUN_021f03f8(PTR_DAT_049c54b8);
    FUN_021f03f8(PTR_DAT_049c54c0);
    FUN_021f03f8(PTR_DAT_049c54c8);
    FUN_021f03f8(PTR_DAT_049c4b40);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c3a68);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049c3a70);
    FUN_021f03f8(PTR_DAT_049c54d0);
    bRam0000000004f4b98c = 1;
  }
  SubMonitorBase__Setup_2481334(param_1,0);
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar8 = BattlePass__GetCurrentLevelData_250be14(*(long *)(param_1 + 0x50),0);
    plVar11 = (long *)(param_1 + 0xa0);
    *plVar11 = lVar8;
    thunk_FUN_021f190c(plVar11,lVar8);
    lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                      (param_1,0x89a31dce,0);
    plVar12 = (long *)(param_1 + 0x88);
    *plVar12 = lVar8;
    thunk_FUN_021f190c(plVar12,lVar8);
    if ((*plVar12 != 0) &&
       (lVar8 = UnityEngine_Component__get_gameObject_3c187f4(*plVar12,0), puVar4 = PTR_DAT_049c54a8
       , puVar3 = PTR_DAT_049c54a0, puVar2 = PTR_DAT_049b8d80, lVar8 != 0)) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar8,0,0);
      uVar13 = *(undefined8 *)(param_1 + 0x88);
      uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
      UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar4,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
                (uVar13,0xb4ce0c4e,uVar9,0);
      uVar13 = *(undefined8 *)(param_1 + 0x88);
      uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
      UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar3,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
                (uVar13,0x89a31dce,uVar9,0);
      puVar5 = PTR_DAT_049c54d0;
      puVar4 = PTR_DAT_049c5498;
      puVar3 = PTR_DAT_049c2f50;
      if (*(long *)(param_1 + 0x70) != 0) {
        PurchasingModule__GetProductMetadata_2549880
                  (&iStack_b0,*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_049c54d0,0);
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                  (*(undefined8 *)(param_1 + 0x88),0x8bf4b3bd,uStack_88,0);
        lVar8 = *(long *)(param_1 + 0x70);
        uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
        System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                  (uVar9,param_1,*(undefined8 *)puVar4,0);
        if (lVar8 != 0) {
          PurchasingModule__AddPurchaseListener_254a360(lVar8,*(undefined8 *)puVar5,uVar9,0);
          lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                            (param_1,0xa66c44de,0);
          plVar12 = (long *)(param_1 + 0x90);
          *plVar12 = lVar8;
          thunk_FUN_021f190c(plVar12,lVar8);
          if ((*plVar12 != 0) &&
             (lVar8 = UnityEngine_Component__get_gameObject_3c187f4(*plVar12,0),
             puVar3 = PTR_DAT_049c54b8, lVar8 != 0)) {
            UnityEngine_GameObject__SetActive_3c1ce34(lVar8,0,0);
            uVar13 = *(undefined8 *)(param_1 + 0x90);
            uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
            UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar3,0);
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
                      (uVar13,0x99f4e89d,uVar9,0);
            lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                              (param_1,0x928b68a9,0);
            puVar3 = PTR_DAT_049c5490;
            if (lVar8 != 0) {
              lVar14 = *(long *)(lVar8 + 0x100);
              uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
              UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar3,0);
              if (lVar14 != 0) {
                UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar14,uVar9,0);
                lVar8 = UnityEngine_Component__get_gameObject_3c187f4(lVar8,0);
                if ((*(long *)(param_1 + 0x50) != 0) &&
                   (uVar6 = CloudPrefsBool__get_Value_24eb0d0(*(long *)(param_1 + 0x50) + 0x68,0),
                   puVar3 = PTR_DAT_049c54b0, lVar8 != 0)) {
                  UnityEngine_GameObject__SetActive_3c1ce34(lVar8,(uVar6 ^ 0xffffffff) & 1,0);
                  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
                  UnityEngine_Events_UnityAction___ctor_3c32934
                            (uVar9,param_1,*(undefined8 *)puVar3,0);
                  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
                            (param_1,0xa66c44de,uVar9,0);
                  BattlePassSubMonitor__UpdateProgressBar_246d938(param_1);
                  lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                                    (param_1,0x21c0801,0);
                  if (lVar8 != 0) {
                    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                              (lVar8,&iStack_b0,*(undefined8 *)PTR_DAT_049c4b40);
                    lVar8 = CONCAT44(uStack_ac,iStack_b0);
                    if (lVar8 != 0) {
                      *(long *)(lVar8 + 0x20) = param_1;
                      thunk_FUN_021f190c((long *)(lVar8 + 0x20),param_1);
                      *(long *)(lVar8 + 400) = param_1;
                      thunk_FUN_021f190c(lVar8 + 400,param_1);
                      if ((*(long *)(param_1 + 0x58) != 0) &&
                         (lVar14 = *(long *)(*(long *)(param_1 + 0x58) + 0xb0), lVar14 != 0)) {
                        uVar7 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                                          (lVar14,*(undefined8 *)PTR_DAT_049c54c8);
                        *(undefined4 *)(lVar8 + 0x28) = uVar7;
                        puVar3 = PTR_DAT_049c54c0;
                        puVar2 = PTR_DAT_049c3a68;
                        if (*(long *)(lVar8 + 0xc0) != 0) {
                          UnityEngine_Events_UnityEventBase__RemoveAllListeners_3c3287c
                                    (*(long *)(lVar8 + 0xc0),0);
                          lVar14 = *(long *)(lVar8 + 0xc0);
                          uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
                          UnityEngine_Events_UnityAction___Il2CppFullySharedGenericType____ctor_29e4370
                                    (uVar9,param_1,*(undefined8 *)puVar3,0);
                          if (lVar14 != 0) {
                            UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType___AddListener_29e5738
                                      (lVar14,uVar9,*(undefined8 *)PTR_DAT_049c3a70);
                            if (*(long *)(param_1 + 0x50) != 0) {
                              uVar10 = BattlePass__IsTutorialRequired_250cb00
                                                 (*(long *)(param_1 + 0x50),0);
                              if ((uVar10 & 1) == 0) {
                                if (*plVar11 == 0) goto LAB_0256d920;
                                plVar12 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) +
                                                    0xc0);
                                uVar7 = *(undefined4 *)(plVar12[1] + 0xfc);
                                uVar9 = thunk_FUN_0224e54c(*plVar11,*(undefined8 *)(*plVar12 + 0x80)
                                                          );
                                func_0x04608620(&iStack_b0,uVar9,uVar7);
                                UnityEngine_UI_LoopScrollRectBase__RefillCells_2ebe22c
                                          (0,lVar8,iStack_b0 - 2U &
                                                   ((int)(iStack_b0 - 2U) >> 0x1f ^ 0xffffffffU),0);
                              }
                              else {
                                BattlePassSubMonitor__ApplyTutorial_246dacc(param_1,lVar8);
                              }
                              if (*(long *)(lVar1 + 0x28) == lStack_58) {
                                return;
                              }
                              goto LAB_0256d934;
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
      }
    }
  }
LAB_0256d920:
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_0256d934:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

