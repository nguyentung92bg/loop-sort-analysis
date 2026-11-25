/* IL2CPP: AdjustEventSheet$$TryGetLevelCompletedToken
bool AdjustEventSheet__TryGetLevelCompletedToken (AdjustEventSheet_o* __this, System_String_o** token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdjustEventSheet$$TryGetLevelCompletedToken
   bool AdjustEventSheet__TryGetLevelCompletedToken (AdjustEventSheet_o* __this, System_String_o**
   token, const MethodInfo* method); */

uint AdjustEventSheet__TryGetLevelCompletedToken_2556e30(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_049cb228;
  if ((bRam0000000004f4c0ad & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb228);
    bRam0000000004f4c0ad = 1;
  }
  puVar1 = PTR_DAT_049cb200;
  uVar5 = *(undefined8 *)puVar2;
  if ((bRam0000000004f4c0aa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb200);
    FUN_021f03f8(PTR_DAT_049cb208);
    bRam0000000004f4c0aa = 1;
  }
  *param_2 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  thunk_FUN_021f190c(param_2);
  uVar3 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                    (param_1,uVar5,*(undefined8 *)puVar1);
  if ((uVar3 & 1) != 0) {
    lVar4 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                      (param_1,uVar5,*(undefined8 *)PTR_DAT_049cb208);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *param_2 = *(undefined8 *)(lVar4 + 0x20);
    thunk_FUN_021f190c(param_2);
  }
  return uVar3 & 1;
}

