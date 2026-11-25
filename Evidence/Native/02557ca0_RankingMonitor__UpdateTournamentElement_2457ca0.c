/* IL2CPP: RankingMonitor$$UpdateTournamentElement
void RankingMonitor__UpdateTournamentElement (RankingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$UpdateTournamentElement
   void RankingMonitor__UpdateTournamentElement (RankingMonitor_o* __this, const MethodInfo*
   method); */

void RankingMonitor__UpdateTournamentElement_2457ca0(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4b8fd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049c4b68);
    FUN_021f03f8(PTR_DAT_049c4b70);
    FUN_021f03f8(PTR_DAT_049c4b78);
    FUN_021f03f8(PTR_DAT_049c4b88);
    bRam0000000004f4b8fd = 1;
  }
  lVar4 = *(long *)(param_1 + 0xa8);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x70) != 3) {
      return;
    }
    func_0x04608620(&uStack_f0,lVar4 + 0x68,0x80);
    uStack_68 = uStack_c8;
    uStack_70 = uStack_d0;
    uStack_58 = uStack_b8;
    uStack_60 = uStack_c0;
    uVar3 = uStack_60;
    uStack_48 = uStack_a8;
    uStack_50 = uStack_b0;
    uStack_38 = uStack_98;
    uStack_40 = uStack_a0;
    if ((*(long *)(param_1 + 0xb8) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 0x128), lVar4 != 0)) {
      uStack_60._0_4_ = (undefined4)uStack_c0;
      uStack_24 = (undefined4)uStack_60;
      uStack_60 = uVar3;
      uVar2 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                        (lVar4,&uStack_24,*(undefined8 *)PTR_DAT_049c4b68);
      uVar1 = 0x39cfe44a;
      if ((uVar2 & 1) == 0) {
        uVar1 = 0x99f4e89d;
      }
      StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,uVar1,0);
      uVar3 = System_Int32__ToString_30fbaa0(&uStack_60,0);
      uVar3 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c4b88,uVar3,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0xa59d7244,uVar3,0)
      ;
      if ((uVar2 & 1) == 0) {
        return;
      }
      if ((*(long *)(param_1 + 0xb8) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 0x128), lVar4 != 0)) {
        uStack_f0 = (undefined4)uStack_60;
        lVar4 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                          (lVar4,&uStack_f0,*(undefined8 *)PTR_DAT_049c4b78);
        if ((lVar4 != 0) &&
           (lVar4 = LeaderboardTournamentRewardSheet_Row__GetRewards_25619d0(lVar4,0), lVar4 != 0))
        {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar4,0,&uStack_f0,*(undefined8 *)PTR_DAT_049c4b70);
          if ((*(long *)(param_1 + 0xc0) != 0) &&
             (lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x28), lVar4 != 0)) {
            uVar3 = CONCAT44(uStack_ec,uStack_f0);
            uStack_24 = uStack_f0;
            GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                      (lVar4,&uStack_24,&uStack_f0,*(undefined8 *)PTR_DAT_049c2d00);
            StatefulUISupport_Scripts_Components_StatefulView__SetImage_3351a1c
                      (param_1,0x78d4e5eb,CONCAT44(uStack_ec,uStack_f0),0);
            if (*(long *)(param_1 + 0xc0) != 0) {
              uVar3 = Shop__FormatItemQuantity_2570348(*(long *)(param_1 + 0xc0),uVar3,0);
              StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                        (param_1,0x78d4e5eb,uVar3,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

