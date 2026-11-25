/* IL2CPP: WinStandartVariant$$CreateRewardElement
void WinStandartVariant__CreateRewardElement (WinStandartVariant_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, RewardInfo_o data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinStandartVariant$$CreateRewardElement
   void WinStandartVariant__CreateRewardElement (WinStandartVariant_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, RewardInfo_o data, const MethodInfo* method);
    */

void WinStandartVariant__CreateRewardElement_2494b9c
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  uStack_38 = param_3;
  if ((bRam0000000004f4ba92 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d00);
    bRam0000000004f4ba92 = 1;
  }
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x68) + 0x28), lVar1 != 0)) {
    uStack_24 = (undefined4)param_3;
    GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
              (lVar1,&uStack_24,&uStack_50,*(undefined8 *)PTR_DAT_049c2d00);
    uStack_68 = uStack_48;
    uStack_70 = uStack_50;
    uStack_60 = uStack_40;
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
              (param_2,0xbcdc2f95,&uStack_70,0);
    uVar2 = System_Int32__ToString_30fbaa0((ulong)&uStack_38 | 4,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (param_2,0x9927ed9b,uVar2,0);
    if ((int)uStack_38 == 1) {
      *(undefined8 *)(param_1 + 200) = param_2;
      thunk_FUN_021f190c((undefined8 *)(param_1 + 200),param_2);
      *(undefined4 *)(param_1 + 0xe0) = uStack_38._4_4_;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

