/* IL2CPP: StreakTowerSubMonitor$$CreateStageElements
void StreakTowerSubMonitor__CreateStageElements (StreakTowerSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTowerSubMonitor$$CreateStageElements
   void StreakTowerSubMonitor__CreateStageElements (StreakTowerSubMonitor_o* __this, const
   MethodInfo* method); */

void StreakTowerSubMonitor__CreateStageElements_2487664(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int iStack_48;
  undefined4 uStack_44;
  
  if ((bRam0000000004f4ba35 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5c08);
    FUN_021f03f8(PTR_DAT_049c5c10);
    FUN_021f03f8(PTR_DAT_049c5c18);
    FUN_021f03f8(PTR_DAT_049c5c20);
    FUN_021f03f8(PTR_DAT_049c5c28);
    FUN_021f03f8(PTR_DAT_049c5c30);
    FUN_021f03f8(PTR_DAT_049c5c38);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    bRam0000000004f4ba35 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  if ((*(long *)(param_1 + 0x40) == 0) ||
     (lVar11 = System_Linq_Enumerable__ToList___Il2CppFullySharedGenericType__25e3b7c
                         (*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x100),
                          *(undefined8 *)PTR_DAT_049c5c10), puVar8 = PTR_DAT_049c5c30,
     puVar7 = PTR_DAT_049c5c28, puVar6 = PTR_DAT_049c5c20, puVar5 = PTR_DAT_049c5c18,
     puVar4 = PTR_DAT_049c5c08, puVar3 = PTR_DAT_049c2cf0, lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___Reverse_28d08d0
            (lVar11,*(undefined8 *)PTR_DAT_049c5c38);
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lVar11,&uStack_88,*(undefined8 *)puVar8);
  uStack_60 = uStack_78;
  uStack_68 = puStack_80;
  uStack_70 = uStack_88;
  uStack_88 = 0;
  puStack_80 = &uStack_70;
  do {
    uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&uStack_70,*(undefined8 *)puVar6);
    if ((uVar12 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_70,*(undefined8 *)puVar5);
      return;
    }
    lVar16 = *(long *)puVar7;
    lVar13 = *(long *)(lVar16 + 0x20);
    uVar2 = *(ushort *)(lVar13 + 0x135);
    lVar11 = lVar13;
    if ((uVar2 & 1) == 0) {
      lVar11 = FUN_02229718();
      lVar13 = *(long *)(lVar16 + 0x20);
      uVar2 = *(ushort *)(lVar13 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar13 = FUN_02229718();
    }
    uVar14 = thunk_FUN_0224e54c(&uStack_70,
                                *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&iStack_48,uVar14,uVar1);
    lVar11 = CONCAT44(uStack_44,iStack_48);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar15 = *(long **)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
    uVar14 = thunk_FUN_0224e54c(lVar11,*(undefined8 *)(*plVar15 + 0x80));
    func_0x04608620(&iStack_48,uVar14,uVar1);
    iVar9 = iStack_48;
    if (iStack_48 == 1) {
      lVar13 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                         (param_1,0xaa652f72,0);
    }
    else {
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0x40) + 0x100);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      iVar10 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                         (lVar13,*(undefined8 *)puVar4);
      if (iVar9 == iVar10) {
        lVar13 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                           (param_1,0x4ea60362,0);
      }
      else {
        lVar13 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                           (param_1,0x97f78800,0);
      }
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar14 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar13,0);
    StreakTowerSubMonitor__FillStageElement_2487d4c(param_1,uVar14,lVar11);
  } while( true );
}

