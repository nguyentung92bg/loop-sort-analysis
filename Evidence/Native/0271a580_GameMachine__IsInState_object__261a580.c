/* IL2CPP: GameMachine$$IsInState<object>
bool GameMachine__IsInState_object_ (GameMachine_o* __this, const MethodInfo_261A580* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameMachine$$IsInState<object>
   bool GameMachine__IsInState_object_ (GameMachine_o* __this, const MethodInfo_261A580* method); */

uint GameMachine__IsInState_object__261a580(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_18;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_021f03f8(PTR_DAT_049c4fe8);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_02229774(param_2);
    }
  }
  if (param_1 != 0) {
    UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_ActiveStateName_29a7fdc
              (param_1,&uStack_18,*(undefined8 *)PTR_DAT_049c4fe8);
    lVar3 = **(long **)(param_2 + 0x38);
    lVar2 = *(long *)(lVar3 + 0x38);
    if (lVar2 == 0) {
      FUN_02229774(lVar3);
      lVar2 = *(long *)(lVar3 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02229718();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02229718();
    }
    uVar1 = System_String__op_Equality_2f7b7fc(uStack_18,**(undefined8 **)(lVar2 + 0xb8),0);
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

