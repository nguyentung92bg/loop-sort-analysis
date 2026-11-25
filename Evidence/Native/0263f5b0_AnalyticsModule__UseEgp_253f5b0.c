/* IL2CPP: AnalyticsModule$$UseEgp
void AnalyticsModule__UseEgp (AnalyticsModule_o* __this, AnalyticsEgpArgs_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$UseEgp
   void AnalyticsModule__UseEgp (AnalyticsModule_o* __this, AnalyticsEgpArgs_o args, const
   MethodInfo* method); */

void AnalyticsModule__UseEgp_253f5b0(long param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000004f4bfad & 1) == 0) {
                    /* try { // try from 0263f5d4 to 0273f5df has its CatchHandler @ 0263fdf4 */
    FUN_021f03f8(PTR_DAT_049ca4d8);
    bRam0000000004f4bfad = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* try { // try from 0263f5ec to 0273f5f7 has its CatchHandler @ 0263fdd4 */
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
                    /* try { // try from 0263f600 to 0273f607 has its CatchHandler @ 0263fdcc */
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca4d8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xd) * 0x10 + 0x138);
        goto LAB_0263f64c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
                    /* try { // try from 0263f61c to 0273f627 has its CatchHandler @ 0263fd78 */
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca4d8,0xd);
LAB_0263f64c:
                    /* WARNING: Could not recover jumptable at 0x0263f660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}

