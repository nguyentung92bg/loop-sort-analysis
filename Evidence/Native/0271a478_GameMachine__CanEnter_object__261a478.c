/* IL2CPP: GameMachine$$CanEnter<object>
bool GameMachine__CanEnter_object_ (GameMachine_o* __this, const MethodInfo_261A478* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameMachine$$CanEnter<object>
   bool GameMachine__CanEnter_object_ (GameMachine_o* __this, const MethodInfo_261A478* method); */

void GameMachine__CanEnter_object__261a478(long param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_2 + 0x38);
  if (plVar2 == (long *)0x0) {
    FUN_021f03f8(PTR_DAT_049cd6e0);
    FUN_021f03f8(PTR_DAT_049cd6e8);
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
  if ((param_1 != 0) &&
     (plVar2 = (long *)UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetState_29abe58
                                 (param_1,**(undefined8 **)(lVar3 + 0xb8),
                                  *(undefined8 *)PTR_DAT_049cd6e8), plVar2 != (long *)0x0)) {
    lVar3 = *plVar2;
    bVar1 = *(byte *)(*(long *)PTR_DAT_049cd6e0 + 0x130);
    if ((bVar1 <= *(byte *)(lVar3 + 0x130)) &&
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_049cd6e0)) {
                    /* WARNING: Could not recover jumptable at 0x0271a574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x218))(plVar2,*(undefined8 *)(lVar3 + 0x220));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f0a20();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

