/* IL2CPP: LavaQuest$$GetAnalyticsData
System_Collections_Generic_Dictionary_string__object__o* LavaQuest__GetAnalyticsData (LavaQuest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest$$GetAnalyticsData
   System_Collections_Generic_Dictionary_string__object__o* LavaQuest__GetAnalyticsData
   (LavaQuest_o* __this, const MethodInfo* method); */

long LavaQuest__GetAnalyticsData_251a310(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int aiStack_48 [3];
  int iStack_3c;
  
  puVar3 = PTR_DAT_049c9520;
                    /* try { // try from 0261a320 to 0271a337 has its CatchHandler @ 0261a8d4 */
  if ((bRam0000000004f4be37 & 1) == 0) {
                    /* try { // try from 0261a338 to 0271a34b has its CatchHandler @ 0261a888 */
    FUN_021f03f8(PTR_DAT_049b4358);
    FUN_021f03f8(PTR_DAT_049b4338);
                    /* try { // try from 0261a354 to 0271a36f has its CatchHandler @ 0261a8d8 */
    FUN_021f03f8(PTR_DAT_049b4340);
    FUN_021f03f8(PTR_DAT_049c9520);
    FUN_021f03f8(PTR_DAT_049c9118);
                    /* try { // try from 0261a374 to 0271a38f has its CatchHandler @ 0261a8d0 */
    bRam0000000004f4be37 = 1;
  }
  lVar8 = *(long *)puVar3;
  lVar6 = *(long *)(lVar8 + 0x20);
  uVar2 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 0261a390 to 0271a3a3 has its CatchHandler @ 0261a884 */
    lVar6 = FUN_02229718(lVar6);
    lVar7 = *(long *)(lVar8 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
  }
  puVar4 = PTR_DAT_049b4340;
  puVar3 = PTR_DAT_049b4338;
                    /* try { // try from 0261a3c0 to 0271a3e3 has its CatchHandler @ 0261a8c8 */
  uVar1 = *(undefined4 *)(**(long **)(lVar6 + 0xc0) + 0xfc);
  if ((uVar2 & 1) == 0) {
    lVar7 = FUN_02229718(lVar7);
  }
                    /* try { // try from 0261a3e4 to 0271a40b has its CatchHandler @ 0261a8c4 */
  uVar5 = thunk_FUN_0224e54c(param_1 + 0x84,
                             *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x20);
  func_0x04608620(aiStack_48,uVar5,uVar1);
                    /* try { // try from 0261a40c to 0271a41f has its CatchHandler @ 0261a880 */
  lVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (lVar7,*(undefined8 *)puVar3);
                    /* try { // try from 0261a430 to 0271a437 has its CatchHandler @ 0261a840 */
  aiStack_48[0] = aiStack_48[0] - (uint)(iStack_3c == 3);
  uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),aiStack_48);
                    /* try { // try from 0261a440 to 0271a447 has its CatchHandler @ 0261a838 */
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 0261a454 to 0271a45f has its CatchHandler @ 0261a80c */
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
            (lVar7,*(undefined8 *)PTR_DAT_049c9118,uVar5,*(undefined8 *)PTR_DAT_049b4358);
                    /* try { // try from 0261a47c to 0271a487 has its CatchHandler @ 0261a87c */
  return lVar7;
}

