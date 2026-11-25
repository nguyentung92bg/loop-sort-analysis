/* IL2CPP: HomeMonitor$$FillLiveOpsSlotElements
void HomeMonitor__FillLiveOpsSlotElements (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$FillLiveOpsSlotElements
   void HomeMonitor__FillLiveOpsSlotElements (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__FillLiveOpsSlotElements_2444434(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [16];
  uint uStack_64;
  
  if ((bRam0000000004f4b86a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c41a8);
    FUN_021f03f8(PTR_DAT_049c41b0);
    FUN_021f03f8(PTR_DAT_049c41b8);
    FUN_021f03f8(PTR_DAT_049c41c0);
    FUN_021f03f8(PTR_DAT_049c41c8);
    FUN_021f03f8(PTR_DAT_049c41d0);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049c41d8);
    bRam0000000004f4b86a = 1;
  }
  auStack_78._0_8_ = 0;
  auStack_78._8_8_ = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_80 = 0;
  lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0x6896ff8,0);
  lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0xcc127773,0);
  if ((lVar6 != 0) && (StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar6,0), lVar7 != 0)) {
    StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar7,0);
    lVar12 = *(long *)(param_1 + 0x1c0);
    if (lVar12 != 0) {
      lVar11 = *(long *)PTR_DAT_049c41d0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      uVar8 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
      if ((uVar8 & 1) == 0) {
        *(undefined4 *)(lVar12 + 0x18) = 0;
      }
      else {
        iVar1 = *(int *)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 0x18) = 0;
        if (0 < iVar1) {
          System_Array__Clear_31229cc(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
        }
      }
      if (*(long *)(param_1 + 0x1b0) != 0) {
        System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                  (*(long *)(param_1 + 0x1b0),*(undefined8 *)PTR_DAT_049c41c0);
        *(undefined8 *)(param_1 + 0x128) = 0;
        thunk_FUN_021f190c(param_1 + 0x128,0);
        *(undefined8 *)(param_1 + 0x130) = 0;
        thunk_FUN_021f190c(param_1 + 0x130,0);
        StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x5f10e269,0);
        if ((*(long *)(param_1 + 0x138) != 0) &&
           (lVar12 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x138),0),
           lVar12 != 0)) {
          UnityEngine_GameObject__SetActive_3c1ce34(lVar12,0,0);
          if ((*(long *)(param_1 + 0x140) != 0) &&
             (lVar12 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x140),0),
             lVar12 != 0)) {
            UnityEngine_GameObject__SetActive_3c1ce34(lVar12,0,0);
            if ((*(long *)(param_1 + 0x148) != 0) &&
               (lVar12 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x148),0)
               , lVar12 != 0)) {
              UnityEngine_GameObject__SetActive_3c1ce34(lVar12,0,0);
              puVar4 = PTR_DAT_049c41b8;
              puVar3 = PTR_DAT_049c41b0;
              puVar2 = PTR_DAT_049c2c68;
              if ((*(long *)(param_1 + 0xe8) != 0) &&
                 (lVar12 = *(long *)(*(long *)(param_1 + 0xe8) + 0x90), lVar12 != 0)) {
                auStack_78 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                                       (lVar12,*(undefined8 *)PTR_DAT_049c41d8);
                puStack_98 = auStack_78;
                uStack_a0 = 0;
                while( true ) {
                  do {
                    uVar8 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                                      (auStack_78,*(undefined8 *)puVar3);
                    if ((uVar8 & 1) == 0) {
                      Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                                (auStack_78,*(undefined8 *)PTR_DAT_049c41a8);
                      return;
                    }
                    lVar12 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                                       (auStack_78,*(undefined8 *)puVar4);
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                  } while ((*(char *)(lVar12 + 0x1c) == '\0') &&
                          (uVar8 = HomeLiveOpsSheet_Slot__IsLocked_25616a4(lVar12,0),
                          (uVar8 & 1) != 0));
                  uVar5 = HomeLiveOpsSheet_Slot__GetCurrent_25613cc(lVar12,0);
                  if (*(long *)(param_1 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  lVar11 = *(long *)(*(long *)(param_1 + 0xe8) + 0x88);
                  if (lVar11 == 0) break;
                  uStack_64 = uVar5;
                  uVar9 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                                    (lVar11,&uStack_64,*(undefined8 *)puVar2);
                  if (*(long *)(param_1 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  uVar8 = LiveOpsModule__CanShowInHome_2547c5c(*(long *)(param_1 + 0xd0),uVar5,0);
                  if ((uVar8 & 1) != 0) {
                    if (*(int *)(lVar12 + 0x20) == 2) {
                      if (uVar5 == 0x1c) {
                        if (*(long *)(param_1 + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_021f06a0();
                        }
                        lVar11 = UnityEngine_Component__get_gameObject_3c187f4
                                           (*(long *)(param_1 + 0x148),0);
                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_021f06a0();
                        }
                        UnityEngine_GameObject__SetActive_3c1ce34(lVar11,1,0);
                        uVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                                           (*(undefined8 *)(param_1 + 0x148),0xc6b67d06,0);
                        HomeMonitor__CreateLiveOpsSlotElement_244669c(param_1,uVar10,lVar12,uVar9);
                        lVar11 = *(long *)(param_1 + 0x1c0);
                        lStack_80 = 0;
                        uStack_90 = 0x1c;
                        uStack_88 = uVar10;
                        thunk_FUN_021f190c(&uStack_88,uVar10);
                        lStack_80 = lVar12;
                        thunk_FUN_021f190c(&lStack_80,lVar12);
                        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_021f06a0();
                        }
                        uStack_b8 = uStack_88;
                        uStack_c0 = uStack_90;
                        lStack_b0 = lStack_80;
                        FUN_02333498(lVar11,&uStack_c0,*(undefined8 *)PTR_DAT_049c41c8);
                      }
                      else if (uVar5 == 0x1b) {
                        if (*(long *)(param_1 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_021f06a0();
                        }
                        lVar12 = UnityEngine_Component__get_gameObject_3c187f4
                                           (*(long *)(param_1 + 0x140),0);
                        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_021f06a0();
                        }
                        UnityEngine_GameObject__SetActive_3c1ce34(lVar12,1,0);
                      }
                      else if (uVar5 == 0xb) {
                        StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944
                                  (param_1,0x598fdb13,0);
                        if (*(long *)(param_1 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_021f06a0();
                        }
                        lVar12 = UnityEngine_Component__get_gameObject_3c187f4
                                           (*(long *)(param_1 + 0x138),0);
                        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_021f06a0();
                        }
                        UnityEngine_GameObject__SetActive_3c1ce34(lVar12,1,0);
                      }
                    }
                    else {
                      lVar11 = lVar6;
                      if (*(int *)(lVar12 + 0x20) != 1) {
                        lVar11 = lVar7;
                      }
                      uVar10 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c
                                         (lVar11,0);
                      HomeMonitor__CreateLiveOpsSlotElement_244669c(param_1,uVar10,lVar12,uVar9);
                      lStack_80 = 0;
                      uStack_90 = (ulong)uVar5;
                      uStack_88 = uVar10;
                      thunk_FUN_021f190c(&uStack_88,uVar10);
                      lStack_80 = lVar12;
                      thunk_FUN_021f190c(&lStack_80,lVar12);
                      if (*(long *)(param_1 + 0x1c0) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_021f06a0();
                      }
                      uStack_d8 = uStack_88;
                      uStack_e0 = uStack_90;
                      lStack_d0 = lStack_80;
                      FUN_02333498(*(long *)(param_1 + 0x1c0),&uStack_e0,
                                   *(undefined8 *)PTR_DAT_049c41c8);
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

