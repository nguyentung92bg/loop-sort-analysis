/* IL2CPP: VoodooPurchasingProvider$$GetProductMaster
System_String_o* VoodooPurchasingProvider__GetProductMaster (VoodooPurchasingProvider_o* __this, PurchaseRequest_o request, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooPurchasingProvider$$GetProductMaster
   System_String_o* VoodooPurchasingProvider__GetProductMaster (VoodooPurchasingProvider_o* __this,
   PurchaseRequest_o request, const MethodInfo* method); */

undefined8 VoodooPurchasingProvider__GetProductMaster_22549f8(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar2 = ProductMasters__Get_22512f8(*(long *)(param_1 + 0x28),*param_2);
  uVar3 = System_String__IsNullOrEmpty_2f7c924(uVar2,0);
  puVar1 = PTR_DAT_049b61b0;
  if ((uVar3 & 1) == 0) {
    return uVar2;
  }
  uVar2 = param_2[2];
  if ((bRam0000000004f49baf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b61b8);
    FUN_021f03f8(PTR_DAT_049b61c0);
    FUN_021f03f8(PTR_DAT_049b61c8);
    FUN_021f03f8(PTR_DAT_049b61d0);
    FUN_021f03f8(PTR_DAT_049b61d8);
    FUN_021f03f8(PTR_DAT_049b61e0);
    FUN_021f03f8(PTR_DAT_049b61b0);
    FUN_021f03f8(PTR_DAT_049b61e8);
    FUN_021f03f8(PTR_DAT_049b61f0);
    FUN_021f03f8(PTR_DAT_049b61f8);
    FUN_021f03f8(PTR_DAT_049b6200);
    bRam0000000004f49baf = 1;
  }
  uVar3 = System_String__op_Equality_2f7b7fc(uVar2,*(undefined8 *)puVar1,0);
  puVar4 = (undefined8 *)PTR_DAT_049b61f8;
  if (((((uVar3 & 1) == 0) &&
       (uVar3 = System_String__op_Equality_2f7b7fc(uVar2,*(undefined8 *)PTR_DAT_049b61b8,0),
       puVar4 = (undefined8 *)PTR_DAT_049b6200, (uVar3 & 1) == 0)) &&
      (uVar3 = System_String__op_Equality_2f7b7fc(uVar2,*(undefined8 *)PTR_DAT_049b61e0,0),
      puVar4 = (undefined8 *)PTR_DAT_049b61d8, (uVar3 & 1) == 0)) &&
     ((uVar3 = System_String__op_Equality_2f7b7fc(uVar2,*(undefined8 *)PTR_DAT_049b61d0,0),
      puVar4 = (undefined8 *)PTR_DAT_049b61c0, (uVar3 & 1) == 0 &&
      (uVar3 = System_String__op_Equality_2f7b7fc(uVar2,*(undefined8 *)PTR_DAT_049b61c8,0),
      puVar4 = (undefined8 *)PTR_DAT_049b61e8, (uVar3 & 1) == 0)))) {
    puVar4 = (undefined8 *)PTR_DAT_049b61f0;
  }
  return *puVar4;
}

