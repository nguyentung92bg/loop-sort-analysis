/* IL2CPP: LiveOpsMonitor$$OnActivated
void LiveOpsMonitor__OnActivated (LiveOpsMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsMonitor$$OnActivated
   void LiveOpsMonitor__OnActivated (LiveOpsMonitor_o* __this, const MethodInfo* method); */

void LiveOpsMonitor__OnActivated_244d7d0(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auStack_20 [16];
  
  auStack_20._0_8_ = 0;
  auStack_20._8_8_ = 0;
  MonitorBase__OnActivated_256c9f4(param_1,0);
  auStack_20 = UniTimer__CreateFromSeconds_3f0f2f4(0x3f000000,0);
  auVar1 = UniTimer__SetUnscaled_3f0f260(auStack_20,0);
  *(undefined1 (*) [16])(param_1 + 0xa8) = auVar1;
  return;
}

