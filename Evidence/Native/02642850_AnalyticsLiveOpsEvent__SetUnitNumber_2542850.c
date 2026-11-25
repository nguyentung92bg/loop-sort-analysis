/* IL2CPP: AnalyticsLiveOpsEvent$$SetUnitNumber
void AnalyticsLiveOpsEvent__SetUnitNumber (AnalyticsLiveOpsEvent_o __this, int32_t unitNumber, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsLiveOpsEvent$$SetUnitNumber
   void AnalyticsLiveOpsEvent__SetUnitNumber (AnalyticsLiveOpsEvent_o __this, int32_t unitNumber,
   const MethodInfo* method); */

void AnalyticsLiveOpsEvent__SetUnitNumber_2542850(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uStack_24;
  
                    /* try { // try from 0264285c to 02742867 has its CatchHandler @ 026429a0 */
  if ((bRam0000000004f4bfe0 & 1) == 0) {
                    /* try { // try from 02642878 to 02742883 has its CatchHandler @ 0264299c */
    FUN_021f03f8(PTR_DAT_049b4df8);
    FUN_021f03f8(PTR_DAT_049ca620);
                    /* try { // try from 02642888 to 02742893 has its CatchHandler @ 02642998 */
    bRam0000000004f4bfe0 = 1;
  }
                    /* try { // try from 02642894 to 027428db has its CatchHandler @ 02642290 */
  lVar2 = *(long *)(param_1 + 8);
  uStack_24 = param_2;
  uVar1 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_24);
  if (lVar2 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar2,*(undefined8 *)PTR_DAT_049ca620,uVar1,*(undefined8 *)PTR_DAT_049b4df8);
                    /* try { // try from 026428dc to 027428e7 has its CatchHandler @ 02642950 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

