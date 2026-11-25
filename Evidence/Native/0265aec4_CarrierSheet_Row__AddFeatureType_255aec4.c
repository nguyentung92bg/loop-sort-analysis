/* IL2CPP: CarrierSheet.Row$$AddFeatureType
void CarrierSheet_Row__AddFeatureType (CarrierSheet_Row_o* __this, int32_t featureType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierSheet.Row$$AddFeatureType
   void CarrierSheet_Row__AddFeatureType (CarrierSheet_Row_o* __this, int32_t featureType, const
   MethodInfo* method); */

void CarrierSheet_Row__AddFeatureType_255aec4(long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if ((bRam0000000004f4c0e3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13a8);
    FUN_021f03f8(PTR_DAT_049c13d0);
    bRam0000000004f4c0e3 = 1;
  }
  puVar1 = PTR_DAT_049c13a8;
  if (param_2 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    iStack_2c = param_2;
    FUN_02333498(*(long *)(param_1 + 0x60),&iStack_2c,*(undefined8 *)PTR_DAT_049c13a8);
    if (*(long *)(param_1 + 0x58) != 0) {
      iStack_28 = param_2;
      uVar2 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                        (*(long *)(param_1 + 0x58),&iStack_28,*(undefined8 *)PTR_DAT_049c13d0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_0265af74;
        iStack_24 = param_2;
        FUN_02333498(*(long *)(param_1 + 0x58),&iStack_24,*(undefined8 *)puVar1);
      }
      return;
    }
  }
LAB_0265af74:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

