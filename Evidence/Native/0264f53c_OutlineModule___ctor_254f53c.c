/* IL2CPP: OutlineModule$$.ctor
void OutlineModule___ctor (OutlineModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: OutlineModule$$.ctor
   void OutlineModule___ctor (OutlineModule_o* __this, const MethodInfo* method); */

undefined1  [16] OutlineModule___ctor_254f53c(ulong param_1)

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
  
  puVar8 = PTR_DAT_049cac50;
  puVar7 = PTR_DAT_049cac48;
  puVar6 = PTR_DAT_049cac40;
  puVar5 = PTR_DAT_049cac38;
  puVar4 = PTR_DAT_049cac30;
  puVar3 = PTR_DAT_049cac28;
  puVar2 = PTR_DAT_049cab78;
  puVar1 = PTR_DAT_049cab70;
  if ((bRam0000000004f4c06a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cac40);
    FUN_021f03f8(PTR_DAT_049cac50);
    FUN_021f03f8(PTR_DAT_049cac38);
    FUN_021f03f8(PTR_DAT_049cac48);
    FUN_021f03f8(PTR_DAT_049cab78);
    FUN_021f03f8(PTR_DAT_049cab70);
    FUN_021f03f8(PTR_DAT_049cac30);
    FUN_021f03f8(PTR_DAT_049cac28);
    bRam0000000004f4c06a = 1;
  }
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar9,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x28),uVar9);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType____ctor_28a1904
            (uVar9,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x30),uVar9);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar9,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x38),uVar9);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar7);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar9,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x40),uVar9);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar7);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar9,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x48),uVar9);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_1;
  return auVar10;
}

