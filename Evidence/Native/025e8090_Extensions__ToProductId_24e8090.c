/* IL2CPP: Extensions$$ToProductId
System_String_o* Extensions__ToProductId (int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToProductId
   System_String_o* Extensions__ToProductId (int32_t liveOps, const MethodInfo* method); */

undefined8 Extensions__ToProductId_24e8090(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iStack_14;
  
  if ((bRam0000000004f4bc9f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5a88);
    FUN_021f03f8(PTR_DAT_049c7e88);
    FUN_021f03f8(PTR_DAT_049c5598);
                    /* try { // try from 025e80d4 to 026e80f7 has its CatchHandler @ 025e7c10 */
    FUN_021f03f8(PTR_DAT_049c7e90);
    bRam0000000004f4bc9f = 1;
  }
  uVar1 = param_1 - 1;
  if ((uVar1 < 7) && ((0x55U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
                    /* try { // try from 025e80f8 to 026e80fb has its CatchHandler @ 025e8ff8 */
                    /* try { // try from 025e810c to 026e8113 has its CatchHandler @ 025e9020 */
    return **(undefined8 **)(&UNK_0460f000 + (ulong)uVar1 * 8);
  }
  iStack_14 = param_1;
  uVar2 = thunk_FUN_02256840(PTR_DAT_049c7e70);
                    /* try { // try from 025e8128 to 026e812b has its CatchHandler @ 025e8f98 */
  uVar2 = thunk_FUN_0222c66c(uVar2,&iStack_14);
                    /* try { // try from 025e8138 to 026e813f has its CatchHandler @ 025e9010 */
  uVar3 = thunk_FUN_02256840(PTR_DAT_049c7e98);
  uVar2 = System_String__Format_2f73700(uVar3,uVar2,0);
  thunk_FUN_02256840(PTR_DAT_049b4350);
  uVar3 = thunk_FUN_0222ca34();
                    /* try { // try from 025e8160 to 026e8167 has its CatchHandler @ 025e8f94 */
                    /* try { // try from 025e8168 to 026e8177 has its CatchHandler @ 025e9014 */
  System_Exception___ctor_31372a0(uVar3,uVar2,0);
  uVar2 = thunk_FUN_02256840(PTR_DAT_049c7ea0);
                    /* WARNING: Subroutine does not return */
  FUN_021f0564(uVar3,uVar2);
}

