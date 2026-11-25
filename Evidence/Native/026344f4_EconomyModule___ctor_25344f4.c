/* IL2CPP: EconomyModule$$.ctor
void EconomyModule___ctor (EconomyModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyModule$$.ctor
   void EconomyModule___ctor (EconomyModule_o* __this, const MethodInfo* method); */

undefined1  [16] EconomyModule___ctor_25344f4(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  puVar5 = PTR_DAT_049ca0e8;
  puVar4 = PTR_DAT_049ca0e0;
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bf3f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca0f0);
    FUN_021f03f8(PTR_DAT_049ca0e8);
    FUN_021f03f8(PTR_DAT_049c99e8);
    FUN_021f03f8(PTR_DAT_049c99f8);
    FUN_021f03f8(PTR_DAT_049ca0e0);
    FUN_021f03f8(PTR_DAT_049ca0f8);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bf3f = 1;
  }
  puVar7 = PTR_DAT_049ca0f8;
  puVar6 = PTR_DAT_049ca0f0;
  puVar3 = PTR_DAT_049c99f8;
  puVar2 = PTR_DAT_049c99e8;
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar8,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x50) = uVar8;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),uVar8);
  lVar9 = *(long *)puVar1;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
    lVar9 = *(long *)puVar1;
  }
  lVar9 = *(long *)(lVar9 + 0xb8);
  uVar11 = *(undefined8 *)(lVar9 + 0x68);
  uVar10 = *(undefined8 *)(lVar9 + 0x60);
  uVar8 = *(undefined8 *)(lVar9 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar9 + 0x78);
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  *(undefined8 *)(param_1 + 0x60) = uVar11;
  *(undefined8 *)(param_1 + 0x58) = uVar10;
  thunk_FUN_021f190c(param_1 + 0x60,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar7);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar8,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x78) = uVar8;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x78),uVar8);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar8,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x80) = uVar8;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x80),uVar8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_1;
  return auVar12;
}

