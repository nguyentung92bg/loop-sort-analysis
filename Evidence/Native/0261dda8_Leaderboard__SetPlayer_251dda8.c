/* IL2CPP: Leaderboard$$SetPlayer
void Leaderboard__SetPlayer (LeaderboardSnapshot_o* snapshot, LeaderboardEntry_o entry, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$SetPlayer
   void Leaderboard__SetPlayer (LeaderboardSnapshot_o* snapshot, LeaderboardEntry_o entry, const
   MethodInfo* method); */

void Leaderboard__SetPlayer_251dda8(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4be5f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9698);
    FUN_021f03f8(PTR_DAT_049b5480);
    bRam0000000004f4be5f = 1;
  }
  puVar2 = PTR_DAT_049c9698;
  puVar1 = PTR_DAT_049b5480;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    uVar3 = LeaderboardEntry__get_Idx_2545aa0(param_2,0);
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    uStack_58 = param_2[3];
    uStack_60 = param_2[2];
                    /* try { // try from 0261de18 to 0271de7b has its CatchHandler @ 0261de18
                       catch() { ... } // from try @ 0261de18 with catch @ 0261de18
                       catch() { ... } // from try @ 0261e1c8 with catch @ 0261de18
                       catch() { ... } // from try @ 0261e250 with catch @ 0261de18
                       catch() { ... } // from try @ 0261e2d0 with catch @ 0261de18
                       catch() { ... } // from try @ 0261e338 with catch @ 0261de18 */
    uStack_48 = param_2[5];
    uStack_50 = param_2[4];
    uStack_38 = param_2[7];
    uStack_40 = param_2[6];
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    uStack_88 = uStack_48;
    uStack_90 = uStack_50;
    uStack_78 = uStack_38;
    uStack_80 = uStack_40;
    Extensions__TrySetValue___Il2CppFullySharedGenericType__25f17cc
              (uVar4,uVar3,&uStack_b0,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

