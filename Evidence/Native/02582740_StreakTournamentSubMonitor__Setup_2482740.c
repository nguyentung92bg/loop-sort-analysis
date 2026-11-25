/* IL2CPP: StreakTournamentSubMonitor$$Setup
void StreakTournamentSubMonitor__Setup (StreakTournamentSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentSubMonitor$$Setup
   void StreakTournamentSubMonitor__Setup (StreakTournamentSubMonitor_o* __this, const MethodInfo*
   method); */

void StreakTournamentSubMonitor__Setup_2482740(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lStack_38;
  
  puVar2 = PTR_DAT_049c5ac8;
  puVar1 = PTR_DAT_049c5ac0;
  if ((bRam0000000004f4ba12 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5a50);
    FUN_021f03f8(PTR_DAT_049b6750);
    FUN_021f03f8(PTR_DAT_049c5ac0);
    FUN_021f03f8(PTR_DAT_049c5ac8);
    bRam0000000004f4ba12 = 1;
  }
  SubMonitorBase__Setup_2481334(param_1);
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar3,0);
  plVar8 = (long *)(param_1 + 0xf8);
  *plVar8 = lVar3;
  thunk_FUN_021f190c(plVar8,lVar3);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Object___ctor_3142338(uVar4,0);
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  thunk_FUN_021f190c(param_1 + 0x100,uVar4);
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                 (*(long *)(param_1 + 0x28),&lStack_38,*(undefined8 *)PTR_DAT_049c5a50),
      puVar1 = PTR_DAT_049b6750, lStack_38 != 0)) &&
     (plVar9 = *(long **)(lStack_38 + 0x50), plVar9 != (long *)0x0)) {
    lVar3 = *plVar9;
    lVar10 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b6750) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_02582884;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b6750,7);
LAB_02582884:
    (*(code *)*puVar5)(plVar9,lVar10,puVar5[1]);
    plVar9 = *(long **)(lStack_38 + 0x50);
    if (plVar9 != (long *)0x0) {
      lVar3 = *plVar9;
      uVar4 = *(undefined8 *)(param_1 + 0x100);
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 7) * 0x10 + 0x138);
            goto LAB_025828f0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)puVar1,7);
LAB_025828f0:
      (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
      uVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                        (param_1,0x8ac5d054,0);
      puVar5 = (undefined8 *)(param_1 + 0xd0);
      *puVar5 = uVar4;
      thunk_FUN_021f190c(puVar5,uVar4);
      uVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                        (param_1,0x517db21a,0);
      *(undefined8 *)(param_1 + 0xd8) = uVar4;
      thunk_FUN_021f190c();
      uVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                        (param_1,0xa66c44de,0);
      *(undefined8 *)(param_1 + 0xe0) = uVar4;
      thunk_FUN_021f190c();
      uVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                        (param_1,0x21d9d25e,0);
      *(undefined8 *)(param_1 + 0xe8) = uVar4;
      thunk_FUN_021f190c();
      uVar4 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                        (*puVar5,0x21d9d25e,0);
      *(undefined8 *)(param_1 + 0xf0) = uVar4;
      thunk_FUN_021f190c((undefined8 *)(param_1 + 0xf0),uVar4);
      if (*(long *)(param_1 + 0xa0) != 0) {
        StreakTournament__UpdateGame_2525628(*(long *)(param_1 + 0xa0),0);
        StreakTournamentSubMonitor__SetupButtons_2482ae0(param_1);
        StreakTournamentSubMonitor__UpdateMultiplierView_2482d88
                  (param_1,*(undefined8 *)(param_1 + 0xd0));
        StreakTournamentSubMonitor__UpdatePersonalBarView_248302c
                  (param_1,*(undefined8 *)(param_1 + 0xf0));
        StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x5f10e269,0);
        if (*(long *)(param_1 + 0xa0) != 0) {
          uVar6 = StreakTournament__CanClaim_2524f94(*(long *)(param_1 + 0xa0),0);
          if ((uVar6 & 1) == 0) {
            if (*(long *)(param_1 + 0xb0) != 0) {
              uVar6 = LiveOpsModule__IsJoined_2546cc0(*(long *)(param_1 + 0xb0),0x16,0);
              if ((uVar6 & 1) == 0) {
                StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944
                          (param_1,0x517db21a,0);
              }
              else {
                if (*plVar8 == 0) goto LAB_02582acc;
                StreakTournamentLeaderboardElement__Refill_24830d8
                          (*plVar8,*(undefined8 *)(param_1 + 0xd0),param_1);
                StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944
                          (param_1,0x8ac5d054,0);
                StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                          (*(undefined8 *)(param_1 + 0xd0),0x8ac5d054,0);
              }
              return;
            }
          }
          else if (*plVar8 != 0) {
            StreakTournamentLeaderboardElement__Refill_24830d8
                      (*plVar8,*(undefined8 *)(param_1 + 0xd0),param_1);
            StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944
                      (param_1,0x8ac5d054,0);
            StreakTournamentSubMonitor__UpdateCompletedView_248337c
                      (param_1,*(undefined8 *)(param_1 + 0xd0));
            return;
          }
        }
      }
    }
  }
LAB_02582acc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

