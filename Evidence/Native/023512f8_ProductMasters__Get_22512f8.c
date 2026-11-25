/* IL2CPP: ProductMasters$$Get
System_String_o* ProductMasters__Get (ProductMasters_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProductMasters$$Get
   System_String_o* ProductMasters__Get (ProductMasters_o* __this, System_String_o* productId, const
   MethodInfo* method); */

undefined8 ProductMasters__Get_22512f8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000004f49b93 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f68);
    bRam0000000004f49b93 = 1;
  }
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar2 = &uStack_28;
    uVar1 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                      (*(long *)(param_1 + 0x18),param_2,&uStack_28,*(undefined8 *)PTR_DAT_049b5f68)
    ;
    if ((uVar1 & 1) == 0) {
      puVar2 = *(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
    }
    return *puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

