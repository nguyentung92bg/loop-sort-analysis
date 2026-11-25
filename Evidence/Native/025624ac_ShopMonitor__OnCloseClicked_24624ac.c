/* IL2CPP: ShopMonitor$$OnCloseClicked
void ShopMonitor__OnCloseClicked (ShopMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$OnCloseClicked
   void ShopMonitor__OnCloseClicked (ShopMonitor_o* __this, const MethodInfo* method); */

void ShopMonitor__OnCloseClicked_24624ac(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b949 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c4d20);
    FUN_021f03f8(PTR_DAT_049c3958);
    FUN_021f03f8(PTR_DAT_049c4fe8);
    FUN_021f03f8(PTR_DAT_049c4e98);
    bRam0000000004f4b949 = 1;
  }
  *(undefined1 *)(param_1 + 0x110) = 0;
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0xb4ce0c4e,0);
  puVar1 = PTR_DAT_049c4e98;
  if (*(long *)(param_1 + 0xb8) != 0) {
    UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_ActiveStateName_29a7fdc
              (*(long *)(param_1 + 0xb8),&uStack_28,*(undefined8 *)PTR_DAT_049c4fe8);
    uVar2 = System_String__op_Equality_2f7b7fc(uStack_28,*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_049c3958;
    lVar5 = *(long *)(param_1 + 0x30);
    if ((uVar2 & 1) == 0) {
      if (lVar5 != 0) {
        Monitors__Deactivate_256e214(lVar5,param_1,0,0);
        return;
      }
    }
    else {
      lVar3 = *(long *)PTR_DAT_049c3958;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_021f0574();
        lVar3 = *(long *)puVar1;
      }
      auStack_2c[0] = **(undefined1 **)(lVar3 + 0xb8);
      uVar4 = thunk_FUN_0222c66c(lVar3,auStack_2c);
      if (lVar5 != 0) {
        Monitors__Additive_object__26888e8(lVar5,uVar4,0,*(undefined8 *)PTR_DAT_049c4d20);
        uVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                          (param_1,0x8ac5d2f7,0);
        if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
          FUN_021f0574(*(long *)PTR_DAT_049b5480);
        }
        lVar5 = Extensions__GetRectTransform_3f0c498(uVar4,0);
        if (lVar5 != 0) {
          UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                    (*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c),lVar5,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

