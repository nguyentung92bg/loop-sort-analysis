/* IL2CPP: AdjustEventSheet$$.ctor
void AdjustEventSheet___ctor (AdjustEventSheet_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x029c0f20) */
/* IL2CPP: AdjustEventSheet$$.ctor
   void AdjustEventSheet___ctor (AdjustEventSheet_o* __this, const MethodInfo* method); */

void AdjustEventSheet___ctor_2557380(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar5 = PTR_DAT_049cb2c0;
  puVar4 = PTR_DAT_049cb2b8;
  puVar3 = PTR_DAT_049cb2b0;
  puVar2 = PTR_DAT_049be168;
  puVar1 = PTR_DAT_049be160;
  if ((bRam0000000004f4c0b5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049be160);
    FUN_021f03f8(PTR_DAT_049cb2b8);
    FUN_021f03f8(PTR_DAT_049be168);
    FUN_021f03f8(PTR_DAT_049cb2b0);
    FUN_021f03f8(PTR_DAT_049cb2c0);
    bRam0000000004f4c0b5 = 1;
  }
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar6,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x48),uVar6);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar6,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),uVar6);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar6,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x58),uVar6);
  lVar7 = **(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0xe8
                                         ) + 0x20) + 0xc0);
  lVar8 = *(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718(lVar8);
  }
  uVar6 = thunk_FUN_0222ca34(lVar8);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x18));
  System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType____ctor_2807410
            (param_1,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x20));
  uVar6 = FUN_026b1a00(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x38));
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x18),uVar6);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

