/* IL2CPP: AnalyticsModule$$ShopOpen
void AnalyticsModule__ShopOpen (AnalyticsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$ShopOpen
   void AnalyticsModule__ShopOpen (AnalyticsModule_o* __this, const MethodInfo* method); */

void AnalyticsModule__ShopOpen_253f664(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 0263f674 to 0273f67f has its CatchHandler @ 0263fdc8 */
  if ((bRam0000000004f4bfae & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca4d8);
    bRam0000000004f4bfae = 1;
  }
                    /* try { // try from 0263f690 to 0273f6a7 has its CatchHandler @ 0263fdc4 */
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* try { // try from 0263f6b8 to 0273f6bb has its CatchHandler @ 0263fdc0 */
                    /* try { // try from 0263f6bc to 0273f6cb has its CatchHandler @ 0263fdbc */
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca4d8) {
                    /* try { // try from 0263f6f8 to 0273f703 has its CatchHandler @ 0263fd70 */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xe) * 0x10 + 0x138);
        goto LAB_0263f6fc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
                    /* try { // try from 0263f6d8 to 0273f6db has its CatchHandler @ 0263fd74 */
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca4d8,0xe);
LAB_0263f6fc:
                    /* WARNING: Could not recover jumptable at 0x0263f70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}

