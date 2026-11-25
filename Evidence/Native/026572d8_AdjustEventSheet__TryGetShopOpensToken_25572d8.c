/* IL2CPP: AdjustEventSheet$$TryGetShopOpensToken
bool AdjustEventSheet__TryGetShopOpensToken (AdjustEventSheet_o* __this, int32_t shopOpens, System_String_o** token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdjustEventSheet$$TryGetShopOpensToken
   bool AdjustEventSheet__TryGetShopOpensToken (AdjustEventSheet_o* __this, int32_t shopOpens,
   System_String_o** token, const MethodInfo* method); */

uint AdjustEventSheet__TryGetShopOpensToken_25572d8
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_049cb2a8;
  if ((bRam0000000004f4c0b4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb2a8);
    bRam0000000004f4c0b4 = 1;
  }
  uStack_34 = param_2;
  uVar3 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_34);
  uVar3 = System_String__Format_2f73700(*(undefined8 *)puVar1,uVar3,0);
  uVar2 = AdjustEventSheet__TryGetToken_2556b44(param_1,uVar3,param_3);
  return uVar2 & 1;
}

