/* IL2CPP: UndoBoosterSystem$$CanUndo
bool UndoBoosterSystem__CanUndo (UndoBoosterSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UndoBoosterSystem$$CanUndo
   bool UndoBoosterSystem__CanUndo (UndoBoosterSystem_o* __this, const MethodInfo* method); */

undefined8 UndoBoosterSystem__CanUndo_24026fc(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_28;
  
  if ((bRam0000000004f4b69e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1818);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b69e = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (*(char *)(param_1 + 0x48) != '\0') {
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(uVar12,0,0);
    if ((uVar7 & 1) == 0) {
      lVar8 = *(long *)(param_1 + 0x50);
      if (lVar8 != 0) {
        if (*(char *)(lVar8 + 0x1b3) != '\0') {
          return 0;
        }
        if (*(long *)(param_1 + 0x58) == 0) {
          return 0;
        }
        if (*(char *)(lVar8 + 0x1b1) != '\0') {
          return 0;
        }
        uVar7 = Carrier__AreAllBlocksGrouped_23fed40();
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        if (*(long *)(param_1 + 0x50) != 0) {
          iVar6 = Carrier__GetAvailableSpaceCount_2402f2c();
          lVar8 = *(long *)(param_1 + 0x58);
          if (lVar8 != 0) {
            if (iVar6 < *(int *)(lVar8 + 0x18)) {
              return 0;
            }
            System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                      (lVar8,&uStack_68,*(undefined8 *)PTR_DAT_049c14f0);
            puVar5 = PTR_DAT_049c1818;
            puVar4 = PTR_DAT_049c14e8;
            puVar3 = PTR_DAT_049c14e0;
            uStack_48 = puStack_60;
            uStack_50 = uStack_68;
            puStack_60 = &uStack_50;
            uStack_40 = uStack_58;
            uStack_68 = 0;
            while( true ) {
              uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (&uStack_50,*(undefined8 *)puVar3);
              if ((uVar7 & 1) == 0) {
                FUN_020176bc(&uStack_68);
                return 1;
              }
              lVar11 = *(long *)puVar4;
              lVar9 = *(long *)(lVar11 + 0x20);
              uVar2 = *(ushort *)(lVar9 + 0x135);
              lVar8 = lVar9;
              if ((uVar2 & 1) == 0) {
                lVar8 = FUN_02229718();
                lVar9 = *(long *)(lVar11 + 0x20);
                uVar2 = *(ushort *)(lVar9 + 0x135);
              }
              uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
              if ((uVar2 & 1) == 0) {
                lVar9 = FUN_02229718();
              }
              uVar12 = thunk_FUN_0224e54c(&uStack_50,
                                          *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) +
                                          0x60);
              func_0x04608620(&lStack_28,uVar12,uVar1);
              lVar8 = lStack_28;
              if (lStack_28 == 0) break;
              uVar7 = Block__CanBeginTransferEnter_23dcff8(lStack_28,0);
              if ((((uVar7 & 1) == 0) || (*(char *)(lVar8 + 0x158) != '\0')) ||
                 (((plVar10 = *(long **)(lVar8 + 0x100), plVar10 != (long *)0x0 &&
                   (*plVar10 == *(long *)puVar5)) &&
                  (((*(char *)((long)plVar10 + 0x1b1) != '\0' || ((char)plVar10[0x36] != '\0')) ||
                   (uVar7 = Carrier__IsAddingBlocks_2409ec0(), (uVar7 & 1) != 0)))))) {
                FUN_020176bc(&uStack_68);
                return 0;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return 0;
}

