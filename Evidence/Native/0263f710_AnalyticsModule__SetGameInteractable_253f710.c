/* IL2CPP: AnalyticsModule$$SetGameInteractable
void AnalyticsModule__SetGameInteractable (AnalyticsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule$$SetGameInteractable
   void AnalyticsModule__SetGameInteractable (AnalyticsModule_o* __this, const MethodInfo* method);
    */

void AnalyticsModule__SetGameInteractable_253f710(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 0263f71c to 0273f737 has its CatchHandler @ 0263fdb8 */
  if ((bRam0000000004f4bfaf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca4d8);
    bRam0000000004f4bfaf = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* try { // try from 0263f748 to 0273f753 has its CatchHandler @ 0263fdb4 */
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
                    /* try { // try from 0263f75c to 0273f75f has its CatchHandler @ 0263fdb0 */
                    /* try { // try from 0263f760 to 0273f76f has its CatchHandler @ 0263fdac */
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca4d8) {
                    /* try { // try from 0263f7a4 to 0273f7af has its CatchHandler @ 0263fdec */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xf) * 0x10 + 0x138);
        goto LAB_0263f7a8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
                    /* try { // try from 0263f77c to 0273f79b has its CatchHandler @ 0263fdf0 */
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca4d8,0xf);
LAB_0263f7a8:
                    /* try { // try from 0263f7b0 to 0273f7c7 has its CatchHandler @ 0263fda8 */
                    /* WARNING: Could not recover jumptable at 0x0263f7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}

