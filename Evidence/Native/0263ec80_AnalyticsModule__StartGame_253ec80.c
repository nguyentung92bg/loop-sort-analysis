/* IL2CPP: AnalyticsModule$$StartGame
void AnalyticsModule__StartGame (AnalyticsModule_o* __this, int32_t levelNumber, System_Collections_Generic_Dictionary_string__object__o* customData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$StartGame
   void AnalyticsModule__StartGame (AnalyticsModule_o* __this, int32_t levelNumber,
   System_Collections_Generic_Dictionary_string__object__o* customData, const MethodInfo* method);
    */

void AnalyticsModule__StartGame_253ec80(long param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000004f4bfa2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca4d8);
    bRam0000000004f4bfa2 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  *(int *)(param_1 + 0x58) = param_2 + 1;
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* try { // try from 0263ece8 to 0273eec3 has its CatchHandler @ 0263ece8
                       catch() { ... } // from try @ 0263ece8 with catch @ 0263ece8
                       catch() { ... } // from try @ 0263ef84 with catch @ 0263ece8
                       catch() { ... } // from try @ 0263f018 with catch @ 0263ece8
                       catch() { ... } // from try @ 0263f06c with catch @ 0263ece8 */
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca4d8) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0263ed2c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca4d8,0);
LAB_0263ed2c:
                    /* WARNING: Could not recover jumptable at 0x0263ed48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2 + 1,param_3,puVar1[1]);
  return;
}

