/* IL2CPP: ShopMonitor$$TrackShopOpen
void ShopMonitor__TrackShopOpen (ShopMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$TrackShopOpen
   void ShopMonitor__TrackShopOpen (ShopMonitor_o* __this, const MethodInfo* method); */

void ShopMonitor__TrackShopOpen_24605d4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_049b5310;
  if ((bRam0000000004f4b94e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c4fe8);
    FUN_021f03f8(PTR_DAT_049c4ff0);
    FUN_021f03f8(PTR_DAT_049c4ff8);
    FUN_021f03f8(PTR_DAT_049c4e98);
    FUN_021f03f8(PTR_DAT_049bf4e8);
    FUN_021f03f8(PTR_DAT_049c5000);
    FUN_021f03f8(PTR_DAT_049c47c0);
    FUN_021f03f8(PTR_DAT_049c5008);
    bRam0000000004f4b94e = 1;
  }
  lVar9 = *(long *)puVar3;
  uStack_58 = 0;
  uStack_50 = 0;
  auStack_68._0_8_ = 0;
  auStack_68._8_8_ = 0;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
    lVar9 = *(long *)puVar3;
  }
  lVar9 = *(long *)(lVar9 + 0xb8);
  iVar8 = CloudPrefsInt__get_Value_24e99c0(lVar9 + 0x348,0);
  CloudPrefsInt__set_Value_24e9a2c(lVar9 + 0x348,iVar8 + 1,0);
  if (*(long *)(param_1 + 0xd8) != 0) {
    AnalyticsModule__ShopOpen_253f664(*(long *)(param_1 + 0xd8),0);
    uVar10 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_1 + 0x118),0);
    puVar7 = PTR_DAT_049c5008;
    puVar6 = PTR_DAT_049c5000;
    puVar2 = (undefined8 *)PTR_DAT_049c4ff0;
    puVar5 = PTR_DAT_049c4e98;
    puVar4 = PTR_DAT_049c47c0;
    puVar3 = PTR_DAT_049bf4e8;
    if (*(long *)(param_1 + 0xb8) != 0) {
      puVar1 = (undefined8 *)PTR_DAT_049c4ff8;
      if ((uVar10 & 1) == 0) {
        puVar1 = (undefined8 *)(param_1 + 0x118);
      }
      uVar11 = *puVar1;
      UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_ActiveStateName_29a7fdc
                (*(long *)(param_1 + 0xb8),&uStack_48,*(undefined8 *)PTR_DAT_049c4fe8);
      uVar10 = System_String__op_Equality_2f7b7fc(uStack_48,*(undefined8 *)puVar5,0);
      if ((uVar10 & 1) == 0) {
        puVar2 = (undefined8 *)puVar4;
      }
      uVar12 = *puVar2;
      AnalyticsCustomEvent___ctor_253ff58(&uStack_58,*(undefined8 *)puVar7,0);
      auStack_68 = AnalyticsCustomEvent__AddCustom_25410d0
                             (&uStack_58,*(undefined8 *)puVar3,uVar11,0);
      auVar13 = AnalyticsCustomEvent__AddCustom_25410d0(auStack_68,*(undefined8 *)puVar6,uVar12,0);
      auStack_68 = auVar13;
      auVar13 = AnalyticsCustomEvent__AddGameLevel_253ffe8(auStack_68,0);
      auStack_68 = auVar13;
      auVar13 = AnalyticsCustomEvent__AddDaysSinceInstall_25400b4(auStack_68,0);
      auStack_68 = auVar13;
      auVar13 = AnalyticsCustomEvent__AddGameCoinBalance_2540228(auStack_68,0);
      auStack_68 = auVar13;
      AnalyticsCustomEvent__SendEvent_2540338(auStack_68,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

