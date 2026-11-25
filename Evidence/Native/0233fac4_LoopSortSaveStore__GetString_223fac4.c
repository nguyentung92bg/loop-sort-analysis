/* IL2CPP: LoopSortSaveStore$$GetString
System_String_o* LoopSortSaveStore__GetString (LoopSortSaveStore_o* __this, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortSaveStore$$GetString
   System_String_o* LoopSortSaveStore__GetString (LoopSortSaveStore_o* __this, System_String_o* key,
   const MethodInfo* method); */

undefined8 LoopSortSaveStore__GetString_223fac4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 auStack_38 [2];
  
  if ((bRam0000000004f49afd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b51e0);
    bRam0000000004f49afd = 1;
  }
  puVar1 = PTR_DAT_049cfab0;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if ((bRam0000000004f4c66c & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049cfab0,param_2,0,*(undefined8 *)PTR_DAT_049b51e0);
      bRam0000000004f4c66c = 1;
    }
    System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be1c8
              (*(undefined8 *)(lVar2 + 0x30),param_2,0,auStack_38,*(undefined8 *)puVar1);
    return auStack_38[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

