/* IL2CPP: HomeMonitor$$OnEconomyUpdate
void HomeMonitor__OnEconomyUpdate (HomeMonitor_o* __this, EconomyUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$OnEconomyUpdate
   void HomeMonitor__OnEconomyUpdate (HomeMonitor_o* __this, EconomyUpdateMessage_o m, const
   MethodInfo* method); */

void HomeMonitor__OnEconomyUpdate_2446068(long param_1,long param_2)

{
  long lVar1;
  
  if (*(int *)(param_2 + 0x10) == 1) {
    HomeMonitor__UpdateView_24449e4(param_1);
  }
  lVar1 = *(long *)(param_1 + 0x128);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0254609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}

