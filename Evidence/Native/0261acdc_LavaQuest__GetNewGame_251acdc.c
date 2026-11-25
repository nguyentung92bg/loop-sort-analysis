/* IL2CPP: LavaQuest$$GetNewGame
LavaQuestGame_o LavaQuest__GetNewGame (LavaQuest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LavaQuest$$GetNewGame
   LavaQuestGame_o LavaQuest__GetNewGame (LavaQuest_o* __this, const MethodInfo* method); */

void LavaQuest__GetNewGame_251acdc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  
                    /* try { // try from 0261acdc to 0271ace3 has its CatchHandler @ 0261b948 */
                    /* try { // try from 0261acec to 0271acff has its CatchHandler @ 0261b944 */
  if ((bRam0000000004f4be3e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9530);
                    /* try { // try from 0261ad04 to 0271ad17 has its CatchHandler @ 0261b93c */
    bRam0000000004f4be3e = 1;
  }
  if ((*(long *)(param_2 + 0x38) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_2 + 0x38) + 0xf0), lVar5 != 0)) {
                    /* try { // try from 0261ad20 to 0271ad2b has its CatchHandler @ 0261b938 */
    uVar3 = ConstantSheetBase_object___GetInt_281c070(lVar5,0x17,*(undefined8 *)PTR_DAT_049c9530);
                    /* try { // try from 0261ad40 to 0271ad43 has its CatchHandler @ 0261b8f0 */
    uVar4 = UnityEngine_Random__Range_3c11c94(0x80000000,0x7fffffff,0);
                    /* try { // try from 0261ad44 to 0271ad5f has its CatchHandler @ 0261b934 */
    *(undefined4 *)(param_1 + 1) = uVar4;
    uVar2 = _UNK_013a8388;
    uVar1 = _UNK_013a7c88;
    *(undefined4 *)((long)param_1 + 0x14) = uVar3;
    *param_1 = uVar2;
    *(undefined8 *)((long)param_1 + 0xc) = uVar1;
                    /* try { // try from 0261ad64 to 0271ad6f has its CatchHandler @ 0261b930 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

