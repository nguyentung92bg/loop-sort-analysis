/* IL2CPP: WeeklyMissions$$OnEconomyAdd
void WeeklyMissions__OnEconomyAdd (WeeklyMissions_o* __this, EconomyAddMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$OnEconomyAdd
   void WeeklyMissions__OnEconomyAdd (WeeklyMissions_o* __this, EconomyAddMessage_o m, const
   MethodInfo* method); */

void WeeklyMissions__OnEconomyAdd_252b5b0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  int iStack_110;
  undefined8 uStack_10c;
  int iStack_f0;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_a8;
  int iStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* try { // try from 0262b5d4 to 0272b5db has its CatchHandler @ 0262bae0 */
  if ((bRam0000000004f4becb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9bb0);
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 0262b5f4 to 0272b5fb has its CatchHandler @ 0262b984 */
    bRam0000000004f4becb = 1;
  }
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_90 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
                    /* try { // try from 0262b614 to 0272b65f has its CatchHandler @ 0262b9b8 */
  uStack_88 = 0;
  uVar3 = WeeklyMissions__IsActive_252abe4(param_1);
  puVar2 = PTR_DAT_049c9bb0;
  puVar1 = PTR_DAT_049b5310;
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar4 + 0xb8) + 0x488,&uStack_e0,*(undefined8 *)puVar2);
                    /* try { // try from 0262b660 to 0272b69b has its CatchHandler @ 0262b334 */
    uStack_90 = uStack_9c;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_48 = uStack_c8;
    uStack_50 = uStack_d0;
    uStack_88 = uStack_94;
    uStack_80 = uStack_bc;
    uStack_6c = (undefined4)uStack_a8;
    uStack_68 = (undefined4)((ulong)uStack_a8 >> 0x20);
    if (*(int *)(param_2 + 0x10) == 0x28) {
                    /* try { // try from 0262b6b0 to 0272b6b3 has its CatchHandler @ 0262badc */
      iStack_a0 = *(int *)(param_2 + 0x24) + iStack_a0;
    }
    else {
                    /* try { // try from 0262b69c to 0272b69f has its CatchHandler @ 0262b968 */
      if (*(int *)(param_2 + 0x10) != 1) {
        return;
      }
      iStack_c0 = *(int *)(param_2 + 0x24) + iStack_c0;
    }
    uStack_128 = uStack_d8;
    uStack_130 = uStack_e0;
    uStack_118 = uStack_c8;
    uStack_120 = uStack_d0;
    uStack_10c = uStack_bc;
                    /* try { // try from 0262b6e4 to 0272b70b has its CatchHandler @ 0262bb04 */
    uStack_ec = uStack_9c;
    uStack_e4 = uStack_94;
    iStack_110 = iStack_c0;
    iStack_f0 = iStack_a0;
    WeeklyMissions__SaveProgress_252ae2c(param_1,&uStack_130);
  }
  return;
}

