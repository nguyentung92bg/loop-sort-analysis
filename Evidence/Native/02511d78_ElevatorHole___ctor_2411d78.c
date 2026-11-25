/* IL2CPP: ElevatorHole$$.ctor
void ElevatorHole___ctor (ElevatorHole_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ElevatorHole$$.ctor
   void ElevatorHole___ctor (ElevatorHole_o* __this, const MethodInfo* method); */

undefined1  [16] ElevatorHole___ctor_2411d78(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  puVar5 = PTR_DAT_049c26d8;
  puVar4 = PTR_DAT_049c26d0;
  puVar3 = PTR_DAT_049c1410;
  if ((bRam0000000004f4b727 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c26d8);
    FUN_021f03f8(PTR_DAT_049c26d0);
    bRam0000000004f4b727 = 1;
  }
  uVar2 = _UNK_013aa270;
  uVar1 = _UNK_013a9c88;
  uVar8 = _UNK_013a9c80;
  uVar7 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0xc0) = _UNK_013aa278;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  *(undefined8 *)(param_1 + 200) = uVar8;
  *(undefined4 *)(param_1 + 0xd8) = 0x3eb33333;
  uVar8 = thunk_FUN_0222ca34(uVar7);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar8,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0xf0) = uVar8;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xf0),uVar8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar6 = PTR_DAT_049c8510;
  puVar5 = PTR_DAT_049c8508;
  puVar4 = PTR_DAT_049c8500;
  puVar3 = PTR_DAT_049c84f8;
  if ((bRam0000000004f4bd27 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8510,0);
    FUN_021f03f8(PTR_DAT_049c8500);
    FUN_021f03f8(PTR_DAT_049c8508);
    FUN_021f03f8(PTR_DAT_049c84f8);
    bRam0000000004f4bd27 = 1;
  }
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar8,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x50) = uVar8;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),uVar8);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar8,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x58) = uVar8;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x58),uVar8);
  puVar3 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_1;
  return auVar9;
}

