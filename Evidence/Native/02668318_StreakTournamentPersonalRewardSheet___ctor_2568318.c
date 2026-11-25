/* IL2CPP: StreakTournamentPersonalRewardSheet$$.ctor
void StreakTournamentPersonalRewardSheet___ctor (StreakTournamentPersonalRewardSheet_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x029c0f20) */
/* IL2CPP: StreakTournamentPersonalRewardSheet$$.ctor
   void StreakTournamentPersonalRewardSheet___ctor (StreakTournamentPersonalRewardSheet_o* __this,
   const MethodInfo* method); */

void StreakTournamentPersonalRewardSheet___ctor_2568318(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
                    /* catch() { ... } // from try @ 02667b88 with catch @ 02668318 */
  puVar1 = PTR_DAT_049cbd40;
                    /* catch() { ... } // from try @ 02667b64 with catch @ 0266831c */
                    /* catch() { ... } // from try @ 02667dc0 with catch @ 02668320 */
                    /* catch() { ... } // from try @ 02667d7c with catch @ 02668324 */
                    /* catch() { ... } // from try @ 02667d40 with catch @ 02668328 */
                    /* catch() { ... } // from try @ 026679b0 with catch @ 0266832c */
                    /* catch() { ... } // from try @ 0266799c with catch @ 02668330 */
                    /* catch() { ... } // from try @ 02667fb0 with catch @ 02668334 */
  if ((bRam0000000004f4c178 & 1) == 0) {
                    /* catch() { ... } // from try @ 02667f5c with catch @ 02668338 */
                    /* catch() { ... } // from try @ 02667bac with catch @ 0266833c */
                    /* catch() { ... } // from try @ 02667b8c with catch @ 02668340 */
    FUN_021f03f8(PTR_DAT_049cbd40);
                    /* catch() { ... } // from try @ 02667b6c with catch @ 02668344 */
                    /* catch() { ... } // from try @ 026682f0 with catch @ 02668348 */
    bRam0000000004f4c178 = 1;
  }
                    /* catch() { ... } // from try @ 026679d0 with catch @ 0266834c */
                    /* catch() { ... } // from try @ 02667dc8 with catch @ 02668350 */
                    /* catch() { ... } // from try @ 02667da0 with catch @ 02668354 */
                    /* catch() { ... } // from try @ 02667d8c with catch @ 02668358 */
                    /* catch() { ... } // from try @ 02667d54 with catch @ 0266835c */
  lVar3 = **(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0) + 0xe8
                                         ) + 0x20) + 0xc0);
  lVar4 = *(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718(lVar4);
  }
  uVar2 = thunk_FUN_0222ca34(lVar4);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x18));
  System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType____ctor_2807410
            (param_1,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x20));
  uVar2 = FUN_026b1a00(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x38));
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x18),uVar2);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

