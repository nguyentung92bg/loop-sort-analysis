/* IL2CPP: SelectBoosterSystem$$.ctor
void SelectBoosterSystem___ctor (SelectBoosterSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SelectBoosterSystem$$.ctor
   void SelectBoosterSystem___ctor (SelectBoosterSystem_o* __this, const MethodInfo* method); */

undefined1  [16] SelectBoosterSystem___ctor_23fc030(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  puVar8 = PTR_DAT_049c2440;
  puVar7 = PTR_DAT_049c2438;
  puVar6 = PTR_DAT_049c2430;
  puVar5 = PTR_DAT_049c2428;
  puVar4 = PTR_DAT_049c2420;
  puVar3 = PTR_DAT_049c2418;
  puVar2 = PTR_DAT_049c2410;
  puVar1 = PTR_DAT_049c2408;
  if ((bRam0000000004f4b680 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2430);
    FUN_021f03f8(PTR_DAT_049c2420);
    FUN_021f03f8(PTR_DAT_049c2410);
    FUN_021f03f8(PTR_DAT_049c2428);
    FUN_021f03f8(PTR_DAT_049c2418);
    FUN_021f03f8(PTR_DAT_049c2408);
    FUN_021f03f8(PTR_DAT_049c2440);
    FUN_021f03f8(PTR_DAT_049c2438);
    bRam0000000004f4b680 = 1;
  }
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar9,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x70) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x70),uVar9);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar9,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x78) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x78),uVar9);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar9,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x80) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x80),uVar9);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar7);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar9,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x88) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x88),uVar9);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_1;
  return auVar10;
}

