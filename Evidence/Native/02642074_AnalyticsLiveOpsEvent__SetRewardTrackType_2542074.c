/* IL2CPP: AnalyticsLiveOpsEvent$$SetRewardTrackType
void AnalyticsLiveOpsEvent__SetRewardTrackType (AnalyticsLiveOpsEvent_o __this, int32_t status, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsLiveOpsEvent$$SetRewardTrackType
   void AnalyticsLiveOpsEvent__SetRewardTrackType (AnalyticsLiveOpsEvent_o __this, int32_t status,
   const MethodInfo* method); */

void AnalyticsLiveOpsEvent__SetRewardTrackType_2542074(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
                    /* try { // try from 02642074 to 0274207b has its CatchHandler @ 0264209c */
  puVar1 = PTR_DAT_049ca630;
                    /* try { // try from 02642098 to 0274209b has its CatchHandler @ 026420a0 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02642074 with catch @ 0264209c
                        */
  if ((bRam0000000004f4bfd3 & 1) == 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02642098 with catch @ 026420a0
                        */
    FUN_021f03f8(PTR_DAT_049b4df8);
                    /* try { // try from 026420b0 to 027420b3 has its CatchHandler @ 026421e0 */
                    /* try { // try from 026420b4 to 027420bb has its CatchHandler @ 026421d4 */
    FUN_021f03f8(PTR_DAT_049ca630);
                    /* try { // try from 026420c0 to 027420cb has its CatchHandler @ 026421d0 */
    FUN_021f03f8(PTR_DAT_049ca5b0);
    bRam0000000004f4bfd3 = 1;
  }
  uStack_48 = *(undefined8 *)puVar1;
                    /* try { // try from 026420d0 to 027420db has its CatchHandler @ 026421d8 */
  lVar3 = *(long *)(param_1 + 8);
                    /* try { // try from 026420e0 to 027420eb has its CatchHandler @ 026421e0 */
  uStack_40 = 0xffffffffffffffff;
  uStack_38 = param_2;
  uVar2 = System_Enum__ToString_3135e00(&uStack_48,0);
                    /* try { // try from 026420ec to 02742187 has its CatchHandler @ 02642018 */
  if (lVar3 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar3,*(undefined8 *)PTR_DAT_049ca5b0,uVar2,*(undefined8 *)PTR_DAT_049b4df8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

