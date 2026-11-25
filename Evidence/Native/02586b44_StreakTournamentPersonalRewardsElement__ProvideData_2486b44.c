/* IL2CPP: StreakTournamentPersonalRewardsElement$$ProvideData
void StreakTournamentPersonalRewardsElement__ProvideData (StreakTournamentPersonalRewardsElement_o* __this, UnityEngine_Transform_o* t, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentPersonalRewardsElement$$ProvideData
   void StreakTournamentPersonalRewardsElement__ProvideData
   (StreakTournamentPersonalRewardsElement_o* __this, UnityEngine_Transform_o* t, int32_t idx, const
   MethodInfo* method); */

void StreakTournamentPersonalRewardsElement__ProvideData_2486b44
               (long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iStack_34;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4ba2f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5b50);
    FUN_021f03f8(PTR_DAT_049c3b08);
    FUN_021f03f8(PTR_DAT_049c5b58);
    bRam0000000004f4ba2f = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x120), lVar2 != 0)) {
    iVar1 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                      (lVar2,*(undefined8 *)PTR_DAT_049c5b50);
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x120);
      if (lVar2 != 0) {
        iStack_34 = iVar1 - param_3;
        lVar2 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                          (lVar2,&iStack_34,*(undefined8 *)PTR_DAT_049c5b58);
        if (lVar2 != 0) {
          if (param_2 == 0) goto LAB_02586c34;
          UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                    (param_2,&uStack_28,*(undefined8 *)PTR_DAT_049c3b08);
          StreakTournamentPersonalRewardsElement__CreateMilestoneElement_2486c38
                    (param_1,uStack_28,lVar2,iVar1 - param_3);
        }
        return;
      }
    }
  }
LAB_02586c34:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

