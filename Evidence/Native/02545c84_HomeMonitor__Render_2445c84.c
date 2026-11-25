/* IL2CPP: HomeMonitor$$Render
void HomeMonitor__Render (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$Render
   void HomeMonitor__Render (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__Render_2445c84(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_20 [16];
  
  auStack_20._0_8_ = 0;
  auStack_20._8_8_ = 0;
  MonitorBase__Render_256c914(param_1,0);
  uVar1 = UniTimer__get_IsRunning_3f0efa0(param_1 + 0x188,0);
  if ((uVar1 & 1) == 0) {
    auStack_20 = UniTimer__CreateFromSeconds_3f0f2f4(0x3f800000,0);
    auVar3 = UniTimer__SetUnscaled_3f0f260(auStack_20,0);
    *(undefined1 (*) [16])(param_1 + 0x188) = auVar3;
    HomeMonitor__RenderLife_2445d00(param_1);
    lVar2 = *(long *)(param_1 + 0x130);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    }
    HomeMonitor__RenderDebug_2445d38(param_1);
  }
  return;
}

