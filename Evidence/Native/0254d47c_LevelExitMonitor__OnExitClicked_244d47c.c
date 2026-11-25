/* IL2CPP: LevelExitMonitor$$OnExitClicked
void LevelExitMonitor__OnExitClicked (LevelExitMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelExitMonitor$$OnExitClicked
   void LevelExitMonitor__OnExitClicked (LevelExitMonitor_o* __this, const MethodInfo* method); */

long LevelExitMonitor__OnExitClicked_244d47c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long lStack_68;
  undefined8 in_stack_ffffffffffffffd8;
  
  if ((bRam0000000004f4b8aa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4658);
    FUN_021f03f8(PTR_DAT_049c4648);
    bRam0000000004f4b8aa = 1;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    if (*(int *)(param_1 + 0xa8) < *(int *)(*(long *)(param_1 + 0xb0) + 0x18)) {
      if ((bRam0000000004f4b8ac & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b5480);
        FUN_021f03f8(PTR_DAT_049c4648);
        FUN_021f03f8(PTR_DAT_049c4660);
        bRam0000000004f4b8ac = 1;
      }
      puVar3 = PTR_DAT_049c4660;
      puVar2 = PTR_DAT_049b8a18;
      puVar1 = PTR_DAT_049b5480;
      lVar4 = *(long *)(param_1 + 0xb0);
      if (lVar4 != 0) {
        iVar10 = 0;
        do {
          if (*(int *)(lVar4 + 0x18) <= iVar10) {
            *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
            return lVar4;
          }
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar4,iVar10,&lStack_68,*(undefined8 *)puVar3);
          lVar4 = lStack_68;
          if (lStack_68 == 0) break;
          lVar5 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0(lStack_68,0);
          if (cRam0000000004f49d57 == '\0') {
            FUN_021f03f8(puVar2);
            cRam0000000004f49d57 = '\x01';
          }
          if (lVar5 == 0) break;
          puVar7 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
          uVar14 = puVar7[1];
          UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(*puVar7,uVar14,lVar5,0);
          uVar13 = UnityEngine_RectTransform__get_offsetMin_3c2c4e0(lVar5,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574();
          }
          Extensions__WithX_3f0d00c(uVar13,uVar14,0,0);
          UnityEngine_RectTransform__set_offsetMin_3c2c534(lVar5,0);
          UnityEngine_RectTransform__get_offsetMax_3c2c628(lVar5,0);
          Extensions__WithX_3f0d00c(0);
          UnityEngine_RectTransform__set_offsetMax_3c2c6c8(lVar5,0);
          lVar4 = UnityEngine_Component__get_gameObject_3c187f4(lVar4,0);
          if (lVar4 == 0) break;
          UnityEngine_GameObject__SetActive_3c1ce34(lVar4,iVar10 == *(int *)(param_1 + 0xa8),0);
          lVar4 = *(long *)(param_1 + 0xb0);
          iVar10 = iVar10 + 1;
        } while (lVar4 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = *(long *)(param_1 + 0x98);
    if (lVar4 != 0) {
      lVar5 = *(long *)PTR_DAT_049c4658;
      plVar8 = *(long **)(lVar5 + 0x38);
      if (plVar8 == (long *)0x0) {
        FUN_021f03f8(PTR_DAT_049c4e90);
        FUN_021f03f8(PTR_DAT_049c4fe8);
        plVar8 = *(long **)(lVar5 + 0x38);
        if (plVar8 == (long *)0x0) {
          FUN_02229774(lVar5);
          plVar8 = *(long **)(lVar5 + 0x38);
        }
      }
      lVar11 = *plVar8;
      lVar9 = *(long *)(lVar11 + 0x38);
      if (lVar9 == 0) {
        FUN_02229774(lVar11);
        lVar9 = *(long *)(lVar11 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 8);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02229718();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        FUN_021f0574();
      }
      lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 8);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02229718();
      }
      if (lVar4 != 0) {
        uVar12 = **(undefined8 **)(lVar9 + 0xb8);
        UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_ActiveStateName_29a7fdc
                  (lVar4,&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_049c4fe8);
        uVar6 = System_String__op_Equality_2f7b7fc(in_stack_ffffffffffffffd8,uVar12,0);
        if ((uVar6 & 1) == 0) {
          uVar6 = GameMachine__CanEnter_object__261a478
                            (lVar4,*(undefined8 *)(*(long *)(lVar5 + 0x38) + 8));
          if ((uVar6 & 1) == 0) {
            return 0;
          }
          FUN_02568dec(lVar4,uVar12,0,0,*(undefined8 *)PTR_DAT_049c4e90);
        }
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

