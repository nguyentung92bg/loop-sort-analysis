/* IL2CPP: WinStandartVariant$$Setup
void WinStandartVariant__Setup (WinStandartVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinStandartVariant$$Setup
   void WinStandartVariant__Setup (WinStandartVariant_o* __this, const MethodInfo* method); */

void WinStandartVariant__Setup_24945ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_049c5fd8;
  puVar2 = PTR_DAT_049c5fd0;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4ba8f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5fe0);
    FUN_021f03f8(PTR_DAT_049c3a38);
    FUN_021f03f8(PTR_DAT_049c5fe8);
    FUN_021f03f8(PTR_DAT_049c47e8);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049c5fd0);
    FUN_021f03f8(PTR_DAT_049c5fd8);
    FUN_021f03f8(PTR_DAT_049c2c80);
    bRam0000000004f4ba8f = 1;
  }
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar4,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x99f4e89d,uVar4,0);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar4,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x4c676fd6,uVar4,0);
  lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_1,0xc4045a1,0);
  puVar1 = PTR_DAT_049c5fe0;
  if (lVar5 != 0) {
    UnityEngine_GameObject__GetComponentInChildren___Il2CppFullySharedGenericType__261aa60
              (lVar5,&uStack_38,*(undefined8 *)PTR_DAT_049c5fe0);
    *(undefined8 *)(param_1 + 0xa8) = uStack_38;
    thunk_FUN_021f190c();
    lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (param_1,0x598fdb13,0);
    if (lVar5 != 0) {
      UnityEngine_GameObject__GetComponentInChildren___Il2CppFullySharedGenericType__261aa60
                (lVar5,&uStack_38,*(undefined8 *)puVar1);
      *(undefined8 *)(param_1 + 0xb0) = uStack_38;
      thunk_FUN_021f190c();
      lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                        (param_1,0x60cf354d,0);
      if (lVar5 != 0) {
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                  (lVar5,&uStack_38,*(undefined8 *)PTR_DAT_049c3a38);
        *(undefined8 *)(param_1 + 0xb8) = uStack_38;
        thunk_FUN_021f190c();
        lVar5 = *(long *)(param_1 + 0x50);
        uVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                          (param_1,0xf6f322b4,0);
        if (lVar5 != 0) {
          EconomyMonitor__AddItemView_243c7e8(lVar5,1,uVar4,*(undefined8 *)PTR_DAT_049c2c80,0);
          if (*(long *)(param_1 + 0x78) != 0) {
            uVar4 = RemoteConfigModule__GetDataClassNew_object__26a494c
                              (*(long *)(param_1 + 0x78),*(undefined8 *)PTR_DAT_049c5fe8);
            *(undefined8 *)(param_1 + 0xd0) = uVar4;
            thunk_FUN_021f190c((undefined8 *)(param_1 + 0xd0),uVar4);
            puVar1 = PTR_DAT_049b4540;
            if (*(long *)(param_1 + 0x78) != 0) {
              lVar5 = RemoteConfigModule__GetDataClassNew_object__26a494c
                                (*(long *)(param_1 + 0x78),*(undefined8 *)PTR_DAT_049c47e8);
              plVar6 = (long *)(param_1 + 0xd8);
              *plVar6 = lVar5;
              thunk_FUN_021f190c(plVar6,lVar5);
              lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,1);
              if ((*plVar6 != 0) &&
                 (uVar4 = System_Int32__ToString_30fbaa0(*plVar6 + 0x14,0), lVar5 != 0)) {
                if (*(int *)(lVar5 + 0x18) != 0) {
                  *(undefined8 *)(lVar5 + 0x20) = uVar4;
                  thunk_FUN_021f190c();
                  StatefulUISupport_Scripts_Components_StatefulView__SetFormattedText_33519ec
                            (param_1,0xd7ad136f,lVar5,0);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_021f06a8();
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

