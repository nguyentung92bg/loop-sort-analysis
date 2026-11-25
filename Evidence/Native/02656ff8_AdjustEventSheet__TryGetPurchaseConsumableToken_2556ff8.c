/* IL2CPP: AdjustEventSheet$$TryGetPurchaseConsumableToken
bool AdjustEventSheet__TryGetPurchaseConsumableToken (AdjustEventSheet_o* __this, int32_t purchaseCount, System_String_o** token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdjustEventSheet$$TryGetPurchaseConsumableToken
   bool AdjustEventSheet__TryGetPurchaseConsumableToken (AdjustEventSheet_o* __this, int32_t
   purchaseCount, System_String_o** token, const MethodInfo* method); */

uint AdjustEventSheet__TryGetPurchaseConsumableToken_2556ff8
               (undefined8 param_1,int param_2,undefined8 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000004f4c0b0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4578);
    FUN_021f03f8(PTR_DAT_049cb248);
    FUN_021f03f8(PTR_DAT_049cb250);
    FUN_021f03f8(PTR_DAT_049cb258);
    FUN_021f03f8(PTR_DAT_049cb260);
    FUN_021f03f8(PTR_DAT_049cb268);
    FUN_021f03f8(PTR_DAT_049cb270);
    FUN_021f03f8(PTR_DAT_049cb278);
    FUN_021f03f8(PTR_DAT_049cb280);
    FUN_021f03f8(PTR_DAT_049cb288);
    bRam0000000004f4c0b0 = 1;
  }
  puVar5 = (undefined8 *)PTR_DAT_049b4578;
  if (param_2 - 1U < 0x14) {
    puVar5 = *(undefined8 **)(&UNK_0460f110 + (ulong)(param_2 - 1U) * 8);
  }
  uVar4 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049cb278,*puVar5,0);
  puVar1 = PTR_DAT_049cb200;
  if ((bRam0000000004f4c0aa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb200);
    FUN_021f03f8(PTR_DAT_049cb208);
    bRam0000000004f4c0aa = 1;
  }
  *param_3 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  thunk_FUN_021f190c(param_3);
  uVar2 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                    (param_1,uVar4,*(undefined8 *)puVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                      (param_1,uVar4,*(undefined8 *)PTR_DAT_049cb208);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *param_3 = *(undefined8 *)(lVar3 + 0x20);
    thunk_FUN_021f190c(param_3);
  }
  return uVar2 & 1;
}

