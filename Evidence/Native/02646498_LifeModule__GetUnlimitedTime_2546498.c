/* IL2CPP: LifeModule$$GetUnlimitedTime
System_TimeSpan_o LifeModule__GetUnlimitedTime (LifeModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LifeModule$$GetUnlimitedTime
   System_TimeSpan_o LifeModule__GetUnlimitedTime (LifeModule_o* __this, const MethodInfo* method);
    */

void LifeModule__GetUnlimitedTime_2546498(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_049b5fc8;
  if ((bRam0000000004f4c00b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4c00b = 1;
  }
  puVar2 = PTR_DAT_049b5fa8;
  puVar1 = PTR_DAT_049b5050;
  uStack_50 = 0;
  uStack_48 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar4 = TimeProvider__get_UtcNow_24f95ec(0);
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (param_1 + 0x68,&uStack_40,*(undefined8 *)puVar2);
  uStack_48 = uStack_38;
  uStack_50 = uStack_40;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  System_DateTimeOffset__Subtract_30e2d84(&uStack_50,auVar4._0_8_,auVar4._8_8_,0);
  return;
}

