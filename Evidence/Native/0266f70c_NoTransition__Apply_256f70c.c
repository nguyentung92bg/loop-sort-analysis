/* IL2CPP: NoTransition$$Apply
Cysharp_Threading_Tasks_UniTask_o NoTransition__Apply (NoTransition_o __this, IMonitor_o* _monitor, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NoTransition$$Apply
   Cysharp_Threading_Tasks_UniTask_o NoTransition__Apply (NoTransition_o __this, IMonitor_o*
   _monitor, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

undefined1  [16] NoTransition__Apply_256f70c(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_049b5138;
  if ((bRam0000000004f4c1ba & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4c1ba = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined1 (*) [16])(*(long *)(lVar2 + 0xb8) + 0x10);
}

