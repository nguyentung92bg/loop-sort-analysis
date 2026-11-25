/* IL2CPP: SystemBase$$Dispose
void SystemBase__Dispose (SystemBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SystemBase$$Dispose
   void SystemBase__Dispose (SystemBase_o* __this, const MethodInfo* method); */

void SystemBase__Dispose_2555efc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 02655f04 to 02755f13 has its CatchHandler @ 02655f14 */
  if ((bRam0000000004f4c0a8 & 1) == 0) {
                    /* catch() { ... } // from try @ 02655e9c with catch @ 02655f14
                       catch() { ... } // from try @ 02655f04 with catch @ 02655f14 */
                    /* try { // try from 02655f18 to 02755f1b has its CatchHandler @ 02655f24 */
                    /* try { // try from 02655f1c to 02755f27 has its CatchHandler @ 02655b20 */
    FUN_021f03f8(PTR_DAT_049b3cc8);
                    /* catch() { ... } // from try @ 02655e74 with catch @ 02655f24
                       catch() { ... } // from try @ 02655f18 with catch @ 02655f24 */
    bRam0000000004f4c0a8 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049b3cc8) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_02655f90;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049b3cc8,0);
LAB_02655f90:
                    /* WARNING: Could not recover jumptable at 0x02655fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}

