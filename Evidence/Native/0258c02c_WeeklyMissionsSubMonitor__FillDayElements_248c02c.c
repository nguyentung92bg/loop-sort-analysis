/* IL2CPP: WeeklyMissionsSubMonitor$$FillDayElements
void WeeklyMissionsSubMonitor__FillDayElements (WeeklyMissionsSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionsSubMonitor$$FillDayElements
   void WeeklyMissionsSubMonitor__FillDayElements (WeeklyMissionsSubMonitor_o* __this, const
   MethodInfo* method); */

void WeeklyMissionsSubMonitor__FillDayElements_248c02c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  
  if ((bRam0000000004f4ba52 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5d78);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049c5d80);
    FUN_021f03f8(PTR_DAT_049c5d88);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4ba52 = 1;
  }
  lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0x297c94cc,0);
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0xa0), lVar6 != 0)) {
    iVar4 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                      (lVar6,*(undefined8 *)PTR_DAT_049c5d78);
    puVar3 = PTR_DAT_049c5d80;
    puVar2 = PTR_DAT_049b8d80;
    puVar1 = PTR_DAT_049b4540;
    if (0 < iVar4) {
      iVar10 = 0;
      do {
        lVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c5d88);
        System_Object___ctor_3142338(lVar6,0);
        if (lVar6 == 0) goto LAB_0258c1f4;
        *(long *)(lVar6 + 0x18) = param_1;
        thunk_FUN_021f190c((long *)(lVar6 + 0x18),param_1);
        iVar10 = iVar10 + 1;
        *(int *)(lVar6 + 0x10) = iVar10;
        if (lVar5 == 0) goto LAB_0258c1f4;
        uVar7 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar5,0);
        lVar8 = FUN_021f04e4(*(undefined8 *)puVar1,1);
        uVar9 = System_Int32__ToString_30fbaa0((int *)(lVar6 + 0x10),0);
        if (lVar8 == 0) goto LAB_0258c1f4;
        if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        *(undefined8 *)(lVar8 + 0x20) = uVar9;
        thunk_FUN_021f190c();
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetFormattedText_33515dc
                  (uVar7,0x8ac5d12b,lVar8,0);
        uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
        UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,lVar6,*(undefined8 *)puVar3,0);
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
                  (uVar7,0x854128ce,uVar9,0);
      } while (iVar4 != iVar10);
    }
    return;
  }
LAB_0258c1f4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

