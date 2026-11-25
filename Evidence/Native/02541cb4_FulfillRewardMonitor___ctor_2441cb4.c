/* IL2CPP: FulfillRewardMonitor$$.ctor
void FulfillRewardMonitor___ctor (FulfillRewardMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillRewardMonitor$$.ctor
   void FulfillRewardMonitor___ctor (FulfillRewardMonitor_o* __this, const MethodInfo* method); */

undefined1  [16] FulfillRewardMonitor___ctor_2441cb4(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar5 = PTR_DAT_049c4128;
  puVar4 = PTR_DAT_049c4120;
  puVar3 = PTR_DAT_049c4118;
  puVar2 = PTR_DAT_049c4110;
  puVar1 = PTR_DAT_049c16a0;
  if ((bRam0000000004f4b84e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c16a0);
    FUN_021f03f8(PTR_DAT_049c4128);
    FUN_021f03f8(PTR_DAT_049c4120);
    FUN_021f03f8(PTR_DAT_049c4118);
    FUN_021f03f8(PTR_DAT_049c4110);
    bRam0000000004f4b84e = 1;
  }
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  LitMotion_CompositeMotionHandle___ctor_2e8ad94(uVar6,0);
  *(undefined8 *)(param_1 + 0xf0) = uVar6;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xf0),uVar6);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar6,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0xf8) = uVar6;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xf8),uVar6);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar6,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x100) = uVar6;
  thunk_FUN_021f190c(param_1 + 0x100,uVar6);
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_1;
  return auVar7;
}

