/* IL2CPP: HomeSceneSpawner$$.ctor
void HomeSceneSpawner___ctor (HomeSceneSpawner_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneSpawner$$.ctor
   void HomeSceneSpawner___ctor (HomeSceneSpawner_o* __this, const MethodInfo* method); */

undefined1  [16] HomeSceneSpawner___ctor_241f42c(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar4 = PTR_DAT_049c2fc8;
  puVar3 = PTR_DAT_049c2fc0;
  if ((bRam0000000004f4b776 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2fc8);
    FUN_021f03f8(PTR_DAT_049c2fc0);
    bRam0000000004f4b776 = 1;
  }
  uVar2 = _UNK_013a9fd8;
  uVar1 = _UNK_013a9fd0;
  uVar6 = _UNK_013a8a50;
  uVar5 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x24) = _UNK_013a8a58;
  *(undefined8 *)(param_1 + 0x1c) = uVar6;
  *(undefined8 *)(param_1 + 0x34) = uVar2;
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  *(undefined8 *)(param_1 + 0x3c) = 0x422000003f8f5c29;
  uVar6 = thunk_FUN_0222ca34(uVar5);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar6,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x48),uVar6);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_1;
  return auVar7;
}

