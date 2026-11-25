/* IL2CPP: LifeModule$$GetRemainingTime
System_TimeSpan_o LifeModule__GetRemainingTime (LifeModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LifeModule$$GetRemainingTime
   System_TimeSpan_o LifeModule__GetRemainingTime (LifeModule_o* __this, const MethodInfo* method);
    */

undefined8 LifeModule__GetRemainingTime_2545e88(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4c006 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98);
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4c006 = 1;
  }
  puVar1 = PTR_DAT_049b6128;
  uStack_40 = 0;
  uStack_38 = 0;
  iVar2 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x18,0);
  if ((iVar2 < 5) &&
     (uVar3 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                        (param_1 + 0x38,*(undefined8 *)PTR_DAT_049b5f98), (uVar3 & 1) != 0)) {
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (param_1 + 0x38,&uStack_30,*(undefined8 *)PTR_DAT_049b5fa8);
    uStack_38 = uStack_28;
    uStack_40 = uStack_30;
    if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar6 = TimeProvider__get_UtcNow_24f95ec(0);
    if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = System_DateTimeOffset__Subtract_30e2d84(&uStack_40,auVar6._0_8_,auVar6._8_8_,0);
  }
  else {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar1;
    }
    uVar4 = **(undefined8 **)(lVar5 + 0xb8);
  }
  return uVar4;
}

