/* IL2CPP: AreaOfferSubMonitor$$OnDestroy
void AreaOfferSubMonitor__OnDestroy (AreaOfferSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOfferSubMonitor$$OnDestroy
   void AreaOfferSubMonitor__OnDestroy (AreaOfferSubMonitor_o* __this, const MethodInfo* method); */

void AreaOfferSubMonitor__OnDestroy_246d128(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar2 = PTR_DAT_049c5438;
  puVar1 = PTR_DAT_049c2f50;
  if ((bRam0000000004f4b986 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049c5460);
    FUN_021f03f8(PTR_DAT_049bb9e0);
    FUN_021f03f8(PTR_DAT_049c5438);
    FUN_021f03f8(PTR_DAT_049c5468);
    bRam0000000004f4b986 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar3,param_1,*(undefined8 *)puVar2,0);
  puVar1 = PTR_DAT_049c5468;
  if (lVar5 != 0) {
    PurchasingModule__RemovePurchaseListener_254a4b0(lVar5,uVar6,uVar3,0);
    uVar4 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___IsValid_27cacc4
                      (param_1 + 0x78,*(undefined8 *)puVar1);
    if ((uVar4 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x80);
      uVar6 = *(undefined8 *)(param_1 + 0x78);
      uVar3 = *(undefined8 *)(param_1 + 0x88);
      if (*(int *)(*(long *)PTR_DAT_049bb9e0 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uStack_50 = uVar6;
      uStack_48 = uVar7;
      uStack_40 = uVar3;
      UnityEngine_AddressableAssets_Addressables__Release___Il2CppFullySharedGenericType__2596610
                (&uStack_50,*(undefined8 *)PTR_DAT_049c5460);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

