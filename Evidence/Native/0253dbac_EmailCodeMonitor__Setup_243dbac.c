/* IL2CPP: EmailCodeMonitor$$Setup
void EmailCodeMonitor__Setup (EmailCodeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EmailCodeMonitor$$Setup
   void EmailCodeMonitor__Setup (EmailCodeMonitor_o* __this, const MethodInfo* method); */

void EmailCodeMonitor__Setup_243dbac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar4 = PTR_DAT_049c3f48;
  puVar3 = PTR_DAT_049c3f40;
  puVar2 = PTR_DAT_049c3f38;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b831 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3f48);
    FUN_021f03f8(PTR_DAT_049c3f50);
    FUN_021f03f8(PTR_DAT_049c3f40);
    FUN_021f03f8(PTR_DAT_049c3f58);
    FUN_021f03f8(PTR_DAT_049c3f38);
    FUN_021f03f8(PTR_DAT_049c3f60);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049c3f68);
    bRam0000000004f4b831 = 1;
  }
  MonitorBase__Setup_256c4e8(param_1,0);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xf689c28c,uVar5,0);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xc4829402,uVar5,0);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar4,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xb4ce0c4e,uVar5,0);
  lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetTextInput_335190c
                    (param_1,0x4239b252,0);
  puVar2 = PTR_DAT_049c3f60;
  puVar1 = PTR_DAT_049c3f58;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x20) != 0)) {
    lVar6 = *(long *)(*(long *)(lVar6 + 0x20) + 0x1d0);
    uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3f60);
    UnityEngine_Events_UnityAction___Il2CppFullySharedGenericType____ctor_29e4370
              (uVar5,param_1,*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_049c3f68;
    if (lVar6 != 0) {
      UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType___AddListener_29e5738
                (lVar6,uVar5,*(undefined8 *)PTR_DAT_049c3f68);
      lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetTextInput_335190c
                        (param_1,0x544bae8d,0);
      puVar3 = PTR_DAT_049c3f50;
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x20) != 0)) {
        lVar6 = *(long *)(*(long *)(lVar6 + 0x20) + 0x1d0);
        uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
        UnityEngine_Events_UnityAction___Il2CppFullySharedGenericType____ctor_29e4370
                  (uVar5,param_1,*(undefined8 *)puVar3,0);
        if (lVar6 != 0) {
          uVar5 = UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType___GetDelegate_29e5908
                            (uVar5,*(undefined8 *)
                                    (*(long *)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0) + 0x10));
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 != 0) {
            if ((bRam0000000004f58b7c & 1) == 0) {
              FUN_021f03f8(PTR_DAT_04a26d90);
              bRam0000000004f58b7c = 1;
            }
            if (*(long *)(lVar6 + 0x18) != 0) {
              FUN_02333498(*(long *)(lVar6 + 0x18),uVar5,*(undefined8 *)PTR_DAT_04a26d90);
              *(undefined1 *)(lVar6 + 0x28) = 1;
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0(0,uVar5,0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

