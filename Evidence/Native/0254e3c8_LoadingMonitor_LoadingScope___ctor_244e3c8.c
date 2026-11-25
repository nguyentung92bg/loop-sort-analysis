/* IL2CPP: LoadingMonitor.LoadingScope$$.ctor
void LoadingMonitor_LoadingScope___ctor (LoadingMonitor_LoadingScope_o* __this, LoadingMonitor_o* _monitor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoadingMonitor.LoadingScope$$.ctor
   void LoadingMonitor_LoadingScope___ctor (LoadingMonitor_LoadingScope_o* __this, LoadingMonitor_o*
   _monitor, const MethodInfo* method); */

void LoadingMonitor_LoadingScope___ctor_244e3c8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  System_Object___ctor_3142338(param_1,0);
  plVar3 = (long *)(param_1 + 0x10);
  *plVar3 = param_2;
  thunk_FUN_021f190c(plVar3,param_2);
  lVar2 = *plVar3;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar1 = UnityEngine_Component__get_gameObject_3c187f4(lVar2,0);
  if (lVar1 == 0) {
LAB_0254e26c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__SetActive_3c1ce34(lVar1,1,0);
  if (*(long *)(lVar2 + 0x30) == 0) goto LAB_0254e26c;
  Monitors__DisableRaycaster_256ea20(*(long *)(lVar2 + 0x30),param_1,0);
  if (*(long *)(lVar2 + 0x30) == 0) goto LAB_0254e26c;
  Monitors__DisableDragging_256e91c(*(long *)(lVar2 + 0x30),param_1,0);
  lVar2 = *(long *)(lVar2 + 0x98);
  if (lVar2 == 0) goto LAB_0254e26c;
  if ((bRam0000000004f4b891 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb8b0);
    bRam0000000004f4b891 = 1;
  }
  if (param_1 != 0) {
    if (*(long *)(lVar2 + 0xd8) == 0) goto LAB_0254361c;
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
              (*(long *)(lVar2 + 0xd8),param_1,*(undefined8 *)PTR_DAT_049bb8b0);
  }
  if (*(long *)(lVar2 + 0xb8) != 0) {
    *(undefined1 *)(*(long *)(lVar2 + 0xb8) + 0x3d) = 0;
    return;
  }
LAB_0254361c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

