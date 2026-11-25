/* IL2CPP: AnalyticsModule$$ExitGame
void AnalyticsModule__ExitGame (AnalyticsModule_o* __this, System_Collections_Generic_Dictionary_string__object__o* customData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$ExitGame
   void AnalyticsModule__ExitGame (AnalyticsModule_o* __this,
   System_Collections_Generic_Dictionary_string__object__o* customData, const MethodInfo* method);
    */

void AnalyticsModule__ExitGame_253eec4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
                    /* try { // try from 0263eec4 to 0273eeeb has its CatchHandler @ 0263f038 */
  if ((bRam0000000004f4bfa5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca4d8);
    bRam0000000004f4bfa5 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar6;
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
                    /* try { // try from 0263ef28 to 0273ef4f has its CatchHandler @ 0263f034 */
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049ca4d8) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_0263ef64;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049ca4d8,3);
LAB_0263ef64:
                    /* try { // try from 0263ef6c to 0273ef77 has its CatchHandler @ 0263f02c */
                    /* WARNING: Could not recover jumptable at 0x0263ef7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,uVar1,param_2,puVar2[1]);
  return;
}

