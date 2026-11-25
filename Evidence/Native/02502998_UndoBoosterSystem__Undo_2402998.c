/* IL2CPP: UndoBoosterSystem$$Undo
void UndoBoosterSystem__Undo (UndoBoosterSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UndoBoosterSystem$$Undo
   void UndoBoosterSystem__Undo (UndoBoosterSystem_o* __this, const MethodInfo* method); */

void UndoBoosterSystem__Undo_2402998(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4b69f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c25d8);
    bRam0000000004f4b69f = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  plVar10 = (long *)(param_1 + 0x58);
  uStack_48 = 0;
  if (*plVar10 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___Reverse_28d08d0
              (*plVar10,*(undefined8 *)PTR_DAT_049c25d8);
    puVar5 = PTR_DAT_049c14e8;
    puVar4 = PTR_DAT_049c14e0;
    puVar3 = PTR_DAT_049c14d8;
    if (*plVar10 != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*plVar10,&uStack_58,*(undefined8 *)PTR_DAT_049c14f0);
      while( true ) {
        uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                          (&uStack_58,*(undefined8 *)puVar4);
        if ((uVar6 & 1) == 0) {
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&uStack_58,*(undefined8 *)puVar3);
          *(undefined1 *)(param_1 + 0x48) = 0;
          *(undefined8 *)(param_1 + 0x50) = 0;
          thunk_FUN_021f190c(param_1 + 0x50,0);
          *(undefined8 *)(param_1 + 0x58) = 0;
          thunk_FUN_021f190c(plVar10,0);
          return;
        }
        lVar11 = *(long *)puVar5;
        lVar7 = *(long *)(lVar11 + 0x20);
        uVar2 = *(ushort *)(lVar7 + 0x135);
        lVar8 = lVar7;
        if ((uVar2 & 1) == 0) {
          lVar8 = FUN_02229718();
          lVar7 = *(long *)(lVar11 + 0x20);
          uVar2 = *(ushort *)(lVar7 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar7 = FUN_02229718();
        }
        uVar9 = thunk_FUN_0224e54c(&uStack_58,
                                   *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
        func_0x04608620(&uStack_38,uVar9,uVar1);
        if (*(long *)(param_1 + 0x50) == 0) break;
        Carrier__AddBlock_23fe404(0,*(long *)(param_1 + 0x50),uStack_38,1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

