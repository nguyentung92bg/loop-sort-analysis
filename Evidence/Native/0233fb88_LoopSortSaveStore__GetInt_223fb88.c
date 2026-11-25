/* IL2CPP: LoopSortSaveStore$$GetInt
int32_t LoopSortSaveStore__GetInt (LoopSortSaveStore_o* __this, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortSaveStore$$GetInt
   int32_t LoopSortSaveStore__GetInt (LoopSortSaveStore_o* __this, System_String_o* key, const
   MethodInfo* method); */

undefined4 LoopSortSaveStore__GetInt_223fb88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uStack_38;
  undefined4 auStack_34 [3];
  
  if ((bRam0000000004f49aff & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b51f0);
    bRam0000000004f49aff = 1;
  }
  puVar1 = PTR_DAT_049cfab8;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if ((bRam0000000004f4c66e & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049cfab8,param_2,0,*(undefined8 *)PTR_DAT_049b51f0);
      bRam0000000004f4c66e = 1;
    }
    auStack_34[0] = 0;
    System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be1c8
              (*(undefined8 *)(lVar2 + 0x38),param_2,auStack_34,&uStack_38,*(undefined8 *)puVar1);
    return uStack_38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

