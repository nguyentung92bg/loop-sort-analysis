/* IL2CPP: Leaderboard$$SetLocalPlayer
void Leaderboard__SetLocalPlayer (LeaderboardSnapshot_o* snapshot, LeaderboardEntry_o entry, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$SetLocalPlayer
   void Leaderboard__SetLocalPlayer (LeaderboardSnapshot_o* snapshot, LeaderboardEntry_o entry,
   const MethodInfo* method); */

void Leaderboard__SetLocalPlayer_251dd48(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1 != 0) {
    uVar3 = param_2[4];
    uVar2 = param_2[7];
    uVar1 = param_2[6];
    uVar5 = param_2[1];
    uVar4 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    *(undefined8 *)(param_1 + 0x48) = param_2[5];
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    *(undefined8 *)(param_1 + 0x50) = uVar1;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x20),0);
    uStack_58 = param_2[1];
    uStack_60 = *param_2;
    uStack_48 = param_2[3];
    uStack_50 = param_2[2];
    uStack_38 = param_2[5];
    uStack_40 = param_2[4];
    uStack_28 = param_2[7];
    uStack_30 = param_2[6];
    Leaderboard__SetPlayer_251dda8(param_1,&uStack_60);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

