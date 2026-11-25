/* IL2CPP: RankingMonitor$$CreatePlayerRewardElement
void RankingMonitor__CreatePlayerRewardElement (RankingMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$CreatePlayerRewardElement
   void RankingMonitor__CreatePlayerRewardElement (RankingMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, int32_t rank, const MethodInfo* method); */

void RankingMonitor__CreatePlayerRewardElement_24579f4
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4b8fc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049c4b68);
    FUN_021f03f8(PTR_DAT_049c4b70);
    FUN_021f03f8(PTR_DAT_049c4b78);
    bRam0000000004f4b8fc = 1;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x158);
    uVar2 = Leaderboard__get_TournamentId_251cbe4(*(long *)(param_1 + 0xa8),0);
    uVar3 = System_String__op_Inequality_2f7b800(uVar6,uVar2,0);
    if ((uVar3 & 1) == 0) {
      if ((*(long *)(param_1 + 0xb8) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 0x128), lVar4 != 0)) {
        uStack_48 = param_3;
        uVar1 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                          (lVar4,&uStack_48,*(undefined8 *)PTR_DAT_049c4b68);
        lVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                          (param_2,0x78d4e5eb,0);
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x20) != 0)) {
          UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(lVar4 + 0x20),uVar1 & 1,0);
          if ((uVar1 & 1) == 0) {
            return;
          }
          if ((((*(long *)(param_1 + 0xb8) != 0) &&
               (lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 0x128), lVar4 != 0)) &&
              (uStack_48 = param_3,
              lVar4 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                                (lVar4,&uStack_48,*(undefined8 *)PTR_DAT_049c4b78), lVar4 != 0)) &&
             (lVar4 = LeaderboardTournamentRewardSheet_Row__GetRewards_25619d0(lVar4,0), lVar4 != 0)
             ) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar4,0,&uStack_48,*(undefined8 *)PTR_DAT_049c4b70);
            if ((*(long *)(param_1 + 0xc0) != 0) &&
               (lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x28), lVar4 != 0)) {
              uVar2 = CONCAT44(uStack_44,uStack_48);
              uStack_24 = uStack_48;
              GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                        (lVar4,&uStack_24,&uStack_48,*(undefined8 *)PTR_DAT_049c2d00);
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                        (param_2,0xbcdc2f95,CONCAT44(uStack_44,uStack_48),0);
              if (*(long *)(param_1 + 0xc0) != 0) {
                uVar2 = Shop__FormatItemQuantity_2570348(*(long *)(param_1 + 0xc0),uVar2,0);
                StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                          (param_2,0xbcdc2f95,uVar2,0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      lVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                        (param_2,0x78d4e5eb,0);
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
        if ((bRam0000000004f581f8 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a251b8,0,0);
          bRam0000000004f581f8 = 1;
        }
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar5 = *(long *)(lVar4 + 0x10);
        if (lVar5 != 0) {
          if (pcRam0000000004f582c8 == (code *)0x0) {
            pcRam0000000004f582c8 = (code *)FUN_021f03bc(&UNK_013e08e3);
          }
                    /* WARNING: Could not recover jumptable at 0x03d1ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004f582c8)(lVar5,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

