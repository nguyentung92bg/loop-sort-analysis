/* IL2CPP: LoadingMonitor$$Deactivate
void LoadingMonitor__Deactivate (LoadingMonitor_o* __this, LoadingMonitor_LoadingScope_o* scope, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0254e308) */
/* IL2CPP: LoadingMonitor$$Deactivate
   void LoadingMonitor__Deactivate (LoadingMonitor_o* __this, LoadingMonitor_LoadingScope_o* scope,
   const MethodInfo* method); */

void LoadingMonitor__Deactivate_244e270(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Monitors__RestoreRaycaster_256eafc(*(long *)(param_1 + 0x30),param_2,0);
  if (*(long *)(param_1 + 0x30) != 0) {
    Monitors__RestoreDragging_256e990(*(long *)(param_1 + 0x30),param_2,0);
    if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    HomeNavigationMonitor__RestoreNavigation_244b800(*(long *)(param_1 + 0x98),param_2);
    if (*(int *)(param_1 + 0xa0) < 1) {
      lVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar1,0,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

