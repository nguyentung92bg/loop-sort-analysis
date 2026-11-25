/* IL2CPP: AnalyticsModule$$UseBooster
void AnalyticsModule__UseBooster (AnalyticsModule_o* __this, int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$UseBooster
   void AnalyticsModule__UseBooster (AnalyticsModule_o* __this, int32_t boosterType, const
   MethodInfo* method); */

void AnalyticsModule__UseBooster_253f4fc(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000004f4bfac & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca4d8);
    bRam0000000004f4bfac = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* try { // try from 0263f538 to 0273f55f has its CatchHandler @ 0263fdfc */
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca4d8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xc) * 0x10 + 0x138);
        goto LAB_0263f598;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
                    /* try { // try from 0263f574 to 0273f593 has its CatchHandler @ 0263fdf8 */
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca4d8,0xc);
LAB_0263f598:
                    /* try { // try from 0263f5a4 to 0273f5af has its CatchHandler @ 0263fd7c */
                    /* WARNING: Could not recover jumptable at 0x0263f5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}

