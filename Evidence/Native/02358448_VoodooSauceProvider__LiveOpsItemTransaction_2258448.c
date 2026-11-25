/* IL2CPP: VoodooSauceProvider$$LiveOpsItemTransaction
void VoodooSauceProvider__LiveOpsItemTransaction (VoodooSauceProvider_o* __this, int32_t liveOps, LiveOpsItemTransactionArgs_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$LiveOpsItemTransaction
   void VoodooSauceProvider__LiveOpsItemTransaction (VoodooSauceProvider_o* __this, int32_t liveOps,
   LiveOpsItemTransactionArgs_o args, const MethodInfo* method); */

void VoodooSauceProvider__LiveOpsItemTransaction_2258448
               (undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_049b64a0;
  puVar1 = PTR_DAT_049b6498;
  if ((bRam0000000004f49bd0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b64a0);
    FUN_021f03f8(PTR_DAT_049b64a8);
    FUN_021f03f8(PTR_DAT_049b6478);
    FUN_021f03f8(PTR_DAT_049b3cf0);
    FUN_021f03f8(PTR_DAT_049b6480);
    FUN_021f03f8(PTR_DAT_049b64b0);
    FUN_021f03f8(PTR_DAT_049b45b8);
    FUN_021f03f8(PTR_DAT_049b64b8);
    FUN_021f03f8(PTR_DAT_049b6498);
    bRam0000000004f49bd0 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  AnalyticsLiveOpsEvent___ctor_2541140(&uStack_50,*(undefined8 *)puVar1,param_2,0);
  AnalyticsLiveOpsEvent__AddTransactionData_2541d00(&uStack_50,0);
  lVar4 = *(long *)(*(long *)puVar2 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  pcVar5 = (char *)thunk_FUN_0224e54c(param_3 + 0x18,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar5 != '\0') {
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_3 + 0x18,&uStack_34,*(undefined8 *)PTR_DAT_049b64b8);
    AnalyticsLiveOpsEvent__SetItemName_2542734(&uStack_50,uStack_34,0);
  }
  puVar1 = PTR_DAT_049b3cf0;
  uVar6 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_3 + 8),0);
  if ((uVar6 & 1) == 0) {
    AnalyticsLiveOpsEvent__SetMilestoneType_25427e0(&uStack_50,*(undefined8 *)(param_3 + 8),0);
  }
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
    AnalyticsLiveOpsEvent__SetMilestoneLevel_2541fdc(&uStack_50,uStack_34,0);
  }
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  puVar3 = PTR_DAT_049b6478;
  pcVar5 = (char *)thunk_FUN_0224e54c(param_3 + 0x28,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar5 != '\0') {
                    /* try { // try from 02358640 to 0245866f has its CatchHandler @ 02358640
                       catch() { ... } // from try @ 02358640 with catch @ 02358640
                       catch() { ... } // from try @ 0235867c with catch @ 02358640 */
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_3 + 0x28,&uStack_34,*(undefined8 *)puVar2);
    AnalyticsLiveOpsEvent__SetUnitNumber_2542850(&uStack_50,uStack_34,0);
  }
  lVar4 = *(long *)(*(long *)puVar3 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
                    /* try { // try from 02358670 to 0245867b has its CatchHandler @ 0235869c */
                    /* try { // try from 0235867c to 024586b7 has its CatchHandler @ 02358640 */
  pcVar5 = (char *)thunk_FUN_0224e54c(param_3 + 0x10,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar5 != '\0') {
                    /* catch() { ... } // from try @ 02358670 with catch @ 0235869c */
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_3 + 0x10,&uStack_34,*(undefined8 *)PTR_DAT_049b6480);
    AnalyticsLiveOpsEvent__SetRewardTrackType_2542074(&uStack_50,uStack_34,0);
  }
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  puVar1 = PTR_DAT_049b64a8;
  pcVar5 = (char *)thunk_FUN_0224e54c(param_3 + 0x30,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar5 != '\0') {
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_3 + 0x30,&uStack_34,*(undefined8 *)puVar2);
    AnalyticsLiveOpsEvent__SetStageNumber_254212c(&uStack_50,uStack_34,0);
  }
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  pcVar5 = (char *)thunk_FUN_0224e54c(param_3 + 0x20,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar5 != '\0') {
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_3 + 0x20,&uStack_34,*(undefined8 *)PTR_DAT_049b64b0);
                    /* catch() { ... } // from try @ 023587a8 with catch @ 02358760 */
    AnalyticsLiveOpsEvent__SetTransactionType_25428e8(&uStack_50,uStack_34,0);
  }
  AnalyticsLiveOpsEvent__SendEvent_25416e8(&uStack_50,0);
  return;
}

