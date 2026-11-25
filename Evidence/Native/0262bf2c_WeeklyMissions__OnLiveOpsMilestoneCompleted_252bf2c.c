/* IL2CPP: WeeklyMissions$$OnLiveOpsMilestoneCompleted
void WeeklyMissions__OnLiveOpsMilestoneCompleted (WeeklyMissions_o* __this, LiveOpsMilestoneCompletedMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$OnLiveOpsMilestoneCompleted
   void WeeklyMissions__OnLiveOpsMilestoneCompleted (WeeklyMissions_o* __this,
   LiveOpsMilestoneCompletedMessage_o m, const MethodInfo* method); */

void WeeklyMissions__OnLiveOpsMilestoneCompleted_252bf2c(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_120 [68];
  int iStack_dc;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [68];
  int iStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam0000000004f4bed2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9bb0);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bed2 = 1;
  }
  uStack_40 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uVar2 = WeeklyMissions__IsActive_252abe4(param_1);
  puVar1 = PTR_DAT_049b5310;
  if (((uVar2 & 1) != 0) && (param_2 == 10)) {
                    /* try { // try from 0262bf98 to 0272bf9f has its CatchHandler @ 0262c3d8 */
    lVar3 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
      lVar3 = *(long *)puVar1;
    }
                    /* try { // try from 0262bfb8 to 0272c003 has its CatchHandler @ 0262c40c */
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar3 + 0xb8) + 0x488,auStack_d0,*(undefined8 *)PTR_DAT_049c9bb0);
    func_0x04608620(&uStack_80,auStack_d0,0x44);
    func_0x04608620(auStack_120,&uStack_80,0x44);
                    /* try { // try from 0262c004 to 0272c0fb has its CatchHandler @ 0262bb48 */
    uStack_d8 = uStack_88;
    iStack_dc = iStack_8c + 1;
    WeeklyMissions__SaveProgress_252ae2c(param_1,auStack_120);
  }
  return;
}

