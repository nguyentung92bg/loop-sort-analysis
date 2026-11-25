/* IL2CPP: DailyChallenge$$ConsumeProgressFrom
int32_t DailyChallenge__ConsumeProgressFrom (DailyChallenge_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$ConsumeProgressFrom
   int32_t DailyChallenge__ConsumeProgressFrom (DailyChallenge_o* __this, const MethodInfo* method);
    */

int DailyChallenge__ConsumeProgressFrom_2515e38(long param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  
  iVar3 = *(int *)(param_1 + 0x5c);
  if (iVar3 < 0) {
    uVar2 = DailyChallenge__GetCompletedDays_25168ec();
                    /* try { // try from 02615e4c to 02715e57 has its CatchHandler @ 02616950 */
    cVar4 = POPCOUNT((char)((uint)uVar2 >> 0x10));
    cVar5 = POPCOUNT((char)((uint)uVar2 >> 0x18));
    uVar1 = NEON_uaddlv((ulong)CONCAT13(cVar5,CONCAT12(cVar4,CONCAT11(POPCOUNT((char)((uint)uVar2 >>
                                                                                     8)),
                                                                      POPCOUNT((char)uVar2)))),1);
    iVar3 = CONCAT13(cVar5,CONCAT12(cVar4,uVar1));
  }
                    /* try { // try from 02615e5c to 02715e63 has its CatchHandler @ 026168b8 */
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  return iVar3;
}

