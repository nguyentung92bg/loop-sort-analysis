/* IL2CPP: HomeMonitor$$ForceUpdateEconomyTexts
void HomeMonitor__ForceUpdateEconomyTexts (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$ForceUpdateEconomyTexts
   void HomeMonitor__ForceUpdateEconomyTexts (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__ForceUpdateEconomyTexts_2445c20(long param_1)

{
  undefined8 uVar1;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  if (*(long *)(param_1 + 0xc0) != 0) {
    uStack_14 = EconomyModule__GetInterceptedAmount_2533e00(*(long *)(param_1 + 0xc0),1,0);
    uVar1 = System_Int32__ToString_30fbaa0(&uStack_14,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0xf6f322b4,uVar1,0);
    HomeMonitor__UpdateLife_2445e74(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

