/* IL2CPP: HandMonitor$$.ctor
void HandMonitor___ctor (HandMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HandMonitor$$.ctor
   void HandMonitor___ctor (HandMonitor_o* __this, const MethodInfo* method); */

undefined1  [16] HandMonitor___ctor_2443dd4(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_049c16a0;
  if ((bRam0000000004f4b857 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c16a0);
    bRam0000000004f4b857 = 1;
  }
  uVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  LitMotion_CompositeMotionHandle___ctor_2e8ad94(uVar2,0);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x98),uVar2);
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

