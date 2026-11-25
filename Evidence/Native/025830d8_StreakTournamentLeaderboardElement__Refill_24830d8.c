/* IL2CPP: StreakTournamentLeaderboardElement$$Refill
void StreakTournamentLeaderboardElement__Refill (StreakTournamentLeaderboardElement_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, StreakTournamentSubMonitor_o* subMonitor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentLeaderboardElement$$Refill
   void StreakTournamentLeaderboardElement__Refill (StreakTournamentLeaderboardElement_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, StreakTournamentSubMonitor_o* subMonitor,
   const MethodInfo* method); */

void StreakTournamentLeaderboardElement__Refill_24830d8
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f4ba24 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5b18);
    FUN_021f03f8(PTR_DAT_049c4b40);
    FUN_021f03f8(PTR_DAT_049c5b20);
    FUN_021f03f8(PTR_DAT_049c5b28);
    FUN_021f03f8(PTR_DAT_049c3a68);
    FUN_021f03f8(PTR_DAT_049c3a70);
    bRam0000000004f4ba24 = 1;
  }
  puVar11 = (undefined8 *)(param_1 + 0x38);
  *puVar11 = param_2;
  thunk_FUN_021f190c(puVar11,param_2);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x30),param_3);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar8 = StreakTournament__GetLeaderboard_2524aac(*(long *)(param_1 + 0x10),0);
    puVar10 = (undefined8 *)(param_1 + 0x58);
    *puVar10 = uVar8;
    thunk_FUN_021f190c(puVar10,uVar8);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x110), lVar9 != 0)) {
      iVar6 = ConstantSheetBase_object___GetInt_281c070(lVar9,0x1d,*(undefined8 *)PTR_DAT_049c5b18);
      lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                        (*puVar11,0x21c0801,0);
      if ((lVar9 != 0) &&
         ((*(long *)(lVar9 + 0x20) != 0 &&
          (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                     (*(long *)(lVar9 + 0x20),&lStack_90,*(undefined8 *)PTR_DAT_049c4b40),
          lVar9 = lStack_90, lStack_90 != 0)))) {
        *(long *)(lStack_90 + 0x20) = param_1;
        thunk_FUN_021f190c((long *)(lStack_90 + 0x20),param_1);
        *(long *)(lVar9 + 400) = param_1;
        thunk_FUN_021f190c(lVar9 + 400,param_1);
        *(int *)(lVar9 + 0x28) = iVar6;
        puVar5 = PTR_DAT_049c5b28;
        puVar4 = PTR_DAT_049c3a68;
        if (*(long *)(lVar9 + 0xc0) != 0) {
          UnityEngine_Events_UnityEventBase__RemoveAllListeners_3c3287c(*(long *)(lVar9 + 0xc0),0);
          lVar12 = *(long *)(lVar9 + 0xc0);
          uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
          UnityEngine_Events_UnityAction___Il2CppFullySharedGenericType____ctor_29e4370
                    (uVar8,param_1,*(undefined8 *)puVar5,0);
          if (lVar12 != 0) {
            UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType___AddListener_29e5738
                      (lVar12,uVar8,*(undefined8 *)PTR_DAT_049c3a70);
            if (*(long *)(param_1 + 0x10) != 0) {
              iVar7 = StreakTournament__GetMainPlayerRank_2524c58
                                (*(long *)(param_1 + 0x10),*puVar10,0);
              if (iVar6 < iVar7) {
                uVar3 = iVar6 - 1U & (int)(iVar6 - 1U) >> 0x1f;
              }
              else {
                uVar2 = iVar7 - 2;
                uVar1 = uVar2;
                if ((int)(iVar6 - 1U) <= (int)uVar2) {
                  uVar1 = iVar6 - 1U;
                }
                uVar3 = 0;
                if (-1 < (int)uVar2) {
                  uVar3 = uVar1;
                }
              }
              UnityEngine_UI_LoopScrollRectBase__RefillCells_2ebe22c(0,lVar9,uVar3,0);
              uVar8 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                                (param_2,0xa41ab296,0);
              *(undefined8 *)(param_1 + 0x48) = uVar8;
              thunk_FUN_021f190c((undefined8 *)(param_1 + 0x48),uVar8);
              if (*(long *)(param_1 + 0x58) != 0) {
                System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                          (*(long *)(param_1 + 0x58),iVar7 + -1,&lStack_90,
                           *(undefined8 *)PTR_DAT_049c5b20);
                uStack_c8 = uStack_88;
                lStack_d0 = lStack_90;
                uStack_b8 = uStack_78;
                uStack_c0 = uStack_80;
                uStack_a8 = uStack_68;
                uStack_b0 = uStack_70;
                uStack_98 = uStack_58;
                uStack_a0 = uStack_60;
                StreakTournamentLeaderboardElement__CreatePlayerElement_2485bfc
                          (param_1,*(undefined8 *)(param_1 + 0x48),&lStack_d0,iVar7 + -1);
                StreakTournamentLeaderboardElement__UpdateMainPlayerElementDelay_2485e94(param_1);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

