/* IL2CPP: IceCarrier$$MatchesRequiredCarrierType
bool IceCarrier__MatchesRequiredCarrierType (IceCarrier_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: IceCarrier$$MatchesRequiredCarrierType
   bool IceCarrier__MatchesRequiredCarrierType (IceCarrier_o* __this, Carrier_o* carrier, const
   MethodInfo* method); */

uint IceCarrier__MatchesRequiredCarrierType_24a5b14(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bb11 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6728);
    bRam0000000004f4bb11 = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0xd0) != 0)) {
    uStack_24 = *(undefined4 *)(param_2 + 0x130);
    uVar1 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                      (*(long *)(param_1 + 0xd0),&uStack_24,*(undefined8 *)PTR_DAT_049c6728);
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

