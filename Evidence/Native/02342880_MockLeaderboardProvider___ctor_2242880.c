/* IL2CPP: MockLeaderboardProvider$$.ctor
void MockLeaderboardProvider___ctor (MockLeaderboardProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MockLeaderboardProvider$$.ctor
   void MockLeaderboardProvider___ctor (MockLeaderboardProvider_o* __this, const MethodInfo*
   method); */

undefined1  [16] MockLeaderboardProvider___ctor_2242880(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_049b54b8;
  puVar1 = PTR_DAT_049b54b0;
                    /* catch() { ... } // from try @ 0234283c with catch @ 02342890
                       try { // try from 02342890 to 024428a3 has its CatchHandler @ 023427f0 */
                    /* try { // try from 023428a8 to 024428cf has its CatchHandler @ 023428a8
                       catch() { ... } // from try @ 023428a8 with catch @ 023428a8
                       catch() { ... } // from try @ 02342944 with catch @ 023428a8 */
  if ((bRam0000000004f49b22 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b54b8);
    FUN_021f03f8(PTR_DAT_049b54b0);
    bRam0000000004f49b22 = 1;
  }
                    /* try { // try from 023428d0 to 024428d7 has its CatchHandler @ 02342980 */
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x20),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
                    /* try { // try from 02342900 to 02442943 has its CatchHandler @ 0234297c */
  return auVar4;
}

