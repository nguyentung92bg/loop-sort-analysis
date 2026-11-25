/* IL2CPP: AntiCheatModule$$IsDetected
bool AntiCheatModule__IsDetected (AntiCheatModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: AntiCheatModule$$IsDetected
   bool AntiCheatModule__IsDetected (AntiCheatModule_o* __this, const MethodInfo* method); */

undefined8 AntiCheatModule__IsDetected_252f758(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4bf10 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98);
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4bf10 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uVar7 = Game__IsReleaseBuild_24f4ca0(0);
  puVar1 = PTR_DAT_049b5310;
  if ((uVar7 & 1) == 0) {
    lVar8 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar1;
    }
    uVar5 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar8 + 0xb8) + 0x60,0);
    if (299999 < uVar5) {
      return 1;
    }
    if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar11 = TimeProvider__get_UtcNow_24f95ec(0);
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_049b5f98;
    uVar7 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                      (*(long *)(lVar8 + 0xb8) + 0x3b8,*(undefined8 *)PTR_DAT_049b5f98);
    if ((uVar7 & 1) != 0) {
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_021f0574();
        lVar8 = *(long *)puVar1;
      }
      CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                (*(long *)(lVar8 + 0xb8) + 0x3b8,&uStack_50,*(undefined8 *)PTR_DAT_049b5fa8);
      uVar4 = uStack_48;
      uVar9 = uStack_50;
      if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar9 = System_DateTimeOffset__op_Subtraction_30e4594
                        (auVar11._0_8_,auVar11._8_8_,uVar9,uVar4,0);
      puVar3 = PTR_DAT_049b6128;
      lVar8 = *(long *)PTR_DAT_049b6128;
      uStack_58 = uVar9;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_021f0574(lVar8);
        lVar8 = *(long *)puVar3;
      }
      uVar7 = System_TimeSpan__op_GreaterThan_3117960(uVar9,**(undefined8 **)(lVar8 + 0xb8),0);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        dVar10 = (double)System_TimeSpan__get_TotalDays_3116b74(&uStack_58,0);
        if (dVar10 * _UNK_013a8008 + _UNK_013a8008 < (double)(int)(uVar5 + 1)) {
          return 1;
        }
      }
    }
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar1;
    }
    uVar7 = CloudPrefsInt__HasValue_24e9b24(*(long *)(lVar8 + 0xb8) + 0x7f0,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_021f0574();
        lVar8 = *(long *)puVar1;
      }
      uVar7 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                        (*(long *)(lVar8 + 0xb8) + 0x810,*(undefined8 *)puVar2);
      if ((uVar7 & 1) != 0) {
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          FUN_021f0574();
          lVar8 = *(long *)puVar1;
        }
        CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                  (*(long *)(lVar8 + 0xb8) + 0x810,&uStack_50,*(undefined8 *)PTR_DAT_049b5fa8);
        if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar9 = System_DateTimeOffset__op_Subtraction_30e4594
                          (auVar11._0_8_,auVar11._8_8_,uStack_50,uStack_48,0);
        uStack_60 = uVar9;
        iVar6 = CloudPrefsInt__get_Value_24e99c0(*(long *)(*(long *)puVar1 + 0xb8) + 0x7f0,0);
        puVar1 = PTR_DAT_049b6128;
        iVar6 = (uVar5 + 1) - iVar6;
        lVar8 = *(long *)PTR_DAT_049b6128;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          FUN_021f0574(lVar8);
          lVar8 = *(long *)puVar1;
        }
        uVar7 = System_TimeSpan__op_GreaterThan_3117960(uVar9,**(undefined8 **)(lVar8 + 0xb8),0);
        if ((0 < iVar6) && ((uVar7 & 1) != 0)) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574();
          }
          dVar10 = (double)System_TimeSpan__get_TotalDays_3116b74(&uStack_60,0);
          if (dVar10 * _UNK_013a8008 + 100.0 < (double)iVar6) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

