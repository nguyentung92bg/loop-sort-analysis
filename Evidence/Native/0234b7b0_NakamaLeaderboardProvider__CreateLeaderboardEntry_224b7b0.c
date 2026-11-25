/* IL2CPP: NakamaLeaderboardProvider$$CreateLeaderboardEntry
LeaderboardEntry_o NakamaLeaderboardProvider__CreateLeaderboardEntry (Nakama_Custom_Leaderboards_LeaderboardPlayerDataRecord_o* record, System_String_o* localPlayerId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaLeaderboardProvider$$CreateLeaderboardEntry
   LeaderboardEntry_o NakamaLeaderboardProvider__CreateLeaderboardEntry
   (Nakama_Custom_Leaderboards_LeaderboardPlayerDataRecord_o* record, System_String_o*
   localPlayerId, const MethodInfo* method); */

void NakamaLeaderboardProvider__CreateLeaderboardEntry_224b7b0
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x18);
    uStack_58 = 0;
    uStack_68 = 0;
    if (lVar2 != 0) {
      uStack_60 = *(undefined8 *)(lVar2 + 0x18);
      thunk_FUN_021f190c(&uStack_60);
      uStack_58 = *(undefined8 *)(lVar2 + 0x28);
      thunk_FUN_021f190c(&uStack_58);
      uStack_b0 = *(undefined8 *)(param_2 + 0x10);
      uStack_48 = uStack_60;
      uStack_50 = uStack_68;
      uStack_40 = uStack_58;
      uStack_a8 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      thunk_FUN_021f190c(&uStack_b0);
      uStack_a8 = *(undefined8 *)(lVar2 + 0x10);
      thunk_FUN_021f190c((ulong)&uStack_b0 | 8);
      uStack_98 = *(undefined8 *)(lVar2 + 0x30);
      uStack_a0 = CONCAT44(uStack_a0._4_4_,*(undefined4 *)(lVar2 + 0x38));
      uVar1 = System_String__op_Equality_2f7b7fc(*(undefined8 *)(lVar2 + 0x10),param_3,0);
      uStack_90 = CONCAT71(uStack_90._1_7_,uVar1) & 0xffffffffffffff01;
      uStack_80 = uStack_48;
      uStack_88 = uStack_50;
      uStack_78 = uStack_40;
      thunk_FUN_021f190c(&uStack_80,0);
                    /* try { // try from 0234b8ac to 0244b94b has its CatchHandler @ 0234b8ac
                       catch() { ... } // from try @ 0234b8ac with catch @ 0234b8ac
                       catch() { ... } // from try @ 0234b9f4 with catch @ 0234b8ac
                       catch() { ... } // from try @ 0234baa4 with catch @ 0234b8ac */
      param_1[1] = uStack_a8;
      *param_1 = uStack_b0;
      param_1[3] = uStack_98;
      param_1[2] = uStack_a0;
      param_1[5] = uStack_88;
      param_1[4] = uStack_90;
      param_1[7] = uStack_78;
      param_1[6] = uStack_80;
      return;
    }
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

