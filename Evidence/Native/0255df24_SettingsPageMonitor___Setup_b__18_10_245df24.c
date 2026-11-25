/* IL2CPP: SettingsPageMonitor$$<Setup>b__18_10
void SettingsPageMonitor___Setup_b__18_10 (SettingsPageMonitor_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03ca50f8) */
/* WARNING: Removing unreachable block (ram,0x03ca5108) */
/* IL2CPP: SettingsPageMonitor$$<Setup>b__18_10
   void SettingsPageMonitor___Setup_b__18_10 (SettingsPageMonitor_o* __this, bool isActive, const
   MethodInfo* method); */

void SettingsPageMonitor___Setup_b__18_10_245df24(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_230 [208];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_6c [4];
  undefined1 *puStack_68;
  ulong uStack_60;
  long lStack_58;
  
  puVar2 = PTR_DAT_049b52a8;
  lVar4 = *(long *)(param_1 + 0x98);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar1 = param_2 & 1;
  if ((bRam0000000004f4bf7b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8,uVar1,0);
    bRam0000000004f4bf7b = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsBool__Set_3f0e92c(lVar4 + 0x68,uVar1,0);
  puVar3 = PTR_DAT_049cdff8;
  puVar2 = PTR_DAT_049b5fb0;
  if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((param_2 & 1) != 0) {
    if ((bRam0000000004f4c052 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049b5fb0,uVar1,0);
      FUN_021f03f8(PTR_DAT_049c8b70);
      FUN_021f03f8(PTR_DAT_049c8b78);
      bRam0000000004f4c052 = 1;
    }
    puVar3 = PTR_DAT_049c8b78;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar2 = PTR_DAT_049c8b70;
    System_DateTime__get_Now_30dd928(0);
    uVar5 = System_DateTime__AddHours_30dc11c(0x4038000000000000,&stack0xffffffffffffffd8,0);
    Unity_Notifications_NotificationDateTimeSchedule___ctor_3a04b84(&uStack_120,uVar5,0,0);
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar3;
    }
    func_0x04608620(auStack_230,*(undefined8 *)(lVar4 + 0xb8),0xd0);
    uVar5 = *(undefined8 *)puVar2;
    func_0x04608620(auStack_110,auStack_230,0xd0);
    Unity_Notifications_NotificationCenter__ScheduleNotification___Il2CppFullySharedGenericType__2694a7c
              (auStack_110,&stack0xffffffffffffffc0,uVar5);
    uVar5 = System_DateTime__AddHours_30dc11c(0x4048000000000000,&stack0xffffffffffffffd8,0);
    Unity_Notifications_NotificationDateTimeSchedule___ctor_3a04b84(&uStack_130,uVar5,0,0);
    func_0x04608620(auStack_110,*(long *)(*(long *)puVar3 + 0xb8) + 0xd0,0xd0);
    Unity_Notifications_NotificationCenter__ScheduleNotification___Il2CppFullySharedGenericType__2694a7c
              (auStack_110,&stack0xffffffffffffffc0,*(undefined8 *)puVar2);
    uVar5 = System_DateTime__AddDays_30dc0b0(0x401c000000000000,&stack0xffffffffffffffd8,0);
    Unity_Notifications_NotificationDateTimeSchedule___ctor_3a04b84(&uStack_140,uVar5,0,0);
    func_0x04608620(auStack_110,*(long *)(*(long *)puVar3 + 0xb8) + 0x1a0,0xd0);
    Unity_Notifications_NotificationCenter__ScheduleNotification___Il2CppFullySharedGenericType__2694a7c
              (auStack_110,&stack0xffffffffffffffc0,*(undefined8 *)puVar2);
    uVar5 = System_DateTime__AddDays_30dc0b0(0x402c000000000000,&stack0xffffffffffffffd8,0);
    Unity_Notifications_NotificationDateTimeSchedule___ctor_3a04b84(&uStack_150,uVar5,0,0);
    func_0x04608620(auStack_110,*(long *)(*(long *)puVar3 + 0xb8) + 0x270,0xd0);
    Unity_Notifications_NotificationCenter__ScheduleNotification___Il2CppFullySharedGenericType__2694a7c
              (auStack_110,&stack0xffffffffffffffc0,*(undefined8 *)puVar2);
    uVar5 = System_DateTime__AddDays_30dc0b0(0x403e000000000000,&stack0xffffffffffffffd8,0);
    Unity_Notifications_NotificationDateTimeSchedule___ctor_3a04b84(&uStack_160,uVar5,0,0);
    func_0x04608620(auStack_110,*(long *)(*(long *)puVar3 + 0xb8) + 0x340,0xd0);
    Unity_Notifications_NotificationCenter__ScheduleNotification___Il2CppFullySharedGenericType__2694a7c
              (auStack_110,&stack0xffffffffffffffc0,*(undefined8 *)puVar2);
    return;
  }
  uVar5 = 0;
  if ((bRam0000000004f543ee & 1) == 0) {
    uVar5 = FUN_021f03f8(PTR_DAT_049cdff8,uVar1,0);
    bRam0000000004f543ee = 1;
  }
  Unity_Notifications_NotificationCenter__CheckInitialized_3a04328(uVar5);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049cdff8;
  if ((bRam0000000004f543c0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cdff8);
    bRam0000000004f543c0 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar6 = Unity_Notifications_Android_AndroidNotificationCenter__Initialize_39fea30();
  if ((uVar6 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_049b3c88;
  lVar4 = *(long *)(lVar4 + 0xb8);
  if ((bRam0000000004f54376 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c88);
    FUN_021f03f8(PTR_DAT_04a1b0e8);
    bRam0000000004f54376 = 1;
  }
  lVar10 = *(long *)puVar2;
  lVar9 = *(long *)(lVar4 + 0x30);
  lVar4 = *(long *)(lVar10 + 0x38);
  if (lVar4 == 0) {
    FUN_02229774(lVar10);
    lVar4 = *(long *)(lVar10 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar4 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(lVar9,*(undefined8 *)PTR_DAT_04a1b0e8,lVar4,0);
  }
  uVar5 = UnityEngine_AndroidJNIHelper__GetMethodID_3b950e4
                    (*(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x18),*(undefined8 *)PTR_DAT_04a1b0e8
                     ,lVar4,0);
  lVar10 = tpidr_el0;
  lStack_58 = *(long *)(lVar10 + 0x28);
  if ((bRam0000000004f5585a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a24de0);
    FUN_021f03f8(PTR_DAT_049ccad8);
    FUN_021f03f8(PTR_DAT_049ccae0);
    bRam0000000004f5585a = 1;
  }
  puStack_68 = (undefined1 *)0x0;
  uStack_60 = 0;
  auStack_6c[0] = 0;
  if ((lVar4 == 0) || (uVar6 = *(ulong *)(lVar4 + 0x18), uVar6 == 0)) {
    puVar11 = (undefined1 *)0x0;
    puStack_68 = (undefined1 *)0x0;
    uStack_60 = 0;
  }
  else {
    if ((uVar6 & 0xffffffff) == 0) {
      puVar11 = (undefined1 *)0x0;
    }
    else {
      puVar11 = auStack_90 +
                -((-(uVar6 >> 0x1f & 1) & 0xfffffff800000000 | (uVar6 & 0xffffffff) << 3) + 0xf &
                 0xfffffffffffffff0);
    }
    func_0x04608670(puVar11,0);
    lVar12 = *(long *)PTR_DAT_049ccad8;
    lVar7 = *(long *)(lVar12 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    uVar8 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x40));
    if ((uVar8 & 1) != 0) {
      lVar7 = *(long *)(lVar12 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
        FUN_021f0574(*(long *)(PTR_DAT_049b3bd0 + 0xe0));
      }
      uVar13 = System_Type__GetTypeFromHandle_310ebfc(uVar13,0);
      System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar13,0);
    }
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException_312048c(0);
    }
    uStack_60 = uVar6 & 0xffffffff;
    puStack_68 = puVar11;
    if ((int)uVar6 != 0) {
      UnityEngine_AndroidJNISafe__PushLocalFrame_3b9e81c(uVar6 & 0xffffffff);
      UnityEngine_AndroidJNIHelper__CreateJNIArgArray_3b94c80(lVar4,puVar11,uStack_60);
    }
  }
  ppuStack_80 = &puStack_68;
  uStack_88 = 0;
  puStack_78 = auStack_6c;
  if (*(long *)(lVar9 + 0x10) == 0) {
    if (*(long *)(lVar10 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    UnityEngine_AndroidJNISafe__CallVoidMethod_3ba09cc
              (*(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x18),uVar5,puVar11,uStack_60);
    auStack_6c[0] = 0 < (int)uStack_60;
    if (0 < (int)uStack_60) {
      if (pcRam0000000004f552b0 == (code *)0x0) {
        pcRam0000000004f552b0 = (code *)FUN_021f03bc(&UNK_013b69fe);
      }
      (*pcRam0000000004f552b0)(0);
    }
    if (*(long *)(lVar10 + 0x28) == lStack_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

