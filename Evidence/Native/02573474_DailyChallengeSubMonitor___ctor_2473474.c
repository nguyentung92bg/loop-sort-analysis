/* IL2CPP: DailyChallengeSubMonitor$$.ctor
void DailyChallengeSubMonitor___ctor (DailyChallengeSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallengeSubMonitor$$.ctor
   void DailyChallengeSubMonitor___ctor (DailyChallengeSubMonitor_o* __this, const MethodInfo*
   method); */

undefined1  [16] DailyChallengeSubMonitor___ctor_2473474(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_049c5650;
                    /* try { // try from 02573474 to 0267347b has its CatchHandler @ 02573484 */
  puVar1 = PTR_DAT_049c5648;
                    /* try { // try from 0257347c to 02673487 has its CatchHandler @ 02572d60 */
                    /* catch() { ... } // from try @ 02573474 with catch @ 02573484 */
  if ((bRam0000000004f4b9b9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5650);
    FUN_021f03f8(PTR_DAT_049c5648);
    bRam0000000004f4b9b9 = 1;
  }
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x60),uVar3);
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

