/* IL2CPP: DailyChallenge$$GetCompletedDayCount
int32_t DailyChallenge__GetCompletedDayCount (DailyChallenge_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$GetCompletedDayCount
   int32_t DailyChallenge__GetCompletedDayCount (DailyChallenge_o* __this, const MethodInfo*
   method); */

undefined4 DailyChallenge__GetCompletedDayCount_25155b0(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  
  uVar2 = DailyChallenge__GetCompletedDays_25168ec();
  cVar3 = POPCOUNT((char)((uint)uVar2 >> 0x10));
  cVar4 = POPCOUNT((char)((uint)uVar2 >> 0x18));
  uVar1 = NEON_uaddlv((ulong)CONCAT13(cVar4,CONCAT12(cVar3,CONCAT11(POPCOUNT((char)((uint)uVar2 >> 8
                                                                                   )),
                                                                    POPCOUNT((char)uVar2)))),1);
  return CONCAT13(cVar4,CONCAT12(cVar3,uVar1));
}

