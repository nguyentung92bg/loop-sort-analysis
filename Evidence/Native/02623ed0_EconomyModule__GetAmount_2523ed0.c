/* IL2CPP: EconomyModule$$GetAmount
int32_t EconomyModule__GetAmount (EconomyModule_o* __this, int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyModule$$GetAmount
   int32_t EconomyModule__GetAmount (EconomyModule_o* __this, int32_t item, const MethodInfo*
   method); */

void EconomyModule__GetAmount_2523ed0(long param_1,undefined4 param_2)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bf37 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9900);
    bRam0000000004f4bf37 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    uStack_24 = param_2;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(param_1 + 0x50),&uStack_24,&uStack_70,*(undefined8 *)PTR_DAT_049c9900);
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    CloudPrefsInt__get_Value_24e99c0(&uStack_50,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

