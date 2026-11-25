/* IL2CPP: ShopMonitor$$<OnRewardedClaimClicked>b__45_0
void ShopMonitor___OnRewardedClaimClicked_b__45_0 (ShopMonitor_o* __this, bool watched, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$<OnRewardedClaimClicked>b__45_0
   void ShopMonitor___OnRewardedClaimClicked_b__45_0 (ShopMonitor_o* __this, bool watched, const
   MethodInfo* method); */

void ShopMonitor___OnRewardedClaimClicked_b__45_0_2462870(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined1 auStack_30 [16];
  
  if ((bRam0000000004f4b953 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049c4228);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049c50b0);
    bRam0000000004f4b953 = 1;
  }
  puVar3 = PTR_DAT_049b5fc8;
  puVar1 = PTR_DAT_049b5310;
  if ((param_2 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_049b5310 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b5fa0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_30 = TimeProvider__get_UtcNow_24f95ec(0);
  CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
            (*(long *)(*(long *)puVar1 + 0xb8) + 0x5b8,auStack_30,*(undefined8 *)puVar2);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
            (*(undefined8 *)(param_1 + 0x120),0x8ac0028d,0);
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0xa8) + 0x30), lVar5 != 0)) {
    iVar4 = ConstantSheetBase_object___GetInt_281c070(lVar5,0x15,*(undefined8 *)PTR_DAT_049c4228);
    if (*(long *)(param_1 + 200) != 0) {
      FulfillModule__FulfillRewardedPayout_2543594
                (*(long *)(param_1 + 200),1,(double)iVar4,*(undefined8 *)PTR_DAT_049c50b0,0);
      ShopMonitor__HandleFulfill_2462634(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

