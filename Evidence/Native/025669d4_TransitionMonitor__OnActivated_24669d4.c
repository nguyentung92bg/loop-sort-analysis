/* IL2CPP: TransitionMonitor$$OnActivated
void TransitionMonitor__OnActivated (TransitionMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TransitionMonitor$$OnActivated
   void TransitionMonitor__OnActivated (TransitionMonitor_o* __this, const MethodInfo* method); */

void TransitionMonitor__OnActivated_24669d4(long param_1)

{
  long lVar1;
  
  MonitorBase__OnActivated_256c9f4(param_1,0);
  if (*(long *)(param_1 + 0xa8) != 0) {
    RaycastBlockerMonitor__Block_245bbe0(*(long *)(param_1 + 0xa8),param_1);
    lVar1 = *(long *)(param_1 + 0xb0);
    if (lVar1 != 0) {
      if ((bRam0000000004f4bf59 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049bb8b0,param_1,0);
        bRam0000000004f4bf59 = 1;
      }
      if (param_1 != 0) {
        if (*(long *)(lVar1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                  (*(long *)(lVar1 + 0x48),param_1,*(undefined8 *)PTR_DAT_049bb8b0);
      }
      *(undefined1 *)(lVar1 + 0x38) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

