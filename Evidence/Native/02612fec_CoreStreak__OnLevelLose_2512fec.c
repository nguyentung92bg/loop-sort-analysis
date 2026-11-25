/* IL2CPP: CoreStreak$$OnLevelLose
void CoreStreak__OnLevelLose (CoreStreak_o* __this, LevelLoseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoreStreak$$OnLevelLose
   void CoreStreak__OnLevelLose (CoreStreak_o* __this, LevelLoseMessage_o m, const MethodInfo*
   method); */

void CoreStreak__OnLevelLose_2512fec(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4be02 & 1) == 0) {
                    /* try { // try from 02613008 to 02713013 has its CatchHandler @ 026135e0 */
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be02 = 1;
  }
  uVar2 = CoreStreak__IsUnlocked_2512e64(param_1);
  puVar1 = PTR_DAT_049b5310;
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 0261302c to 02713033 has its CatchHandler @ 026135a8 */
    lVar3 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
      lVar3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_049c5aa8;
    lVar3 = *(long *)(lVar3 + 0xb8);
                    /* try { // try from 02613054 to 02713067 has its CatchHandler @ 026135b4 */
    if ((bRam0000000004f4bcb1 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c5aa8,0,0);
      bRam0000000004f4bcb1 = 1;
    }
    uStack_38 = *(undefined8 *)(lVar3 + 0x848);
    uStack_40 = *(undefined8 *)(lVar3 + 0x840);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    PlayerPrefsInt__Set_3f0dba4(&uStack_40,0,0);
    return;
  }
  return;
}

