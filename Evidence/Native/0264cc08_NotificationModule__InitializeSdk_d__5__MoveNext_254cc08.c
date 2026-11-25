/* IL2CPP: NotificationModule.<InitializeSdk>d__5$$MoveNext
void NotificationModule__InitializeSdk_d__5__MoveNext (NotificationModule__InitializeSdk_d__5_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NotificationModule.<InitializeSdk>d__5$$MoveNext
   void NotificationModule__InitializeSdk_d__5__MoveNext (NotificationModule__InitializeSdk_d__5_o
   __this, const MethodInfo* method); */

void NotificationModule__InitializeSdk_d__5__MoveNext_254cc08(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_210 [208];
  undefined1 aauStack_140 [14] [16];
  undefined4 uStack_58;
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4c056 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caa98);
    FUN_021f03f8(PTR_DAT_049caaa0);
    FUN_021f03f8(PTR_DAT_049b52a8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4c056 = 1;
  }
  puVar1 = PTR_DAT_049b5138;
  lVar10 = *(long *)(param_1 + 6);
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  uStack_58 = 0;
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      auStack_50 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
      goto LAB_0264cfe4;
    }
    uVar4 = Unity_Notifications_NotificationCenter__RequestPermission_3a042d4(0);
    aauStack_140[0] =
         Cysharp_Threading_Tasks_EnumeratorAsyncExtensions__ToUniTask_37c1364(uVar4,8,0,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(aauStack_140,0);
    auStack_50 = aauStack_140[0];
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar4 = auStack_50._0_8_;
    if ((long *)auStack_50._0_8_ != (long *)0x0) {
      lVar6 = *(long *)auStack_50._0_8_;
      uVar11 = auStack_50._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0264cdc0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_50._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0264cdc0:
      iVar3 = (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_50;
                    /* try { // try from 0264d1ec to 0274d1ff has its CatchHandler @ 0264d05c */
        thunk_FUN_021f190c(param_1 + 10,0);
                    /* try { // try from 0264d200 to 0274d217 has its CatchHandler @ 0264d3d8 */
        FUN_0235c25c(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_049caa98);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar4 = auStack_50._0_8_;
  if ((long *)auStack_50._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_50._0_8_;
    uVar11 = auStack_50._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0264ce54;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_50._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0264ce54:
    (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
  }
  puVar2 = PTR_DAT_049b5310;
  if (*(int *)(*(long *)PTR_DAT_049b5310 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (*(int *)(*(long *)PTR_DAT_049b52a8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar7 = PlayerPrefsBool__get_Value_3f0e6dc(*(long *)(*(long *)puVar2 + 0xb8) + 0x308,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((uVar7 & 1) == 0) {
    Unity_Notifications_NotificationCenter__CancelAllScheduledNotifications_3a047c0(0);
  }
  else {
    NotificationModule__ScheduleReminderNotifications_254c5a4();
  }
  uVar4 = Unity_Notifications_NotificationCenter__QueryLastRespondedNotification_3a04584(0);
  piVar8 = param_1 + 8;
  *(undefined8 *)piVar8 = uVar4;
  thunk_FUN_021f190c(piVar8);
  auVar12 = Cysharp_Threading_Tasks_EnumeratorAsyncExtensions__ToUniTask_37c1364
                      (*(undefined8 *)piVar8,8,0,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  aauStack_140[0] = auVar12;
  thunk_FUN_021f190c(aauStack_140,0);
  auStack_50 = aauStack_140[0];
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar4 = auStack_50._0_8_;
  if ((long *)auStack_50._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_50._0_8_;
    uVar11 = auStack_50._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0264cfd0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_50._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0264cfd0:
    iVar3 = (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
    if (iVar3 == 0) {
                    /* try { // try from 0264d1a0 to 0274d1eb has its CatchHandler @ 0264d3dc */
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 10) = auStack_50;
      thunk_FUN_021f190c(param_1 + 10,0);
      FUN_0235c25c(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_049caa98);
      return;
    }
  }
LAB_0264cfe4:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar4 = auStack_50._0_8_;
  if ((long *)auStack_50._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_50._0_8_;
    uVar11 = auStack_50._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 0264d05c to 0274d17f has its CatchHandler @ 0264d05c
                       catch() { ... } // from try @ 0264d05c with catch @ 0264d05c
                       catch() { ... } // from try @ 0264d1ec with catch @ 0264d05c
                       catch() { ... } // from try @ 0264d218 with catch @ 0264d05c
                       catch() { ... } // from try @ 0264d3c8 with catch @ 0264d05c
                       catch() { ... } // from try @ 0264d3fc with catch @ 0264d05c
                       catch() { ... } // from try @ 0264d420 with catch @ 0264d05c */
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0264d064;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_50._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0264d064:
    (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
  }
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lVar6 + 0xe8) == 2) {
    Unity_Notifications_QueryLastRespondedNotificationOp__get_Notification_3a04dd8
              (aauStack_140,lVar6,0);
    func_0x04608620(auStack_210,aauStack_140,0xd0);
    func_0x04608670(aauStack_140,0,0xd8);
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (aauStack_140,auStack_210,*(undefined8 *)PTR_DAT_049caaa0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    func_0x04608620(lVar10 + 0x10,aauStack_140,0xd8);
    thunk_FUN_021f190c(lVar10 + 0x18,0);
    NotificationModule__HandleLastRespondedNotification_254c8b0(lVar10);
  }
  *param_1 = -2;
  param_1[8] = 0;
  param_1[9] = 0;
  thunk_FUN_021f190c(param_1 + 8,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b56d0) {
                    /* try { // try from 0264d180 to 0274d187 has its CatchHandler @ 0264d3d4 */
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0264d190;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b56d0,2);
LAB_0264d190:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
                    /* try { // try from 0264d218 to 0274d3bf has its CatchHandler @ 0264d05c */
  return;
}

