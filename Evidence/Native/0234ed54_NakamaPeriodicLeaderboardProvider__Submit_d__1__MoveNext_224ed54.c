/* IL2CPP: NakamaPeriodicLeaderboardProvider.<Submit>d__1$$MoveNext
void NakamaPeriodicLeaderboardProvider__Submit_d__1__MoveNext (NakamaPeriodicLeaderboardProvider__Submit_d__1_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaPeriodicLeaderboardProvider.<Submit>d__1$$MoveNext
   void NakamaPeriodicLeaderboardProvider__Submit_d__1__MoveNext
   (NakamaPeriodicLeaderboardProvider__Submit_d__1_o __this, const MethodInfo* method); */

void NakamaPeriodicLeaderboardProvider__Submit_d__1__MoveNext_224ed54(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_168;
  undefined1 auStack_160 [144];
  undefined1 auStack_d0 [144];
  undefined8 uStack_38;
  
  if ((bRam0000000004f49b7d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5d48);
    FUN_021f03f8(PTR_DAT_049b5d50);
    FUN_021f03f8(PTR_DAT_049b5c98);
    FUN_021f03f8(PTR_DAT_049b5ca0);
    FUN_021f03f8(PTR_DAT_049b5ca8);
    FUN_021f03f8(PTR_DAT_049b5c38);
    FUN_021f03f8(PTR_DAT_049b5c48);
    FUN_021f03f8(PTR_DAT_049b5c58);
    FUN_021f03f8(PTR_DAT_049b5c60);
    FUN_021f03f8(PTR_DAT_049b5cc8);
    bRam0000000004f49b7d = 1;
  }
  func_0x04608670(auStack_d0,0,0x90);
  func_0x04608670(auStack_160,0,0x90);
  uStack_38 = 0;
  uStack_168 = 0;
  if (*param_1 == 0) {
    func_0x04608620(auStack_d0,param_1 + 0x10,0x90);
    func_0x04608670(param_1 + 0x10,0,0x90);
    *param_1 = -1;
LAB_0234ef30:
    FUN_0235b3fc(auStack_d0,&uStack_200,*(undefined8 *)PTR_DAT_049b5ca0);
    uVar6 = CONCAT44(uStack_1fc,uStack_200);
    uVar5 = System_String__IsNullOrEmpty_2f7c924(uVar6,0);
    if ((uVar5 & 1) != 0) {
      uStack_200 = 2;
      goto LAB_0234f03c;
    }
    plVar11 = *(long **)(param_1 + 0xe);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = *plVar11;
    uVar1 = *(undefined8 *)(param_1 + 10);
    uVar2 = *(undefined8 *)(param_1 + 0xc);
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b5c38) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0234efd0;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049b5c38,1);
LAB_0234efd0:
    lVar9 = (*(code *)*puVar7)(plVar11,uVar6,uVar2,uVar1,puVar7[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_38 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                          (lVar9,*(undefined8 *)PTR_DAT_049b5c60);
    uVar5 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                      (&uStack_38,*(undefined8 *)PTR_DAT_049b5c58);
    if ((uVar5 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x34) = uStack_38;
      thunk_FUN_021f190c(param_1 + 0x34,0);
      FUN_0235bb44(param_1 + 2,&uStack_38,param_1,*(undefined8 *)PTR_DAT_049b5d50);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      lVar9 = *(long *)(param_1 + 8);
      uVar5 = NakamaServices__TryGetPeriodicLeaderboard_224ddc0(param_1 + 0xe);
      if ((uVar5 & 1) == 0) {
        uStack_200 = 0;
        goto LAB_0234f03c;
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      NakamaPeriodicLeaderboardProvider__GetInstance_224cd10
                (&uStack_200,uVar5,0,*(undefined8 *)(param_1 + 10));
      func_0x04608620(auStack_160,&uStack_200,0x90);
      FUN_0235b0c0(auStack_160,&uStack_200,*(undefined8 *)PTR_DAT_049b5cc8);
      func_0x04608620(auStack_d0,&uStack_200,0x90);
      lVar10 = *(long *)PTR_DAT_049b5ca8;
      lVar9 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02229718();
      }
      uVar6 = thunk_FUN_0224e54c(auStack_d0,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0x80));
      lVar9 = *(long *)(lVar10 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02229718();
      }
      iVar4 = FUN_0235b2a0(uVar6,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18));
      if (iVar4 == 0) {
        *param_1 = 0;
        func_0x04608620(param_1 + 0x10,auStack_d0,0x90);
        thunk_FUN_021f190c(param_1 + 0x10,0);
        FUN_0235bb44(param_1 + 2,auStack_d0,param_1,*(undefined8 *)PTR_DAT_049b5d48);
        return;
      }
      goto LAB_0234ef30;
    }
    uStack_38 = *(undefined8 *)(param_1 + 0x34);
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    *param_1 = -1;
  }
  System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
            (&uStack_38,&uStack_200,*(undefined8 *)PTR_DAT_049b5c48);
  uStack_200 = Extensions__ToGameType_223d934(CONCAT44(uStack_1fc,uStack_200));
LAB_0234f03c:
  puVar3 = PTR_DAT_049b5c98;
  piVar8 = param_1 + 0xe;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *param_1 = -2;
  thunk_FUN_021f190c(piVar8,0);
  FUN_0235bed4(param_1 + 2,&uStack_200,*(undefined8 *)puVar3);
  return;
}

