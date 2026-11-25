/* IL2CPP: PlayerModule$$IsPlayerNameValid
bool PlayerModule__IsPlayerNameValid (PlayerModule_o* __this, System_String_o* playerName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayerModule$$IsPlayerNameValid
   bool PlayerModule__IsPlayerNameValid (PlayerModule_o* __this, System_String_o* playerName, const
   MethodInfo* method); */

bool PlayerModule__IsPlayerNameValid_2551f5c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_049caea8;
  if ((bRam0000000004f4c07f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caea8);
    bRam0000000004f4c07f = 1;
  }
  uVar3 = System_String__op_Equality_2f7b7fc(param_2,*(undefined8 *)puVar1,0);
  if ((uVar3 & 1) == 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    bVar2 = *(int *)(param_2 + 0x10) - 3U < 0xc;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

