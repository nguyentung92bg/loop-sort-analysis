/* IL2CPP: FulfillItemsMonitor$$CreateItemElement
void FulfillItemsMonitor__CreateItemElement (FulfillItemsMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, FulfillPayout_o data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillItemsMonitor$$CreateItemElement
   void FulfillItemsMonitor__CreateItemElement (FulfillItemsMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, FulfillPayout_o data, const MethodInfo*
   method); */

void FulfillItemsMonitor__CreateItemElement_243f078
               (long param_1,undefined8 param_2,undefined4 param_3,double param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  if ((bRam0000000004f4b83d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d00);
    bRam0000000004f4b83d = 1;
  }
  if ((*(long *)(param_1 + 0x98) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x98) + 0x28), lVar2 != 0)) {
    uStack_34 = param_3;
    GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
              (lVar2,&uStack_34,&uStack_50,*(undefined8 *)PTR_DAT_049c2d00);
    uStack_68 = uStack_48;
    uStack_70 = uStack_50;
    uStack_60 = uStack_40;
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
              (param_2,0x1a9a2c8b,&uStack_70,0);
    if (*(long *)(param_1 + 0x98) != 0) {
      iVar1 = -0x80000000;
      if (param_4 != INFINITY) {
        iVar1 = (int)param_4;
      }
      uVar3 = Shop__FormatItemQuantity_257016c(*(long *)(param_1 + 0x98),param_3,iVar1,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (param_2,0x9927ed9b,uVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

