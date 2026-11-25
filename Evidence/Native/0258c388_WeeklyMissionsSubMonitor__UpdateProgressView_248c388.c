/* IL2CPP: WeeklyMissionsSubMonitor$$UpdateProgressView
void WeeklyMissionsSubMonitor__UpdateProgressView (WeeklyMissionsSubMonitor_o* __this, bool withMotion, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionsSubMonitor$$UpdateProgressView
   void WeeklyMissionsSubMonitor__UpdateProgressView (WeeklyMissionsSubMonitor_o* __this, bool
   withMotion, const MethodInfo* method); */

void WeeklyMissionsSubMonitor__UpdateProgressView_248c388(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4ba50 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4ba50 = 1;
  }
  lVar2 = *(long *)puVar1;
  uStack_24 = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  uStack_24 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar2 + 0xb8) + 0x438,0);
  uVar3 = System_Int32__ToString_30fbaa0(&uStack_24,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x6d8b1339,uVar3,0);
  WeeklyMissionsSubMonitor__ApplyProgressBarMotion_248cd2c(param_1,param_2 & 1);
  return;
}

