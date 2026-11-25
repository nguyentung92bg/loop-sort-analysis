/* IL2CPP: LifeModule$$Tick
void LifeModule__Tick (LifeModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LifeModule$$Tick
   void LifeModule__Tick (LifeModule_o* __this, const MethodInfo* method); */

void LifeModule__Tick_2545ae0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  iVar3 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x18,0);
  puVar2 = PTR_DAT_049b5f98;
  if (4 < iVar3) {
    return;
  }
  if ((bRam0000000004f4c003 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98);
    bRam0000000004f4c003 = 1;
  }
  uVar5 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                    (param_1 + 0x38,*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_049b6128;
  puVar2 = PTR_DAT_049b5fc8;
  if ((uVar5 & 1) != 0) {
    if ((bRam0000000004f4c005 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c4fd8);
      FUN_021f03f8(PTR_DAT_049b5fa0);
      FUN_021f03f8(PTR_DAT_049b5050);
      FUN_021f03f8(PTR_DAT_049b5fc8);
      FUN_021f03f8(PTR_DAT_049b6128);
      bRam0000000004f4c005 = 1;
    }
    auStack_40._0_8_ = 0;
    auStack_40._8_8_ = 0;
    auStack_50._0_8_ = 0;
    auStack_50._8_8_ = 0;
    uVar6 = LifeModule__GetRemainingTime_2545e88(param_1);
    lVar7 = *(long *)puVar1;
    auStack_40._8_8_ = uVar6;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574(lVar7);
      lVar7 = *(long *)puVar1;
    }
    uVar5 = System_TimeSpan__op_GreaterThan_3117960(uVar6,**(undefined8 **)(lVar7 + 0xb8),0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_40._0_8_ = System_TimeSpan__Negate_311706c(auStack_40 + 8,0);
      dVar8 = (double)System_TimeSpan__get_TotalMinutes_3116bdc(auStack_40,0);
      iVar3 = -0x7fffffff;
      if (dVar8 / 30.0 != INFINITY) {
        iVar3 = (int)(dVar8 / 30.0) + 1;
      }
      iVar4 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x18,0);
      if (5 - iVar4 <= iVar3) {
        iVar3 = 5 - iVar4;
      }
      if (0 < iVar3) {
        do {
          LifeModule__GainLife_2545fd0(param_1);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x18,0);
      if (iVar3 < 5) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar6 = System_TimeSpan__FromMinutes_311700c(0x403e000000000000,0);
        uVar9 = System_TimeSpan__get_TotalMinutes_3116bdc(auStack_40,0);
        FUN_046086f0(uVar9,0x403e000000000000);
        uVar9 = System_TimeSpan__FromMinutes_311700c(0);
        uVar6 = System_TimeSpan__op_Subtraction_3117688(uVar6,uVar9,0);
        if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
          FUN_021f0574(*(long *)PTR_DAT_049b5fc8);
        }
        auStack_50 = TimeProvider__get_UtcNow_24f95ec(0);
        if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auStack_30 = System_DateTimeOffset__Add_30e166c(auStack_50,uVar6,0);
        CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
                  (param_1 + 0x38,auStack_30,*(undefined8 *)PTR_DAT_049b5fa0);
      }
      else {
        CloudPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_28028c4
                  (param_1 + 0x38,*(undefined8 *)PTR_DAT_049c4fd8);
      }
    }
    return;
  }
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

