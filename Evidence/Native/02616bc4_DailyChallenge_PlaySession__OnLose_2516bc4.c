/* IL2CPP: DailyChallenge.PlaySession$$OnLose
void DailyChallenge_PlaySession__OnLose (DailyChallenge_PlaySession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02615a08) */
/* WARNING: Removing unreachable block (ram,0x02615a28) */
/* WARNING: Removing unreachable block (ram,0x02615af0) */
/* WARNING: Removing unreachable block (ram,0x02615b30) */
/* IL2CPP: DailyChallenge.PlaySession$$OnLose
   void DailyChallenge_PlaySession__OnLose (DailyChallenge_PlaySession_o* __this, const MethodInfo*
   method); */

void DailyChallenge_PlaySession__OnLose_2516bc4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if (lVar1 != 0) {
    if ((bRam0000000004f4be14 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049b3c20);
      FUN_021f03f8(PTR_DAT_049c2ce0);
      FUN_021f03f8(PTR_DAT_049c2ce8);
      FUN_021f03f8(PTR_DAT_049c7d60);
      bRam0000000004f4be14 = 1;
    }
    *(undefined1 *)(lVar1 + 0x58) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

