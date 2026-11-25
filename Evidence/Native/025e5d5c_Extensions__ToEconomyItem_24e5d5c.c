/* IL2CPP: Extensions$$ToEconomyItem
int32_t Extensions__ToEconomyItem (int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToEconomyItem
   int32_t Extensions__ToEconomyItem (int32_t boosterType, const MethodInfo* method); */

undefined4 Extensions__ToEconomyItem_24e5d5c(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049b6110;
  if ((bRam0000000004f4bc8e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7b50);
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4bc8e = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    uStack_24 = param_1;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (**(long **)(lVar2 + 0xb8),&uStack_24,&uStack_28,*(undefined8 *)PTR_DAT_049c7b50);
    return uStack_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

