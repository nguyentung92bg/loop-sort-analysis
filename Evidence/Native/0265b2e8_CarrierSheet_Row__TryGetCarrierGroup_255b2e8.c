/* IL2CPP: CarrierSheet.Row$$TryGetCarrierGroup
bool CarrierSheet_Row__TryGetCarrierGroup (CarrierSheet_Row_o* __this, int32_t carrierType, int32_t featureType, System_Collections_Generic_List_CarrierSheet_CarrierType__o** group, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierSheet.Row$$TryGetCarrierGroup
   bool CarrierSheet_Row__TryGetCarrierGroup (CarrierSheet_Row_o* __this, int32_t carrierType,
   int32_t featureType, System_Collections_Generic_List_CarrierSheet_CarrierType__o** group, const
   MethodInfo* method); */

uint CarrierSheet_Row__TryGetCarrierGroup_255b2e8
               (long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined4 uStack_44;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049cb548;
  if ((bRam0000000004f4c0df & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb560);
    FUN_021f03f8(PTR_DAT_049cb548);
    bRam0000000004f4c0df = 1;
  }
  lVar3 = *(long *)(param_1 + 0x38);
  uStack_50 = 0;
  uStack_38 = CONCAT44(uStack_38._4_4_,param_2);
  uStack_44 = param_3;
  System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a02e24
            (&uStack_50,&uStack_38,&uStack_44,*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    uStack_38 = uStack_50;
    uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (lVar3,&uStack_38,param_4,*(undefined8 *)PTR_DAT_049cb560);
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

