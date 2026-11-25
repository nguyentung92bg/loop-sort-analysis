/* IL2CPP: LeaderboardEntry$$get_HasEntry
bool LeaderboardEntry__get_HasEntry (LeaderboardEntry_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LeaderboardEntry$$get_HasEntry
   bool LeaderboardEntry__get_HasEntry (LeaderboardEntry_o __this, const MethodInfo* method); */

uint LeaderboardEntry__get_HasEntry_2545aac(long param_1)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x18) < 1) {
    uVar1 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_1 + 8),0);
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}

