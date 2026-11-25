/* IL2CPP: LavaQuest$$DecreasePlayerCount
LavaQuestGame_o LavaQuest__DecreasePlayerCount (LavaQuest_o* __this, LavaQuestGame_o game, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest$$DecreasePlayerCount
   LavaQuestGame_o LavaQuest__DecreasePlayerCount (LavaQuest_o* __this, LavaQuestGame_o game, const
   MethodInfo* method); */

void LavaQuest__DecreasePlayerCount_251b138(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4be41 & 1) == 0) {
                    /* try { // try from 0261b164 to 0271b16b has its CatchHandler @ 0261ba28 */
    FUN_021f03f8(PTR_DAT_049c9550);
    bRam0000000004f4be41 = 1;
  }
                    /* try { // try from 0261b174 to 0271b17f has its CatchHandler @ 0261b9f0 */
  if ((*(long *)(param_2 + 0x38) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_2 + 0x38) + 0xe8), lVar2 != 0)) {
    uStack_24 = *(undefined4 *)param_3;
    lVar2 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                      (lVar2,&uStack_24,*(undefined8 *)PTR_DAT_049c9550);
    if (lVar2 != 0) {
      iVar1 = UnityEngine_Random__Range_3c11c94
                        (*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),0);
                    /* try { // try from 0261b1b0 to 0271b1c3 has its CatchHandler @ 0261ba0c */
      if (*(int *)((long)param_3 + 4) <= iVar1) {
        iVar1 = *(int *)((long)param_3 + 4);
      }
      *(int *)((long)param_3 + 4) = iVar1;
      uVar4 = param_3[1];
      uVar3 = *param_3;
                    /* try { // try from 0261b1cc to 0271b1d3 has its CatchHandler @ 0261ba24 */
      param_1[2] = param_3[2];
      param_1[1] = uVar4;
      *param_1 = uVar3;
                    /* try { // try from 0261b1d4 to 0271b1e7 has its CatchHandler @ 0261b9e4 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

