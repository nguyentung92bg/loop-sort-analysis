/* IL2CPP: VoodooSauceProvider$$LiveOpsMilestoneCompleted
void VoodooSauceProvider__LiveOpsMilestoneCompleted (VoodooSauceProvider_o* __this, int32_t liveOps, LiveOpsMilestoneArgs_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$LiveOpsMilestoneCompleted
   void VoodooSauceProvider__LiveOpsMilestoneCompleted (VoodooSauceProvider_o* __this, int32_t
   liveOps, LiveOpsMilestoneArgs_o args, const MethodInfo* method); */

void VoodooSauceProvider__LiveOpsMilestoneCompleted_2257e38
               (undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_049b6470;
  if ((bRam0000000004f49bcd & 1) == 0) {
                    /* try { // try from 02357e64 to 02457e6f has its CatchHandler @ 02357ebc */
    FUN_021f03f8(PTR_DAT_049b6478);
    FUN_021f03f8(PTR_DAT_049b3cf0);
                    /* try { // try from 02357e84 to 02457e8f has its CatchHandler @ 02357eb4 */
    FUN_021f03f8(PTR_DAT_049b6480);
                    /* try { // try from 02357e90 to 02457edf has its CatchHandler @ 02357d8c */
    FUN_021f03f8(PTR_DAT_049b45b8);
    FUN_021f03f8(PTR_DAT_049b6470);
    bRam0000000004f49bcd = 1;
  }
  puVar1 = PTR_DAT_049b3cf0;
                    /* catch() { ... } // from try @ 02357e84 with catch @ 02357eb4 */
                    /* catch() { ... } // from try @ 02357e64 with catch @ 02357ebc */
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  AnalyticsLiveOpsEvent___ctor_2541140(&uStack_50,*(undefined8 *)puVar2,param_2,0);
                    /* catch() { ... } // from try @ 02357e1c with catch @ 02357ed0 */
  AnalyticsLiveOpsEvent__AddGeneralData_2541798(&uStack_50,param_2,0);
  uVar5 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_3 + 8),0);
  if ((uVar5 & 1) == 0) {
    AnalyticsLiveOpsEvent__SetMilestoneType_25427e0(&uStack_50,*(undefined8 *)(param_3 + 8),0);
  }
  lVar6 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  puVar3 = PTR_DAT_049b6478;
  puVar2 = PTR_DAT_049b45b8;
  pcVar7 = (char *)thunk_FUN_0224e54c(param_3,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80));
  if (*pcVar7 != '\0') {
                    /* catch() { ... } // from try @ 02357fa0 with catch @ 02357f4c */
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_3,&uStack_34,*(undefined8 *)puVar2);
    AnalyticsLiveOpsEvent__SetMilestoneLevel_2541fdc(&uStack_50,uStack_34,0);
  }
  lVar6 = *(long *)(*(long *)puVar3 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  puVar4 = PTR_DAT_049b6480;
  pcVar7 = (char *)thunk_FUN_0224e54c(param_3 + 0x10,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80)
                                     );
                    /* try { // try from 02357f98 to 02457f9f has its CatchHandler @ 02357fec */
  if (*pcVar7 != '\0') {
                    /* try { // try from 02357fa0 to 02457fff has its CatchHandler @ 02357f4c */
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_3 + 0x10,&uStack_34,*(undefined8 *)puVar4);
    AnalyticsLiveOpsEvent__SetRewardTrackType_2542074(&uStack_50,uStack_34,0);
  }
  lVar6 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  pcVar7 = (char *)thunk_FUN_0224e54c(param_3 + 0x18,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80)
                                     );
                    /* catch() { ... } // from try @ 02357f98 with catch @ 02357fec */
  if (*pcVar7 != '\0') {
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_3 + 0x18,&uStack_34,*(undefined8 *)puVar2);
                    /* try { // try from 0235800c to 0245800f has its CatchHandler @ 02358018 */
    AnalyticsLiveOpsEvent__SetStageNumber_254212c(&uStack_50,uStack_34,0);
  }
  lVar6 = *(long *)(*(long *)puVar3 + 0x20);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0235800c with catch @ 02358018
                        */
                    /* try { // try from 0235801c to 0245804b has its CatchHandler @ 0235801c
                       catch() { ... } // from try @ 0235801c with catch @ 0235801c
                       catch() { ... } // from try @ 02358058 with catch @ 0235801c */
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  pcVar7 = (char *)thunk_FUN_0224e54c(param_3 + 0x20,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar7 != '\0') {
                    /* try { // try from 0235804c to 02458057 has its CatchHandler @ 02358078 */
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_3 + 0x20,&uStack_34,*(undefined8 *)puVar4);
                    /* try { // try from 02358058 to 02458093 has its CatchHandler @ 0235801c */
    AnalyticsLiveOpsEvent__SetPassStatus_25421c4(&uStack_50,uStack_34,0);
  }
  lVar6 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 0235804c with catch @ 02358078 */
    lVar6 = FUN_02229718();
  }
  pcVar7 = (char *)thunk_FUN_0224e54c(param_3 + 0x28,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80)
                                     );
                    /* try { // try from 02358094 to 02458107 has its CatchHandler @ 02358094
                       catch() { ... } // from try @ 02358094 with catch @ 02358094
                       catch() { ... } // from try @ 0235811c with catch @ 02358094 */
  if (*pcVar7 != '\0') {
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_3 + 0x28,&uStack_34,*(undefined8 *)puVar2);
    AnalyticsLiveOpsEvent__SetCurrencyBalance_254227c(&uStack_50,uStack_34,0);
  }
  lVar6 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  pcVar7 = (char *)thunk_FUN_0224e54c(param_3 + 0x30,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar7 != '\0') {
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (param_3 + 0x30,&uStack_34,*(undefined8 *)puVar2);
                    /* try { // try from 02358108 to 0245811b has its CatchHandler @ 02358130 */
    AnalyticsLiveOpsEvent__SetCurrencyCollected_2542314(&uStack_50,uStack_34,0);
  }
  AnalyticsLiveOpsEvent__SendEvent_25416e8(&uStack_50,0);
                    /* try { // try from 0235811c to 02458147 has its CatchHandler @ 02358094 */
  return;
}

