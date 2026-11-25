/* IL2CPP: Carrier$$SetComplete
void Carrier__SetComplete (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$SetComplete
   void Carrier__SetComplete (Carrier_o* __this, const MethodInfo* method); */

void Carrier__SetComplete_240882c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long lStack_18;
  
                    /* try { // try from 02508838 to 02608883 has its CatchHandler @ 02508c50 */
  if ((bRam0000000004f4b6cd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2890);
    bRam0000000004f4b6cd = 1;
  }
  lStack_18 = 0;
  if (*(char *)(param_1 + 0x1b1) == '\0') {
    *(undefined1 *)(param_1 + 0x1b1) = 1;
    Carrier__SetCompleteTransferDelay_2408904(param_1);
    plVar6 = *(long **)(param_1 + 0x180);
    lStack_18 = param_1;
                    /* try { // try from 02508884 to 0260889f has its CatchHandler @ 0250863c */
    thunk_FUN_021f190c(&lStack_18,param_1);
    lVar1 = lStack_18;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 025088a0 to 026088a3 has its CatchHandler @ 02508c18 */
                    /* try { // try from 025088a4 to 026088af has its CatchHandler @ 02508c44 */
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 025088b8 to 026088c3 has its CatchHandler @ 02508c20 */
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c2890) {
                    /* try { // try from 025088d8 to 026088e7 has its CatchHandler @ 02508c00 */
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_025088e4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
                    /* try { // try from 025088d0 to 026088d7 has its CatchHandler @ 02508bf8 */
    puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049c2890,0);
LAB_025088e4:
                    /* try { // try from 025088ec to 026088f3 has its CatchHandler @ 02508c14 */
    (*(code *)*puVar2)(plVar6,lVar1,puVar2[1]);
  }
  return;
}

