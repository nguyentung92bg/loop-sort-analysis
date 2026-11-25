/* IL2CPP: ConsoleMethods$$SetCoinRushWinCount
void ConsoleMethods__SetCoinRushWinCount (int32_t winCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$SetCoinRushWinCount
   void ConsoleMethods__SetCoinRushWinCount (int32_t winCount, const MethodInfo* method); */

void ConsoleMethods__SetCoinRushWinCount_24f3200(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
                    /* try { // try from 025f3200 to 026f3203 has its CatchHandler @ 025f3244 */
  puVar2 = PTR_DAT_049b5310;
                    /* try { // try from 025f3204 to 026f3237 has its CatchHandler @ 025f2ed4 */
  if ((bRam0000000004f4bd05 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 025f3238 to 026f323b has its CatchHandler @ 025f323c */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025f3238 with catch @ 025f323c
                       try { // try from 025f323c to 026f325f has its CatchHandler @ 025f2ed4 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025f3180 with catch @ 025f3240
                        */
    FUN_021f03f8(PTR_DAT_049c8298);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025f31a0 with catch @ 025f3244
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025f3200 with catch @ 025f3244
                        */
    bRam0000000004f4bd05 = 1;
  }
  puVar1 = PTR_DAT_049b3c58;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* try { // try from 025f3260 to 026f3263 has its CatchHandler @ 025f327c */
    FUN_021f0574();
                    /* try { // try from 025f3264 to 026f327f has its CatchHandler @ 025f2ed4 */
    lVar3 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_049c8298;
                    /* catch() { ... } // from try @ 025f3260 with catch @ 025f327c */
  CloudPrefsInt__Set_24e9aa8(*(long *)(lVar3 + 0xb8) + 0x2b8,param_1);
                    /* try { // try from 025f3280 to 026f3287 has its CatchHandler @ 025f3290 */
                    /* try { // try from 025f3288 to 026f3293 has its CatchHandler @ 025f2ed4 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b3c58;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025f3280 with catch @ 025f3290
                        */
  uVar4 = *(undefined8 *)puVar2;
                    /* try { // try from 025f3294 to 026f335b has its CatchHandler @ 025f3294
                       catch() { ... } // from try @ 025f3294 with catch @ 025f3294
                       catch() { ... } // from try @ 025f33c8 with catch @ 025f3294
                       catch() { ... } // from try @ 025f33e0 with catch @ 025f3294
                       catch() { ... } // from try @ 025f340c with catch @ 025f3294
                       catch() { ... } // from try @ 025f3438 with catch @ 025f3294
                       catch() { ... } // from try @ 025f3464 with catch @ 025f3294 */
  uVar6 = 0;
  if ((bRam0000000004f56b81 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58,0);
    FUN_021f03f8(PTR_DAT_049ceff8);
    bRam0000000004f56b81 = 1;
    uVar6 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
    uVar6 = extraout_x1_00;
  }
  if (cRam0000000004f4c367 == '\0') {
    FUN_021f03f8(PTR_DAT_049b3c58,uVar6);
    cRam0000000004f4c367 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  plVar9 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar3 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049ceff8) {
        puVar5 = (undefined8 *)(lVar3 + (long)(*piVar8 + 5) * 0x10 + 0x138);
        goto LAB_03cd0ccc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049ceff8,5);
LAB_03cd0ccc:
                    /* WARNING: Could not recover jumptable at 0x03cd0ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar9,3,uVar4,puVar5[1]);
  return;
}

