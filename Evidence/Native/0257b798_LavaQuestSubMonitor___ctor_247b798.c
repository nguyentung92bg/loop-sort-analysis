/* IL2CPP: LavaQuestSubMonitor$$.ctor
void LavaQuestSubMonitor___ctor (LavaQuestSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$.ctor
   void LavaQuestSubMonitor___ctor (LavaQuestSubMonitor_o* __this, const MethodInfo* method); */

undefined1  [16] LavaQuestSubMonitor___ctor_247b798(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_049c3e58;
  puVar3 = PTR_DAT_049c3e50;
  puVar2 = PTR_DAT_049bed80;
  puVar1 = PTR_DAT_049bed68;
  if ((bRam0000000004f4b9ed & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3e50);
    FUN_021f03f8(PTR_DAT_049bed68);
    FUN_021f03f8(PTR_DAT_049c3e58);
    FUN_021f03f8(PTR_DAT_049bed80);
    bRam0000000004f4b9ed = 1;
  }
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xb0),uVar5);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0xb8) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xb8),uVar5);
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

