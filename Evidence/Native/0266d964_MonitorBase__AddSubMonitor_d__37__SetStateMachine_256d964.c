/* IL2CPP: MonitorBase.<AddSubMonitor>d__37$$SetStateMachine
void MonitorBase__AddSubMonitor_d__37__SetStateMachine (MonitorBase__AddSubMonitor_d__37_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorBase.<AddSubMonitor>d__37$$SetStateMachine
   void MonitorBase__AddSubMonitor_d__37__SetStateMachine (MonitorBase__AddSubMonitor_d__37_o
   __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo*
   method); */

undefined1  [16]
MonitorBase__AddSubMonitor_d__37__SetStateMachine_256d964(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_049c46c0;
  if ((bRam0000000004f4c1a0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c46c0);
    bRam0000000004f4c1a0 = 1;
  }
  uVar2 = *(undefined8 *)puVar1;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1 + 8;
  return auVar3;
}

