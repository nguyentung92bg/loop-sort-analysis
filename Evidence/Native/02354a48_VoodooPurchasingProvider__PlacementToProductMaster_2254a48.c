/* IL2CPP: VoodooPurchasingProvider$$PlacementToProductMaster
System_String_o* VoodooPurchasingProvider__PlacementToProductMaster (VoodooPurchasingProvider_o* __this, System_String_o* placement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooPurchasingProvider$$PlacementToProductMaster
   System_String_o* VoodooPurchasingProvider__PlacementToProductMaster (VoodooPurchasingProvider_o*
   __this, System_String_o* placement, const MethodInfo* method); */

undefined8
VoodooPurchasingProvider__PlacementToProductMaster_2254a48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_049b61b0;
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
  uVar2 = System_String__op_Equality_2f7b7fc(param_2,*(undefined8 *)puVar1,0);
  puVar3 = (undefined8 *)PTR_DAT_049b61f8;
  if (((((uVar2 & 1) == 0) &&
       (uVar2 = System_String__op_Equality_2f7b7fc(param_2,*(undefined8 *)PTR_DAT_049b61b8,0),
       puVar3 = (undefined8 *)PTR_DAT_049b6200, (uVar2 & 1) == 0)) &&
      (uVar2 = System_String__op_Equality_2f7b7fc(param_2,*(undefined8 *)PTR_DAT_049b61e0,0),
      puVar3 = (undefined8 *)PTR_DAT_049b61d8, (uVar2 & 1) == 0)) &&
     ((uVar2 = System_String__op_Equality_2f7b7fc(param_2,*(undefined8 *)PTR_DAT_049b61d0,0),
      puVar3 = (undefined8 *)PTR_DAT_049b61c0, (uVar2 & 1) == 0 &&
      (uVar2 = System_String__op_Equality_2f7b7fc(param_2,*(undefined8 *)PTR_DAT_049b61c8,0),
      puVar3 = (undefined8 *)PTR_DAT_049b61e8, (uVar2 & 1) == 0)))) {
    puVar3 = (undefined8 *)PTR_DAT_049b61f0;
  }
  return *puVar3;
}

