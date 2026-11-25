/* IL2CPP: AdjustEventSheet$$TryGetToken
bool AdjustEventSheet__TryGetToken (AdjustEventSheet_o* __this, System_String_o* eventId, System_String_o** token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdjustEventSheet$$TryGetToken
   bool AdjustEventSheet__TryGetToken (AdjustEventSheet_o* __this, System_String_o* eventId,
   System_String_o** token, const MethodInfo* method); */

uint AdjustEventSheet__TryGetToken_2556b44
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_049cb200;
  if ((bRam0000000004f4c0aa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb200);
    FUN_021f03f8(PTR_DAT_049cb208);
    bRam0000000004f4c0aa = 1;
  }
  *param_3 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  thunk_FUN_021f190c(param_3);
  uVar2 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                    (param_1,param_2,*(undefined8 *)puVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                      (param_1,param_2,*(undefined8 *)PTR_DAT_049cb208);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *param_3 = *(undefined8 *)(lVar3 + 0x20);
    thunk_FUN_021f190c(param_3);
  }
  return uVar2 & 1;
}

