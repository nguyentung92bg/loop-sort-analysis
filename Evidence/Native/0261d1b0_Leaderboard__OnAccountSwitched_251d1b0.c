/* IL2CPP: Leaderboard$$OnAccountSwitched
void Leaderboard__OnAccountSwitched (Leaderboard_o* __this, AccountSwitchedMessage_o message, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$OnAccountSwitched
   void Leaderboard__OnAccountSwitched (Leaderboard_o* __this, AccountSwitchedMessage_o message,
   const MethodInfo* method); */

void Leaderboard__OnAccountSwitched_251d1b0(long param_1)

{
  undefined8 *puVar1;
  
  if ((bRam0000000004f4be53 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9608);
    bRam0000000004f4be53 = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
              (*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_049c9608);
    puVar1 = (undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                   ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

