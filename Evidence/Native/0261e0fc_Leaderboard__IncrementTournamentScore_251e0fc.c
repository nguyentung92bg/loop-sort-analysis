/* IL2CPP: Leaderboard$$IncrementTournamentScore
void Leaderboard__IncrementTournamentScore (Leaderboard_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$IncrementTournamentScore
   void Leaderboard__IncrementTournamentScore (Leaderboard_o* __this, const MethodInfo* method); */

void Leaderboard__IncrementTournamentScore_251e0fc(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 0261e104 to 0271e10f has its CatchHandler @ 0261e2a0 */
  if ((bRam0000000004f4be61 & 1) == 0) {
                    /* try { // try from 0261e11c to 0271e127 has its CatchHandler @ 0261e260 */
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be61 = 1;
  }
  puVar1 = PTR_DAT_049b5310;
  if (*(long *)(param_1 + 0x58) != 0) {
    if ((*(char *)(*(long *)(param_1 + 0x58) + 0x18) != '\0') && (*(int *)(param_1 + 0x70) == 2)) {
      lVar3 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_021f0574();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
                    /* try { // try from 0261e16c to 0271e177 has its CatchHandler @ 0261e29c */
      iVar2 = CloudPrefsInt__get_Value_24e99c0(lVar3 + 0x880,0);
      puVar1 = PTR_DAT_049c5aa8;
                    /* try { // try from 0261e188 to 0271e193 has its CatchHandler @ 0261e25c */
      if ((bRam0000000004f4bcb1 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c5aa8,iVar2 + 1,0);
        bRam0000000004f4bcb1 = 1;
      }
      uStack_38 = *(undefined8 *)(lVar3 + 0x888);
      uStack_40 = *(undefined8 *)(lVar3 + 0x880);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      PlayerPrefsInt__Set_3f0dba4(&uStack_40,iVar2 + 1,0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

