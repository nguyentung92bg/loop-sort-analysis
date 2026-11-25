/* IL2CPP: WeeklyMissionsSubMonitor.<>c__DisplayClass25_0$$<FillDayElements>b__0
void WeeklyMissionsSubMonitor___c__DisplayClass25_0___FillDayElements_b__0 (WeeklyMissionsSubMonitor___c__DisplayClass25_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionsSubMonitor.<>c__DisplayClass25_0$$<FillDayElements>b__0
   void WeeklyMissionsSubMonitor___c__DisplayClass25_0___FillDayElements_b__0
   (WeeklyMissionsSubMonitor___c__DisplayClass25_0_o* __this, const MethodInfo* method); */

void WeeklyMissionsSubMonitor___c__DisplayClass25_0___FillDayElements_b__0_248de38(long param_1)

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
  long lVar11;
  int iStack_54;
  
  lVar11 = *(long *)(param_1 + 0x18);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if ((bRam0000000004f4ba54 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5d90);
    FUN_021f03f8(PTR_DAT_049c5d98);
    FUN_021f03f8(PTR_DAT_049c5da0);
    bRam0000000004f4ba54 = 1;
  }
  if (*(int *)(lVar11 + 0xc0) == iVar5) {
    return;
  }
  *(int *)(lVar11 + 0xc0) = iVar5;
  if (*(long *)(lVar11 + 0x58) != 0) {
    iVar4 = WeeklyMissions__GetCurrentDay_252c638(*(long *)(lVar11 + 0x58),0);
    iVar1 = *(int *)(lVar11 + 0xc0);
    lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                      (lVar11,0xbcdc2f95,0);
    if (lVar7 != 0) {
      StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar7,0);
      if (((*(long *)(lVar11 + 0x40) != 0) &&
          (lVar8 = *(long *)(*(long *)(lVar11 + 0x40) + 0xa0), lVar8 != 0)) &&
         (iStack_54 = iVar5,
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
            WeeklyMissionsSubMonitor__CreateMissionElement_248cfdc(lVar11,uVar10,uVar9,iVar5);
            if (iVar4 < iVar1) {
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                        (uVar10,0x39740faf,0);
            }
            iVar5 = iVar5 + 1;
            iVar6 = Cathei_BakingSheet_SheetRowArray___Il2CppFullySharedGenericType__object___get_Count_2985650
                              (lVar8,*(undefined8 *)puVar2);
          } while (iVar5 < iVar6);
        }
        WeeklyMissionsSubMonitor__RefreshDayElements_248ce20(lVar11);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

