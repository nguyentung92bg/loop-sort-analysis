/* IL2CPP: HomeSceneView$$.ctor
void HomeSceneView___ctor (HomeSceneView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneView$$.ctor
   void HomeSceneView___ctor (HomeSceneView_o* __this, const MethodInfo* method); */

undefined1  [16] HomeSceneView___ctor_242e43c(ulong param_1)

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
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  puVar8 = PTR_DAT_049c3768;
  puVar7 = PTR_DAT_049c3760;
  puVar6 = PTR_DAT_049c3758;
  puVar5 = PTR_DAT_049c3750;
  puVar4 = PTR_DAT_049c3748;
  puVar3 = PTR_DAT_049c3740;
  puVar2 = PTR_DAT_049c3738;
  puVar1 = PTR_DAT_049bde28;
  if ((bRam0000000004f4b7c5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3768);
    FUN_021f03f8(PTR_DAT_049c3740);
    FUN_021f03f8(PTR_DAT_049c3760);
    FUN_021f03f8(PTR_DAT_049c3750);
    FUN_021f03f8(PTR_DAT_049c3738);
    FUN_021f03f8(PTR_DAT_049c3758);
    FUN_021f03f8(PTR_DAT_049c3748);
    FUN_021f03f8(PTR_DAT_049bde28);
    bRam0000000004f4b7c5 = 1;
  }
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar9,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x20),uVar9);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar9,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x28),uVar9);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar6);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar9,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x30),uVar9);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Random___ctor_3110740(uVar9,0);
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x38),uVar9);
  lVar11 = *(long *)puVar8;
  lVar10 = *(long *)(lVar11 + 0x38);
  if (lVar10 == 0) {
    FUN_02229774(lVar11);
    lVar10 = *(long *)(lVar11 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718();
  }
  *(undefined8 *)(param_1 + 0x70) = **(undefined8 **)(lVar10 + 0xb8);
  thunk_FUN_021f190c();
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_1;
  return auVar12;
}

