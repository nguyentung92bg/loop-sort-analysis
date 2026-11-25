/* IL2CPP: PurchasingModule$$StartRestorePurchases
void PurchasingModule__StartRestorePurchases (PurchasingModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchasingModule$$StartRestorePurchases
   void PurchasingModule__StartRestorePurchases (PurchasingModule_o* __this, const MethodInfo*
   method); */

void PurchasingModule__StartRestorePurchases_254a10c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000004f4c029 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca900);
    FUN_021f03f8(PTR_DAT_049ca8a0);
    bRam0000000004f4c029 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca900) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0264a1a0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca900,0);
LAB_0264a1a0:
    (*(code *)*puVar1)(plVar5,0,puVar1[1]);
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca8a0) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
            goto LAB_0264a210;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca8a0,2);
LAB_0264a210:
                    /* WARNING: Could not recover jumptable at 0x0264a220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(plVar5,puVar1[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

