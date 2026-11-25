/* IL2CPP: StreakTournamentSubMonitor$$OnJoinClicked
void StreakTournamentSubMonitor__OnJoinClicked (StreakTournamentSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentSubMonitor$$OnJoinClicked
   void StreakTournamentSubMonitor__OnJoinClicked (StreakTournamentSubMonitor_o* __this, const
   MethodInfo* method); */

undefined8 StreakTournamentSubMonitor__OnJoinClicked_2483d80(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4ba1d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c4328);
    FUN_021f03f8(PTR_DAT_049c5478);
    FUN_021f03f8(PTR_DAT_049c5b60);
    FUN_021f03f8(PTR_DAT_049c3958);
    FUN_021f03f8(PTR_DAT_049c5b68);
    bRam0000000004f4ba1d = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    Monitors__Deactivate_object__2688964
              (*(long *)(param_1 + 0x28),0,*(undefined8 *)PTR_DAT_049c5478);
    if (*(long *)(param_1 + 200) != 0) {
      uVar3 = LifeModule__IsLifeAvailable_25460dc(*(long *)(param_1 + 200),0);
      puVar1 = PTR_DAT_049c3958;
      if ((uVar3 & 1) != 0) {
        if ((bRam0000000004f4ba1a & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049c3d48);
          bRam0000000004f4ba1a = 1;
        }
        lVar2 = *(long *)(param_1 + 0xc0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar4 = *(long *)PTR_DAT_049c3d48;
        plVar5 = *(long **)(lVar4 + 0x38);
        if (plVar5 == (long *)0x0) {
          FUN_021f03f8(PTR_DAT_049c4e90);
          FUN_021f03f8(PTR_DAT_049c4fe8);
          plVar5 = *(long **)(lVar4 + 0x38);
          if (plVar5 == (long *)0x0) {
            FUN_02229774(lVar4);
            plVar5 = *(long **)(lVar4 + 0x38);
          }
        }
        lVar7 = *plVar5;
        lVar6 = *(long *)(lVar7 + 0x38);
        if (lVar6 == 0) {
          FUN_02229774(lVar7);
          lVar6 = *(long *)(lVar7 + 0x38);
        }
        lVar6 = *(long *)(lVar6 + 8);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02229718();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_021f0574();
        }
        lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 8);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02229718();
        }
        if (lVar2 != 0) {
          uVar8 = **(undefined8 **)(lVar6 + 0xb8);
          UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_ActiveStateName_29a7fdc
                    (lVar2,&uStack_28,*(undefined8 *)PTR_DAT_049c4fe8);
          uVar3 = System_String__op_Equality_2f7b7fc(CONCAT44(uStack_24,uStack_28),uVar8,0);
          if ((uVar3 & 1) == 0) {
            uVar3 = GameMachine__CanEnter_object__261a478
                              (lVar2,*(undefined8 *)(*(long *)(lVar4 + 0x38) + 8));
            if ((uVar3 & 1) == 0) {
              return 0;
            }
            FUN_02568dec(lVar2,uVar8,0,0,*(undefined8 *)PTR_DAT_049c4e90);
          }
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar4 = *(long *)(param_1 + 0x28);
      lVar2 = *(long *)PTR_DAT_049c3958;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_021f0574();
        lVar2 = *(long *)puVar1;
      }
      uStack_24 = CONCAT31(uStack_24._1_3_,**(undefined1 **)(lVar2 + 0xb8));
      uVar8 = thunk_FUN_0222c66c(lVar2,&uStack_24);
      if (lVar4 != 0) {
        Monitors__Additive_object__26888e8(lVar4,uVar8,1,*(undefined8 *)PTR_DAT_049c4328);
        if (*(long *)(param_1 + 0x28) != 0) {
          lVar2 = Monitors__Get_object__26889d0
                            (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_049c5b60);
          uVar8 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
          System_Action___ctor_306b98c(uVar8,param_1,*(undefined8 *)PTR_DAT_049c5b68,0);
          if (lVar2 != 0) {
            *(undefined8 *)(lVar2 + 200) = uVar8;
            uVar8 = thunk_FUN_021f190c((undefined8 *)(lVar2 + 200),uVar8);
            return uVar8;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

