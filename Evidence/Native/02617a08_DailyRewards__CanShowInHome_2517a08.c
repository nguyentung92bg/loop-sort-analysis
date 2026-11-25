/* IL2CPP: DailyRewards$$CanShowInHome
bool DailyRewards__CanShowInHome (DailyRewards_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewards$$CanShowInHome
   bool DailyRewards__CanShowInHome (DailyRewards_o* __this, const MethodInfo* method); */

bool DailyRewards__CanShowInHome_2517a08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_049b5310;
                    /* try { // try from 02617a08 to 02717a0b has its CatchHandler @ 02617a14 */
                    /* try { // try from 02617a0c to 02717a17 has its CatchHandler @ 0261531c */
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* try { // try from 02617a24 to 02717ab7 has its CatchHandler @ 02617a24
                       catch() { ... } // from try @ 02617a24 with catch @ 02617a24
                       catch() { ... } // from try @ 02617d18 with catch @ 02617a24
                       catch() { ... } // from try @ 02617e2c with catch @ 02617a24
                       catch() { ... } // from try @ 02617eb8 with catch @ 02617a24
                       catch() { ... } // from try @ 02617ee4 with catch @ 02617a24
                       catch() { ... } // from try @ 02617f4c with catch @ 02617a24 */
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* catch() { ... } // from try @ 02617a08 with catch @ 02617a14 */
  if (*(char *)(*(long *)(param_1 + 0x40) + 0x10) != '\0') {
    if ((bRam0000000004f4be26 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049b5f98);
      FUN_021f03f8(PTR_DAT_049b5fa8);
      FUN_021f03f8(PTR_DAT_049b5050);
      FUN_021f03f8(PTR_DAT_049b5fb0);
      FUN_021f03f8(PTR_DAT_049b5310);
      FUN_021f03f8(PTR_DAT_049b5fc8);
      FUN_021f03f8(PTR_DAT_049b6128);
      bRam0000000004f4be26 = 1;
    }
    puVar3 = PTR_DAT_049b5f98;
    lVar6 = *(long *)puVar2;
    uStack_38 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    auStack_70._0_8_ = 0;
    auStack_70._8_8_ = 0;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar2;
    }
    puVar5 = PTR_DAT_049b5fc8;
    puVar4 = PTR_DAT_049b5fa8;
    puVar1 = PTR_DAT_049b5050;
    uVar7 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                      (*(long *)(lVar6 + 0xb8) + 0x408,*(undefined8 *)puVar3);
    if ((uVar7 & 1) != 0) {
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar2;
      }
      CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                (*(long *)(lVar6 + 0xb8) + 0x408,&uStack_50,*(undefined8 *)puVar4);
      uStack_58 = uStack_48;
      uStack_60 = uStack_50;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      puVar3 = PTR_DAT_049b5fb0;
      uVar8 = System_DateTimeOffset__get_Date_30e0fe4(&uStack_60,0);
      lVar6 = *(long *)puVar5;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574(lVar6);
      }
      auStack_70 = TimeProvider__get_Now_24f4584(0);
      uVar9 = System_DateTimeOffset__get_Date_30e0fe4(auStack_70,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar3);
      }
      uVar7 = System_DateTime__op_GreaterThanOrEqual_30df918(uVar8,uVar9,0);
      if ((uVar7 & 1) != 0) {
        return false;
      }
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar11 = TimeProvider__get_UtcNow_24f95ec(0);
    lVar6 = *(long *)puVar2;
    auStack_70 = auVar11;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_049b6128;
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (*(long *)(lVar6 + 0xb8) + 0x3b8,&uStack_50,*(undefined8 *)puVar4);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uStack_38 = System_DateTimeOffset__Subtract_30e2d84(auStack_70,uStack_50,uStack_48,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar2);
    }
    dVar10 = (double)System_TimeSpan__get_TotalDays_3116b74(&uStack_38,0);
    return 1.0 <= dVar10;
  }
  return false;
}

