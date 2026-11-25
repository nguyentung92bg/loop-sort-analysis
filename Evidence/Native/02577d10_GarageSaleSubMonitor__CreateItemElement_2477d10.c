/* IL2CPP: GarageSaleSubMonitor$$CreateItemElement
void GarageSaleSubMonitor__CreateItemElement (GarageSaleSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, RewardInfo_o data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GarageSaleSubMonitor$$CreateItemElement
   void GarageSaleSubMonitor__CreateItemElement (GarageSaleSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, RewardInfo_o data, const MethodInfo* method);
    */

void GarageSaleSubMonitor__CreateItemElement_2477d10(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 auStack_48 [3];
  undefined4 uStack_24;
  
  if ((bRam0000000004f4b9d5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d00);
    bRam0000000004f4b9d5 = 1;
  }
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 0x28), lVar1 != 0)) {
    uStack_24 = (undefined4)param_3;
    GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
              (lVar1,&uStack_24,auStack_48,*(undefined8 *)PTR_DAT_049c2d00);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
              (param_2,0x1a9a2c8b,auStack_48[0],0);
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar2 = Shop__FormatItemQuantity_257016c
                        (*(long *)(param_1 + 0x50),param_3 & 0xffffffff,param_3 >> 0x20,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (param_2,0x9927ed9b,uVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

