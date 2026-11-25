/* IL2CPP: LiveOpsSheet.Row$$GetNextJoinStartTime
System_DateTimeOffset_o LiveOpsSheet_Row__GetNextJoinStartTime (LiveOpsSheet_Row_o* __this, System_DateTimeOffset_o utcNow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsSheet.Row$$GetNextJoinStartTime
   System_DateTimeOffset_o LiveOpsSheet_Row__GetNextJoinStartTime (LiveOpsSheet_Row_o* __this,
   System_DateTimeOffset_o utcNow, const MethodInfo* method); */

undefined1  [16]
LiveOpsSheet_Row__GetNextJoinStartTime_2563b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  auVar18._8_8_ = param_3;
  auVar18._0_8_ = param_2;
  uStack_70 = param_2;
  uStack_68 = param_3;
  if ((bRam0000000004f4c13d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049cbae8);
    FUN_021f03f8(PTR_DAT_049cbaf0);
    FUN_021f03f8(PTR_DAT_049cbaf8);
    FUN_021f03f8(PTR_DAT_049cbb00);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4c13d = 1;
  }
  puVar4 = PTR_DAT_049b5050;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  uVar12 = LiveOpsSheet_Row__get_HasWeeklySchedule_25630e0(param_1);
  if ((uVar12 & 1) == 0) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      iVar1 = *(int *)(param_1 + 0x18);
      iVar8 = *(int *)(param_1 + 0x1c);
      auStack_b0 = LiveOpsSheet_Row__GetJoinStartTime_25636b4(param_1,param_2,param_3);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar18 = System_DateTimeOffset__AddMinutes_30e182c((double)(iVar8 + iVar1),auStack_b0,0);
    }
  }
  else {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (*(long *)(param_1 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar18 = *(undefined1 (*) [16])(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0xe8),&uStack_c8,*(undefined8 *)PTR_DAT_049cbb00);
    puVar6 = PTR_DAT_049cbaf0;
    puVar5 = PTR_DAT_049b6128;
    uStack_88 = puStack_c0;
    uStack_90 = uStack_c8;
    uStack_80 = uStack_b8;
    uStack_c8 = 0;
    puStack_c0 = &uStack_90;
    while( true ) {
      uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&uStack_90,*(undefined8 *)puVar6);
      if ((uVar12 & 1) == 0) break;
      lVar16 = *(long *)PTR_DAT_049cbaf8;
      lVar13 = *(long *)(lVar16 + 0x20);
      uVar3 = *(ushort *)(lVar13 + 0x135);
      lVar14 = lVar13;
      if ((uVar3 & 1) == 0) {
        lVar14 = FUN_02229718();
        lVar13 = *(long *)(lVar16 + 0x20);
        uVar3 = *(ushort *)(lVar13 + 0x135);
      }
      uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar13 = FUN_02229718();
      }
      uVar15 = thunk_FUN_0224e54c(&uStack_90,
                                  *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_d8,uVar15,uVar2);
      iVar1 = (int)uStack_d8;
      uVar2 = uStack_d8._4_4_;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      iVar8 = System_DateTimeOffset__get_DayOfWeek_30e1114(&uStack_70,0);
      uVar9 = System_DateTimeOffset__get_Year_30e15d4(&uStack_70,0);
      uVar10 = System_DateTimeOffset__get_Month_30e1374(&uStack_70,0);
      uVar11 = System_DateTimeOffset__get_Day_30e107c(&uStack_70,0);
      lVar14 = *(long *)puVar5;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        FUN_021f0574();
        lVar14 = *(long *)puVar5;
      }
      uStack_d8 = 0;
      uStack_d0 = 0;
      System_DateTimeOffset___ctor_30e0a3c
                (&uStack_d8,uVar9,uVar10,uVar11,uVar2,0,0,**(undefined8 **)(lVar14 + 0xb8),0);
      auStack_b0._8_8_ = uStack_d0;
      auStack_b0._0_8_ = uStack_d8;
      auVar17 = System_DateTimeOffset__AddDays_30e174c
                          ((double)(((iVar1 - iVar8) + 7) % 7),auStack_b0,0);
      auStack_a0 = auVar17;
      uVar12 = System_DateTimeOffset__op_LessThanOrEqual_30e4824
                         (auVar17._0_8_,auVar17._8_8_,uStack_70,uStack_68,0);
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auVar17 = System_DateTimeOffset__AddDays_30e174c(0x401c000000000000,auStack_a0,0);
        auStack_a0 = auVar17;
      }
      uVar7 = auStack_a0._8_8_;
      uVar15 = auStack_a0._0_8_;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar12 = System_DateTimeOffset__op_LessThan_30e4780
                         (uVar15,uVar7,auVar18._0_8_,auVar18._8_8_,0);
      if ((uVar12 & 1) != 0) {
        auVar18 = auStack_a0;
      }
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_90,*(undefined8 *)PTR_DAT_049cbae8);
  }
  return auVar18;
}

