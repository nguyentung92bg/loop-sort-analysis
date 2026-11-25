/* IL2CPP: AreasMonitor.AreaView$$.ctor
void AreasMonitor_AreaView___ctor (AreasMonitor_AreaView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor.AreaView$$.ctor
   void AreasMonitor_AreaView___ctor (AreasMonitor_AreaView_o* __this, const MethodInfo* method); */

undefined1  [16] AreasMonitor_AreaView___ctor_2436a58(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_049c3ba8;
  puVar3 = PTR_DAT_049c3ba0;
  puVar2 = PTR_DAT_049c2820;
  puVar1 = PTR_DAT_049c2818;
  if ((bRam0000000004f4b809 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2820);
    FUN_021f03f8(PTR_DAT_049c3ba8);
    FUN_021f03f8(PTR_DAT_049c3ba0);
    FUN_021f03f8(PTR_DAT_049c2818);
    bRam0000000004f4b809 = 1;
  }
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x28),uVar5);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x30),uVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

