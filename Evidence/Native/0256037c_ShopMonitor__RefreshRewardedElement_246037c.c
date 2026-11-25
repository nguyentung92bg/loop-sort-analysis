/* IL2CPP: ShopMonitor$$RefreshRewardedElement
void ShopMonitor__RefreshRewardedElement (ShopMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$RefreshRewardedElement
   void ShopMonitor__RefreshRewardedElement (ShopMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method); */

void ShopMonitor__RefreshRewardedElement_246037c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_049b5310;
  if ((bRam0000000004f4b950 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4fd8);
    FUN_021f03f8(PTR_DAT_049b5f98);
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049c4fe0);
    bRam0000000004f4b950 = 1;
  }
  puVar1 = PTR_DAT_049b5f98;
  lVar5 = *(long *)puVar2;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_38 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar2;
  }
  uVar6 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                    (*(long *)(lVar5 + 0xb8) + 0x5b8,*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_049b5fa8;
  puVar1 = PTR_DAT_049b5050;
  if ((uVar6 & 1) != 0) {
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar2;
    }
    puVar4 = PTR_DAT_049b5fc8;
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar5 + 0xb8) + 0x5b8,&uStack_50,*(undefined8 *)puVar3);
    uStack_58 = uStack_48;
    uStack_60 = uStack_50;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar1 = PTR_DAT_049b6128;
    auVar8 = System_DateTimeOffset__AddDays_30e174c(0x3ff0000000000000,&uStack_60,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar3 = PTR_DAT_049c4fe0;
    auVar9 = TimeProvider__get_UtcNow_24f95ec(0);
    uStack_38 = System_DateTimeOffset__op_Subtraction_30e4594
                          (auVar8._0_8_,auVar8._8_8_,auVar9._0_8_,auVar9._8_8_,0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574(lVar5);
    }
    uVar7 = System_TimeSpan__ToString_3117454(&uStack_38,*(undefined8 *)puVar3,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (param_2,0xce1592a9,uVar7,0);
    uVar6 = System_TimeSpan__op_GreaterThanOrEqual_311796c
                      (uStack_38,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
    if ((uVar6 & 1) == 0) {
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        lVar5 = *(long *)puVar2;
      }
      CloudPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_28028c4
                (*(long *)(lVar5 + 0xb8) + 0x5b8,*(undefined8 *)PTR_DAT_049c4fd8);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                (param_2,0x39cfe44a,0);
    }
  }
  return;
}

