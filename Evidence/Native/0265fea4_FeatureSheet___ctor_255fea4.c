/* IL2CPP: FeatureSheet$$.ctor
void FeatureSheet___ctor (FeatureSheet_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x029c0f20) */
/* IL2CPP: FeatureSheet$$.ctor
   void FeatureSheet___ctor (FeatureSheet_o* __this, const MethodInfo* method); */

void FeatureSheet___ctor_255fea4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_DAT_049cb900;
  puVar2 = PTR_DAT_049cb8f8;
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4c10e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb900);
    FUN_021f03f8(PTR_DAT_049cb8f8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049cb908);
    bRam0000000004f4c10e = 1;
  }
  puVar4 = PTR_DAT_049cb908;
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x48),uVar5);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar1;
  }
  lVar6 = *(long *)(lVar6 + 0xb8);
  uVar9 = *(undefined8 *)(lVar6 + 0x60);
  uVar8 = *(undefined8 *)(lVar6 + 0x78);
  uVar5 = *(undefined8 *)(lVar6 + 0x70);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar6 + 0x68);
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  thunk_FUN_021f190c(param_1 + 0x58,0);
  lVar7 = **(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0xe8
                                         ) + 0x20) + 0xc0);
  lVar6 = *(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718(lVar6);
  }
  uVar5 = thunk_FUN_0222ca34(lVar6);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x18));
  System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType____ctor_2807410
            (param_1,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x20));
  uVar5 = FUN_026b1a00(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x38));
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x18),uVar5);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

