/* IL2CPP: LoadingMonitor$$Activate
void LoadingMonitor__Activate (LoadingMonitor_o* __this, LoadingMonitor_LoadingScope_o* scope, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoadingMonitor$$Activate
   void LoadingMonitor__Activate (LoadingMonitor_o* __this, LoadingMonitor_LoadingScope_o* scope,
   const MethodInfo* method); */

void LoadingMonitor__Activate_244e204(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar1 == 0) {
LAB_0254e26c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__SetActive_3c1ce34(lVar1,1,0);
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_0254e26c;
  Monitors__DisableRaycaster_256ea20(*(long *)(param_1 + 0x30),param_2,0);
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_0254e26c;
  Monitors__DisableDragging_256e91c(*(long *)(param_1 + 0x30),param_2,0);
  lVar1 = *(long *)(param_1 + 0x98);
  if (lVar1 == 0) goto LAB_0254e26c;
  if ((bRam0000000004f4b891 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb8b0);
    bRam0000000004f4b891 = 1;
  }
  if (param_2 != 0) {
    if (*(long *)(lVar1 + 0xd8) == 0) goto LAB_0254361c;
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
              (*(long *)(lVar1 + 0xd8),param_2,*(undefined8 *)PTR_DAT_049bb8b0);
  }
  if (*(long *)(lVar1 + 0xb8) != 0) {
    *(undefined1 *)(*(long *)(lVar1 + 0xb8) + 0x3d) = 0;
    return;
  }
LAB_0254361c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

