/* IL2CPP: CarrierSheet.Row$$TryGetCarrier
bool CarrierSheet_Row__TryGetCarrier (CarrierSheet_Row_o* __this, int32_t carrierType, System_Collections_Generic_List_CarrierSheet_CarrierColorArgs__o** carrierColors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierSheet.Row$$TryGetCarrier
   bool CarrierSheet_Row__TryGetCarrier (CarrierSheet_Row_o* __this, int32_t carrierType,
   System_Collections_Generic_List_CarrierSheet_CarrierColorArgs__o** carrierColors, const
   MethodInfo* method); */

uint CarrierSheet_Row__TryGetCarrier_255afe4(long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4c0dc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb558);
    bRam0000000004f4c0dc = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uStack_24 = param_2;
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x28),&uStack_24,param_3,*(undefined8 *)PTR_DAT_049cb558)
    ;
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

