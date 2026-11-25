/* IL2CPP: AnalyticsModule$$CustomEvent
void AnalyticsModule__CustomEvent (AnalyticsModule_o* __this, System_String_o* eventName, System_Collections_Generic_Dictionary_string__object__o* customData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$CustomEvent
   void AnalyticsModule__CustomEvent (AnalyticsModule_o* __this, System_String_o* eventName,
   System_Collections_Generic_Dictionary_string__object__o* customData, const MethodInfo* method);
    */

void AnalyticsModule__CustomEvent_253ef80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 0263ef80 to 0273ef83 has its CatchHandler @ 0263f030 */
                    /* try { // try from 0263ef84 to 0273f00f has its CatchHandler @ 0263ece8 */
  if ((bRam0000000004f4bfa6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca4d8);
    bRam0000000004f4bfa6 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 0263f010 to 0273f013 has its CatchHandler @ 0263f028 */
                    /* try { // try from 0263f014 to 0273f017 has its CatchHandler @ 0263f024 */
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca4d8) {
                    /* try { // try from 0263f018 to 0273f053 has its CatchHandler @ 0263ece8 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0263f014 with catch @ 0263f024
                        */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 6) * 0x10 + 0x138);
        goto LAB_0263f028;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca4d8,6);
LAB_0263f028:
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0263f010 with catch @ 0263f028
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0263ef6c with catch @ 0263f02c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0263ef80 with catch @ 0263f030
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0263ef28 with catch @ 0263f034
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0263eec4 with catch @ 0263f038
                        */
                    /* WARNING: Could not recover jumptable at 0x0263f044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,param_3,puVar1[1]);
  return;
}

