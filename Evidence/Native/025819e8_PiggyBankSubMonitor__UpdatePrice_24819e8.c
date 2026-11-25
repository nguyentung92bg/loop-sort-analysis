/* IL2CPP: PiggyBankSubMonitor$$UpdatePrice
void PiggyBankSubMonitor__UpdatePrice (PiggyBankSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PiggyBankSubMonitor$$UpdatePrice
   void PiggyBankSubMonitor__UpdatePrice (PiggyBankSubMonitor_o* __this, const MethodInfo* method);
    */

void PiggyBankSubMonitor__UpdatePrice_24819e8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_80 [40];
  undefined8 uStack_58;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4ba09 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5a88);
    bRam0000000004f4ba09 = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    PurchasingModule__GetProductMetadata_2549880
              (auStack_80,*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_049c5a88,0);
    lVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc(param_1,0x8bf4b3bd,0)
    ;
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x38) != 0)) {
      TMPro_TMP_Text__SetText_3b0f78c(*(long *)(lVar2 + 0x38),uStack_58,0);
      if (*(long *)(lVar1 + 0x28) == lStack_28) {
        return;
      }
      goto LAB_02581aa8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_02581aa8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

