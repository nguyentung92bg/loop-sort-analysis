/* IL2CPP: HomeNavigationMonitor$$Setup
void HomeNavigationMonitor__Setup (HomeNavigationMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeNavigationMonitor$$Setup
   void HomeNavigationMonitor__Setup (HomeNavigationMonitor_o* __this, const MethodInfo* method); */

void HomeNavigationMonitor__Setup_244a1bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  
  puVar5 = PTR_DAT_049c4548;
  puVar4 = PTR_DAT_049c4540;
  puVar3 = PTR_DAT_049c4538;
  puVar2 = PTR_DAT_049c4338;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b889 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4550);
    FUN_021f03f8(PTR_DAT_049c4558);
    FUN_021f03f8(PTR_DAT_049c4348);
    FUN_021f03f8(PTR_DAT_049c4538);
    FUN_021f03f8(PTR_DAT_049c4540);
    FUN_021f03f8(PTR_DAT_049c4338);
    FUN_021f03f8(PTR_DAT_049c4548);
    FUN_021f03f8(PTR_DAT_049c4560);
    FUN_021f03f8(PTR_DAT_049c2dd0);
    FUN_021f03f8(PTR_DAT_049c4568);
    FUN_021f03f8(PTR_DAT_049c3cf0);
    FUN_021f03f8(PTR_DAT_049c4570);
    FUN_021f03f8(PTR_DAT_049c4578);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b889 = 1;
  }
  MonitorBase__Setup_256c4e8(param_1,0);
  HomeNavigationMonitor__SetElementSizes_244a59c(param_1);
  uVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x544bafab,0);
  uVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x6def0a4a,0);
  uVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0xb0a9d71c,0);
  uVar9 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x49d53644,0);
  uVar10 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                     (param_1,0x46a568c0,0);
  uVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar11,param_1,*(undefined8 *)puVar3,0);
  HomeNavigationMonitor__SetNavigationButton_244aa1c(param_1,uVar6,uVar11);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar2,0);
  HomeNavigationMonitor__SetNavigationButton_244aa1c(param_1,uVar7,uVar6);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar4,0);
  HomeNavigationMonitor__SetNavigationButton_244aa1c(param_1,uVar8,uVar6);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar5,0);
  HomeNavigationMonitor__SetNavigationButton_244aa1c(param_1,uVar9,uVar6);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)PTR_DAT_049c4348,0);
  HomeNavigationMonitor__SetNavigationButton_244aa1c(param_1,uVar10,uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  lVar12 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c4578);
  SwipeablePageLayout___ctor_244abb0(lVar12,uVar6);
  plVar14 = (long *)(param_1 + 0xb8);
  *plVar14 = lVar12;
  thunk_FUN_021f190c(plVar14,lVar12);
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar12 = *plVar14;
    uVar6 = Monitors__Get_object__26889d0(*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c3cf0)
    ;
    if (lVar12 != 0) {
      SwipeablePageLayout__AddPage_244ac98(lVar12,uVar6);
      if (*(long *)(param_1 + 0x30) != 0) {
        lVar12 = *(long *)(param_1 + 0xb8);
        uVar6 = Monitors__Get_object__26889d0
                          (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c4568);
        if (lVar12 != 0) {
          SwipeablePageLayout__AddPage_244ac98(lVar12,uVar6);
          if (*(long *)(param_1 + 0x30) != 0) {
            lVar12 = *(long *)(param_1 + 0xb8);
            uVar6 = Monitors__Get_object__26889d0
                              (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c2dd0);
            if (lVar12 != 0) {
              SwipeablePageLayout__AddPage_244ac98(lVar12,uVar6);
              if (*(long *)(param_1 + 0x30) != 0) {
                lVar12 = *(long *)(param_1 + 0xb8);
                uVar6 = Monitors__Get_object__26889d0
                                  (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c4570);
                if (lVar12 != 0) {
                  SwipeablePageLayout__AddPage_244ac98(lVar12,uVar6);
                  if (*(long *)(param_1 + 0x30) != 0) {
                    lVar12 = *(long *)(param_1 + 0xb8);
                    uVar6 = Monitors__Get_object__26889d0
                                      (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c4560);
                    puVar2 = PTR_DAT_049c4558;
                    puVar1 = PTR_DAT_049c4550;
                    if (lVar12 != 0) {
                      SwipeablePageLayout__AddPage_244ac98(lVar12,uVar6);
                      lVar12 = *(long *)(param_1 + 0xb8);
                      uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                      System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                                (uVar6,param_1,*(undefined8 *)puVar2,0);
                      if (lVar12 != 0) {
                        if ((bRam0000000004f4b8a4 & 1) == 0) {
                          FUN_021f03f8(PTR_DAT_049c4550);
                          bRam0000000004f4b8a4 = 1;
                        }
                        plVar14 = (long *)(lVar12 + 0x40);
                        lVar12 = System_Delegate__Combine_3145640(*plVar14,uVar6,0);
                        puVar1 = PTR_DAT_049c4550;
                        if (lVar12 != 0) {
                          uVar6 = *(undefined8 *)PTR_DAT_049c4550;
                          lVar13 = thunk_FUN_0222c938(lVar12,uVar6);
                          if (lVar13 != 0) {
                            uVar6 = *(undefined8 *)puVar1;
                            *plVar14 = lVar13;
                            lVar13 = thunk_FUN_0222c938(lVar12,uVar6);
                            if (lVar13 != 0) goto code_r0x021f03a4;
                          }
                    /* WARNING: Subroutine does not return */
                          FUN_021f0a20(lVar12,uVar6);
                        }
                        *plVar14 = 0;
code_r0x021f03a4:
                        if (iRam0000000005174518 != 0) {
                          FUN_023118d0(1L << ((ulong)plVar14 >> 0xc & 0x3f),
                                       ((ulong)plVar14 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
                        }
                        return;
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
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

