/* IL2CPP: Leaderboard$$IsActive
bool Leaderboard__IsActive (Leaderboard_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$IsActive
   bool Leaderboard__IsActive (Leaderboard_o* __this, const MethodInfo* method); */

bool Leaderboard__IsActive_251d2f4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4be55 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be55 = 1;
  }
  puVar2 = PTR_DAT_049b5310;
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar5 != 0) {
    if (*(char *)(lVar5 + 0x10) == '\0') {
      bVar3 = false;
    }
    else {
      iVar1 = *(int *)(lVar5 + 0x14);
      lVar5 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(lVar5 + 0xb8);
      uStack_38 = *(undefined8 *)(lVar5 + 0x68);
      uStack_40 = *(undefined8 *)(lVar5 + 0x60);
      uStack_28 = *(undefined8 *)(lVar5 + 0x78);
      uStack_30 = *(undefined8 *)(lVar5 + 0x70);
      iVar4 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_40,0);
      bVar3 = iVar1 <= iVar4 + 1;
    }
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

