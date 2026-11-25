/* IL2CPP: CellElementBase$$OnReturn
void CellElementBase__OnReturn (CellElementBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CellElementBase$$OnReturn
   void CellElementBase__OnReturn (CellElementBase_o* __this, const MethodInfo* method); */

void CellElementBase__OnReturn_250601c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_38;
  
  puVar4 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bd89 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8d80);
    FUN_021f03f8(PTR_DAT_049c8d88);
    FUN_021f03f8(PTR_DAT_049c8d90);
    FUN_021f03f8(PTR_DAT_049c8da8);
    FUN_021f03f8(PTR_DAT_049c8db8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bd89 = 1;
  }
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  GameBehaviourBase__OnReturn_24f6ea8(param_1);
  plVar11 = (long *)(param_1 + 200);
  lVar13 = *plVar11;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar8 = UnityEngine_Object__op_Inequality_3c1b96c(lVar13,0,0);
  if ((uVar8 & 1) != 0) {
    if (*plVar11 == 0) goto LAB_026062a8;
    CellBase__RemoveElement_25057e4(*plVar11,param_1);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  thunk_FUN_021f190c(plVar11,0);
  puVar7 = PTR_DAT_049c8da8;
  puVar6 = PTR_DAT_049c8d90;
  puVar5 = PTR_DAT_049c8d88;
  puVar4 = PTR_DAT_049c8d80;
  if (*(long *)(param_1 + 0xd8) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0xd8),&uStack_78,*(undefined8 *)PTR_DAT_049c8db8);
    uStack_50 = uStack_68;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    while (uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_60,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
      lVar12 = *(long *)puVar6;
      lVar9 = *(long *)(lVar12 + 0x20);
      uVar3 = *(ushort *)(lVar9 + 0x135);
      lVar13 = lVar9;
      if ((uVar3 & 1) == 0) {
        lVar13 = FUN_02229718();
        lVar9 = *(long *)(lVar12 + 0x20);
        uVar3 = *(ushort *)(lVar9 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar9 = FUN_02229718();
      }
      uVar10 = thunk_FUN_0224e54c(&uStack_60,
                                  *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_38,uVar10,uVar1);
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      CellBase__RemoveElement_25057e4(lStack_38,param_1);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_60,*(undefined8 *)puVar4);
    lVar13 = *(long *)(param_1 + 0xd8);
    if (lVar13 != 0) {
      lVar9 = *(long *)puVar7;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      uVar8 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
      if ((uVar8 & 1) == 0) {
        *(undefined4 *)(lVar13 + 0x18) = 0;
      }
      else {
        iVar2 = *(int *)(lVar13 + 0x18);
        *(undefined4 *)(lVar13 + 0x18) = 0;
        if (0 < iVar2) {
          System_Array__Clear_31229cc(*(undefined8 *)(lVar13 + 0x10),0,iVar2,0);
        }
      }
      lVar13 = *(long *)(param_1 + 0xd0);
      if (lVar13 != 0) {
        lVar9 = *(long *)puVar7;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        uVar8 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
        if ((uVar8 & 1) == 0) {
          *(undefined4 *)(lVar13 + 0x18) = 0;
        }
        else {
          iVar2 = *(int *)(lVar13 + 0x18);
          *(undefined4 *)(lVar13 + 0x18) = 0;
          if (0 < iVar2) {
            System_Array__Clear_31229cc(*(undefined8 *)(lVar13 + 0x10),0,iVar2,0);
          }
        }
        return;
      }
    }
  }
LAB_026062a8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

