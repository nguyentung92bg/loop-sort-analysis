/* IL2CPP: HomeNavigationMonitor$$IsCurrentPageOfType<object>
bool HomeNavigationMonitor__IsCurrentPageOfType_object_ (HomeNavigationMonitor_o* __this, const MethodInfo_2641554* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeNavigationMonitor$$IsCurrentPageOfType<object>
   bool HomeNavigationMonitor__IsCurrentPageOfType_object_ (HomeNavigationMonitor_o* __this, const
   MethodInfo_2641554* method); */

bool HomeNavigationMonitor__IsCurrentPageOfType_object__2641554(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_02229774(param_2);
    }
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    lVar1 = SwipeablePageLayout__GetCurrentPageMonitor_244b910(*(long *)(param_1 + 0xb8),0);
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574(*(long *)PTR_DAT_049b3b98);
    }
    uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(lVar1,0,0);
    if ((uVar2 & 1) != 0) {
      return false;
    }
    uVar4 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar3 = System_Type__GetTypeFromHandle_310ebfc(uVar4,0);
    if (lVar1 != 0) {
      lVar1 = System_Object__GetType_3142aac(lVar1,0);
      return lVar3 == lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

