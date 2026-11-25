/* IL2CPP: WeeklyMissionsSubMonitor$$Setup
void WeeklyMissionsSubMonitor__Setup (WeeklyMissionsSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionsSubMonitor$$Setup
   void WeeklyMissionsSubMonitor__Setup (WeeklyMissionsSubMonitor_o* __this, const MethodInfo*
   method); */

void WeeklyMissionsSubMonitor__Setup_248bcfc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4ba4b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5d40);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049c5d48);
    FUN_021f03f8(PTR_DAT_049c5d50);
    FUN_021f03f8(PTR_DAT_049c5d58);
    bRam0000000004f4ba4b = 1;
  }
  SubMonitorBase__Setup_2481334(param_1);
  lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x4645bb5c,0);
  puVar4 = PTR_DAT_049c5d58;
  puVar3 = PTR_DAT_049c5d50;
  puVar2 = PTR_DAT_049c5d48;
  puVar1 = PTR_DAT_049b8d80;
  if (lVar6 != 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (lVar6,&uStack_38,*(undefined8 *)PTR_DAT_049c5d40);
    *(undefined8 *)(param_1 + 0xa0) = uStack_38;
    thunk_FUN_021f190c();
    uVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                      (param_1,0xa66c44de,0);
    puVar8 = (undefined8 *)(param_1 + 0xa8);
    *puVar8 = uVar7;
    thunk_FUN_021f190c(puVar8,uVar7);
    StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x5f10e269,0);
    uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    UnityEngine_Events_UnityAction___ctor_3c32934(uVar7,param_1,*(undefined8 *)puVar2,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
              (param_1,0x39cfe44a,uVar7,0);
    uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    UnityEngine_Events_UnityAction___ctor_3c32934(uVar7,param_1,*(undefined8 *)puVar3,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
              (param_1,0xa66c44de,uVar7,0);
    uVar9 = *puVar8;
    uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    UnityEngine_Events_UnityAction___ctor_3c32934(uVar7,param_1,*(undefined8 *)puVar4,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
              (uVar9,0x99f4e89d,uVar7,0);
    WeeklyMissionsSubMonitor__FillProgressElements_248bef0(param_1);
    WeeklyMissionsSubMonitor__FillDayElements_248c02c(param_1);
    if (*(long *)(param_1 + 0x58) != 0) {
      uVar5 = WeeklyMissions__GetCurrentDay_252c638(*(long *)(param_1 + 0x58),0);
      WeeklyMissionsSubMonitor__FillMissionElements_248c1fc(param_1,uVar5);
      WeeklyMissionsSubMonitor__UpdateProgressView_248c388(param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

