/* IL2CPP: AnalyticsLiveOpsEvent$$SetMaxMilestoneLevel
void AnalyticsLiveOpsEvent__SetMaxMilestoneLevel (AnalyticsLiveOpsEvent_o __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsLiveOpsEvent$$SetMaxMilestoneLevel
   void AnalyticsLiveOpsEvent__SetMaxMilestoneLevel (AnalyticsLiveOpsEvent_o __this, int32_t level,
   const MethodInfo* method); */

void AnalyticsLiveOpsEvent__SetMaxMilestoneLevel_25423ac(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uStack_24;
  
                    /* try { // try from 026423b0 to 027423e7 has its CatchHandler @ 026429ec */
  if ((bRam0000000004f4bfd8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4df8);
    FUN_021f03f8(PTR_DAT_049ca5f8);
    bRam0000000004f4bfd8 = 1;
  }
  lVar2 = *(long *)(param_1 + 8);
  uStack_24 = param_2;
  uVar1 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_24);
                    /* try { // try from 02642408 to 02742413 has its CatchHandler @ 02642988 */
  if (lVar2 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar2,*(undefined8 *)PTR_DAT_049ca5f8,uVar1,*(undefined8 *)PTR_DAT_049b4df8);
                    /* try { // try from 02642430 to 02742443 has its CatchHandler @ 02642984 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

