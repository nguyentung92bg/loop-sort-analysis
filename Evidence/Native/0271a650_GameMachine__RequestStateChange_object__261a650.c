/* IL2CPP: GameMachine$$RequestStateChange<object>
bool GameMachine__RequestStateChange_object_ (GameMachine_o* __this, const MethodInfo_261A650* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameMachine$$RequestStateChange<object>
   bool GameMachine__RequestStateChange_object_ (GameMachine_o* __this, const MethodInfo_261A650*
   method); */

undefined8 GameMachine__RequestStateChange_object__261a650(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_28;
  
  plVar2 = *(long **)(param_2 + 0x38);
  if (plVar2 == (long *)0x0) {
    FUN_021f03f8(PTR_DAT_049c4e90);
    FUN_021f03f8(PTR_DAT_049c4fe8);
    plVar2 = *(long **)(param_2 + 0x38);
    if (plVar2 == (long *)0x0) {
      FUN_02229774(param_2);
      plVar2 = *(long **)(param_2 + 0x38);
    }
  }
  lVar4 = *plVar2;
  lVar3 = *(long *)(lVar4 + 0x38);
  if (lVar3 == 0) {
    FUN_02229774(lVar4);
    lVar3 = *(long *)(lVar4 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02229718();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02229718();
  }
  if (param_1 != 0) {
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_ActiveStateName_29a7fdc
              (param_1,&uStack_28,*(undefined8 *)PTR_DAT_049c4fe8);
    uVar1 = System_String__op_Equality_2f7b7fc(uStack_28,uVar5,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = GameMachine__CanEnter_object__261a478
                        (param_1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 8));
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      FUN_02568dec(param_1,uVar5,0,0,*(undefined8 *)PTR_DAT_049c4e90);
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

