/* IL2CPP: CarrierSheet.Row$$PostLoad
void CarrierSheet_Row__PostLoad (CarrierSheet_Row_o* __this, Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierSheet.Row$$PostLoad
   void CarrierSheet_Row__PostLoad (CarrierSheet_Row_o* __this,
   Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method); */

void CarrierSheet_Row__PostLoad_255a1a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_049cb430;
                    /* try { // try from 0265a1ac to 0275a26f has its CatchHandler @ 0265a1ac
                       catch() { ... } // from try @ 0265a1ac with catch @ 0265a1ac
                       catch() { ... } // from try @ 0265a5a4 with catch @ 0265a1ac
                       catch() { ... } // from try @ 0265a5f8 with catch @ 0265a1ac
                       catch() { ... } // from try @ 0265a6f0 with catch @ 0265a1ac
                       catch() { ... } // from try @ 0265a74c with catch @ 0265a1ac
                       catch() { ... } // from try @ 0265a784 with catch @ 0265a1ac
                       catch() { ... } // from try @ 0265a7cc with catch @ 0265a1ac
                       catch() { ... } // from try @ 0265a834 with catch @ 0265a1ac */
  if ((bRam0000000004f4c0d8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb430);
    bRam0000000004f4c0d8 = 1;
  }
  Cathei_BakingSheet_SheetRow___Il2CppFullySharedGenericType___PostLoad_2986178
            (param_1,param_2,*(undefined8 *)puVar1);
  CarrierSheet_Row__ParseColors_255a2f8(param_1,*(undefined8 *)(param_1 + 0x18));
  CarrierSheet_Row__ParseFeatures_255aa48(param_1);
  return;
}

