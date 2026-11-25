/* IL2CPP: Leaderboard$$.ctor
void Leaderboard___ctor (Leaderboard_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$.ctor
   void Leaderboard___ctor (Leaderboard_o* __this, const MethodInfo* method); */

undefined1  [16] Leaderboard___ctor_251e19c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_049c96d0;
  puVar1 = PTR_DAT_049c96c8;
                    /* try { // try from 0261e1ac to 0271e1b7 has its CatchHandler @ 0261e298 */
                    /* try { // try from 0261e1c0 to 0271e1c7 has its CatchHandler @ 0261e294 */
  if ((bRam0000000004f4be62 & 1) == 0) {
                    /* try { // try from 0261e1c8 to 0271e20b has its CatchHandler @ 0261de18 */
    FUN_021f03f8(PTR_DAT_049c96d0);
    FUN_021f03f8(PTR_DAT_049c96c8);
    bRam0000000004f4be62 = 1;
  }
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
                    /* try { // try from 0261e20c to 0271e217 has its CatchHandler @ 0261e254 */
  return auVar4;
}

