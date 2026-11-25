/* IL2CPP: AnalyticsLiveOpsEvent$$SetFinalTrackStatus
void AnalyticsLiveOpsEvent__SetFinalTrackStatus (AnalyticsLiveOpsEvent_o __this, int32_t status, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsLiveOpsEvent$$SetFinalTrackStatus
   void AnalyticsLiveOpsEvent__SetFinalTrackStatus (AnalyticsLiveOpsEvent_o __this, int32_t status,
   const MethodInfo* method); */

void AnalyticsLiveOpsEvent__SetFinalTrackStatus_25424dc(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = PTR_DAT_049ca630;
                    /* try { // try from 026424e8 to 027424f3 has its CatchHandler @ 026429d0 */
                    /* try { // try from 026424fc to 02742517 has its CatchHandler @ 026429c4 */
  if ((bRam0000000004f4bfda & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4df8);
    FUN_021f03f8(PTR_DAT_049ca630);
    FUN_021f03f8(PTR_DAT_049ca5d8);
                    /* try { // try from 0264252c to 02742537 has its CatchHandler @ 026429cc */
    bRam0000000004f4bfda = 1;
  }
  uStack_48 = *(undefined8 *)puVar1;
  lVar3 = *(long *)(param_1 + 8);
  uStack_40 = 0xffffffffffffffff;
  uStack_38 = param_2;
                    /* try { // try from 02642550 to 02742553 has its CatchHandler @ 02642958 */
  uVar2 = System_Enum__ToString_3135e00(&uStack_48,0);
  if (lVar3 != 0) {
                    /* try { // try from 02642568 to 0274256f has its CatchHandler @ 02642970 */
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar3,*(undefined8 *)PTR_DAT_049ca5d8,uVar2,*(undefined8 *)PTR_DAT_049b4df8);
                    /* try { // try from 02642588 to 0274258b has its CatchHandler @ 02642954 */
                    /* try { // try from 0264258c to 027425a7 has its CatchHandler @ 0264296c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

