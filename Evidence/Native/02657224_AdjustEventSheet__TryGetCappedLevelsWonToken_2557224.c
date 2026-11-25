/* IL2CPP: AdjustEventSheet$$TryGetCappedLevelsWonToken
bool AdjustEventSheet__TryGetCappedLevelsWonToken (AdjustEventSheet_o* __this, int32_t dailyCap, int32_t levelsWon, System_String_o** token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdjustEventSheet$$TryGetCappedLevelsWonToken
   bool AdjustEventSheet__TryGetCappedLevelsWonToken (AdjustEventSheet_o* __this, int32_t dailyCap,
   int32_t levelsWon, System_String_o** token, const MethodInfo* method); */

uint AdjustEventSheet__TryGetCappedLevelsWonToken_2557224
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_049cb2a0;
  if ((bRam0000000004f4c0b3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb2a0);
    bRam0000000004f4c0b3 = 1;
  }
  puVar1 = PTR_DAT_049b3bd0;
  uStack_34 = param_3;
  uVar4 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_34);
  uStack_38 = param_2;
  uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_38);
  uVar4 = System_String__Format_2f7dfac(*(undefined8 *)puVar2,uVar4,uVar5,0);
  uVar3 = AdjustEventSheet__TryGetToken_2556b44(param_1,uVar4,param_4);
  return uVar3 & 1;
}

