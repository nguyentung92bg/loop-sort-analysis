/* IL2CPP: NakamaPeriodicLeaderboardProvider$$CreateLeaderboardEntry
LeaderboardEntry_o NakamaPeriodicLeaderboardProvider__CreateLeaderboardEntry (Nakama_Custom_PeriodicLeaderboard_PeriodicLeaderboardPlayer_o* player, System_String_o* localPlayerId, System_String_o* instanceId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaPeriodicLeaderboardProvider$$CreateLeaderboardEntry
   LeaderboardEntry_o NakamaPeriodicLeaderboardProvider__CreateLeaderboardEntry
   (Nakama_Custom_PeriodicLeaderboard_PeriodicLeaderboardPlayer_o* player, System_String_o*
   localPlayerId, System_String_o* instanceId, const MethodInfo* method); */

void NakamaPeriodicLeaderboardProvider__CreateLeaderboardEntry_224d51c
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
                    /* try { // try from 0234d51c to 0244d523 has its CatchHandler @ 0234d578 */
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
                    /* try { // try from 0234d548 to 0244d54b has its CatchHandler @ 0234d564 */
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
                    /* try { // try from 0234d54c to 0244d5cb has its CatchHandler @ 0234d45c */
  if (param_2 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
                    /* try { // try from 0234d628 to 0244d62f has its CatchHandler @ 0234d698 */
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
  }
  else {
    uStack_a0 = *(undefined8 *)(param_2 + 0x18);
                    /* catch() { ... } // from try @ 0234d4bc with catch @ 0234d55c */
                    /* catch() { ... } // from try @ 0234d548 with catch @ 0234d564 */
    uStack_98 = 0;
    thunk_FUN_021f190c(&uStack_a0);
    uStack_98 = *(undefined8 *)(param_2 + 0x28);
                    /* catch() { ... } // from try @ 0234d51c with catch @ 0234d578 */
    thunk_FUN_021f190c(&uStack_98);
                    /* catch() { ... } // from try @ 0234d4e8 with catch @ 0234d590 */
    uStack_40 = uStack_98;
                    /* catch() { ... } // from try @ 0234d4c4 with catch @ 0234d5a0 */
    uStack_88 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = uStack_a0;
    uStack_50 = 0;
    uStack_90 = param_4;
    thunk_FUN_021f190c(&uStack_90,param_4);
    uStack_88 = *(undefined8 *)(param_2 + 0x10);
    thunk_FUN_021f190c((ulong)&uStack_90 | 8);
    uStack_78 = *(undefined8 *)(param_2 + 0x30);
                    /* try { // try from 0234d5cc to 0244d627 has its CatchHandler @ 0234d5cc
                       catch() { ... } // from try @ 0234d5cc with catch @ 0234d5cc
                       catch() { ... } // from try @ 0234d65c with catch @ 0234d5cc */
    uStack_80 = CONCAT44(uStack_80._4_4_,*(undefined4 *)(param_2 + 0x38));
    uVar1 = System_String__op_Equality_2f7b7fc(*(undefined8 *)(param_2 + 0x10),param_3,0);
    uStack_70 = CONCAT71(uStack_70._1_7_,uVar1) & 0xffffffffffffff01;
    uStack_60 = uStack_48;
    uStack_68 = uStack_50;
    uStack_58 = uStack_40;
    thunk_FUN_021f190c(&uStack_60,0);
    param_1[1] = uStack_88;
    *param_1 = uStack_90;
    param_1[3] = uStack_78;
    param_1[2] = uStack_80;
    param_1[5] = uStack_68;
    param_1[4] = uStack_70;
    param_1[7] = uStack_58;
    param_1[6] = uStack_60;
  }
  return;
}

