/* IL2CPP: GameBehaviourBase$$OnDestroy
void GameBehaviourBase__OnDestroy (GameBehaviourBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBehaviourBase$$OnDestroy
   void GameBehaviourBase__OnDestroy (GameBehaviourBase_o* __this, const MethodInfo* method); */

void GameBehaviourBase__OnDestroy_24f6ac8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b3bf8;
  if ((bRam0000000004f4bd22 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049b5190);
    bRam0000000004f4bd22 = 1;
  }
  puVar2 = PTR_DAT_049b5190;
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uStack_28 = UnityEngine_Application__get_exitCancellationToken_3bc9208(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar2);
  }
  uVar3 = System_Threading_CancellationToken__get_IsCancellationRequested_316293c(&uStack_28,0);
  if ((uVar3 & 1) == 0) {
    lVar6 = param_1[6];
    uVar4 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar3 = PrefabModule__IsGameObjectPooled_2538834(lVar6,uVar4,0);
    if ((uVar3 & 1) != 0) {
      uVar4 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
      FUN_02010d90();
      uVar4 = UnityEngine_Object__get_name_3c232a8(uVar4,0);
      uVar5 = thunk_FUN_02256840(PTR_DAT_049c84b0);
      uVar4 = System_String__Concat_2f72b28(uVar5,uVar4,0);
      thunk_FUN_02256840(PTR_DAT_049b4350);
      uVar5 = thunk_FUN_0222ca34();
      System_Exception___ctor_31372a0(uVar5,uVar4,0);
      uVar4 = thunk_FUN_02256840(PTR_DAT_049c84b8);
                    /* WARNING: Subroutine does not return */
      FUN_021f0564(uVar5,uVar4);
    }
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  }
  return;
}

