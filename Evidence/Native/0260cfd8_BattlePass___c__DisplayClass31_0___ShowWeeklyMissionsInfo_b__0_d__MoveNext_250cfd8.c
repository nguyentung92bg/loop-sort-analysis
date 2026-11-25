/* IL2CPP: BattlePass.<>c__DisplayClass31_0.<<ShowWeeklyMissionsInfo>b__0>d$$MoveNext
void BattlePass___c__DisplayClass31_0___ShowWeeklyMissionsInfo_b__0_d__MoveNext (BattlePass___c__DisplayClass31_0___ShowWeeklyMissionsInfo_b__0_d_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass.<>c__DisplayClass31_0.<<ShowWeeklyMissionsInfo>b__0>d$$MoveNext
   void BattlePass___c__DisplayClass31_0___ShowWeeklyMissionsInfo_b__0_d__MoveNext
   (BattlePass___c__DisplayClass31_0___ShowWeeklyMissionsInfo_b__0_d_o __this, const MethodInfo*
   method); */

void BattlePass___c__DisplayClass31_0___ShowWeeklyMissionsInfo_b__0_d__MoveNext_250cfd8
               (int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f4bdde & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9150);
    FUN_021f03f8(PTR_DAT_049c4698);
                    /* try { // try from 0260d018 to 0270d2bb has its CatchHandler @ 0260d018
                       catch() { ... } // from try @ 0260d018 with catch @ 0260d018
                       catch() { ... } // from try @ 0260d330 with catch @ 0260d018
                       catch() { ... } // from try @ 0260d3ec with catch @ 0260d018
                       catch() { ... } // from try @ 0260d580 with catch @ 0260d018
                       catch() { ... } // from try @ 0260d658 with catch @ 0260d018
                       catch() { ... } // from try @ 0260d6a0 with catch @ 0260d018
                       catch() { ... } // from try @ 0260d6d4 with catch @ 0260d018
                       catch() { ... } // from try @ 0260d7ec with catch @ 0260d018
                       catch() { ... } // from try @ 0260d85c with catch @ 0260d018
                       catch() { ... } // from try @ 0260d90c with catch @ 0260d018 */
    FUN_021f03f8(PTR_DAT_049c46a0);
    FUN_021f03f8(PTR_DAT_049c9158);
    FUN_021f03f8(PTR_DAT_049c5e10);
    FUN_021f03f8(PTR_DAT_049c9160);
    FUN_021f03f8(PTR_DAT_049c46b0);
    bRam0000000004f4bdde = 1;
  }
  lVar5 = *(long *)(param_1 + 10);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  if (*param_1 == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0x10);
    uStack_48 = *(undefined8 *)(param_1 + 0xe);
    uStack_50 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar2 = *(long *)(*(long *)(lVar5 + 0x10) + 0x28);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar2 = Monitors__Get_object__26889d0(lVar2,*(undefined8 *)PTR_DAT_049c5e10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    FulfillRewardMonitor__ClearPending_2440230(lVar2,0);
    if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar2 = *(long *)(*(long *)(lVar5 + 0x10) + 0x38);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    LiveOpsModule__Show_253e230(&uStack_98,lVar2,9,0,0);
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    uStack_60 = uStack_88;
    FUN_0235b0c0(&uStack_70,&uStack_98,*(undefined8 *)PTR_DAT_049c46b0);
    lVar6 = *(long *)PTR_DAT_049c46a0;
    uStack_48 = uStack_90;
    uStack_50 = uStack_98;
    uStack_40 = uStack_88;
    lVar2 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02229718();
    }
    uVar3 = thunk_FUN_0224e54c(&uStack_50,
                               *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x80));
    lVar2 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02229718();
    }
    iVar1 = FUN_0235b2a0(uVar3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18));
    if (iVar1 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = uStack_48;
      *(undefined8 *)(param_1 + 0xc) = uStack_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_40;
      thunk_FUN_021f190c(param_1 + 0xc,0);
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__AwaitUnsafeOnCompleted___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25b2fcc
                (param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049c9150);
      return;
    }
  }
  FUN_0235b3fc(&uStack_50,&uStack_98,*(undefined8 *)PTR_DAT_049c4698);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar2 = *(long *)(*(long *)(lVar5 + 0x10) + 0x28);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar2 = Monitors__Get_object__26889d0(lVar2,*(undefined8 *)PTR_DAT_049c9160);
  if (lVar2 != 0) {
    lVar2 = MonitorBase__GetSubMonitor_object__2688828(lVar2,*(undefined8 *)PTR_DAT_049c9158);
    plVar4 = (long *)(lVar5 + 0x18);
    *plVar4 = lVar2;
    thunk_FUN_021f190c(plVar4);
    if (*plVar4 != 0) {
      WeeklyMissionsSubMonitor__FillMissionElements_248c1fc(*plVar4,*(undefined4 *)(lVar5 + 0x20),0)
      ;
      *param_1 = -2;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult_3021864(param_1 + 2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

