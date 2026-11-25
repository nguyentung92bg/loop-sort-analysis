/* IL2CPP: HomeNavigationMonitor$$HasCurrentPage
bool HomeNavigationMonitor__HasCurrentPage (HomeNavigationMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeNavigationMonitor$$HasCurrentPage
   bool HomeNavigationMonitor__HasCurrentPage (HomeNavigationMonitor_o* __this, const MethodInfo*
   method); */

uint HomeNavigationMonitor__HasCurrentPage_244b89c(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000004f4b893 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b893 = 1;
  }
  puVar1 = PTR_DAT_049b3b98;
  if (*(long *)(param_1 + 0xb8) != 0) {
    uVar3 = SwipeablePageLayout__GetCurrentPageMonitor_244b910();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    puVar1 = PTR_DAT_049b3b98;
    if ((bRam0000000004f584f8 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049b3b98,0,0);
      bRam0000000004f584f8 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar2 = UnityEngine_Object__CompareBaseObjects_3c23098(uVar3,0);
    return (uVar2 ^ 0xffffffff) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

