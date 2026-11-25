/* IL2CPP: AreaCompletedMonitor$$.ctor
void AreaCompletedMonitor___ctor (AreaCompletedMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaCompletedMonitor$$.ctor
   void AreaCompletedMonitor___ctor (AreaCompletedMonitor_o* __this, const MethodInfo* method); */

undefined1  [16] AreaCompletedMonitor___ctor_2433934(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_049c16a0;
  if ((bRam0000000004f4b7ec & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c16a0);
    bRam0000000004f4b7ec = 1;
  }
  uVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  LitMotion_CompositeMotionHandle___ctor_2e8ad94(uVar2,0);
  *(undefined8 *)(param_1 + 200) = uVar2;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 200),uVar2);
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  return auVar3;
}

