/* IL2CPP: CarrierSheet.Row$$set_CarrierTypes
void CarrierSheet_Row__set_CarrierTypes (CarrierSheet_Row_o* __this, System_Collections_Generic_List_CarrierSheet_CarrierType__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierSheet.Row$$set_CarrierTypes
   void CarrierSheet_Row__set_CarrierTypes (CarrierSheet_Row_o* __this,
   System_Collections_Generic_List_CarrierSheet_CarrierType__o* value, const MethodInfo* method); */

void CarrierSheet_Row__set_CarrierTypes_255a168(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x48);
  *puVar1 = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

