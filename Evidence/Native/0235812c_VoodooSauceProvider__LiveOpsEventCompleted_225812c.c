/* IL2CPP: VoodooSauceProvider$$LiveOpsEventCompleted
void VoodooSauceProvider__LiveOpsEventCompleted (VoodooSauceProvider_o* __this, int32_t liveOps, LiveOpsEventCompletedArgs_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$LiveOpsEventCompleted
   void VoodooSauceProvider__LiveOpsEventCompleted (VoodooSauceProvider_o* __this, int32_t liveOps,
   LiveOpsEventCompletedArgs_o args, const MethodInfo* method); */

void VoodooSauceProvider__LiveOpsEventCompleted_225812c
               (undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_049b6488;
  puVar1 = PTR_DAT_049b3cf0;
                    /* catch() { ... } // from try @ 02358108 with catch @ 02358130 */
  if ((bRam0000000004f49bce & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6478);
    FUN_021f03f8(PTR_DAT_049b3cf0);
    FUN_021f03f8(PTR_DAT_049b6480);
    FUN_021f03f8(PTR_DAT_049b45b8);
    FUN_021f03f8(PTR_DAT_049b6488);
    bRam0000000004f49bce = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  AnalyticsLiveOpsEvent___ctor_2541140(&uStack_50,*(undefined8 *)puVar2,param_2,0);
  AnalyticsLiveOpsEvent__AddGeneralData_2541798(&uStack_50,param_2,0);
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  puVar2 = PTR_DAT_049b45b8;
  pcVar5 = (char *)thunk_FUN_0224e54c(param_3,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80));
  if (*pcVar5 != '\0') {
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_3,&uStack_34,*(undefined8 *)puVar2);
    AnalyticsLiveOpsEvent__SetMaxMilestoneLevel_25423ac(&uStack_50,uStack_34,0);
  }
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  puVar3 = PTR_DAT_049b6478;
  pcVar5 = (char *)thunk_FUN_0224e54c(param_3 + 8,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar5 != '\0') {
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_3 + 8,&uStack_34,*(undefined8 *)puVar2);
    AnalyticsLiveOpsEvent__SetMaxWinStreak_2542444(&uStack_50,uStack_34,0);
  }
  lVar4 = *(long *)(*(long *)puVar3 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  pcVar5 = (char *)thunk_FUN_0224e54c(param_3 + 0x10,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar5 != '\0') {
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_3 + 0x10,&uStack_34,*(undefined8 *)PTR_DAT_049b6480);
    AnalyticsLiveOpsEvent__SetFinalTrackStatus_25424dc(&uStack_50,uStack_34,0);
  }
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  pcVar5 = (char *)thunk_FUN_0224e54c(param_3 + 0x18,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar5 != '\0') {
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_3 + 0x18,&uStack_34,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 02358374 with catch @ 02358330 */
    AnalyticsLiveOpsEvent__SetMaxStageCompleted_2542594(&uStack_50,uStack_34,0);
  }
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  pcVar5 = (char *)thunk_FUN_0224e54c(param_3 + 0x20,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                     );
                    /* try { // try from 02358368 to 02458373 has its CatchHandler @ 02358418 */
  if (*pcVar5 != '\0') {
                    /* try { // try from 02358374 to 02458437 has its CatchHandler @ 02358330 */
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_3 + 0x20,&uStack_34,*(undefined8 *)puVar2);
    AnalyticsLiveOpsEvent__SetTournamentPlacement_254262c(&uStack_50,uStack_34,0);
  }
  AnalyticsLiveOpsEvent__SendEvent_25416e8(&uStack_50,0);
  return;
}

