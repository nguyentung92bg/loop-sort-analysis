/* IL2CPP: LoopSortSave$$.ctor
void LoopSortSave___ctor (LoopSortSave_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortSave$$.ctor
   void LoopSortSave___ctor (LoopSortSave_o* __this, const MethodInfo* method); */

void LoopSortSave___ctor_223f9cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  puVar3 = PTR_DAT_049b51c8;
  if ((bRam0000000004f49afa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b51c8);
    bRam0000000004f49afa = 1;
  }
  puVar10 = PTR_DAT_049cfaa8;
  puVar9 = PTR_DAT_049cfaa0;
  puVar8 = PTR_DAT_049cfa98;
  puVar7 = PTR_DAT_049cfa90;
  puVar6 = PTR_DAT_049cfa88;
  puVar5 = PTR_DAT_049badb8;
  puVar4 = PTR_DAT_049badb0;
  puVar2 = PTR_DAT_049b45f8;
  puVar1 = PTR_DAT_049b45f0;
  if ((bRam0000000004f4c66b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b45f8,*(undefined8 *)puVar3);
    FUN_021f03f8(PTR_DAT_049badb8);
    FUN_021f03f8(PTR_DAT_049cfaa8);
    FUN_021f03f8(PTR_DAT_049cfa98);
    FUN_021f03f8(PTR_DAT_049cfaa0);
    FUN_021f03f8(PTR_DAT_049b45f0);
    FUN_021f03f8(PTR_DAT_049badb0);
    FUN_021f03f8(PTR_DAT_049cfa90);
    FUN_021f03f8(PTR_DAT_049cfa88);
    bRam0000000004f4c66b = 1;
  }
  Voodoo_Nakama_Storage_StorageObject_object____ctor_29b0ad4(param_1,*(undefined8 *)puVar6);
  uVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar11,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar11;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x30),uVar11);
  uVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar11,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x38) = uVar11;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x38),uVar11);
  uVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar7);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar11,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x40) = uVar11;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x40),uVar11);
  uVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar9);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar11,*(undefined8 *)puVar10);
  puVar12 = (undefined8 *)(param_1 + 0x48);
  *puVar12 = uVar11;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar12 >> 0xc & 0x3f),
                 ((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

