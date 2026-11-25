/* IL2CPP: WeeklyMissions$$OnRevive
void WeeklyMissions__OnRevive (WeeklyMissions_o* __this, ReviveMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$OnRevive
   void WeeklyMissions__OnRevive (WeeklyMissions_o* __this, ReviveMessage_o m, const MethodInfo*
   method); */

void WeeklyMissions__OnRevive_252b708(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uStack_110;
  undefined4 uStack_108;
  int iStack_104;
  undefined8 uStack_100;
  int iStack_f8;
  undefined8 uStack_f4;
  int iStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  int iStack_a8;
  undefined8 uStack_a4;
  int iStack_9c;
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
  undefined8 uStack_40;
  undefined4 uStack_38;
  
                    /* try { // try from 0262b728 to 0272b72f has its CatchHandler @ 0262bafc */
  if ((bRam0000000004f4becc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9bb0);
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 0262b748 to 0272b74f has its CatchHandler @ 0262b980 */
    bRam0000000004f4becc = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uVar3 = WeeklyMissions__IsActive_252abe4(param_1);
  puVar2 = PTR_DAT_049c9bb0;
  puVar1 = PTR_DAT_049b5310;
                    /* try { // try from 0262b768 to 0272b7b3 has its CatchHandler @ 0262b988 */
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar4 + 0xb8) + 0x488,&uStack_c0,*(undefined8 *)puVar2);
                    /* try { // try from 0262b7b4 to 0272b7e3 has its CatchHandler @ 0262b334 */
    lVar4 = *param_2;
    uStack_40 = uStack_c0;
    uStack_50 = uStack_78;
    iStack_ec = iStack_9c + 1;
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    uStack_58 = uStack_80;
    uStack_60 = uStack_88;
    uStack_38 = uStack_b8;
                    /* try { // try from 0262b7e4 to 0272b7e7 has its CatchHandler @ 0262b974 */
    if ((lVar4 != 0) && (*(int *)((long)param_2 + 0xc) == 0)) {
      iVar5 = (int)param_2[1];
      if (iVar5 == 0) {
        iVar5 = *(int *)(lVar4 + 0x18);
      }
                    /* try { // try from 0262b84c to 0272b853 has its CatchHandler @ 0262bad4 */
      if (iVar5 == 6) {
        iStack_a8 = *(int *)(lVar4 + 0x20) + iStack_a8;
      }
      else if (iVar5 == 4) {
        iStack_b4 = *(int *)(lVar4 + 0x20) + iStack_b4;
                    /* try { // try from 0262b864 to 0272b86b has its CatchHandler @ 0262bad0 */
      }
    }
                    /* try { // try from 0262b7fc to 0272b7ff has its CatchHandler @ 0262bae4 */
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_100 = uStack_b0;
    uStack_f4 = uStack_a4;
    uStack_e0 = uStack_90;
    uStack_e8 = uStack_98;
    uStack_d0 = uStack_80;
    uStack_d8 = uStack_88;
    uStack_c8 = uStack_78;
    iStack_104 = iStack_b4;
    iStack_f8 = iStack_a8;
    WeeklyMissions__SaveProgress_252ae2c(param_1,&uStack_110);
  }
                    /* try { // try from 0262b830 to 0272b83b has its CatchHandler @ 0262bab0 */
  return;
}

