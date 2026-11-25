/* IL2CPP: DailyChallenge$$GetMonthOrder
System_Int32_array* DailyChallenge__GetMonthOrder (int32_t count, int32_t month, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$GetMonthOrder
   System_Int32_array* DailyChallenge__GetMonthOrder (int32_t count, int32_t month, const
   MethodInfo* method); */

void DailyChallenge__GetMonthOrder_251673c(uint param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  
  puVar5 = PTR_DAT_049b4e08;
  if ((bRam0000000004f4be1c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4e08);
    bRam0000000004f4be1c = 1;
  }
  lVar6 = FUN_021f04e4(*(undefined8 *)puVar5,param_1);
                    /* try { // try from 02616784 to 0271678f has its CatchHandler @ 02616868 */
  if (0 < (int)param_1) {
    if (lVar6 == 0) goto LAB_02616870;
    uVar10 = *(uint *)(lVar6 + 0x18);
    uVar7 = 0;
                    /* try { // try from 0261679c to 027167ab has its CatchHandler @ 02616864 */
    do {
      if (uVar10 == uVar7) goto LAB_0261686c;
      *(int *)(lVar6 + 0x20 + uVar7 * 4) = (int)uVar7;
      uVar7 = uVar7 + 1;
                    /* try { // try from 026167b0 to 027167b3 has its CatchHandler @ 02616a18 */
                    /* try { // try from 026167b4 to 027167b7 has its CatchHandler @ 02616a3c */
    } while (param_1 != uVar7);
  }
                    /* try { // try from 026167b8 to 027167bb has its CatchHandler @ 02616a14 */
                    /* try { // try from 026167bc to 027167bf has its CatchHandler @ 02616a10 */
  if (0 < (int)(param_1 - 1)) {
                    /* try { // try from 026167c0 to 027167c3 has its CatchHandler @ 02616a38 */
    if (lVar6 == 0) {
LAB_02616870:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02615fc4 with catch @ 02616870 */
      FUN_021f06a0();
    }
                    /* try { // try from 026167c4 to 027167c7 has its CatchHandler @ 02616a0c */
                    /* try { // try from 026167c8 to 027167cb has its CatchHandler @ 02616a00 */
                    /* try { // try from 026167cc to 027167cf has its CatchHandler @ 026169fc */
                    /* try { // try from 026167d0 to 027167d3 has its CatchHandler @ 026169f0 */
                    /* try { // try from 026167d4 to 027167d7 has its CatchHandler @ 026169ec */
    uVar8 = *(ulong *)(lVar6 + 0x18);
                    /* try { // try from 026167d8 to 027167db has its CatchHandler @ 026169e8 */
    uVar9 = (ulong)param_2;
                    /* try { // try from 026167dc to 027167df has its CatchHandler @ 026169e0 */
                    /* try { // try from 026167e0 to 027167e3 has its CatchHandler @ 026169d8 */
                    /* try { // try from 026167e4 to 027167e7 has its CatchHandler @ 02616a24 */
                    /* try { // try from 026167e8 to 027167eb has its CatchHandler @ 0261695c */
                    /* try { // try from 026167ec to 027167ef has its CatchHandler @ 02616958 */
                    /* try { // try from 026167f0 to 027167f3 has its CatchHandler @ 02616948 */
                    /* try { // try from 026167f4 to 027167f7 has its CatchHandler @ 026169ac */
    lVar2 = lVar6 + 0x20;
                    /* try { // try from 026167f8 to 027167fb has its CatchHandler @ 026169a8 */
                    /* try { // try from 02616800 to 02716803 has its CatchHandler @ 02616940 */
                    /* try { // try from 02616804 to 02716807 has its CatchHandler @ 0261693c */
    uVar7 = (ulong)(param_1 - 1);
                    /* try { // try from 026167fc to 027167ff has its CatchHandler @ 02616944 */
    do {
      uVar9 = uVar9 + 0x9e3779b97f4a7c15;
                    /* try { // try from 02616808 to 0271680b has its CatchHandler @ 02616a1c */
                    /* try { // try from 0261680c to 0271680f has its CatchHandler @ 02616a20 */
      if ((uVar8 & 0xffffffff) <= uVar7) {
LAB_0261686c:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02615fdc with catch @ 0261686c */
        FUN_021f06a8();
      }
                    /* try { // try from 02616810 to 02716813 has its CatchHandler @ 02616988 */
                    /* try { // try from 02616814 to 02716817 has its CatchHandler @ 02616928 */
                    /* try { // try from 02616818 to 0271681b has its CatchHandler @ 02616984 */
      uVar11 = (uVar9 ^ uVar9 >> 0x1e) * -0x40a7b892e31b1a47;
                    /* try { // try from 0261681c to 0271681f has its CatchHandler @ 0261697c */
                    /* try { // try from 02616820 to 02716823 has its CatchHandler @ 026169a0 */
      uVar11 = (uVar11 ^ uVar11 >> 0x1b) * -0x6b2fb644ecceee15;
                    /* try { // try from 02616824 to 02716827 has its CatchHandler @ 02616978 */
      uVar11 = uVar11 ^ uVar11 >> 0x1f;
      iVar4 = 0;
                    /* try { // try from 02616828 to 0271682b has its CatchHandler @ 0261699c */
      if ((long)(int)param_1 != 0) {
        iVar4 = (int)(uVar11 / (ulong)(long)(int)param_1);
      }
                    /* try { // try from 0261682c to 0271682f has its CatchHandler @ 02616974 */
      uVar10 = (int)uVar11 - iVar4 * param_1;
                    /* try { // try from 02616830 to 02716833 has its CatchHandler @ 02616970 */
                    /* try { // try from 02616834 to 02716837 has its CatchHandler @ 0261696c */
      if ((uint)uVar8 <= uVar10) goto LAB_0261686c;
                    /* try { // try from 02616838 to 0271683b has its CatchHandler @ 02616998 */
                    /* try { // try from 0261683c to 0271683f has its CatchHandler @ 02616994 */
      uVar3 = *(undefined4 *)(lVar2 + uVar7 * 4);
                    /* try { // try from 02616840 to 02716843 has its CatchHandler @ 026168f4 */
      param_1 = param_1 - 1;
                    /* try { // try from 02616844 to 02716847 has its CatchHandler @ 026168dc */
                    /* try { // try from 02616848 to 0271684b has its CatchHandler @ 02616954 */
                    /* try { // try from 0261684c to 0271684f has its CatchHandler @ 026168cc */
      *(undefined4 *)(lVar2 + uVar7 * 4) = *(undefined4 *)(lVar6 + (long)(int)uVar10 * 4 + 0x20);
                    /* try { // try from 02616850 to 02716853 has its CatchHandler @ 026168c8 */
      uVar11 = uVar7 - 1;
                    /* try { // try from 02616854 to 02716857 has its CatchHandler @ 026168c4 */
      *(undefined4 *)(lVar2 + (long)(int)uVar10 * 4) = uVar3;
                    /* try { // try from 02616858 to 0271685b has its CatchHandler @ 026168bc */
      bVar1 = 0 < (long)uVar7;
      uVar7 = uVar11;
    } while (uVar11 != 0 && bVar1);
  }
                    /* try { // try from 0261685c to 0271685f has its CatchHandler @ 02616950 */
                    /* try { // try from 02616860 to 02716863 has its CatchHandler @ 026168b4 */
                    /* catch() { ... } // from try @ 0261679c with catch @ 02616864 */
                    /* catch() { ... } // from try @ 02616784 with catch @ 02616868 */
  return;
}

