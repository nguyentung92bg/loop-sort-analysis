/* IL2CPP: HomeMonitor$$.ctor
void HomeMonitor___ctor (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$.ctor
   void HomeMonitor___ctor (HomeMonitor_o* __this, const MethodInfo* method); */

undefined1  [16] HomeMonitor___ctor_244873c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  puVar6 = PTR_DAT_049c4470;
  puVar5 = PTR_DAT_049c4468;
  puVar4 = PTR_DAT_049c4460;
  puVar3 = PTR_DAT_049c4458;
  puVar2 = PTR_DAT_049c4450;
  puVar1 = PTR_DAT_049c4448;
  if ((bRam0000000004f4b87f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4460);
    FUN_021f03f8(PTR_DAT_049c4450);
    FUN_021f03f8(PTR_DAT_049c4458);
    FUN_021f03f8(PTR_DAT_049c4448);
    FUN_021f03f8(PTR_DAT_049c4470);
    FUN_021f03f8(PTR_DAT_049c4468);
    bRam0000000004f4b87f = 1;
  }
  uVar7 = *(undefined8 *)puVar1;
  *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
  uVar7 = thunk_FUN_0222ca34(uVar7);
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType____ctor_28a1904
            (uVar7,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x1b0) = uVar7;
  thunk_FUN_021f190c(param_1 + 0x1b0,uVar7);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType____ctor_28a1904
            (uVar7,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x1b8) = uVar7;
  thunk_FUN_021f190c(param_1 + 0x1b8,uVar7);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar7,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x1c0) = uVar7;
  thunk_FUN_021f190c(param_1 + 0x1c0,uVar7);
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_1;
  return auVar8;
}

