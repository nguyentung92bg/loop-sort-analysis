/* IL2CPP: WeeklyMissions$$OnLiveOpsJoined
void WeeklyMissions__OnLiveOpsJoined (WeeklyMissions_o* __this, LiveOpsJoinedMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$OnLiveOpsJoined
   void WeeklyMissions__OnLiveOpsJoined (WeeklyMissions_o* __this, LiveOpsJoinedMessage_o m, const
   MethodInfo* method); */

void WeeklyMissions__OnLiveOpsJoined_252be3c(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_120 [72];
  int iStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [72];
  int iStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f4bed1 & 1) == 0) {
                    /* try { // try from 0262be64 to 0272be9f has its CatchHandler @ 0262bb48 */
    FUN_021f03f8(PTR_DAT_049c9bb0);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bed1 = 1;
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
                    /* try { // try from 0262bea0 to 0272bea3 has its CatchHandler @ 0262c3cc */
  if (((uVar2 & 1) != 0) && (param_2 == 0xc)) {
    lVar3 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
                    /* try { // try from 0262bec0 to 0272bec7 has its CatchHandler @ 0262c3b8 */
      lVar3 = *(long *)puVar1;
    }
                    /* try { // try from 0262becc to 0272becf has its CatchHandler @ 0262bee8 */
                    /* try { // try from 0262bed4 to 0272bed7 has its CatchHandler @ 0262bedc */
                    /* try { // try from 0262bed8 to 0272bf0b has its CatchHandler @ 0262bb48 */
                    /* catch() { ... } // from try @ 0262bed4 with catch @ 0262bedc */
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar3 + 0xb8) + 0x488,auStack_d0,*(undefined8 *)PTR_DAT_049c9bb0);
                    /* catch() { ... } // from try @ 0262becc with catch @ 0262bee8 */
                    /* catch() { ... } // from try @ 0262bdf8 with catch @ 0262beec */
    func_0x04608620(&uStack_80,auStack_d0,0x48);
                    /* catch() { ... } // from try @ 0262be18 with catch @ 0262bef0 */
    func_0x04608620(auStack_120,&uStack_80,0x48);
                    /* try { // try from 0262bf0c to 0272bf0f has its CatchHandler @ 0262c3a0 */
                    /* try { // try from 0262bf10 to 0272bf97 has its CatchHandler @ 0262bb48 */
    uStack_d4 = uStack_84;
    iStack_d8 = iStack_88 + 1;
    WeeklyMissions__SaveProgress_252ae2c(param_1,auStack_120);
  }
  return;
}

