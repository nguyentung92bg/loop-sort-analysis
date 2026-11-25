/* IL2CPP: Extensions$$ToDisplayName
System_String_o* Extensions__ToDisplayName (int32_t authType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToDisplayName
   System_String_o* Extensions__ToDisplayName (int32_t authType, const MethodInfo* method); */

undefined8 Extensions__ToDisplayName_24e7724(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uStack_14;
  
  if ((bRam0000000004f4bc9a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7cf8);
    FUN_021f03f8(PTR_DAT_049b72a0);
    FUN_021f03f8(PTR_DAT_049c7d00);
    FUN_021f03f8(PTR_DAT_049c6170);
    FUN_021f03f8(PTR_DAT_049c7d08);
    FUN_021f03f8(PTR_DAT_049b6b40);
    FUN_021f03f8(PTR_DAT_049c7d10);
    bRam0000000004f4bc9a = 1;
  }
  if (param_1 < 7) {
    return **(undefined8 **)(&UNK_0460ef20 + (ulong)param_1 * 8);
  }
  uStack_14 = param_1;
                    /* try { // try from 025e77c4 to 026e77c7 has its CatchHandler @ 025e780c */
                    /* try { // try from 025e77c8 to 026e77cb has its CatchHandler @ 025e7808 */
  uVar1 = thunk_FUN_02256840(PTR_DAT_049b4ff8);
                    /* try { // try from 025e77cc to 026e77cf has its CatchHandler @ 025e7800 */
                    /* try { // try from 025e77d0 to 026e77d3 has its CatchHandler @ 025e77f8 */
  uVar1 = thunk_FUN_0222c66c(uVar1,&uStack_14);
                    /* try { // try from 025e77d4 to 026e77d7 has its CatchHandler @ 025e77e8 */
                    /* catch() { ... } // from try @ 025e73fc with catch @ 025e77d8
                       try { // try from 025e77d8 to 026e7833 has its CatchHandler @ 025e7118 */
                    /* catch() { ... } // from try @ 025e7388 with catch @ 025e77dc */
                    /* catch() { ... } // from try @ 025e73d4 with catch @ 025e77e0 */
  thunk_FUN_02256840(PTR_DAT_049b5000);
                    /* catch() { ... } // from try @ 025e740c with catch @ 025e77e4 */
  uVar2 = thunk_FUN_0222ca34();
                    /* catch() { ... } // from try @ 025e77d4 with catch @ 025e77e8 */
                    /* catch() { ... } // from try @ 025e7358 with catch @ 025e77ec */
                    /* catch() { ... } // from try @ 025e73a0 with catch @ 025e77f0 */
                    /* catch() { ... } // from try @ 025e73bc with catch @ 025e77f4 */
  uVar3 = thunk_FUN_02256840(PTR_DAT_049b5008);
                    /* catch() { ... } // from try @ 025e77d0 with catch @ 025e77f8 */
                    /* catch() { ... } // from try @ 025e73d8 with catch @ 025e77fc */
                    /* catch() { ... } // from try @ 025e77cc with catch @ 025e7800 */
                    /* catch() { ... } // from try @ 025e736c with catch @ 025e7804 */
                    /* catch() { ... } // from try @ 025e77c8 with catch @ 025e7808 */
                    /* catch() { ... } // from try @ 025e77c4 with catch @ 025e780c */
  System_ArgumentOutOfRangeException___ctor_306a2d0(uVar2,uVar3,uVar1,0,0);
                    /* catch() { ... } // from try @ 025e72cc with catch @ 025e7810 */
                    /* catch() { ... } // from try @ 025e72ec with catch @ 025e7814 */
  uVar1 = thunk_FUN_02256840(PTR_DAT_049c7d18);
                    /* WARNING: Subroutine does not return */
  FUN_021f0564(uVar2,uVar1);
}

