/* IL2CPP: LoopSortSaveStore$$SetDouble
void LoopSortSaveStore__SetDouble (LoopSortSaveStore_o* __this, System_String_o* key, double value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortSaveStore$$SetDouble
   void LoopSortSaveStore__SetDouble (LoopSortSaveStore_o* __this, System_String_o* key, double
   value, const MethodInfo* method); */

void LoopSortSaveStore__SetDouble_223fca8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_28;
  
  if ((bRam0000000004f49b02 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5208);
    bRam0000000004f49b02 = 1;
  }
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c671 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cfac8,param_3,*(undefined8 *)PTR_DAT_049b5208);
    bRam0000000004f4c671 = 1;
  }
  lVar1 = *(long *)(lVar1 + 0x40);
  if (lVar1 != 0) {
    uStack_28 = param_1;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar1,param_3,&uStack_28,*(undefined8 *)PTR_DAT_049cfac8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

