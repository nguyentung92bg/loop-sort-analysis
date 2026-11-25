/* IL2CPP: WeeklyMissions$$OnEconomyConsume
void WeeklyMissions__OnEconomyConsume (WeeklyMissions_o* __this, EconomyConsumeMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$OnEconomyConsume
   void WeeklyMissions__OnEconomyConsume (WeeklyMissions_o* __this, EconomyConsumeMessage_o m, const
   MethodInfo* method); */

void WeeklyMissions__OnEconomyConsume_252b490(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 auStack_120 [3];
  int iStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 auStack_d0 [3];
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
                    /* try { // try from 0262b498 to 0272b49f has its CatchHandler @ 0262baa8 */
  if ((bRam0000000004f4beca & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9bb0);
                    /* try { // try from 0262b4c0 to 0272b50b has its CatchHandler @ 0262bab8 */
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4beca = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uVar2 = WeeklyMissions__IsActive_252abe4(param_1);
  puVar1 = PTR_DAT_049b5310;
  if (((uVar2 & 1) != 0) && (*(int *)(param_2 + 0x10) == 1)) {
                    /* try { // try from 0262b50c to 0272b52b has its CatchHandler @ 0262b334 */
    lVar3 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
      lVar3 = *(long *)puVar1;
    }
                    /* try { // try from 0262b52c to 0272b53b has its CatchHandler @ 0262baa0 */
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar3 + 0xb8) + 0x488,auStack_d0,*(undefined8 *)PTR_DAT_049c9bb0);
    uStack_3c = (undefined4)stack0xffffffffffffff44;
    uStack_38 = (undefined4)((ulong)stack0xffffffffffffff44 >> 0x20);
    uStack_50 = auStack_d0[0];
    iStack_104 = *(int *)(param_2 + 0x24) + iStack_b4;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    auStack_120[0] = auStack_d0[0];
                    /* try { // try from 0262b590 to 0272b5b7 has its CatchHandler @ 0262bb08 */
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    WeeklyMissions__SaveProgress_252ae2c(param_1,auStack_120);
  }
  return;
}

