/* IL2CPP: WeeklyMissionsSubMonitor$$FillMissionElements
void WeeklyMissionsSubMonitor__FillMissionElements (WeeklyMissionsSubMonitor_o* __this, int32_t day, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionsSubMonitor$$FillMissionElements
   void WeeklyMissionsSubMonitor__FillMissionElements (WeeklyMissionsSubMonitor_o* __this, int32_t
   day, const MethodInfo* method); */

void WeeklyMissionsSubMonitor__FillMissionElements_248c1fc(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iStack_54;
  
  if ((bRam0000000004f4ba54 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5d90);
    FUN_021f03f8(PTR_DAT_049c5d98);
    FUN_021f03f8(PTR_DAT_049c5da0);
    bRam0000000004f4ba54 = 1;
  }
  if (*(int *)(param_1 + 0xc0) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc0) = param_2;
  if (*(long *)(param_1 + 0x58) != 0) {
    iVar4 = WeeklyMissions__GetCurrentDay_252c638(*(long *)(param_1 + 0x58),0);
    iVar1 = *(int *)(param_1 + 0xc0);
    lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                      (param_1,0xbcdc2f95,0);
    if (lVar7 != 0) {
      StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar7,0);
      if (((*(long *)(param_1 + 0x40) != 0) &&
          (lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 0xa0), lVar8 != 0)) &&
         (iStack_54 = param_2,
         lVar8 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                           (lVar8,&iStack_54,*(undefined8 *)PTR_DAT_049c5da0),
         puVar2 = PTR_DAT_049c5d90, lVar8 != 0)) {
        iVar5 = Cathei_BakingSheet_SheetRowArray___Il2CppFullySharedGenericType__object___get_Count_2985650
                          (lVar8,*(undefined8 *)PTR_DAT_049c5d90);
        puVar3 = PTR_DAT_049c5d98;
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            uVar9 = Cathei_BakingSheet_SheetRowArray___Il2CppFullySharedGenericType__object___get_Item_298568c
                              (lVar8,iVar5,*(undefined8 *)puVar3);
            uVar10 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar7,0);
            WeeklyMissionsSubMonitor__CreateMissionElement_248cfdc(param_1,uVar10,uVar9,iVar5);
            if (iVar4 < iVar1) {
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                        (uVar10,0x39740faf,0);
            }
            iVar5 = iVar5 + 1;
            iVar6 = Cathei_BakingSheet_SheetRowArray___Il2CppFullySharedGenericType__object___get_Count_2985650
                              (lVar8,*(undefined8 *)puVar2);
          } while (iVar5 < iVar6);
        }
        WeeklyMissionsSubMonitor__RefreshDayElements_248ce20(param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

