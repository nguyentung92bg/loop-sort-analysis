/* IL2CPP: KeyBlockGroupSystem$$.ctor
void KeyBlockGroupSystem___ctor (KeyBlockGroupSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: KeyBlockGroupSystem$$.ctor
   void KeyBlockGroupSystem___ctor (KeyBlockGroupSystem_o* __this, const MethodInfo* method); */

undefined1  [16] KeyBlockGroupSystem___ctor_23ec3e0(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_049c1eb0;
  puVar3 = PTR_DAT_049c1ea8;
  puVar2 = PTR_DAT_049c1ea0;
  puVar1 = PTR_DAT_049c1e98;
  if ((bRam0000000004f4b629 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1eb0);
    FUN_021f03f8(PTR_DAT_049c1ea0);
    FUN_021f03f8(PTR_DAT_049c1ea8);
    FUN_021f03f8(PTR_DAT_049c1e98);
    bRam0000000004f4b629 = 1;
  }
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xa8),uVar5);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xb0),uVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

