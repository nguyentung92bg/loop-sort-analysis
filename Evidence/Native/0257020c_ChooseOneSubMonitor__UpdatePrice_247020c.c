/* IL2CPP: ChooseOneSubMonitor$$UpdatePrice
void ChooseOneSubMonitor__UpdatePrice (ChooseOneSubMonitor_o* __this, int32_t textRole, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ChooseOneSubMonitor$$UpdatePrice
   void ChooseOneSubMonitor__UpdatePrice (ChooseOneSubMonitor_o* __this, int32_t textRole,
   System_String_o* productId, const MethodInfo* method); */

void ChooseOneSubMonitor__UpdatePrice_247020c(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_90 [40];
  undefined8 uStack_68;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x60) == 0) {
LAB_025702ac:
    if (*(long *)(lVar1 + 0x28) == lStack_38) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    PurchasingModule__GetProductMetadata_2549880(auStack_90,*(long *)(param_1 + 0x60),param_3,0);
    uVar2 = StatefulUISupport_Scripts_Components_StatefulView__HasText_335196c(param_1,param_2,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc(param_1,param_2,0);
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x38) == 0)) goto LAB_025702ac;
      TMPro_TMP_Text__SetText_3b0f78c(*(long *)(lVar3 + 0x38),uStack_68,0);
    }
    if (*(long *)(lVar1 + 0x28) == lStack_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

