/* IL2CPP: BoosterBuyMonitor$$ShowPopup
void BoosterBuyMonitor__ShowPopup (BoosterBuyMonitor_o* __this, BoosterBuyMonitor_ShowPopupArgs_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterBuyMonitor$$ShowPopup
   void BoosterBuyMonitor__ShowPopup (BoosterBuyMonitor_o* __this, BoosterBuyMonitor_ShowPopupArgs_o
   args, const MethodInfo* method); */

void BoosterBuyMonitor__ShowPopup_243ac5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4b812 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049c3ce8);
    FUN_021f03f8(PTR_DAT_049c3958);
    FUN_021f03f8(PTR_DAT_049b6118);
    FUN_021f03f8(PTR_DAT_049b4540);
    bRam0000000004f4b812 = 1;
  }
  func_0x04608650(param_1 + 0xb8,param_2,0xa8);
  thunk_FUN_021f190c(param_1 + 0xb8,0);
  puVar2 = PTR_DAT_049b6110;
  puVar1 = PTR_DAT_049b4540;
  if (*(long *)(param_1 + 0xb8) != 0) {
    plVar6 = *(long **)(*(long *)(*(long *)PTR_DAT_049b6118 + 0x20) + 0xc0);
    uVar3 = *(undefined4 *)(plVar6[1] + 0xfc);
    uVar4 = thunk_FUN_0224e54c(*(long *)(param_1 + 0xb8),*(undefined8 *)(*plVar6 + 0x80));
    func_0x04608620(&uStack_48,uVar4,uVar3);
    uVar3 = uStack_48;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = Extensions__ToLocalizedName_24e5fe8(uVar3,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x91273900,uVar4,0);
    uVar4 = Extensions__ToLocalizedDesc_24e60d4(uVar3,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x993134c1,uVar4,0);
    lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,1);
    uVar4 = System_Int32__ToString_30fbaa0(param_1 + 0xe4,0);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      *(undefined8 *)(lVar5 + 0x20) = uVar4;
      thunk_FUN_021f190c();
      StatefulUISupport_Scripts_Components_StatefulView__SetFormattedText_33519ec
                (param_1,0x8bf4b3bd,lVar5,0);
      if (*(long *)(param_1 + 0x98) != 0) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x98) + 0x20);
        uVar3 = Extensions__ToEconomyItem_24e5d5c(uVar3,0);
        puVar1 = PTR_DAT_049c3958;
        if (lVar5 != 0) {
          uStack_24 = uVar3;
          GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                    (lVar5,&uStack_24,&uStack_48,*(undefined8 *)PTR_DAT_049c2d00);
          StatefulUISupport_Scripts_Components_StatefulView__SetImage_3351a1c
                    (param_1,0x1a9a2c8b,CONCAT44(uStack_44,uStack_48),0);
          lVar5 = *(long *)puVar1;
          lVar7 = *(long *)(param_1 + 0x30);
          if (*(int *)(lVar5 + 0xe4) == 0) {
            FUN_021f0574();
            lVar5 = *(long *)puVar1;
          }
          uStack_48 = CONCAT31(uStack_48._1_3_,**(undefined1 **)(lVar5 + 0xb8));
          uVar4 = thunk_FUN_0222c66c(lVar5,&uStack_48);
          if (lVar7 != 0) {
            Monitors__Additive_object__26888e8(lVar7,uVar4,1,*(undefined8 *)PTR_DAT_049c3ce8);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

