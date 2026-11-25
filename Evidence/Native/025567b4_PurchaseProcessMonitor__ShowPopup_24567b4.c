/* IL2CPP: PurchaseProcessMonitor$$ShowPopup
void PurchaseProcessMonitor__ShowPopup (PurchaseProcessMonitor_o* __this, PurchaseProcessMonitor_Args_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchaseProcessMonitor$$ShowPopup
   void PurchaseProcessMonitor__ShowPopup (PurchaseProcessMonitor_o* __this,
   PurchaseProcessMonitor_Args_o args, const MethodInfo* method); */

void PurchaseProcessMonitor__ShowPopup_24567b4(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049c4ae0;
  if ((bRam0000000004f4b8f4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4ae8);
    FUN_021f03f8(PTR_DAT_049c4ae0);
    bRam0000000004f4b8f4 = 1;
  }
  puVar2 = PTR_DAT_049c4ae8;
  StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x91273900,*param_2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
            (param_1,0x993134c1,param_2[1],0);
  uStack_48 = *(undefined8 *)puVar1;
  uStack_38 = *(undefined4 *)(param_2 + 2);
  uStack_40 = 0xffffffffffffffff;
  uVar3 = System_Enum__ToString_3135e00(&uStack_48,0);
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0x98) + 0xe4) == 0) {
    FUN_021f0574(*(long *)(PTR_DAT_049b3bd0 + 0x98));
  }
  System_Enum__Parse___Il2CppFullySharedGenericStructType__25d8104
            (uVar3,&uStack_24,*(undefined8 *)puVar2);
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,uStack_24,0);
  return;
}

