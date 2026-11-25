/* IL2CPP: PlayingMonitor$$Setup
void PlayingMonitor__Setup (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$Setup
   void PlayingMonitor__Setup (PlayingMonitor_o* __this, const MethodInfo* method); */

void PlayingMonitor__Setup_244f1dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_049c4798;
  puVar2 = PTR_DAT_049c4790;
  puVar1 = PTR_DAT_049c4788;
  if ((bRam0000000004f4b8c2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4788);
    FUN_021f03f8(PTR_DAT_049c4798);
    FUN_021f03f8(PTR_DAT_049c2300);
    FUN_021f03f8(PTR_DAT_049c3a60);
    FUN_021f03f8(PTR_DAT_049c47a0);
    FUN_021f03f8(PTR_DAT_049c47a8);
    FUN_021f03f8(PTR_DAT_049c4790);
    FUN_021f03f8(PTR_DAT_049c47b0);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049c47b8);
    FUN_021f03f8(PTR_DAT_049c47c0);
    bRam0000000004f4b8c2 = 1;
  }
  MonitorBase__Setup_256c4e8(param_1,0);
  uVar8 = *(undefined8 *)(param_1 + 0xf8);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar2,0);
  lVar9 = *(long *)puVar3;
  lVar7 = *(long *)(lVar9 + 0x38);
  if (lVar7 == 0) {
    FUN_02229774(lVar9);
    lVar7 = *(long *)(lVar9 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049c47b0;
  lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar8,uVar5,**(undefined8 **)(lVar7 + 0xb8),*(undefined8 *)puVar1);
  PlayingMonitor__HandleRemoteConfig_244f5d4(param_1);
  lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0xbc1c109a,0);
  puVar2 = PTR_DAT_049c47a8;
  puVar1 = PTR_DAT_049b8d80;
  if (lVar7 != 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (lVar7,&uStack_38,*(undefined8 *)PTR_DAT_049c2300);
    *(undefined8 *)(param_1 + 0x118) = uStack_38;
    thunk_FUN_021f190c(param_1 + 0x118);
    uVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                      (param_1,0xbb3ee9fe,0);
    *(undefined8 *)(param_1 + 0x120) = uVar5;
    thunk_FUN_021f190c(param_1 + 0x120,uVar5);
    uVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                      (param_1,0xb2d56ad0,0);
    *(undefined8 *)(param_1 + 0x150) = uVar5;
    thunk_FUN_021f190c(param_1 + 0x150,uVar5);
    uVar8 = *(undefined8 *)(param_1 + 0x150);
    uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar2,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
              (uVar8,0x854128ce,uVar5,0);
    puVar3 = PTR_DAT_049c47b8;
    puVar2 = PTR_DAT_049c47a0;
    if (*(long *)(param_1 + 0x148) != 0) {
      uStack_3c = *(undefined4 *)(*(long *)(param_1 + 0x148) + 0x20);
      uVar8 = *(undefined8 *)(param_1 + 0x150);
      uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_3c);
      uVar5 = System_String__Format_2f73700(*(undefined8 *)puVar3,uVar5,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (uVar8,0xd7ad136f,uVar5,0);
      uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
      UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar2,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
                (param_1,0x28a1a499,uVar5,0);
      PlayingMonitor__SetupDebug_244f7a0(param_1);
      PlayingMonitor__SetupGiveUp_244fb10(param_1);
      lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                        (param_1,0xa59d6ffe,0);
      if ((lVar7 != 0) &&
         (lVar7 = UnityEngine_Component__get_gameObject_3c187f4(lVar7,0), lVar7 != 0)) {
        UnityEngine_GameObject__SetActive_3c1ce34(lVar7,0,0);
        uVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                          (param_1,0xf6f322b4,0);
        if (*(long *)(param_1 + 0xb0) != 0) {
          EconomyMonitor__AddItemView_243c7e8
                    (*(long *)(param_1 + 0xb0),1,uVar5,*(undefined8 *)PTR_DAT_049c47c0);
          plVar6 = (long *)StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                                     (param_1,0xcf943524,0);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x2a8))
                      (0x3f800000,0x3f800000,0x3f800000,0,plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
            lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                              (param_1,0xf6f32447,0);
            if (lVar7 != 0) {
              UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                        (lVar7,&uStack_38,*(undefined8 *)PTR_DAT_049c3a60);
              *(undefined8 *)(param_1 + 400) = uStack_38;
              thunk_FUN_021f190c(param_1 + 400);
              if (*(long *)(param_1 + 400) != 0) {
                UnityEngine_CanvasGroup__set_alpha_3ec2b80(0,*(long *)(param_1 + 400),0);
                uVar4 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x160,0);
                *(undefined4 *)(param_1 + 0x198) = uVar4;
                return;
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

