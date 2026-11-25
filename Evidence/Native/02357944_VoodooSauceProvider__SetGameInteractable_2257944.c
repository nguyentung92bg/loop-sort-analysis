/* IL2CPP: VoodooSauceProvider$$SetGameInteractable
void VoodooSauceProvider__SetGameInteractable (VoodooSauceProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$SetGameInteractable
   void VoodooSauceProvider__SetGameInteractable (VoodooSauceProvider_o* __this, const MethodInfo*
   method); */

void VoodooSauceProvider__SetGameInteractable_2257944(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_049b5670;
  if ((bRam0000000004f49bc7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5670);
    bRam0000000004f49bc7 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b62a0;
  if ((bRam0000000004f5f4ca & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b62a0);
    bRam0000000004f5f4ca = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b62a0;
  if ((bRam0000000004f60137 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b62a0);
    FUN_021f03f8(PTR_DAT_04a6c408);
    bRam0000000004f60137 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  lVar6 = *(long *)(lVar2 + 0xb8);
  if (*(char *)(lVar6 + 0x19a) != '\0') {
    return;
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
  }
  if (*(long *)(lVar6 + 0x3c0) != 0) {
    Voodoo_Sauce_LoadingTime_LoadingTimerManager__StopGlobalLoadingTimer_4430bd4
              (*(long *)(lVar6 + 0x3c0),0);
    lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x3c0);
    if (lVar2 != 0) {
      lVar2 = Voodoo_Sauce_LoadingTime_LoadingTimerManager__GetRealGlobalLoadingTimeDuration_4430a38
                        (lVar2,0);
      if (lVar2 < 0) {
        return;
      }
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar1;
      }
      lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x2a0);
      if (lVar9 == 0) {
LAB_04598834:
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_021f0574();
          lVar6 = *(long *)puVar1;
        }
        *(undefined1 *)(*(long *)(lVar6 + 0xb8) + 0x19a) = 1;
        return;
      }
      lVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_04a6c408);
      Voodoo_Sauce_Internal_Analytics_LoadingTimeAnalyticsInfo___ctor_4368cf8(lVar6,0);
      if (lVar6 != 0) {
        lVar3 = *(long *)puVar1;
        *(long *)(lVar6 + 0x10) = lVar2;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          FUN_021f0574();
          lVar3 = *(long *)puVar1;
        }
        lVar2 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x3c0);
        if (lVar2 != 0) {
          uVar4 = Voodoo_Sauce_LoadingTime_LoadingTimerManager__GetGlobalLoadingTimeStartTimestamp_4430944
                            (lVar2,0);
          lVar2 = *(long *)puVar1;
          *(undefined8 *)(lVar6 + 0x18) = uVar4;
          lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x3c0);
          if (lVar2 != 0) {
            uVar4 = Voodoo_Sauce_LoadingTime_LoadingTimerManager__GetGlobalLoadingTimeEndTimestamp_4430a10
                              (lVar2,0);
            lVar2 = *(long *)puVar1;
            *(undefined8 *)(lVar6 + 0x20) = uVar4;
            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x3c0);
            if (lVar2 != 0) {
              uVar4 = Voodoo_Sauce_LoadingTime_LoadingTimerManager__GetSessionId_4430930(lVar2,0);
              uVar7 = *(undefined8 *)(lVar9 + 0x40);
              pcVar8 = *(code **)(lVar9 + 0x18);
              uVar5 = *(undefined8 *)(lVar9 + 0x28);
              *(undefined8 *)(lVar6 + 0x28) = uVar4;
              (*pcVar8)(uVar7,lVar6,uVar5);
              lVar6 = *(long *)puVar1;
              goto LAB_04598834;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

