/* IL2CPP: Leaderboard$$get_LevelCountryId
System_String_o* Leaderboard__get_LevelCountryId (Leaderboard_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$get_LevelCountryId
   System_String_o* Leaderboard__get_LevelCountryId (Leaderboard_o* __this, const MethodInfo*
   method); */

long Leaderboard__get_LevelCountryId_251cc64(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_049c95e0;
  if ((bRam0000000004f4be4f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c95e0);
    bRam0000000004f4be4f = 1;
  }
  lVar5 = *(long *)(param_1 + 0x60);
  lVar3 = *(long *)puVar2;
  if ((lVar3 == 0) || (iVar1 = *(int *)(lVar3 + 0x10), iVar1 == 0)) {
    if ((lVar5 == 0) || (lVar3 = lVar5, *(int *)(lVar5 + 0x10) == 0)) {
      lVar3 = **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
    }
  }
  else if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) != 0)) {
    lVar4 = thunk_FUN_0222a544(*(int *)(lVar5 + 0x10) + iVar1,lVar5,0);
    System_String__FillStringChecked_2f7d2e8(lVar4,0,lVar3);
    System_String__FillStringChecked_2f7d2e8(lVar4,iVar1,lVar5);
    lVar3 = lVar4;
  }
  return lVar3;
}

