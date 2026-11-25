/* IL2CPP: TransitionMonitor$$OnDeactivated
void TransitionMonitor__OnDeactivated (TransitionMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TransitionMonitor$$OnDeactivated
   void TransitionMonitor__OnDeactivated (TransitionMonitor_o* __this, const MethodInfo* method); */

void TransitionMonitor__OnDeactivated_2466a10(long param_1)

{
  long lVar1;
  
  MonitorBase__OnDeactivated_256ca84(param_1,0);
  if (*(long *)(param_1 + 0xa8) == 0) {
LAB_02566a48:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  RaycastBlockerMonitor__Unblock_245bb2c(*(long *)(param_1 + 0xa8),param_1);
  lVar1 = *(long *)(param_1 + 0xb0);
  if (lVar1 == 0) goto LAB_02566a48;
  if ((bRam0000000004f4bf5a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13f0,param_1,0);
    FUN_021f03f8(PTR_DAT_049c13f8);
    bRam0000000004f4bf5a = 1;
  }
  if (param_1 != 0) {
    if (*(long *)(lVar1 + 0x48) == 0) goto LAB_02635db0;
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(lVar1 + 0x48),param_1,*(undefined8 *)PTR_DAT_049c13f0);
  }
  if (*(long *)(lVar1 + 0x48) != 0) {
    if (*(int *)(*(long *)(lVar1 + 0x48) + 0x20) < 1) {
      *(undefined1 *)(lVar1 + 0x38) = 0;
    }
    return;
  }
LAB_02635db0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

