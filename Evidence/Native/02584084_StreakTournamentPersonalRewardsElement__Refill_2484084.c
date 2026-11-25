/* IL2CPP: StreakTournamentPersonalRewardsElement$$Refill
void StreakTournamentPersonalRewardsElement__Refill (StreakTournamentPersonalRewardsElement_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, StreakTournamentSubMonitor_o* subMonitor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentPersonalRewardsElement$$Refill
   void StreakTournamentPersonalRewardsElement__Refill (StreakTournamentPersonalRewardsElement_o*
   __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, StreakTournamentSubMonitor_o*
   subMonitor, const MethodInfo* method); */

void StreakTournamentPersonalRewardsElement__Refill_2484084
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lStack_38;
  
  if ((bRam0000000004f4ba2e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5b50);
    FUN_021f03f8(PTR_DAT_049c4b40);
    FUN_021f03f8(PTR_DAT_049c5b70);
    FUN_021f03f8(PTR_DAT_049c3a68);
    FUN_021f03f8(PTR_DAT_049c3a70);
    bRam0000000004f4ba2e = 1;
  }
  puVar9 = (undefined8 *)(param_1 + 0x28);
  *puVar9 = param_2;
  thunk_FUN_021f190c(puVar9,param_2);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x30),param_3);
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x120), lVar7 != 0)) {
    iVar5 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                      (lVar7,*(undefined8 *)PTR_DAT_049c5b50);
    lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                      (*puVar9,0x21c0801,0);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                (*(long *)(lVar7 + 0x20),&lStack_38,*(undefined8 *)PTR_DAT_049c4b40);
      if (lStack_38 != 0) {
        *(long *)(lStack_38 + 0x20) = param_1;
        thunk_FUN_021f190c((long *)(lStack_38 + 0x20),param_1);
        *(long *)(lStack_38 + 400) = param_1;
        thunk_FUN_021f190c(lStack_38 + 400,param_1);
        *(int *)(lStack_38 + 0x28) = iVar5;
        puVar4 = PTR_DAT_049c5b70;
        puVar3 = PTR_DAT_049c3a68;
        if (*(long *)(lStack_38 + 0xc0) != 0) {
          UnityEngine_Events_UnityEventBase__RemoveAllListeners_3c3287c
                    (*(long *)(lStack_38 + 0xc0),0);
          lVar7 = *(long *)(lStack_38 + 0xc0);
          uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
          UnityEngine_Events_UnityAction___Il2CppFullySharedGenericType____ctor_29e4370
                    (uVar8,param_1,*(undefined8 *)puVar4,0);
          if (lVar7 != 0) {
            UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType___AddListener_29e5738
                      (lVar7,uVar8,*(undefined8 *)PTR_DAT_049c3a70);
            if (*(long *)(param_1 + 0x10) != 0) {
              uVar6 = StreakTournament__get_Personal_2524224(*(long *)(param_1 + 0x10),0);
              iVar2 = iVar5 + ~uVar6 + -2;
              iVar1 = iVar2;
              if (iVar5 + -1 <= iVar2) {
                iVar1 = iVar5 + -1;
              }
              iVar5 = 0;
              if (-1 < iVar2) {
                iVar5 = iVar1;
              }
              UnityEngine_UI_LoopScrollRectBase__RefillCells_2ebe22c(0,lStack_38,iVar5,0);
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

