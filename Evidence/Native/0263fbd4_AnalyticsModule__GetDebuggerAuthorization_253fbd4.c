/* IL2CPP: AnalyticsModule$$GetDebuggerAuthorization
bool AnalyticsModule__GetDebuggerAuthorization (AnalyticsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$GetDebuggerAuthorization
   bool AnalyticsModule__GetDebuggerAuthorization (AnalyticsModule_o* __this, const MethodInfo*
   method); */

undefined8 AnalyticsModule__GetDebuggerAuthorization_253fbd4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam0000000004f4bfb4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca4d8);
    bRam0000000004f4bfb4 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
    return 0;
  }
                    /* try { // try from 0263fc08 to 0273fc0f has its CatchHandler @ 0263fe44 */
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 0263fc1c to 0273fc33 has its CatchHandler @ 0263fe4c */
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049ca4d8) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x12) * 0x10 + 0x138);
        goto LAB_0263fc70;
      }
                    /* try { // try from 0263fc34 to 0273fcb3 has its CatchHandler @ 0263f174 */
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049ca4d8,0x12);
LAB_0263fc70:
                    /* WARNING: Could not recover jumptable at 0x0263fc80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  return uVar2;
}

