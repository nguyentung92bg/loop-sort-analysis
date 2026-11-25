/* IL2CPP: AreaOfferSubMonitor$$UpdatePrice
void AreaOfferSubMonitor__UpdatePrice (AreaOfferSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOfferSubMonitor$$UpdatePrice
   void AreaOfferSubMonitor__UpdatePrice (AreaOfferSubMonitor_o* __this, const MethodInfo* method);
    */

void AreaOfferSubMonitor__UpdatePrice_246cc3c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_80 [40];
  undefined8 uStack_58;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x48) == 0) {
LAB_0256ccd8:
    if (*(long *)(lVar1 + 0x28) == lStack_28) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    PurchasingModule__GetProductMetadata_2549880
              (auStack_80,*(long *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x70),0);
    uVar2 = StatefulUISupport_Scripts_Components_StatefulView__HasText_335196c(param_1,0x8bf4b3bd,0)
    ;
    if ((uVar2 & 1) != 0) {
      lVar3 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc
                        (param_1,0x8bf4b3bd,0);
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x38) == 0)) goto LAB_0256ccd8;
      TMPro_TMP_Text__SetText_3b0f78c(*(long *)(lVar3 + 0x38),uStack_58,0);
    }
    if (*(long *)(lVar1 + 0x28) == lStack_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

