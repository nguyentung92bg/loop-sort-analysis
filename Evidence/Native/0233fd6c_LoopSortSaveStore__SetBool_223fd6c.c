/* IL2CPP: LoopSortSaveStore$$SetBool
void LoopSortSaveStore__SetBool (LoopSortSaveStore_o* __this, System_String_o* key, bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortSaveStore$$SetBool
   void LoopSortSaveStore__SetBool (LoopSortSaveStore_o* __this, System_String_o* key, bool value,
   const MethodInfo* method); */

void LoopSortSaveStore__SetBool_223fd6c(long param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  byte abStack_24 [4];
  
  if ((bRam0000000004f49b04 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5218);
    bRam0000000004f49b04 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c673 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cfad8,param_2,param_3 & 1,*(undefined8 *)PTR_DAT_049b5218);
    bRam0000000004f4c673 = 1;
  }
  lVar1 = *(long *)(lVar1 + 0x48);
  if (lVar1 != 0) {
    abStack_24[0] = param_3 & 1;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar1,param_2,abStack_24,*(undefined8 *)PTR_DAT_049cfad8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

