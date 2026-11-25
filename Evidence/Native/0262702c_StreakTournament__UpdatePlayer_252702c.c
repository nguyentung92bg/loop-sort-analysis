/* IL2CPP: StreakTournament$$UpdatePlayer
StreakTournamentPlayer_o StreakTournament__UpdatePlayer (StreakTournament_o* __this, StreakTournamentPlayer_o player, bool win, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$UpdatePlayer
   StreakTournamentPlayer_o StreakTournament__UpdatePlayer (StreakTournament_o* __this,
   StreakTournamentPlayer_o player, bool win, const MethodInfo* method); */

void StreakTournament__UpdatePlayer_252702c
               (undefined8 *param_1,long param_2,byte *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iStack_34;
  
  if ((bRam0000000004f4be9f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bbda8);
    FUN_021f03f8(PTR_DAT_049bbdb0);
    bRam0000000004f4be9f = 1;
  }
  if ((param_4 & 1) == 0) {
    param_3[0x28] = 0;
    param_3[0x29] = 0;
    param_3[0x2a] = 0;
    param_3[0x2b] = 0;
    param_3[0x30] = 0;
    param_3[0x31] = 0;
    param_3[0x32] = 0;
    param_3[0x33] = 0;
LAB_02627124:
    uVar5 = *(undefined8 *)param_3;
    uVar7 = *(undefined8 *)(param_3 + 0x18);
    uVar6 = *(undefined8 *)(param_3 + 0x10);
    param_1[1] = *(undefined8 *)(param_3 + 8);
    *param_1 = uVar5;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    uVar7 = *(undefined8 *)(param_3 + 0x38);
    uVar6 = *(undefined8 *)(param_3 + 0x30);
    param_1[5] = *(undefined8 *)(param_3 + 0x28);
    param_1[4] = uVar5;
    param_1[7] = uVar7;
    param_1[6] = uVar6;
    return;
  }
  if (*(long *)(param_2 + 0x78) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (*(long *)(param_2 + 0x78),*(undefined4 *)(param_3 + 0x28),&iStack_34,
               *(undefined8 *)PTR_DAT_049bbdb0);
    iVar3 = *(int *)(param_3 + 0x24) + *(int *)(param_2 + 0x80) * iStack_34;
    *(int *)(param_3 + 0x24) = iVar3;
    if ((*param_3 & 1) == 0) {
      iVar4 = iVar3;
      if (*(int *)(param_3 + 0x38) <= iVar3) {
        iVar4 = *(int *)(param_3 + 0x38);
      }
      iVar1 = 0;
      if (-1 < iVar3) {
        iVar1 = iVar4;
      }
      *(int *)(param_3 + 0x24) = iVar1;
    }
    if (*(long *)(param_2 + 0x78) != 0) {
      iVar3 = *(int *)(param_3 + 0x28) + 1;
      iVar4 = *(int *)(*(long *)(param_2 + 0x78) + 0x18) + -1;
      if (iVar3 < iVar4) {
        iVar4 = *(int *)(param_3 + 0x28) + 1;
      }
      iVar2 = *(int *)(param_3 + 0x34);
      iVar1 = 0;
      if (-1 < iVar3) {
        iVar1 = iVar4;
      }
      iVar3 = *(int *)(param_3 + 0x30) + 1;
      iVar4 = *(int *)(param_3 + 0x2c);
      if (*(int *)(param_3 + 0x2c) <= iVar1) {
        iVar4 = iVar1;
      }
      *(int *)(param_3 + 0x28) = iVar1;
      *(int *)(param_3 + 0x2c) = iVar4;
      if (iVar2 <= iVar3) {
        iVar2 = *(int *)(param_3 + 0x30) + 1;
      }
      *(int *)(param_3 + 0x30) = iVar3;
      *(int *)(param_3 + 0x34) = iVar2;
      goto LAB_02627124;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

