/* IL2CPP: HomeNavigationMonitor$$RestoreNavigation
void HomeNavigationMonitor__RestoreNavigation (HomeNavigationMonitor_o* __this, Il2CppObject* owner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeNavigationMonitor$$RestoreNavigation
   void HomeNavigationMonitor__RestoreNavigation (HomeNavigationMonitor_o* __this, Il2CppObject*
   owner, const MethodInfo* method); */

void HomeNavigationMonitor__RestoreNavigation_244b800(long param_1,long param_2)

{
  if ((bRam0000000004f4b892 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13f0);
    FUN_021f03f8(PTR_DAT_049c13f8);
    bRam0000000004f4b892 = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0xd8) == 0) goto LAB_0254b88c;
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(param_1 + 0xd8),param_2,*(undefined8 *)PTR_DAT_049c13f0);
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    if (*(int *)(*(long *)(param_1 + 0xd8) + 0x20) < 1) {
      if (*(long *)(param_1 + 0xb8) == 0) goto LAB_0254b88c;
      *(undefined1 *)(*(long *)(param_1 + 0xb8) + 0x3d) = 1;
    }
    return;
  }
LAB_0254b88c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

