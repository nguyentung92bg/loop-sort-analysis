/* IL2CPP: LoopSortSaveStore$$GetBool
bool LoopSortSaveStore__GetBool (LoopSortSaveStore_o* __this, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortSaveStore$$GetBool
   bool LoopSortSaveStore__GetBool (LoopSortSaveStore_o* __this, System_String_o* key, const
   MethodInfo* method); */

undefined1 LoopSortSaveStore__GetBool_223fd10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [12];
  
  if ((bRam0000000004f49b03 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5210);
    bRam0000000004f49b03 = 1;
  }
  puVar1 = PTR_DAT_049cfad0;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if ((bRam0000000004f4c672 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049cfad0,param_2,0,*(undefined8 *)PTR_DAT_049b5210);
      bRam0000000004f4c672 = 1;
    }
    auStack_34[0] = 0;
    System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be1c8
              (*(undefined8 *)(lVar2 + 0x48),param_2,auStack_34,auStack_38,*(undefined8 *)puVar1);
    return auStack_38[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

