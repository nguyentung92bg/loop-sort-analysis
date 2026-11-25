/* IL2CPP: WeeklyMissions$$OnLevelWin
void WeeklyMissions__OnLevelWin (WeeklyMissions_o* __this, LevelWinMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$OnLevelWin
   void WeeklyMissions__OnLevelWin (WeeklyMissions_o* __this, LevelWinMessage_o m, const MethodInfo*
   method); */

void WeeklyMissions__OnLevelWin_252b0e8(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  undefined8 uStack_114;
  int iStack_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined8 uStack_c4;
  undefined8 uStack_b0;
  int iStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  if ((bRam0000000004f4bec7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9bb0);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bec7 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uVar3 = WeeklyMissions__IsActive_252abe4(param_1);
  puVar2 = PTR_DAT_049c9bb0;
  puVar1 = PTR_DAT_049b5310;
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)PTR_DAT_049b5310;
                    /* try { // try from 0262b164 to 0272b16b has its CatchHandler @ 0262b2e8 */
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
                    /* try { // try from 0262b184 to 0272b1cf has its CatchHandler @ 0262b2ec */
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar4 + 0xb8) + 0x488,&iStack_d0,*(undefined8 *)puVar2);
    uStack_60 = uStack_c4;
    uStack_4c = (undefined4)uStack_b0;
    uStack_48 = (undefined4)((ulong)uStack_b0 >> 0x20);
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    if (param_2 == 2) {
                    /* try { // try from 0262b1d0 to 0272b20f has its CatchHandler @ 0262b088 */
      iStack_c8 = iStack_c8 + 1;
    }
    else if (param_2 == 1) {
      iStack_cc = iStack_cc + 1;
    }
    else {
      iStack_d0 = iStack_d0 + 1;
    }
    iStack_f8 = iStack_a8 + 1;
    uStack_114 = uStack_c4;
    if (iStack_a4 <= iStack_f8) {
      iStack_a4 = iStack_a8 + 1;
    }
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    iStack_120 = iStack_d0;
    iStack_11c = iStack_cc;
    iStack_118 = iStack_c8;
    iStack_f4 = iStack_a4;
    WeeklyMissions__SaveProgress_252ae2c(param_1,&iStack_120);
  }
                    /* try { // try from 0262b210 to 0272b217 has its CatchHandler @ 0262b2d4 */
                    /* try { // try from 0262b224 to 0272b22f has its CatchHandler @ 0262b2c0 */
  return;
}

