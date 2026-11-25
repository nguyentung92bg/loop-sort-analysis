/* IL2CPP: AreaOfferSubMonitor$$UpdateArt
void AreaOfferSubMonitor__UpdateArt (AreaOfferSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOfferSubMonitor$$UpdateArt
   void AreaOfferSubMonitor__UpdateArt (AreaOfferSubMonitor_o* __this, const MethodInfo* method); */

void AreaOfferSubMonitor__UpdateArt_246cabc(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_18;
  
  if ((bRam0000000004f4b987 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5448);
    FUN_021f03f8(PTR_DAT_049bb9e0);
    FUN_021f03f8(PTR_DAT_049c5450);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b987 = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    plVar1 = (long *)AreaOffer__get_Offer_2509aec(*(long *)(param_1 + 0x68),0);
    uVar2 = StatefulUISupport_Scripts_Components_StatefulView__HasImage_33519a4
                      (param_1,0x13d626de,0);
    if ((uVar2 & 1) != 0) {
      if (plVar1 == (long *)0x0) goto LAB_0256cc38;
      uVar2 = (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
      if ((uVar2 & 1) != 0) {
        uVar3 = (**(code **)(*plVar1 + 0x198))(plVar1,*(undefined8 *)(*plVar1 + 0x1a0));
        if (*(int *)(*(long *)PTR_DAT_049bb9e0 + 0xe4) == 0) {
          FUN_021f0574(*(long *)PTR_DAT_049bb9e0);
        }
        UnityEngine_AddressableAssets_Addressables__LoadAssetAsync___Il2CppFullySharedGenericType__2595bbc
                  (&uStack_38,uVar3,*(undefined8 *)PTR_DAT_049c5448);
        *(undefined8 *)(param_1 + 0x80) = uStack_30;
        *(undefined8 *)(param_1 + 0x78) = uStack_38;
        *(undefined8 *)(param_1 + 0x88) = uStack_28;
        thunk_FUN_021f190c(param_1 + 0x78,0);
        UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___WaitForCompletion_27ca8e8
                  (param_1 + 0x78,&uStack_18,*(undefined8 *)PTR_DAT_049c5450);
        if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(uStack_18,0,0);
        if ((uVar2 & 1) != 0) {
          lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                            (param_1,0x13d626de,0);
          if (lVar4 == 0) goto LAB_0256cc38;
          UnityEngine_UI_Image__set_sprite_3cee6e8(lVar4,uStack_18,0);
        }
      }
    }
    return;
  }
LAB_0256cc38:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

