/* IL2CPP: NakamaPeriodicLeaderboardProvider.<End>d__2$$MoveNext
void NakamaPeriodicLeaderboardProvider__End_d__2__MoveNext (NakamaPeriodicLeaderboardProvider__End_d__2_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaPeriodicLeaderboardProvider.<End>d__2$$MoveNext
   void NakamaPeriodicLeaderboardProvider__End_d__2__MoveNext
   (NakamaPeriodicLeaderboardProvider__End_d__2_o __this, const MethodInfo* method); */

void NakamaPeriodicLeaderboardProvider__End_d__2__MoveNext_224df0c(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [144];
  undefined1 auStack_c0 [144];
  
  if ((bRam0000000004f49b79 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5c88);
    FUN_021f03f8(PTR_DAT_049b5c90);
    FUN_021f03f8(PTR_DAT_049b5c98);
    FUN_021f03f8(PTR_DAT_049b5ca0);
    FUN_021f03f8(PTR_DAT_049b5ca8);
    FUN_021f03f8(PTR_DAT_049b5c38);
    FUN_021f03f8(PTR_DAT_049b5cb0);
    FUN_021f03f8(PTR_DAT_049b5cb8);
    FUN_021f03f8(PTR_DAT_049b5cc0);
    FUN_021f03f8(PTR_DAT_049b5cc8);
    bRam0000000004f49b79 = 1;
  }
  func_0x04608670(auStack_c0,0,0x90);
  func_0x04608670(auStack_150,0,0x90);
  uStack_158 = 0;
  uStack_160 = 0;
  if (*param_1 == 0) {
    func_0x04608620(auStack_c0,param_1 + 0xe,0x90);
    func_0x04608670(param_1 + 0xe,0,0x90);
    *param_1 = -1;
LAB_0234e0e4:
    FUN_0235b3fc(auStack_c0,&uStack_1f8,*(undefined8 *)PTR_DAT_049b5ca0);
    uVar4 = CONCAT44(uStack_1f4,uStack_1f8);
    uVar3 = System_String__IsNullOrEmpty_2f7c924(uVar4,0);
    if ((uVar3 & 1) != 0) {
      uStack_1f8 = 2;
      goto LAB_0234e1f0;
    }
    plVar9 = *(long **)(param_1 + 0xc);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = *plVar9;
    uVar10 = *(undefined8 *)(param_1 + 10);
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b5c38) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0234e184;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b5c38,2);
LAB_0234e184:
    lVar7 = (*(code *)*puVar5)(plVar9,uVar4,0xffffffffffffffff,uVar10,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_158 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                           (lVar7,*(undefined8 *)PTR_DAT_049b5cc0);
    uVar3 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                      (&uStack_158,*(undefined8 *)PTR_DAT_049b5cb8);
    if ((uVar3 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x32) = uStack_158;
      thunk_FUN_021f190c(param_1 + 0x32,0);
      FUN_0235bb44(param_1 + 2,&uStack_158,param_1,*(undefined8 *)PTR_DAT_049b5c90);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      lVar7 = *(long *)(param_1 + 8);
      uVar3 = NakamaServices__TryGetPeriodicLeaderboard_224ddc0(param_1 + 0xc);
      if ((uVar3 & 1) == 0) {
        uStack_1f8 = 0;
        goto LAB_0234e1f0;
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0234e2c4 to 0244e363 has its CatchHandler @ 0234dff4 */
        FUN_021f06a0();
      }
      NakamaPeriodicLeaderboardProvider__GetInstance_224cd10
                (&uStack_1f8,uVar3,0,*(undefined8 *)(param_1 + 10));
      func_0x04608620(auStack_150,&uStack_1f8,0x90);
      FUN_0235b0c0(auStack_150,&uStack_1f8,*(undefined8 *)PTR_DAT_049b5cc8);
      func_0x04608620(auStack_c0,&uStack_1f8,0x90);
      lVar8 = *(long *)PTR_DAT_049b5ca8;
      lVar7 = *(long *)(lVar8 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      uVar4 = thunk_FUN_0224e54c(auStack_c0,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80));
      lVar7 = *(long *)(lVar8 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      iVar2 = FUN_0235b2a0(uVar4,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18));
      if (iVar2 == 0) {
                    /* try { // try from 0234e27c to 0244e28b has its CatchHandler @ 0234e334 */
        *param_1 = 0;
        func_0x04608620(param_1 + 0xe,auStack_c0,0x90);
        thunk_FUN_021f190c(param_1 + 0xe,0);
                    /* try { // try from 0234e2b4 to 0244e2c3 has its CatchHandler @ 0234e348 */
        FUN_0235bb44(param_1 + 2,auStack_c0,param_1,*(undefined8 *)PTR_DAT_049b5c88);
        return;
      }
      goto LAB_0234e0e4;
    }
    uStack_158 = *(undefined8 *)(param_1 + 0x32);
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    *param_1 = -1;
                    /* try { // try from 0234dff4 to 0244e27b has its CatchHandler @ 0234dff4
                       catch() { ... } // from try @ 0234dff4 with catch @ 0234dff4
                       catch() { ... } // from try @ 0234e2c4 with catch @ 0234dff4 */
  }
  System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
            (&uStack_158,&uStack_1f8,*(undefined8 *)PTR_DAT_049b5cb0);
  uStack_1f8 = Extensions__ToGameType_223d960(CONCAT44(uStack_1f4,uStack_1f8));
LAB_0234e1f0:
  puVar1 = PTR_DAT_049b5c98;
  piVar6 = param_1 + 0xc;
  piVar6[0] = 0;
  piVar6[1] = 0;
  *param_1 = -2;
  thunk_FUN_021f190c(piVar6,0);
  FUN_0235bed4(param_1 + 2,&uStack_1f8,*(undefined8 *)puVar1);
  return;
}

