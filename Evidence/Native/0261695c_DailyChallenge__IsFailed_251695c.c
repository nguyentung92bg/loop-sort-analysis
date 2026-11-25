/* IL2CPP: DailyChallenge$$IsFailed
bool DailyChallenge__IsFailed (DailyChallenge_o* __this, int32_t day, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$IsFailed
   bool DailyChallenge__IsFailed (DailyChallenge_o* __this, int32_t day, const MethodInfo* method);
    */

bool DailyChallenge__IsFailed_251695c(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* catch() { ... } // from try @ 026167e8 with catch @ 0261695c */
                    /* catch() { ... } // from try @ 02615f20 with catch @ 02616960
                       catch() { ... } // from try @ 02616000 with catch @ 02616960 */
                    /* catch() { ... } // from try @ 02615c4c with catch @ 02616964
                       catch() { ... } // from try @ 02615d28 with catch @ 02616964 */
                    /* catch() { ... } // from try @ 026157cc with catch @ 02616968 */
                    /* catch() { ... } // from try @ 026157b4 with catch @ 0261696c
                       catch() { ... } // from try @ 02616834 with catch @ 0261696c */
                    /* catch() { ... } // from try @ 0261579c with catch @ 02616970
                       catch() { ... } // from try @ 02616830 with catch @ 02616970 */
                    /* catch() { ... } // from try @ 02615770 with catch @ 02616974
                       catch() { ... } // from try @ 0261682c with catch @ 02616974 */
  if ((bRam0000000004f4be1d & 1) == 0) {
                    /* catch() { ... } // from try @ 0261573c with catch @ 02616978
                       catch() { ... } // from try @ 02616824 with catch @ 02616978 */
                    /* catch() { ... } // from try @ 02615704 with catch @ 0261697c
                       catch() { ... } // from try @ 0261681c with catch @ 0261697c */
                    /* catch() { ... } // from try @ 026156e0 with catch @ 02616980 */
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* catch() { ... } // from try @ 026156bc with catch @ 02616984
                       catch() { ... } // from try @ 02616818 with catch @ 02616984 */
                    /* catch() { ... } // from try @ 0261568c with catch @ 02616988
                       catch() { ... } // from try @ 02616810 with catch @ 02616988 */
    bRam0000000004f4be1d = 1;
  }
                    /* catch() { ... } // from try @ 026159ec with catch @ 0261698c */
  uVar4 = DailyChallenge__GetCompletedDays_25168ec();
  puVar2 = PTR_DAT_049b5310;
                    /* catch() { ... } // from try @ 02615de4 with catch @ 02616990 */
                    /* catch() { ... } // from try @ 0261583c with catch @ 02616994
                       catch() { ... } // from try @ 0261683c with catch @ 02616994 */
                    /* catch() { ... } // from try @ 02615804 with catch @ 02616998
                       catch() { ... } // from try @ 02616838 with catch @ 02616998 */
  uVar1 = 1 << (ulong)(param_2 - 1U & 0x1f);
                    /* catch() { ... } // from try @ 02615750 with catch @ 0261699c
                       catch() { ... } // from try @ 02616828 with catch @ 0261699c */
                    /* catch() { ... } // from try @ 02615718 with catch @ 026169a0
                       catch() { ... } // from try @ 02616820 with catch @ 026169a0 */
  if ((uVar4 & uVar1) == 0) {
                    /* catch() { ... } // from try @ 026160a8 with catch @ 026169ac
                       catch() { ... } // from try @ 026167f4 with catch @ 026169ac */
                    /* catch() { ... } // from try @ 02616210 with catch @ 026169b0 */
                    /* catch() { ... } // from try @ 026161e8 with catch @ 026169b4 */
    lVar5 = *(long *)PTR_DAT_049b5310;
                    /* catch() { ... } // from try @ 026161e0 with catch @ 026169b8 */
                    /* catch() { ... } // from try @ 026161bc with catch @ 026169bc */
    if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02616194 with catch @ 026169c0 */
      FUN_021f0574();
                    /* catch() { ... } // from try @ 02616554 with catch @ 026169c4 */
      lVar5 = *(long *)puVar2;
    }
                    /* catch() { ... } // from try @ 0261652c with catch @ 026169c8 */
    lVar5 = *(long *)(lVar5 + 0xb8);
                    /* catch() { ... } // from try @ 0261651c with catch @ 026169cc */
                    /* catch() { ... } // from try @ 026164cc with catch @ 026169d0 */
    uStack_38 = *(undefined8 *)(lVar5 + 0x920);
    uStack_40 = *(undefined8 *)(lVar5 + 0x918);
                    /* catch() { ... } // from try @ 026164a8 with catch @ 026169d4 */
    uStack_28 = *(undefined8 *)(lVar5 + 0x930);
    uStack_30 = *(undefined8 *)(lVar5 + 0x928);
                    /* catch() { ... } // from try @ 026167e0 with catch @ 026169d8 */
                    /* catch() { ... } // from try @ 02616490 with catch @ 026169dc */
    uVar4 = DailyChallenge__GetMonthValue_2515f40(&uStack_40);
                    /* catch() { ... } // from try @ 026167dc with catch @ 026169e0 */
    bVar3 = (uVar4 & uVar1) != 0;
                    /* catch() { ... } // from try @ 02616478 with catch @ 026169e4 */
  }
  else {
                    /* catch() { ... } // from try @ 02615658 with catch @ 026169a4 */
    bVar3 = false;
                    /* catch() { ... } // from try @ 026160c4 with catch @ 026169a8
                       catch() { ... } // from try @ 026167f8 with catch @ 026169a8 */
  }
                    /* catch() { ... } // from try @ 026167d8 with catch @ 026169e8 */
                    /* catch() { ... } // from try @ 026167d4 with catch @ 026169ec */
                    /* catch() { ... } // from try @ 026167d0 with catch @ 026169f0 */
                    /* catch() { ... } // from try @ 02616454 with catch @ 026169f4 */
  return bVar3;
}

