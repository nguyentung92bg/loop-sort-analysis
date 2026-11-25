/* IL2CPP: HomeMonitor$$OnDebugTimeHoldStart
void HomeMonitor__OnDebugTimeHoldStart (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$OnDebugTimeHoldStart
   void HomeMonitor__OnDebugTimeHoldStart (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__OnDebugTimeHoldStart_2448520(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [12];
  undefined1 auStack_40 [16];
  
  puVar3 = PTR_DAT_049c4430;
  puVar2 = PTR_DAT_049c20a8;
  puVar1 = PTR_DAT_049c2058;
  if ((bRam0000000004f4b87d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049c4430);
    FUN_021f03f8(PTR_DAT_049c20a8);
    bRam0000000004f4b87d = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  FUN_024f75b8(*(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x1cc),
               *(undefined4 *)(param_1 + 0x1d4),1,0);
  auStack_40 = LitMotion_LMotion__Create_2ea9f9c(0,0x40a00000,0x3f800000,0);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar4,param_1,*(undefined8 *)puVar3,0);
  auVar5 = FUN_024f6d0c(auStack_40,uVar4,*(undefined8 *)puVar2);
  *(undefined1 (*) [12])(param_1 + 0x1cc) = auVar5;
  return;
}

