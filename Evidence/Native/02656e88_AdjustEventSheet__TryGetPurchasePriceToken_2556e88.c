/* IL2CPP: AdjustEventSheet$$TryGetPurchasePriceToken
bool AdjustEventSheet__TryGetPurchasePriceToken (AdjustEventSheet_o* __this, float usdPrice, System_String_o** token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdjustEventSheet$$TryGetPurchasePriceToken
   bool AdjustEventSheet__TryGetPurchasePriceToken (AdjustEventSheet_o* __this, float usdPrice,
   System_String_o** token, const MethodInfo* method); */

uint AdjustEventSheet__TryGetPurchasePriceToken_2556e88
               (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049b44e8;
  uStack_24 = param_1;
  if ((bRam0000000004f4c0ae & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b44e8);
    FUN_021f03f8(PTR_DAT_049cb230);
    FUN_021f03f8(PTR_DAT_049cb238);
    bRam0000000004f4c0ae = 1;
  }
  puVar3 = PTR_DAT_049cb238;
  puVar2 = PTR_DAT_049cb230;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = System_Globalization_CultureInfo__get_InvariantCulture_307b9dc(0);
  uVar5 = System_Single__ToString_3112404(&uStack_24,*(undefined8 *)puVar3,uVar5,0);
  uVar5 = System_String__Concat_2f72b28(*(undefined8 *)puVar2,uVar5,0);
  uVar4 = AdjustEventSheet__TryGetToken_2556b44(param_2,uVar5,param_3);
  return uVar4 & 1;
}

