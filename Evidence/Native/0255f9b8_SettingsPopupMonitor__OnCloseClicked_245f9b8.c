/* IL2CPP: SettingsPopupMonitor$$OnCloseClicked
void SettingsPopupMonitor__OnCloseClicked (SettingsPopupMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPopupMonitor$$OnCloseClicked
   void SettingsPopupMonitor__OnCloseClicked (SettingsPopupMonitor_o* __this, const MethodInfo*
   method); */

ulong SettingsPopupMonitor__OnCloseClicked_245f9b8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b93a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4f60);
    FUN_021f03f8(PTR_DAT_049c4650);
    bRam0000000004f4b93a = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    Monitors__Deactivate_256e214(*(long *)(param_1 + 0x30),param_1,0,0);
    if (*(long *)(param_1 + 0xa0) != 0) {
      uVar1 = GameMachine__IsInState_object__261a580
                        (*(long *)(param_1 + 0xa0),*(undefined8 *)PTR_DAT_049c4f60);
      if ((uVar1 & 1) == 0) {
        return uVar1;
      }
      lVar2 = *(long *)(param_1 + 0xa0);
      if (lVar2 != 0) {
        lVar3 = *(long *)PTR_DAT_049c4650;
        plVar4 = *(long **)(lVar3 + 0x38);
        if (plVar4 == (long *)0x0) {
          FUN_021f03f8(PTR_DAT_049c4e90);
          FUN_021f03f8(PTR_DAT_049c4fe8);
          plVar4 = *(long **)(lVar3 + 0x38);
          if (plVar4 == (long *)0x0) {
            FUN_02229774(lVar3);
            plVar4 = *(long **)(lVar3 + 0x38);
          }
        }
        lVar6 = *plVar4;
        lVar5 = *(long *)(lVar6 + 0x38);
        if (lVar5 == 0) {
          FUN_02229774(lVar6);
          lVar5 = *(long *)(lVar6 + 0x38);
        }
        lVar5 = *(long *)(lVar5 + 8);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02229718();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          FUN_021f0574();
        }
        lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02229718();
        }
        if (lVar2 != 0) {
          uVar7 = **(undefined8 **)(lVar5 + 0xb8);
          UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_ActiveStateName_29a7fdc
                    (lVar2,&uStack_28,*(undefined8 *)PTR_DAT_049c4fe8);
          uVar1 = System_String__op_Equality_2f7b7fc(uStack_28,uVar7,0);
          if ((uVar1 & 1) == 0) {
            uVar1 = GameMachine__CanEnter_object__261a478
                              (lVar2,*(undefined8 *)(*(long *)(lVar3 + 0x38) + 8));
            if ((uVar1 & 1) == 0) {
              return 0;
            }
            FUN_02568dec(lVar2,uVar7,0,0,*(undefined8 *)PTR_DAT_049c4e90);
          }
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

