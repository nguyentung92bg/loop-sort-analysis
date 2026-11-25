/* IL2CPP: ConsoleMethods$$UpdateStreakTournamentPersonal
void ConsoleMethods__UpdateStreakTournamentPersonal (int32_t currentToken, int32_t previousToken, int32_t milestone, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$UpdateStreakTournamentPersonal
   void ConsoleMethods__UpdateStreakTournamentPersonal (int32_t currentToken, int32_t previousToken,
   int32_t milestone, const MethodInfo* method); */

void ConsoleMethods__UpdateStreakTournamentPersonal_24f3ebc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_188 [76];
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 uStack_130;
  undefined2 uStack_12f;
  undefined1 uStack_12d;
  undefined4 uStack_12c;
  undefined1 auStack_128 [89];
  undefined2 uStack_cf;
  undefined1 uStack_cd;
  undefined4 uStack_cc;
  undefined2 uStack_c4;
  undefined1 uStack_c2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long lStack_68;
  
  puVar3 = PTR_DAT_049b5310;
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 025f3efc to 026f3f07 has its CatchHandler @ 025f41d0 */
  if ((bRam0000000004f4bd10 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8348);
    FUN_021f03f8(PTR_DAT_049c8350);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c8360);
    bRam0000000004f4bd10 = 1;
  }
  puVar5 = PTR_DAT_049c8350;
  puVar4 = PTR_DAT_049c8348;
  puVar2 = PTR_DAT_049b3c58;
                    /* try { // try from 025f3f5c to 026f3f63 has its CatchHandler @ 025f4208 */
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  lVar7 = *(long *)puVar3;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
                    /* try { // try from 025f3f7c to 026f3fc7 has its CatchHandler @ 025f420c */
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_c4 = 0;
  uStack_c2 = 0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
    lVar7 = *(long *)puVar3;
  }
  puVar6 = PTR_DAT_049c8360;
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar7 + 0xb8) + 0x6d0,auStack_128,*(undefined8 *)puVar4);
  func_0x04608620(&uStack_c0,auStack_128,0x4c);
                    /* try { // try from 025f3fc8 to 026f3fdb has its CatchHandler @ 025f3dc8 */
                    /* try { // try from 025f3fdc to 026f3feb has its CatchHandler @ 025f4200 */
  lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
  uStack_c4 = uStack_cf;
  uStack_c2 = uStack_cd;
  func_0x04608620(auStack_188,&uStack_c0,0x4c);
                    /* try { // try from 025f3ff4 to 026f400f has its CatchHandler @ 025f41ec */
  uStack_130 = 0;
                    /* try { // try from 025f4010 to 026f401b has its CatchHandler @ 025f41f0 */
  uStack_12f = uStack_c4;
  uStack_12d = uStack_c2;
  uStack_12c = uStack_cc;
  uStack_13c = param_3;
  uStack_138 = param_2;
  uStack_134 = param_1;
                    /* try { // try from 025f401c to 026f4027 has its CatchHandler @ 025f41fc */
  CloudPrefsT___Il2CppFullySharedGenericStructType___set_Value_28023e4
            (lVar7 + 0x6d0,auStack_188,*(undefined8 *)puVar5);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 025f4034 to 026f403b has its CatchHandler @ 025f41f8 */
  UnityEngine_Debug__Log_3bd0be4(*(undefined8 *)puVar6,0);
  if (*(long *)(lVar1 + 0x28) == lStack_68) {
                    /* try { // try from 025f404c to 026f404f has its CatchHandler @ 025f41e0 */
                    /* try { // try from 025f4068 to 026f4077 has its CatchHandler @ 025f41dc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

