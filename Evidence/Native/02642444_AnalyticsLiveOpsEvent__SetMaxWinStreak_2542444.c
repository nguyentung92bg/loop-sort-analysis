/* IL2CPP: AnalyticsLiveOpsEvent$$SetMaxWinStreak
void AnalyticsLiveOpsEvent__SetMaxWinStreak (AnalyticsLiveOpsEvent_o __this, int32_t winStreak, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsLiveOpsEvent$$SetMaxWinStreak
   void AnalyticsLiveOpsEvent__SetMaxWinStreak (AnalyticsLiveOpsEvent_o __this, int32_t winStreak,
   const MethodInfo* method); */

void AnalyticsLiveOpsEvent__SetMaxWinStreak_2542444(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bfd9 & 1) == 0) {
                    /* try { // try from 02642468 to 02742473 has its CatchHandler @ 0264297c */
    FUN_021f03f8(PTR_DAT_049b4df8);
    FUN_021f03f8(PTR_DAT_049b6380);
                    /* try { // try from 0264247c to 0274248b has its CatchHandler @ 026429d8 */
    bRam0000000004f4bfd9 = 1;
  }
  lVar2 = *(long *)(param_1 + 8);
                    /* try { // try from 02642498 to 027424a7 has its CatchHandler @ 026429d4 */
  uStack_24 = param_2;
  uVar1 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_24);
  if (lVar2 != 0) {
                    /* try { // try from 026424a8 to 027424b3 has its CatchHandler @ 02642978 */
                    /* try { // try from 026424c0 to 027424cb has its CatchHandler @ 0264295c */
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (lVar2,*(undefined8 *)PTR_DAT_049b6380,uVar1,*(undefined8 *)PTR_DAT_049b4df8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

