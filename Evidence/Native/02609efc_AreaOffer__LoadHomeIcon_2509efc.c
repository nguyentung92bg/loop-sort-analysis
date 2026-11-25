/* IL2CPP: AreaOffer$$LoadHomeIcon
UnityEngine_Sprite_o* AreaOffer__LoadHomeIcon (AreaOffer_o* __this, UnityEngine_AddressableAssets_AssetReferenceSprite_o* reference, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$LoadHomeIcon
   UnityEngine_Sprite_o* AreaOffer__LoadHomeIcon (AreaOffer_o* __this,
   UnityEngine_AddressableAssets_AssetReferenceSprite_o* reference, const MethodInfo* method); */

undefined8 AreaOffer__LoadHomeIcon_2509efc(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  if ((bRam0000000004f4bdc5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5448);
    FUN_021f03f8(PTR_DAT_049c5460);
    FUN_021f03f8(PTR_DAT_049bb9e0);
    FUN_021f03f8(PTR_DAT_049c5468);
    FUN_021f03f8(PTR_DAT_049c5450);
    FUN_021f03f8(PTR_DAT_049c9018);
    FUN_021f03f8(PTR_DAT_049c9020);
    bRam0000000004f4bdc5 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar2 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
  if ((uVar2 & 1) != 0) {
    uVar3 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
    puVar5 = (undefined8 *)(param_1 + 0x58);
    uVar2 = System_Object__Equals_314f8e8(uVar3,*puVar5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___IsValid_27cacc4
                        (param_1 + 0x40,*(undefined8 *)PTR_DAT_049c5468);
      if ((uVar2 & 1) != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x48);
        uVar6 = *(undefined8 *)(param_1 + 0x40);
        uVar4 = *(undefined8 *)(param_1 + 0x50);
        if (*(int *)(*(long *)PTR_DAT_049bb9e0 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uStack_40 = uVar6;
        uStack_38 = uVar7;
        uStack_30 = uVar4;
        UnityEngine_AddressableAssets_Addressables__Release___Il2CppFullySharedGenericType__2596610
                  (&uStack_40,*(undefined8 *)PTR_DAT_049c5460);
      }
      *puVar5 = uVar3;
      thunk_FUN_021f190c(puVar5,uVar3);
      if (*(int *)(*(long *)PTR_DAT_049bb9e0 + 0xe4) == 0) {
        FUN_021f0574();
      }
      UnityEngine_AddressableAssets_Addressables__LoadAssetAsync___Il2CppFullySharedGenericType__2595bbc
                (&uStack_40,uVar3,*(undefined8 *)PTR_DAT_049c5448);
      *(undefined8 *)(param_1 + 0x48) = uStack_38;
      *(undefined8 *)(param_1 + 0x40) = uStack_40;
      *(undefined8 *)(param_1 + 0x50) = uStack_30;
      thunk_FUN_021f190c(param_1 + 0x40,0);
      UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___WaitForCompletion_27ca8e8
                (param_1 + 0x40,auStack_28,*(undefined8 *)PTR_DAT_049c5450);
    }
    iVar1 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___get_Status_27cb088
                      (param_1 + 0x40,*(undefined8 *)PTR_DAT_049c9020);
    if (iVar1 == 1) {
      UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___get_Result_27caf4c
                (param_1 + 0x40,&uStack_40,*(undefined8 *)PTR_DAT_049c9018);
      return uStack_40;
    }
  }
  return 0;
}

