/* IL2CPP: PurchasingModule$$GetStatus
int32_t PurchasingModule__GetStatus (PurchasingModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchasingModule$$GetStatus
   int32_t PurchasingModule__GetStatus (PurchasingModule_o* __this, const MethodInfo* method); */

void PurchasingModule__GetStatus_2549498(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 026494a0 to 0274952f has its CatchHandler @ 026494a0
                       catch() { ... } // from try @ 026494a0 with catch @ 026494a0
                       catch() { ... } // from try @ 02649698 with catch @ 026494a0
                       catch() { ... } // from try @ 0264979c with catch @ 026494a0
                       catch() { ... } // from try @ 02649800 with catch @ 026494a0
                       catch() { ... } // from try @ 02649868 with catch @ 026494a0 */
  if ((bRam0000000004f4c026 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca8a0);
    bRam0000000004f4c026 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca8a0) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_02649520;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca8a0,0);
LAB_02649520:
                    /* WARNING: Could not recover jumptable at 0x02649530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 02649530 to 0274953b has its CatchHandler @ 026497b4 */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}

