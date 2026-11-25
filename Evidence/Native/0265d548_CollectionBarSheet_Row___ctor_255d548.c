/* IL2CPP: CollectionBarSheet.Row$$.ctor
void CollectionBarSheet_Row___ctor (CollectionBarSheet_Row_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBarSheet.Row$$.ctor
   void CollectionBarSheet_Row___ctor (CollectionBarSheet_Row_o* __this, const MethodInfo* method);
    */

undefined1  [16] CollectionBarSheet_Row___ctor_255d548(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = PTR_DAT_049cb710;
  puVar2 = PTR_DAT_049cb708;
  puVar1 = PTR_DAT_049cb460;
  if ((bRam0000000004f4c0f5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb710);
    FUN_021f03f8(PTR_DAT_049cb708);
    FUN_021f03f8(PTR_DAT_049cb460);
    bRam0000000004f4c0f5 = 1;
  }
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar4,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x28),uVar4);
  uVar4 = *(undefined8 *)puVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
  return auVar5;
}

