/* IL2CPP: GameDebugger$$SetGreenLevel
void GameDebugger__SetGreenLevel (GameDebugger_o* __this, bool state, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameDebugger$$SetGreenLevel
   void GameDebugger__SetGreenLevel (GameDebugger_o* __this, bool state, const MethodInfo* method);
    */

void GameDebugger__SetGreenLevel_2240804(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
                    /* try { // try from 02340804 to 024408e7 has its CatchHandler @ 0234029c */
  puVar1 = PTR_DAT_049b52a8;
  if ((bRam0000000004f49b0a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5328);
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f49b0a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsBool__set_Value_3f0e7f4(param_1 + 0x38,param_2 & 1,0);
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* catch() { ... } // from try @ 023407f8 with catch @ 02340878 */
  lVar3 = *plVar6;
                    /* catch() { ... } // from try @ 023407d8 with catch @ 0234087c */
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 023403a8 with catch @ 02340894 */
                    /* catch() { ... } // from try @ 023402e0 with catch @ 02340898
                       catch() { ... } // from try @ 02340360 with catch @ 02340898 */
                    /* catch() { ... } // from try @ 023405e4 with catch @ 0234089c */
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049b5328) {
                    /* catch() { ... } // from try @ 023404cc with catch @ 023408c0 */
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_023408c8;
      }
                    /* catch() { ... } // from try @ 0234048c with catch @ 023408a0
                       catch() { ... } // from try @ 023405cc with catch @ 023408a0 */
      uVar4 = uVar4 - 1;
                    /* catch() { ... } // from try @ 02340688 with catch @ 023408a4 */
      piVar5 = piVar5 + 4;
                    /* catch() { ... } // from try @ 023406a8 with catch @ 023408a8 */
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049b5328,0);
LAB_023408c8:
                    /* catch() { ... } // from try @ 02340334 with catch @ 023408cc */
                    /* catch() { ... } // from try @ 02340308 with catch @ 023408d0 */
                    /* WARNING: Could not recover jumptable at 0x023408e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,param_2 & 1,puVar2[1]);
  return;
}

