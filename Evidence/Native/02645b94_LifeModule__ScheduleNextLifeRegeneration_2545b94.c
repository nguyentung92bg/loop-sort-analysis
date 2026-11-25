/* IL2CPP: LifeModule$$ScheduleNextLifeRegeneration
void LifeModule__ScheduleNextLifeRegeneration (LifeModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LifeModule$$ScheduleNextLifeRegeneration
   void LifeModule__ScheduleNextLifeRegeneration (LifeModule_o* __this, const MethodInfo* method);
    */

void LifeModule__ScheduleNextLifeRegeneration_2545b94(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  puVar2 = PTR_DAT_049b5fc8;
  if ((bRam0000000004f4c004 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4c004 = 1;
  }
  puVar1 = PTR_DAT_049b5050;
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b5fa0;
  auStack_40 = TimeProvider__get_UtcNow_24f95ec(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_30 = System_DateTimeOffset__AddMinutes_30e182c(0x403e000000000000,auStack_40,0);
  CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
            (param_1 + 0x38,auStack_30,*(undefined8 *)puVar2);
  return;
}

