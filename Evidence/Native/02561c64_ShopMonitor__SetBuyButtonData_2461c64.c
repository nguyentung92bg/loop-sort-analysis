/* IL2CPP: ShopMonitor$$SetBuyButtonData
void ShopMonitor__SetBuyButtonData (ShopMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, ProductMetadata_o metadata, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$SetBuyButtonData
   void ShopMonitor__SetBuyButtonData (ShopMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, ProductMetadata_o metadata, const MethodInfo*
   method); */

void ShopMonitor__SetBuyButtonData_2461c64(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  lVar1 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                    (param_2,0x8bf4b3bd,0);
  if ((lVar1 != 0) && (plVar2 = *(long **)(lVar1 + 0x38), plVar2 != (long *)0x0)) {
    lVar1 = *(long *)(param_3 + 0x28);
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(lVar1 + 0x10);
    }
    TMPro_TMP_Text__PopulateTextBackingArray_3b0eb4c(plVar2,lVar1,0,uVar3);
    plVar2[0x1b] = lVar1;
    thunk_FUN_021f190c(plVar2 + 0x1b,lVar1);
    *(undefined4 *)(plVar2 + 0x88) = 3;
    TMPro_TMP_Text__PopulateTextProcessingArray_3b0e114(plVar2);
    *(undefined1 *)(plVar2 + 0x76) = 1;
    (**(code **)(*plVar2 + 0x2f8))(plVar2,*(undefined8 *)(*plVar2 + 0x300));
                    /* WARNING: Could not recover jumptable at 0x03c0f810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

