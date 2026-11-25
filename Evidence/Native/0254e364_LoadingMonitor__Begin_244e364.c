/* IL2CPP: LoadingMonitor$$Begin
System_IDisposable_o* LoadingMonitor__Begin (LoadingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoadingMonitor$$Begin
   System_IDisposable_o* LoadingMonitor__Begin (LoadingMonitor_o* __this, const MethodInfo* method);
    */

undefined8 LoadingMonitor__Begin_244e364(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_049c46d8;
  if ((bRam0000000004f4b8b4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c46d8);
    bRam0000000004f4b8b4 = 1;
  }
  uVar2 = *(undefined8 *)puVar1;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  uVar2 = thunk_FUN_0222ca34(uVar2);
  LoadingMonitor_LoadingScope___ctor_244e3c8(uVar2,param_1);
  return uVar2;
}

