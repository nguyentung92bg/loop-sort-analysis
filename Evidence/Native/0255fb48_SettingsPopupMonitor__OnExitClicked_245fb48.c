/* IL2CPP: SettingsPopupMonitor$$OnExitClicked
void SettingsPopupMonitor__OnExitClicked (SettingsPopupMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPopupMonitor$$OnExitClicked
   void SettingsPopupMonitor__OnExitClicked (SettingsPopupMonitor_o* __this, const MethodInfo*
   method); */

undefined8 SettingsPopupMonitor__OnExitClicked_245fb48(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4b93d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3d50);
    FUN_021f03f8(PTR_DAT_049c4f70);
    FUN_021f03f8(PTR_DAT_049c3958);
    bRam0000000004f4b93d = 1;
  }
  if ((*(long *)(param_1 + 0xb8) != 0) &&
     (plVar2 = (long *)PlaySessionModule__get_Current_2536d5c(*(long *)(param_1 + 0xb8),0),
     plVar2 != (long *)0x0)) {
    uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    puVar1 = PTR_DAT_049c3958;
    lVar7 = *(long *)(param_1 + 0x30);
    if ((uVar3 & 1) == 0) {
      if (lVar7 != 0) {
        Monitors__Deactivate_256e214(lVar7,param_1,0,0);
        (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
        lVar7 = *(long *)(param_1 + 0xa0);
        if (lVar7 != 0) {
          lVar4 = *(long *)PTR_DAT_049c3d50;
          plVar2 = *(long **)(lVar4 + 0x38);
          if (plVar2 == (long *)0x0) {
            FUN_021f03f8(PTR_DAT_049c4e90);
            FUN_021f03f8(PTR_DAT_049c4fe8);
            plVar2 = *(long **)(lVar4 + 0x38);
            if (plVar2 == (long *)0x0) {
              FUN_02229774(lVar4);
              plVar2 = *(long **)(lVar4 + 0x38);
            }
          }
          lVar8 = *plVar2;
          lVar6 = *(long *)(lVar8 + 0x38);
          if (lVar6 == 0) {
            FUN_02229774(lVar8);
            lVar6 = *(long *)(lVar8 + 0x38);
          }
          lVar6 = *(long *)(lVar6 + 8);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02229718();
          }
          if (*(int *)(lVar6 + 0xe4) == 0) {
            FUN_021f0574();
          }
          lVar6 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02229718();
          }
          if (lVar7 != 0) {
            uVar5 = **(undefined8 **)(lVar6 + 0xb8);
            UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_ActiveStateName_29a7fdc
                      (lVar7,&uStack_28,*(undefined8 *)PTR_DAT_049c4fe8);
            uVar3 = System_String__op_Equality_2f7b7fc(CONCAT44(uStack_24,uStack_28),uVar5,0);
            if ((uVar3 & 1) == 0) {
              uVar3 = GameMachine__CanEnter_object__261a478
                                (lVar7,*(undefined8 *)(*(long *)(lVar4 + 0x38) + 8));
              if ((uVar3 & 1) == 0) {
                return 0;
              }
              FUN_02568dec(lVar7,uVar5,0,0,*(undefined8 *)PTR_DAT_049c4e90);
            }
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
    else {
      lVar4 = *(long *)PTR_DAT_049c3958;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574();
        lVar4 = *(long *)puVar1;
      }
      uStack_24 = CONCAT31(uStack_24._1_3_,**(undefined1 **)(lVar4 + 0xb8));
      uVar5 = thunk_FUN_0222c66c(lVar4,&uStack_24);
      if (lVar7 != 0) {
        uVar5 = Monitors__Activate_object__268887c(lVar7,uVar5,*(undefined8 *)PTR_DAT_049c4f70);
        return uVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

