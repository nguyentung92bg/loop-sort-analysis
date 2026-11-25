/* IL2CPP: WeeklyMissionsSubMonitor$$FillProgressElements
void WeeklyMissionsSubMonitor__FillProgressElements (WeeklyMissionsSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionsSubMonitor$$FillProgressElements
   void WeeklyMissionsSubMonitor__FillProgressElements (WeeklyMissionsSubMonitor_o* __this, const
   MethodInfo* method); */

void WeeklyMissionsSubMonitor__FillProgressElements_248bef0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  int iStack_48;
  int iStack_44;
  
  if ((bRam0000000004f4ba4d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5d60);
    FUN_021f03f8(PTR_DAT_049c5d68);
    FUN_021f03f8(PTR_DAT_049c5d70);
    bRam0000000004f4ba4d = 1;
  }
  lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0x6d8b1339,0);
  puVar3 = PTR_DAT_049c5d70;
  puVar2 = PTR_DAT_049c5d68;
  puVar1 = PTR_DAT_049c5d60;
  lVar8 = *(long *)(param_1 + 0x40);
  if (lVar8 != 0) {
    iVar9 = 0;
    while (*(long *)(lVar8 + 0xa8) != 0) {
      iVar4 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                        (*(long *)(lVar8 + 0xa8),*(undefined8 *)puVar1);
      if (iVar4 <= iVar9) {
        return;
      }
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 0xa8), lVar8 == 0)) break;
      iStack_48 = iVar9 + 1;
      uVar6 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar8,&iStack_48,*(undefined8 *)puVar3);
      if (lVar5 == 0) break;
      uVar7 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar5,0);
      WeeklyMissionsSubMonitor__CreateProgressElement_248c5bc(param_1,iVar9,uVar7,uVar6);
      if (*(long *)(param_1 + 200) == 0) break;
      iVar9 = iVar9 + 1;
      iStack_44 = iVar9;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_1 + 200),&iStack_44,uVar7,*(undefined8 *)puVar2);
      lVar8 = *(long *)(param_1 + 0x40);
      if (lVar8 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

