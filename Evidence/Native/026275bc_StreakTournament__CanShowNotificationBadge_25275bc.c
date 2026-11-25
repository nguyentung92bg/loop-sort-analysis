/* IL2CPP: StreakTournament$$CanShowNotificationBadge
bool StreakTournament__CanShowNotificationBadge (StreakTournament_o* __this, System_String_o** text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$CanShowNotificationBadge
   bool StreakTournament__CanShowNotificationBadge (StreakTournament_o* __this, System_String_o**
   text, const MethodInfo* method); */

bool StreakTournament__CanShowNotificationBadge_25275bc(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar6;
  int aiStack_a0 [19];
  int iStack_54;
  ulong uStack_4c;
  int iStack_34;
  ulong uVar5;
  
  if ((bRam0000000004f4bea2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5b58);
    bRam0000000004f4bea2 = 1;
  }
  iStack_34 = 0;
  StreakTournament__get_Save_2524120(aiStack_a0);
  StreakTournament__get_Save_2524120(aiStack_a0);
  puVar1 = PTR_DAT_049c5b58;
  lVar3 = *(long *)(param_1 + 0x38);
  iStack_34 = 0;
  if (lVar3 != 0) {
    uVar5 = uStack_4c;
    iVar4 = 1;
    do {
      iVar6 = iVar4;
      if (*(long *)(lVar3 + 0x120) == 0) break;
      aiStack_a0[0] = iStack_54 + iVar6;
      lVar3 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (*(long *)(lVar3 + 0x120),aiStack_a0,*(undefined8 *)puVar1);
      if ((lVar3 == 0) ||
         (iVar4 = (int)uVar5, uVar5 = (ulong)(uint)(iVar4 - *(int *)(lVar3 + 0x18)),
         iVar4 < *(int *)(lVar3 + 0x18))) {
        uVar2 = System_Int32__ToString_30fbaa0(&iStack_34,0);
        *param_2 = uVar2;
        thunk_FUN_021f190c(param_2,uVar2);
        return 0 < iStack_34;
      }
      lVar3 = *(long *)(param_1 + 0x38);
      iVar4 = iVar6 + 1;
      iStack_34 = iVar6;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

