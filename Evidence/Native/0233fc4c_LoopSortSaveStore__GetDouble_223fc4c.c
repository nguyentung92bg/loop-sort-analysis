/* IL2CPP: LoopSortSaveStore$$GetDouble
double LoopSortSaveStore__GetDouble (LoopSortSaveStore_o* __this, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Type propagation algorithm not settling */
/* IL2CPP: LoopSortSaveStore$$GetDouble
   double LoopSortSaveStore__GetDouble (LoopSortSaveStore_o* __this, System_String_o* key, const
   MethodInfo* method); */

undefined1  [16] LoopSortSaveStore__GetDouble_223fc4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  ulong auStack_40 [2];
  
  if ((bRam0000000004f49b01 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5200);
    bRam0000000004f49b01 = 1;
  }
  puVar1 = PTR_DAT_049cfac0;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if ((bRam0000000004f4c670 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049cfac0,param_2,*(undefined8 *)PTR_DAT_049b5200);
      bRam0000000004f4c670 = 1;
    }
    auStack_40[1] = 0;
    System_Collections_Generic_CollectionExtensions__GetValueOrDefault___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25be1c8
              (*(undefined8 *)(lVar2 + 0x40),param_2,auStack_40 + 1,auStack_40,*(undefined8 *)puVar1
              );
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auStack_40[0];
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

