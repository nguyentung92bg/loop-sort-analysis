/* IL2CPP: DailyChallenge$$GetAnalyticsData
System_Collections_Generic_Dictionary_string__object__o* DailyChallenge__GetAnalyticsData (DailyChallenge_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$GetAnalyticsData
   System_Collections_Generic_Dictionary_string__object__o* DailyChallenge__GetAnalyticsData
   (DailyChallenge_o* __this, const MethodInfo* method); */

long DailyChallenge__GetAnalyticsData_25155d0(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  char cVar9;
  char cVar10;
  undefined1 auStack_40 [16];
  undefined4 uStack_24;
  
  puVar5 = PTR_DAT_049b5fc8;
  puVar3 = PTR_DAT_049b4340;
  puVar2 = PTR_DAT_049b4338;
  if ((bRam0000000004f4be0f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b44e8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b4358);
    FUN_021f03f8(PTR_DAT_049b4338);
    FUN_021f03f8(PTR_DAT_049b4340);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049c9350);
                    /* try { // try from 02615658 to 0271567b has its CatchHandler @ 026169a4 */
    FUN_021f03f8(PTR_DAT_049c9358);
    FUN_021f03f8(PTR_DAT_049c9360);
    FUN_021f03f8(PTR_DAT_049c9118);
    bRam0000000004f4be0f = 1;
  }
  puVar4 = PTR_DAT_049b44e8;
                    /* try { // try from 0261568c to 0271568f has its CatchHandler @ 02616988 */
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
                    /* try { // try from 02615694 to 027156a7 has its CatchHandler @ 02616924 */
  lVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (lVar7,*(undefined8 *)puVar2);
                    /* try { // try from 026156a8 to 027156bb has its CatchHandler @ 02616920 */
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b5050;
                    /* try { // try from 026156bc to 027156cf has its CatchHandler @ 02616984 */
  auStack_40 = TimeProvider__get_Now_24f4584(0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar5 = PTR_DAT_049c9358;
  puVar3 = PTR_DAT_049c9350;
                    /* try { // try from 026156e0 to 027156fb has its CatchHandler @ 02616980 */
  uVar8 = System_Globalization_CultureInfo__get_InvariantCulture_307b9dc(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 02615704 to 02715713 has its CatchHandler @ 0261697c */
    FUN_021f0574(*(long *)puVar2);
  }
                    /* try { // try from 02615718 to 02715733 has its CatchHandler @ 026169a0 */
  uVar8 = System_DateTimeOffset__ToString_30e3768(auStack_40,*(undefined8 *)puVar5,uVar8,0);
  uVar8 = System_String__Concat_2f72b28(uVar8,*(undefined8 *)puVar3,0);
  puVar3 = PTR_DAT_049c9118;
  puVar2 = PTR_DAT_049b4358;
  if (lVar7 != 0) {
                    /* try { // try from 0261573c to 0271574b has its CatchHandler @ 02616978 */
                    /* try { // try from 02615750 to 0271576b has its CatchHandler @ 0261699c */
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar7,*(undefined8 *)PTR_DAT_049c9360,uVar8,*(undefined8 *)PTR_DAT_049b4358);
    uVar6 = DailyChallenge__GetCompletedDays_25168ec();
                    /* try { // try from 02615770 to 0271577f has its CatchHandler @ 02616974 */
    cVar9 = POPCOUNT((char)((uint)uVar6 >> 0x10));
    cVar10 = POPCOUNT((char)((uint)uVar6 >> 0x18));
    uVar1 = NEON_uaddlv((ulong)CONCAT13(cVar10,CONCAT12(cVar9,CONCAT11(POPCOUNT((char)((uint)uVar6
                                                                                      >> 8)),
                                                                       POPCOUNT((char)uVar6)))),1);
    uStack_24 = CONCAT13(cVar10,CONCAT12(cVar9,uVar1));
    uVar8 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_24);
                    /* try { // try from 02615790 to 02715797 has its CatchHandler @ 0261691c */
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar7,*(undefined8 *)puVar3,uVar8,*(undefined8 *)puVar2);
                    /* try { // try from 0261579c to 027157ab has its CatchHandler @ 02616970 */
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

