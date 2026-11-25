/* IL2CPP: Shop$$FormatBoosterQuantity
System_String_o* Shop__FormatBoosterQuantity (Shop_o* __this, float quantity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Shop$$FormatBoosterQuantity
   System_String_o* Shop__FormatBoosterQuantity (Shop_o* __this, float quantity, const MethodInfo*
   method); */

void Shop__FormatBoosterQuantity_25702e8(undefined4 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uStack_14;
  
  puVar1 = PTR_DAT_049be928;
  uStack_14 = param_1;
  if ((bRam0000000004f4c1ce & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049be928);
    bRam0000000004f4c1ce = 1;
  }
  uVar2 = System_Single__ToString_3112274(&uStack_14,0);
  System_String__Concat_2f72b28(*(undefined8 *)puVar1,uVar2,0);
  return;
}

