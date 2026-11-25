/* IL2CPP: ConsoleMethods$$SetDailyChallengeDays
void ConsoleMethods__SetDailyChallengeDays (int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$SetDailyChallengeDays
   void ConsoleMethods__SetDailyChallengeDays (int32_t count, const MethodInfo* method); */

void ConsoleMethods__SetDailyChallengeDays_24f4330(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_60 [16];
  
  puVar3 = PTR_DAT_049b5fc8;
                    /* try { // try from 025f4348 to 026f4353 has its CatchHandler @ 025f44c8 */
  if ((bRam0000000004f4bd14 & 1) == 0) {
                    /* try { // try from 025f4368 to 026f436f has its CatchHandler @ 025f44bc */
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fb0);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
                    /* try { // try from 025f43a4 to 026f43ab has its CatchHandler @ 025f44e4 */
    FUN_021f03f8(PTR_DAT_049c8378);
    bRam0000000004f4bd14 = 1;
  }
  puVar2 = PTR_DAT_049b5050;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
                    /* try { // try from 025f43c4 to 026f440f has its CatchHandler @ 025f44e8 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049b5fb0;
  auStack_60 = TimeProvider__get_Now_24f4584();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = System_DateTimeOffset__get_Year_30e15d4(auStack_60,0);
  uVar5 = System_DateTimeOffset__get_Month_30e1374(auStack_60,0);
                    /* try { // try from 025f4410 to 026f4423 has its CatchHandler @ 025f4274 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar3);
  }
                    /* try { // try from 025f4424 to 026f4433 has its CatchHandler @ 025f44e0 */
  puVar3 = PTR_DAT_049b5310;
                    /* try { // try from 025f4438 to 026f4443 has its CatchHandler @ 025f44d4 */
  iVar6 = System_DateTime__DaysInMonth_30dc6a0(uVar4,uVar5,0);
  uVar8 = 0;
                    /* try { // try from 025f4444 to 026f4453 has its CatchHandler @ 025f44d8 */
  if ((0 < iVar6) && (0 < param_1)) {
    uVar8 = 0;
    uVar9 = 0x20;
    do {
                    /* try { // try from 025f4464 to 026f4467 has its CatchHandler @ 025f44c4 */
                    /* try { // try from 025f4468 to 026f449f has its CatchHandler @ 025f4274 */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      iVar7 = System_DateTimeOffset__get_Day_30e107c(auStack_60,0);
      if (uVar9 - 0x1f != iVar7) {
        param_1 = param_1 + -1;
        uVar8 = 1 << (ulong)(uVar9 & 0x1f) | uVar8;
      }
    } while (((int)(uVar9 - 0x1e) <= iVar6) &&
            (uVar9 = uVar9 + 1, 0 < param_1
                    /* try { // try from 025f44a0 to 026f44a3 has its CatchHandler @ 025f44dc */
                    /* try { // try from 025f44a4 to 026f44a7 has its CatchHandler @ 025f44c8 */
                    /* try { // try from 025f44a8 to 026f44af has its CatchHandler @ 025f4274 */));
  }
                    /* try { // try from 025f44b0 to 026f44b3 has its CatchHandler @ 025f44c0 */
                    /* try { // try from 025f44b4 to 026f44bb has its CatchHandler @ 025f44c4 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b3c58;
                    /* catch() { ... } // from try @ 025f4368 with catch @ 025f44bc
                       try { // try from 025f44bc to 026f4507 has its CatchHandler @ 025f4274 */
                    /* catch() { ... } // from try @ 025f44b0 with catch @ 025f44c0 */
                    /* catch() { ... } // from try @ 025f4464 with catch @ 025f44c4
                       catch() { ... } // from try @ 025f44b4 with catch @ 025f44c4 */
                    /* catch() { ... } // from try @ 025f4348 with catch @ 025f44c8
                       catch() { ... } // from try @ 025f44a4 with catch @ 025f44c8 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* catch() { ... } // from try @ 025f4438 with catch @ 025f44d4 */
  puVar2 = PTR_DAT_049c8378;
                    /* catch() { ... } // from try @ 025f4444 with catch @ 025f44d8 */
                    /* catch() { ... } // from try @ 025f44a0 with catch @ 025f44dc */
                    /* catch() { ... } // from try @ 025f4424 with catch @ 025f44e0 */
                    /* catch() { ... } // from try @ 025f43a4 with catch @ 025f44e4 */
  iVar6 = System_DateTimeOffset__get_Year_30e15d4(auStack_60,0);
                    /* catch() { ... } // from try @ 025f43c4 with catch @ 025f44e8 */
  iVar7 = System_DateTimeOffset__get_Month_30e1374(auStack_60,0);
                    /* try { // try from 025f4508 to 026f450b has its CatchHandler @ 025f4514 */
  CloudPrefsInt__Set_24e9aa8(*(long *)(*(long *)puVar3 + 0xb8) + 0x8b8,iVar7 + iVar6 * 100);
                    /* catch() { ... } // from try @ 025f4508 with catch @ 025f4514 */
                    /* try { // try from 025f451c to 026f4523 has its CatchHandler @ 025f4558 */
  CloudPrefsInt__Set_24e9aa8(*(long *)(*(long *)puVar3 + 0xb8) + 0x8d8,uVar8);
                    /* try { // try from 025f4524 to 026f453b has its CatchHandler @ 025f4274 */
  CloudPrefsInt__Set_24e9aa8(*(long *)(*(long *)puVar3 + 0xb8) + 0x8f8,0);
                    /* try { // try from 025f453c to 026f453f has its CatchHandler @ 025f4544 */
                    /* catch() { ... } // from try @ 025f453c with catch @ 025f4544 */
                    /* try { // try from 025f4548 to 026f454f has its CatchHandler @ 025f4558 */
  CloudPrefsInt__Set_24e9aa8(*(long *)(*(long *)puVar3 + 0xb8) + 0x918,0);
                    /* try { // try from 025f4550 to 026f455b has its CatchHandler @ 025f4274 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 025f451c with catch @ 025f4558
                       catch() { ... } // from try @ 025f4548 with catch @ 025f4558 */
    FUN_021f0574();
  }
                    /* try { // try from 025f4560 to 026f462f has its CatchHandler @ 025f4560
                       catch() { ... } // from try @ 025f4560 with catch @ 025f4560
                       catch() { ... } // from try @ 025f4728 with catch @ 025f4560
                       catch() { ... } // from try @ 025f4768 with catch @ 025f4560
                       catch() { ... } // from try @ 025f47b4 with catch @ 025f4560
                       catch() { ... } // from try @ 025f47d8 with catch @ 025f4560 */
  UnityEngine_Debug__Log_3bd0be4(*(undefined8 *)puVar2,0);
  return;
}

