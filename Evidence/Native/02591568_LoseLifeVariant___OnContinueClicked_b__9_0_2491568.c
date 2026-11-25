/* IL2CPP: LoseLifeVariant$$<OnContinueClicked>b__9_0
void LoseLifeVariant___OnContinueClicked_b__9_0 (LoseLifeVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoseLifeVariant$$<OnContinueClicked>b__9_0
   void LoseLifeVariant___OnContinueClicked_b__9_0 (LoseLifeVariant_o* __this, const MethodInfo*
   method); */

undefined8 LoseLifeVariant___OnContinueClicked_b__9_0_2491568(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4ba6f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3d48);
    bRam0000000004f4ba6f = 1;
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar3 = *(long *)PTR_DAT_049c3d48;
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
  if (lVar1 != 0) {
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
    UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_ActiveStateName_29a7fdc
              (lVar1,&uStack_28,*(undefined8 *)PTR_DAT_049c4fe8);
    uVar2 = System_String__op_Equality_2f7b7fc(uStack_28,uVar7,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = GameMachine__CanEnter_object__261a478
                        (lVar1,*(undefined8 *)(*(long *)(lVar3 + 0x38) + 8));
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      FUN_02568dec(lVar1,uVar7,0,0,*(undefined8 *)PTR_DAT_049c4e90);
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

