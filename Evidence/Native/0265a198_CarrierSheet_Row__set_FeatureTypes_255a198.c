/* IL2CPP: CarrierSheet.Row$$set_FeatureTypes
void CarrierSheet_Row__set_FeatureTypes (CarrierSheet_Row_o* __this, System_Collections_Generic_List_FeatureType__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierSheet.Row$$set_FeatureTypes
   void CarrierSheet_Row__set_FeatureTypes (CarrierSheet_Row_o* __this,
   System_Collections_Generic_List_FeatureType__o* value, const MethodInfo* method); */

void CarrierSheet_Row__set_FeatureTypes_255a198(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x60);
  *puVar1 = param_2;
                    /* catch() { ... } // from try @ 0265a0b4 with catch @ 0265a19c
                       catch() { ... } // from try @ 0265a0e8 with catch @ 0265a19c
                       catch() { ... } // from try @ 0265a190 with catch @ 0265a19c */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

