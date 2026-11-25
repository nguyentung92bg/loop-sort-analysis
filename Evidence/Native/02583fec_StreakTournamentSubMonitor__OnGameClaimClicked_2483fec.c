/* IL2CPP: StreakTournamentSubMonitor$$OnGameClaimClicked
void StreakTournamentSubMonitor__OnGameClaimClicked (StreakTournamentSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentSubMonitor$$OnGameClaimClicked
   void StreakTournamentSubMonitor__OnGameClaimClicked (StreakTournamentSubMonitor_o* __this, const
   MethodInfo* method); */

void StreakTournamentSubMonitor__OnGameClaimClicked_2483fec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4ba1f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5478);
    bRam0000000004f4ba1f = 1;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    StreakTournament__CompleteGame_2526308(*(long *)(param_1 + 0xa0),0);
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      lVar2 = *(long *)PTR_DAT_049c5478;
      puVar3 = *(undefined8 **)(lVar2 + 0x38);
      if (puVar3 == (undefined8 *)0x0) {
        FUN_02229774(lVar2);
        puVar3 = *(undefined8 **)(lVar2 + 0x38);
      }
      uVar4 = *puVar3;
      if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar4 = System_Type__GetTypeFromHandle_310ebfc(uVar4,0);
      if ((bRam0000000004f4c1ac & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049cbfc8,uVar4,0,0);
        bRam0000000004f4c1ac = 1;
      }
      if (*(long *)(lVar1 + 0x20) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                  (*(long *)(lVar1 + 0x20),uVar4,&uStack_28,*(undefined8 *)PTR_DAT_049cbfc8);
        Monitors__Deactivate_256e214(lVar1,uStack_28,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

