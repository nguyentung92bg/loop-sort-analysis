/* IL2CPP: Block$$.ctor
void Block___ctor (Block_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$.ctor
   void Block___ctor (Block_o* __this, const MethodInfo* method); */

undefined1  [16] Block___ctor_23dd0c8(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar5 = PTR_DAT_049c1410;
  puVar4 = PTR_DAT_049c1408;
  puVar3 = PTR_DAT_049c1400;
  puVar2 = PTR_DAT_049bb8c0;
  puVar1 = PTR_DAT_049bb8b8;
  if ((bRam0000000004f4b5c5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049bb8b8);
    FUN_021f03f8(PTR_DAT_049bb8c0);
    FUN_021f03f8(PTR_DAT_049c1408);
    FUN_021f03f8(PTR_DAT_049c1400);
    bRam0000000004f4b5c5 = 1;
  }
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType____ctor_28a1904
            (uVar6,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x160) = uVar6;
  thunk_FUN_021f190c(param_1 + 0x160,uVar6);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType____ctor_28a1904
            (uVar6,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x168) = uVar6;
  thunk_FUN_021f190c(param_1 + 0x168,uVar6);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar6,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x170) = uVar6;
  thunk_FUN_021f190c(param_1 + 0x170,uVar6);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c8510;
  puVar3 = PTR_DAT_049c8508;
  puVar2 = PTR_DAT_049c8500;
  puVar1 = PTR_DAT_049c84f8;
  if ((bRam0000000004f4bd27 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8510,0);
    FUN_021f03f8(PTR_DAT_049c8500);
    FUN_021f03f8(PTR_DAT_049c8508);
    FUN_021f03f8(PTR_DAT_049c84f8);
    bRam0000000004f4bd27 = 1;
  }
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar6,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),uVar6);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar6,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x58),uVar6);
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

