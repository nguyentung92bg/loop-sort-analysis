/* IL2CPP: CarpetCarrierGroupControl$$.ctor
void CarpetCarrierGroupControl___ctor (CarpetCarrierGroupControl_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarpetCarrierGroupControl$$.ctor
   void CarpetCarrierGroupControl___ctor (CarpetCarrierGroupControl_o* __this, const MethodInfo*
   method); */

undefined1  [16] CarpetCarrierGroupControl___ctor_2404480(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar2 = PTR_DAT_049c26d8;
  puVar1 = PTR_DAT_049c26d0;
  if ((bRam0000000004f4b6a8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c26d8);
    FUN_021f03f8(PTR_DAT_049c26d0);
    bRam0000000004f4b6a8 = 1;
  }
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xd0),uVar5);
  puVar1 = PTR_DAT_049c1410;
  if ((bRam0000000004f4b6a1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1410);
    bRam0000000004f4b6a1 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
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
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),uVar5);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x58),uVar5);
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

