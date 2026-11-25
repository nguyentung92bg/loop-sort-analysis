/* IL2CPP: ShopMonitor$$OnRestoreClicked
void ShopMonitor__OnRestoreClicked (ShopMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$OnRestoreClicked
   void ShopMonitor__OnRestoreClicked (ShopMonitor_o* __this, const MethodInfo* method); */

void ShopMonitor__OnRestoreClicked_2462494(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c029 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca900,0);
    FUN_021f03f8(PTR_DAT_049ca8a0);
    bRam0000000004f4c029 = 1;
  }
  plVar6 = *(long **)(lVar1 + 0x48);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049ca900) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0264a1a0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049ca900,0);
LAB_0264a1a0:
    (*(code *)*puVar2)(plVar6,0,puVar2[1]);
    plVar6 = *(long **)(lVar1 + 0x10);
    if (plVar6 != (long *)0x0) {
      lVar1 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049ca8a0) {
            puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_0264a210;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049ca8a0,2);
LAB_0264a210:
                    /* WARNING: Could not recover jumptable at 0x0264a220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar6,puVar2[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

