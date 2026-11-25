/* IL2CPP: HomeNavigationMonitor$$OnDeactivated
void HomeNavigationMonitor__OnDeactivated (HomeNavigationMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeNavigationMonitor$$OnDeactivated
   void HomeNavigationMonitor__OnDeactivated (HomeNavigationMonitor_o* __this, const MethodInfo*
   method); */

void HomeNavigationMonitor__OnDeactivated_244a01c(long param_1)

{
  undefined8 *puVar1;
  
  MonitorBase__OnDeactivated_256ca84(param_1,0);
  if (*(long *)(param_1 + 0xb8) != 0) {
    SwipeablePageLayout__Deactivate_244a050();
    puVar1 = (undefined8 *)(param_1 + 0xa0);
    *puVar1 = 0;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                   ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

