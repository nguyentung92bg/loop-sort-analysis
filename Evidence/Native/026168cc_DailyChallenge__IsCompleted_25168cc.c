/* IL2CPP: DailyChallenge$$IsCompleted
bool DailyChallenge__IsCompleted (DailyChallenge_o* __this, int32_t day, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$IsCompleted
   bool DailyChallenge__IsCompleted (DailyChallenge_o* __this, int32_t day, const MethodInfo*
   method); */

uint DailyChallenge__IsCompleted_25168cc(undefined8 param_1,int param_2)

{
  uint uVar1;
  
                    /* catch() { ... } // from try @ 0261684c with catch @ 026168cc */
                    /* catch() { ... } // from try @ 02615c30 with catch @ 026168d0 */
                    /* catch() { ... } // from try @ 02615c08 with catch @ 026168d4 */
  uVar1 = DailyChallenge__GetCompletedDays_25168ec();
                    /* catch() { ... } // from try @ 02615c00 with catch @ 026168d8 */
                    /* catch() { ... } // from try @ 02616844 with catch @ 026168dc */
                    /* catch() { ... } // from try @ 02615bdc with catch @ 026168e0 */
                    /* catch() { ... } // from try @ 02615bac with catch @ 026168e4 */
                    /* catch() { ... } // from try @ 026159d0 with catch @ 026168e8 */
  return uVar1 >> (ulong)(param_2 - 1U & 0x1f) & 1;
}

