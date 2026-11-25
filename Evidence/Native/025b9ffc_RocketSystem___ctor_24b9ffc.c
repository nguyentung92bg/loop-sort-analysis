/* IL2CPP: RocketSystem$$.ctor
void RocketSystem___ctor (RocketSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem$$.ctor
   void RocketSystem___ctor (RocketSystem_o* __this, const MethodInfo* method); */

undefined1  [16] RocketSystem___ctor_24b9ffc(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_049c6dd8;
  puVar3 = PTR_DAT_049c6dd0;
  puVar2 = PTR_DAT_049c2918;
  puVar1 = PTR_DAT_049c2908;
  if ((bRam0000000004f4bbb1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2908);
    FUN_021f03f8(PTR_DAT_049c2918);
    FUN_021f03f8(PTR_DAT_049c6dd8);
    FUN_021f03f8(PTR_DAT_049c6dd0);
    bRam0000000004f4bbb1 = 1;
  }
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType____ctor_28a1904
            (uVar5,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xa0),uVar5);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xa8),uVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

