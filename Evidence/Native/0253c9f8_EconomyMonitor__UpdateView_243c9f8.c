/* IL2CPP: EconomyMonitor$$UpdateView
void EconomyMonitor__UpdateView (EconomyMonitor_o* __this, int32_t item, StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyMonitor$$UpdateView
   void EconomyMonitor__UpdateView (EconomyMonitor_o* __this, int32_t item,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method); */

void EconomyMonitor__UpdateView_243c9f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    uStack_14 = EconomyModule__GetAmount_2523ed0(*(long *)(param_1 + 0x98),param_2,0);
    uVar1 = System_Int32__ToString_30fbaa0(&uStack_14,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (param_3,0x9927ed9b,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

