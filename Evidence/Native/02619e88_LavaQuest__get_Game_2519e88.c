/* IL2CPP: LavaQuest$$get_Game
CloudPrefsT_LavaQuestGame__o LavaQuest__get_Game (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest$$get_Game
   CloudPrefsT_LavaQuestGame__o LavaQuest__get_Game (const MethodInfo* method); */

void LavaQuest__get_Game_2519e88(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
                    /* catch() { ... } // from try @ 026199e4 with catch @ 02619e88 */
  puVar1 = PTR_DAT_049b5310;
                    /* catch() { ... } // from try @ 026199d8 with catch @ 02619e8c */
                    /* catch() { ... } // from try @ 0261995c with catch @ 02619e90 */
                    /* catch() { ... } // from try @ 0261997c with catch @ 02619e94 */
  if ((bRam0000000004f4be35 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 02619eb4 to 02719eb7 has its CatchHandler @ 02619ec4 */
    bRam0000000004f4be35 = 1;
  }
  lVar2 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 02619eb4 with catch @ 02619ec4 */
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
                    /* try { // try from 02619ecc to 02719ed3 has its CatchHandler @ 02619f74 */
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(lVar2 + 0xb8);
                    /* try { // try from 02619ed4 to 02719eeb has its CatchHandler @ 02619848 */
  uVar4 = *(undefined8 *)(lVar2 + 0x630);
  uVar3 = *(undefined8 *)(lVar2 + 0x628);
  uVar6 = *(undefined8 *)(lVar2 + 0x640);
  uVar5 = *(undefined8 *)(lVar2 + 0x638);
  uVar8 = *(undefined8 *)(lVar2 + 0x650);
  uVar7 = *(undefined8 *)(lVar2 + 0x648);
  param_1[6] = *(undefined8 *)(lVar2 + 0x658);
  param_1[5] = uVar8;
  param_1[4] = uVar7;
                    /* try { // try from 02619eec to 02719f03 has its CatchHandler @ 02619f64 */
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  return;
}

