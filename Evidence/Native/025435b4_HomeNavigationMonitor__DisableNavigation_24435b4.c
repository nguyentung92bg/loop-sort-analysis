/* IL2CPP: HomeNavigationMonitor$$DisableNavigation
void HomeNavigationMonitor__DisableNavigation (HomeNavigationMonitor_o* __this, Il2CppObject* owner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeNavigationMonitor$$DisableNavigation
   void HomeNavigationMonitor__DisableNavigation (HomeNavigationMonitor_o* __this, Il2CppObject*
   owner, const MethodInfo* method); */

void HomeNavigationMonitor__DisableNavigation_24435b4(long param_1,long param_2)

{
  if ((bRam0000000004f4b891 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb8b0);
    bRam0000000004f4b891 = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0xd8) == 0) goto LAB_0254361c;
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
              (*(long *)(param_1 + 0xd8),param_2,*(undefined8 *)PTR_DAT_049bb8b0);
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0xb8) + 0x3d) = 0;
    return;
  }
LAB_0254361c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

