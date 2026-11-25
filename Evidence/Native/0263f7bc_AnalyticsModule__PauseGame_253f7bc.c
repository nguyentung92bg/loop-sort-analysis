/* IL2CPP: AnalyticsModule$$PauseGame
void AnalyticsModule__PauseGame (AnalyticsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$PauseGame
   void AnalyticsModule__PauseGame (AnalyticsModule_o* __this, const MethodInfo* method); */

void AnalyticsModule__PauseGame_253f7bc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 0263f7d0 to 0273f7d3 has its CatchHandler @ 0263fda4 */
  if ((bRam0000000004f4bfb0 & 1) == 0) {
                    /* try { // try from 0263f7d4 to 0273f7e3 has its CatchHandler @ 0263fda0 */
    FUN_021f03f8(PTR_DAT_049ca4d8);
                    /* try { // try from 0263f7e4 to 0273f7ef has its CatchHandler @ 0263fd9c */
    bRam0000000004f4bfb0 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 0263f800 to 0273f803 has its CatchHandler @ 0263fd6c */
                    /* try { // try from 0263f804 to 0273f81f has its CatchHandler @ 0263fd98 */
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca4d8) {
                    /* try { // try from 0263f844 to 0273f8f7 has its CatchHandler @ 0263fe00 */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
        goto LAB_0263f854;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
                    /* try { // try from 0263f824 to 0273f82f has its CatchHandler @ 0263fd94 */
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca4d8,4);
LAB_0263f854:
                    /* WARNING: Could not recover jumptable at 0x0263f864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}

