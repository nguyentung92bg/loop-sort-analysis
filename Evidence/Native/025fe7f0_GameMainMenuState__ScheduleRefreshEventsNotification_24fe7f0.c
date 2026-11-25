/* IL2CPP: GameMainMenuState$$ScheduleRefreshEventsNotification
void GameMainMenuState__ScheduleRefreshEventsNotification (GameMainMenuState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameMainMenuState$$ScheduleRefreshEventsNotification
   void GameMainMenuState__ScheduleRefreshEventsNotification (GameMainMenuState_o* __this, const
   MethodInfo* method); */

void GameMainMenuState__ScheduleRefreshEventsNotification_24fe7f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [16];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  
  if ((bRam0000000004f4bd64 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98);
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049c8b58);
    FUN_021f03f8(PTR_DAT_049c8b60);
    FUN_021f03f8(PTR_DAT_049c8b68);
    FUN_021f03f8(PTR_DAT_049c8b70);
    FUN_021f03f8(PTR_DAT_049c8b78);
    FUN_021f03f8(PTR_DAT_049c8b80);
    FUN_021f03f8(PTR_DAT_049c8b88);
    FUN_021f03f8(PTR_DAT_049c8b90);
    FUN_021f03f8(PTR_DAT_049c8b98);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4bd64 = 1;
  }
  puVar7 = PTR_DAT_049c8b80;
  puVar6 = PTR_DAT_049c8b68;
  puVar5 = PTR_DAT_049c8b60;
  puVar4 = PTR_DAT_049b5fc8;
  puVar3 = PTR_DAT_049b5fa8;
  puVar2 = PTR_DAT_049b5f98;
  puVar1 = PTR_DAT_049b5050;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  auStack_190._0_8_ = 0;
  auStack_190._8_8_ = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_160 = 0;
  if ((*(long *)(param_1 + 0x90) == 0) ||
     (lVar11 = *(long *)(*(long *)(param_1 + 0x90) + 0x88), lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auStack_190 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                          (lVar11,*(undefined8 *)PTR_DAT_049c8b98);
  puStack_68 = auStack_190;
  uStack_70 = 0;
LAB_025fe948:
  do {
    do {
      uVar12 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                         (auStack_190,*(undefined8 *)puVar5);
      if ((uVar12 & 1) == 0) {
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_190,*(undefined8 *)PTR_DAT_049c8b58);
        lVar11 = *(long *)(*(long *)PTR_DAT_049c8b88 + 0x20);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02229718();
        }
        pcVar13 = (char *)thunk_FUN_0224e54c(&uStack_170,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
        if (*pcVar13 != '\0') {
          System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
                    (&uStack_170,&uStack_140,*(undefined8 *)PTR_DAT_049c8b90);
          uStack_1c8 = uStack_138;
          uStack_1d0 = uStack_140;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar14 = System_DateTimeOffset__get_LocalDateTime_30e0f24(&uStack_1d0,0);
          Unity_Notifications_NotificationDateTimeSchedule___ctor_3a04b84(&uStack_180,uVar14,0,0);
          puVar1 = PTR_DAT_049c8b78;
          lVar11 = *(long *)PTR_DAT_049c8b78;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            FUN_021f0574();
            lVar11 = *(long *)puVar1;
          }
          func_0x04608620(&uStack_140,*(long *)(lVar11 + 0xb8) + 0x4e0,0xd0);
          puStack_68 = (undefined1 *)uStack_178;
          uStack_70 = uStack_180;
          Unity_Notifications_NotificationCenter__ScheduleNotification___Il2CppFullySharedGenericType__2694a7c
                    (&uStack_140,&uStack_70,*(undefined8 *)PTR_DAT_049c8b70);
        }
        return;
      }
      lVar11 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                         (auStack_190,*(undefined8 *)puVar6);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_1b8 = *(undefined8 *)(lVar11 + 0x40);
      uStack_1c0 = *(undefined8 *)(lVar11 + 0x38);
      uStack_1a8 = *(undefined8 *)(lVar11 + 0x50);
      uStack_1b0 = *(undefined8 *)(lVar11 + 0x48);
      uStack_198 = *(undefined8 *)(lVar11 + 0x60);
      uStack_1a0 = *(undefined8 *)(lVar11 + 0x58);
      uVar12 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                         (&uStack_1c0,*(undefined8 *)puVar2);
    } while ((uVar12 & 1) == 0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar15 = TimeProvider__get_UtcNow_24f95ec();
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (&uStack_1c0,&uStack_150,*(undefined8 *)puVar3);
    uVar8 = uStack_148;
    uVar14 = uStack_150;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar12 = System_DateTimeOffset__op_GreaterThanOrEqual_30e496c
                       (auVar15._0_8_,auVar15._8_8_,uVar14,uVar8,0);
  } while ((uVar12 & 1) != 0);
  lVar11 = *(long *)(*(long *)PTR_DAT_049c8b88 + 0x20);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02229718();
  }
  pcVar13 = (char *)thunk_FUN_0224e54c(&uStack_170,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
  if (*pcVar13 != '\0') goto code_r0x025fea24;
  goto LAB_025fea80;
code_r0x025fea24:
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (&uStack_1c0,&uStack_150,*(undefined8 *)puVar3);
  uVar9 = uStack_148;
  uVar14 = uStack_150;
  System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
            (&uStack_170,&uStack_150,*(undefined8 *)PTR_DAT_049c8b90);
  uVar10 = uStack_148;
  uVar8 = uStack_150;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar12 = System_DateTimeOffset__op_GreaterThan_30e48c8(uVar14,uVar9,uVar8,uVar10,0);
  if ((uVar12 & 1) == 0) {
LAB_025fea80:
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (&uStack_1c0,&uStack_150,*(undefined8 *)puVar3);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_140,&uStack_150,*(undefined8 *)puVar7);
    uStack_168 = uStack_138;
    uStack_170 = uStack_140;
    uStack_160 = uStack_130;
  }
  goto LAB_025fe948;
}

