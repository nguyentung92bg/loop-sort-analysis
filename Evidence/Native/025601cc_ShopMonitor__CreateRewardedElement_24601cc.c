/* IL2CPP: ShopMonitor$$CreateRewardedElement
void ShopMonitor__CreateRewardedElement (ShopMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$CreateRewardedElement
   void ShopMonitor__CreateRewardedElement (ShopMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method); */

void ShopMonitor__CreateRewardedElement_24601cc(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uStack_34;
  
  puVar3 = PTR_DAT_049c4fd0;
  puVar2 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b94f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98);
    FUN_021f03f8(PTR_DAT_049c4228);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c4fd0);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b94f = 1;
  }
  uStack_34 = 0;
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar4,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (param_2,0x39cfe44a,uVar4,0);
  puVar3 = PTR_DAT_049b5f98;
  puVar2 = PTR_DAT_049b5310;
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0xa8) + 0x30), lVar5 != 0)) {
    uStack_34 = ConstantSheetBase_object___GetInt_281c070
                          (lVar5,0x15,*(undefined8 *)PTR_DAT_049c4228);
    uVar4 = System_Int32__ToString_30fbaa0(&uStack_34,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (param_2,0x78d4e5eb,uVar4,0);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar2;
    }
    uVar6 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                      (*(long *)(lVar5 + 0xb8) + 0x5b8,*(undefined8 *)puVar3);
    uVar1 = 0x8ac0028d;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0x39cfe44a;
    }
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (param_2,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

