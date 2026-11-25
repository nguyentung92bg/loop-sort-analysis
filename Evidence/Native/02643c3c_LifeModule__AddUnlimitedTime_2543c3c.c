/* IL2CPP: LifeModule$$AddUnlimitedTime
void LifeModule__AddUnlimitedTime (LifeModule_o* __this, System_TimeSpan_o time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LifeModule$$AddUnlimitedTime
   void LifeModule__AddUnlimitedTime (LifeModule_o* __this, System_TimeSpan_o time, const
   MethodInfo* method); */

void LifeModule__AddUnlimitedTime_2543c3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  puVar2 = PTR_DAT_049b5fc8;
  if ((bRam0000000004f4c00c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4c00c = 1;
  }
  puVar3 = PTR_DAT_049b5fa8;
  puVar1 = PTR_DAT_049b5050;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b6128;
  auVar7 = TimeProvider__get_UtcNow_24f95ec(0);
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (param_1 + 0x68,auStack_60,*(undefined8 *)puVar3);
  uStack_78 = auStack_60._8_8_;
  uStack_80 = auStack_60._0_8_;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = System_DateTimeOffset__Subtract_30e2d84(&uStack_80,auVar7._0_8_,auVar7._8_8_,0);
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574(lVar6);
    lVar6 = *(long *)puVar2;
  }
  uVar5 = System_TimeSpan__op_GreaterThan_3117960(uVar4,**(undefined8 **)(lVar6 + 0xb8),0);
  if ((uVar5 & 1) != 0) {
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (param_1 + 0x68,auStack_60,*(undefined8 *)puVar3);
    auVar7._8_8_ = auStack_60._8_8_;
    auVar7._0_8_ = auStack_60._0_8_;
  }
  puVar2 = PTR_DAT_049b5fa0;
  auStack_70 = auVar7;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_60 = System_DateTimeOffset__Add_30e166c(auStack_70,param_2,0);
  CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
            (param_1 + 0x68,auStack_60,*(undefined8 *)puVar2);
  return;
}

