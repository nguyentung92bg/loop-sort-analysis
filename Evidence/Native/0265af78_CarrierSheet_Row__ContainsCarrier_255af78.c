/* IL2CPP: CarrierSheet.Row$$ContainsCarrier
bool CarrierSheet_Row__ContainsCarrier (CarrierSheet_Row_o* __this, int32_t carrierType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierSheet.Row$$ContainsCarrier
   bool CarrierSheet_Row__ContainsCarrier (CarrierSheet_Row_o* __this, int32_t carrierType, const
   MethodInfo* method); */

uint CarrierSheet_Row__ContainsCarrier_255af78(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4c0db & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb550);
    bRam0000000004f4c0db = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uStack_24 = param_2;
    uVar1 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                      (*(long *)(param_1 + 0x40),&uStack_24,*(undefined8 *)PTR_DAT_049cb550);
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

