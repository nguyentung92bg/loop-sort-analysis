/* IL2CPP: CollectionBar$$GetLastProgressData
CollectionBarSheet_Row_o* CollectionBar__GetLastProgressData (CollectionBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBar$$GetLastProgressData
   CollectionBarSheet_Row_o* CollectionBar__GetLastProgressData (CollectionBar_o* __this, const
   MethodInfo* method); */

void CollectionBar__GetLastProgressData_25126d8(long param_1)

{
  long lVar1;
  undefined4 uStack_14;
  
  if ((bRam0000000004f4bdfc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c55e0);
    FUN_021f03f8(PTR_DAT_049c55e8);
    bRam0000000004f4bdfc = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0xd8), lVar1 != 0)) {
    uStack_14 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                          (lVar1,*(undefined8 *)PTR_DAT_049c55e0);
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0xd8), lVar1 != 0)) {
      Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                (lVar1,&uStack_14,*(undefined8 *)PTR_DAT_049c55e8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

