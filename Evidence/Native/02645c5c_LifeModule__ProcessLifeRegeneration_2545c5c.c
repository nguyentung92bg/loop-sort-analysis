/* IL2CPP: LifeModule$$ProcessLifeRegeneration
void LifeModule__ProcessLifeRegeneration (LifeModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LifeModule$$ProcessLifeRegeneration
   void LifeModule__ProcessLifeRegeneration (LifeModule_o* __this, const MethodInfo* method); */

void LifeModule__ProcessLifeRegeneration_2545c5c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  undefined8 uVar8;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_DAT_049b6128;
  if ((bRam0000000004f4c005 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4fd8);
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4c005 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  uVar4 = LifeModule__GetRemainingTime_2545e88(param_1);
  lVar6 = *(long *)puVar1;
  uStack_38 = uVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574(lVar6);
    lVar6 = *(long *)puVar1;
  }
  uVar5 = System_TimeSpan__op_GreaterThan_3117960(uVar4,**(undefined8 **)(lVar6 + 0xb8),0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uStack_40 = System_TimeSpan__Negate_311706c(&uStack_38,0);
    dVar7 = (double)System_TimeSpan__get_TotalMinutes_3116bdc(&uStack_40,0);
    iVar3 = -0x7fffffff;
    if (dVar7 / 30.0 != INFINITY) {
      iVar3 = (int)(dVar7 / 30.0) + 1;
    }
    iVar2 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x18,0);
    if (5 - iVar2 <= iVar3) {
      iVar3 = 5 - iVar2;
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
      uVar4 = System_TimeSpan__FromMinutes_311700c(0x403e000000000000,0);
      uVar8 = System_TimeSpan__get_TotalMinutes_3116bdc(&uStack_40,0);
      FUN_046086f0(uVar8,0x403e000000000000);
      uVar8 = System_TimeSpan__FromMinutes_311700c(0);
      uVar4 = System_TimeSpan__op_Subtraction_3117688(uVar4,uVar8,0);
      if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b5fc8);
      }
      auStack_50 = TimeProvider__get_UtcNow_24f95ec(0);
      if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_30 = System_DateTimeOffset__Add_30e166c(auStack_50,uVar4,0);
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

