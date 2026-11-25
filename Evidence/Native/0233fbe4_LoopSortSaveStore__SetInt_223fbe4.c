/* IL2CPP: LoopSortSaveStore$$SetInt
void LoopSortSaveStore__SetInt (LoopSortSaveStore_o* __this, System_String_o* key, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortSaveStore$$SetInt
   void LoopSortSaveStore__SetInt (LoopSortSaveStore_o* __this, System_String_o* key, int32_t value,
   const MethodInfo* method); */

void LoopSortSaveStore__SetInt_223fbe4(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 uStack_24;
  
  if ((bRam0000000004f49b00 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b51f8);
    bRam0000000004f49b00 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c66f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049badd0,param_2,param_3,*(undefined8 *)PTR_DAT_049b51f8);
    bRam0000000004f4c66f = 1;
  }
  lVar1 = *(long *)(lVar1 + 0x38);
  if (lVar1 != 0) {
    uStack_24 = param_3;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar1,param_2,&uStack_24,*(undefined8 *)PTR_DAT_049badd0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

