/* IL2CPP: HomeMonitor$$Setup
void HomeMonitor__Setup (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$Setup
   void HomeMonitor__Setup (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__Setup_24454b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar3 = PTR_DAT_049c4270;
  puVar2 = PTR_DAT_049c3df8;
  puVar1 = PTR_DAT_049c3de8;
  if ((bRam0000000004f4b85d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4278);
    FUN_021f03f8(PTR_DAT_049c3de8);
    FUN_021f03f8(PTR_DAT_049c4280);
    FUN_021f03f8(PTR_DAT_049c3df8);
    FUN_021f03f8(PTR_DAT_049c4288);
    FUN_021f03f8(PTR_DAT_049c4290);
    FUN_021f03f8(PTR_DAT_049c4270);
    FUN_021f03f8(PTR_DAT_049c4298);
    FUN_021f03f8(PTR_DAT_049c42a0);
    FUN_021f03f8(PTR_DAT_049c42a8);
    FUN_021f03f8(PTR_DAT_049c42b0);
    FUN_021f03f8(PTR_DAT_049c42b8);
    FUN_021f03f8(PTR_DAT_049c42c0);
    FUN_021f03f8(PTR_DAT_049c42c8);
    FUN_021f03f8(PTR_DAT_049c3e20);
    FUN_021f03f8(PTR_DAT_049c42d0);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b85d = 1;
  }
  MonitorBase__Setup_256c4e8(param_1,0);
  uVar11 = *(undefined8 *)(param_1 + 0x118);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar9,param_1,*(undefined8 *)puVar3,0);
  lVar12 = *(long *)puVar2;
  lVar10 = *(long *)(lVar12 + 0x38);
  if (lVar10 == 0) {
    FUN_02229774(lVar12);
    lVar10 = *(long *)(lVar12 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c42a0;
  puVar3 = PTR_DAT_049c4280;
  puVar2 = PTR_DAT_049c4278;
  puVar1 = PTR_DAT_049c3e20;
  lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar11,uVar9,**(undefined8 **)(lVar10 + 0xb8),*(undefined8 *)puVar1);
  uVar11 = *(undefined8 *)(param_1 + 0x120);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar9,param_1,*(undefined8 *)puVar4,0);
  lVar12 = *(long *)puVar3;
  lVar10 = *(long *)(lVar12 + 0x38);
  if (lVar10 == 0) {
    FUN_02229774(lVar12);
    lVar10 = *(long *)(lVar12 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar8 = PTR_DAT_049c42d0;
  puVar7 = PTR_DAT_049c42b8;
  puVar6 = PTR_DAT_049c42b0;
  puVar5 = PTR_DAT_049c42a8;
  puVar4 = PTR_DAT_049c4298;
  puVar3 = PTR_DAT_049c4290;
  puVar2 = PTR_DAT_049c4288;
  puVar1 = PTR_DAT_049b8d80;
  lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar11,uVar9,**(undefined8 **)(lVar10 + 0xb8),*(undefined8 *)puVar8);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar4,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x42a43c4,uVar9,0);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar5,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xd1604cd6,uVar9,0);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar7,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x6def0a4a,uVar9,0);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar6,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x28a1a499,uVar9,0);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xbd13b84d,uVar9,0);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x3b77286f,uVar9,0);
  uVar9 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0xc1b51e73,0);
  *(undefined8 *)(param_1 + 0x138) = uVar9;
  thunk_FUN_021f190c(param_1 + 0x138,uVar9);
  uVar9 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x46e6cf5d,0);
  *(undefined8 *)(param_1 + 0x140) = uVar9;
  thunk_FUN_021f190c(param_1 + 0x140,uVar9);
  uVar9 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0xc77c0d18,0);
  *(undefined8 *)(param_1 + 0x148) = uVar9;
  thunk_FUN_021f190c(param_1 + 0x148,uVar9);
  if (*(long *)(param_1 + 0x100) != 0) {
    uVar9 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x100),*(undefined8 *)PTR_DAT_049c42c8);
    *(undefined8 *)(param_1 + 0x1a0) = uVar9;
    thunk_FUN_021f190c(param_1 + 0x1a0,uVar9);
    if (*(long *)(param_1 + 0x100) != 0) {
      uVar9 = RemoteConfigModule__GetDataClassNew_object__26a494c
                        (*(long *)(param_1 + 0x100),*(undefined8 *)PTR_DAT_049c42c0);
      *(undefined8 *)(param_1 + 0x1a8) = uVar9;
      thunk_FUN_021f190c(param_1 + 0x1a8,uVar9);
      HomeMonitor__SetupDebug_2445964(param_1);
      if (*(long *)(param_1 + 0xc0) != 0) {
        EconomyModule__GetInterceptedAmount_2533e00(*(long *)(param_1 + 0xc0),1,0);
        uVar9 = System_Int32__ToString_30fbaa0(&stack0xffffffffffffffec,0);
        StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                  (param_1,0xf6f322b4,uVar9,0);
        HomeMonitor__UpdateLife_2445e74(param_1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

