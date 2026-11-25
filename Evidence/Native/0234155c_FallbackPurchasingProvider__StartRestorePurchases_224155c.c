/* IL2CPP: FallbackPurchasingProvider$$StartRestorePurchases
void FallbackPurchasingProvider__StartRestorePurchases (FallbackPurchasingProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FallbackPurchasingProvider$$StartRestorePurchases
   void FallbackPurchasingProvider__StartRestorePurchases (FallbackPurchasingProvider_o* __this,
   const MethodInfo* method); */

void FallbackPurchasingProvider__StartRestorePurchases_224155c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 0234155c to 024415ef has its CatchHandler @ 0234155c
                       catch(type#1 @ 00000000) { ... } // from try @ 0234155c with catch @ 0234155c
                       catch(type#1 @ 00000000) { ... } // from try @ 02341624 with catch @ 0234155c
                       catch(type#1 @ 00000000) { ... } // from try @ 023416c4 with catch @ 0234155c
                       catch(type#1 @ 00000000) { ... } // from try @ 02341714 with catch @ 0234155c
                        */
  if ((bRam0000000004f49b14 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5378);
    bRam0000000004f49b14 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049b5378) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_023415e4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049b5378,0);
LAB_023415e4:
                    /* try { // try from 023415f0 to 02441603 has its CatchHandler @ 023416e8 */
                    /* WARNING: Could not recover jumptable at 0x023415fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,1,0,puVar1[1]);
  return;
}

