/* IL2CPP: LiveOpsSheet.Row$$GetJoinStartTime
System_DateTimeOffset_o LiveOpsSheet_Row__GetJoinStartTime (LiveOpsSheet_Row_o* __this, System_DateTimeOffset_o utcNow, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsSheet.Row$$GetJoinStartTime
   System_DateTimeOffset_o LiveOpsSheet_Row__GetJoinStartTime (LiveOpsSheet_Row_o* __this,
   System_DateTimeOffset_o utcNow, const MethodInfo* method); */

undefined1  [16]
LiveOpsSheet_Row__GetJoinStartTime_25636b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  auVar20._8_8_ = param_3;
  auVar20._0_8_ = param_2;
  uStack_80 = param_2;
  uStack_78 = param_3;
  if ((bRam0000000004f4c13c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049cbae8);
    FUN_021f03f8(PTR_DAT_049cbaf0);
    FUN_021f03f8(PTR_DAT_049cbaf8);
    FUN_021f03f8(PTR_DAT_049cbb00);
    FUN_021f03f8(PTR_DAT_049b8758);
    FUN_021f03f8(PTR_DAT_049cbb08);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4c13c = 1;
  }
  puVar5 = PTR_DAT_049b5050;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_68 = 0;
  uVar12 = LiveOpsSheet_Row__get_HasWeeklySchedule_25630e0(param_1);
  puVar6 = PTR_DAT_049cbb08;
  if ((uVar12 & 1) == 0) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      lVar14 = *(long *)PTR_DAT_049cbb08;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        FUN_021f0574();
        lVar14 = *(long *)puVar6;
      }
      uVar15 = **(undefined8 **)(lVar14 + 0xb8);
      uVar2 = (*(undefined8 **)(lVar14 + 0xb8))[1];
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar5);
      }
      uStack_68 = System_DateTimeOffset__op_Subtraction_30e4594(param_2,param_3,uVar15,uVar2,0);
      iVar1 = *(int *)(param_1 + 0x18);
      iVar8 = *(int *)(param_1 + 0x1c);
      if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
        FUN_021f0574();
      }
      dVar17 = (double)System_TimeSpan__get_TotalMinutes_3116bdc(&uStack_68,0);
      if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
        FUN_021f0574();
      }
      dVar18 = (double)(iVar8 + iVar1);
      auVar20 = System_DateTimeOffset__AddMinutes_30e182c
                          ((double)(long)(dVar17 / dVar18) * dVar18,
                           *(undefined8 *)(*(long *)puVar6 + 0xb8),0);
    }
  }
  else {
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (*(long *)(param_1 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar20 = **(undefined1 (**) [16])(*(long *)puVar5 + 0xb8);
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0xe8),&uStack_d8,*(undefined8 *)PTR_DAT_049cbb00);
    puVar7 = PTR_DAT_049cbaf0;
    puVar6 = PTR_DAT_049b6128;
    uStack_98 = puStack_d0;
    uStack_a0 = uStack_d8;
    uStack_90 = uStack_c8;
    uStack_d8 = 0;
    puStack_d0 = &uStack_a0;
    while( true ) {
      uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&uStack_a0,*(undefined8 *)puVar7);
      if ((uVar12 & 1) == 0) break;
      lVar16 = *(long *)PTR_DAT_049cbaf8;
      lVar13 = *(long *)(lVar16 + 0x20);
      uVar4 = *(ushort *)(lVar13 + 0x135);
      lVar14 = lVar13;
      if ((uVar4 & 1) == 0) {
        lVar14 = FUN_02229718();
        lVar13 = *(long *)(lVar16 + 0x20);
        uVar4 = *(ushort *)(lVar13 + 0x135);
      }
      uVar3 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
      if ((uVar4 & 1) == 0) {
        lVar13 = FUN_02229718();
      }
      uVar15 = thunk_FUN_0224e54c(&uStack_a0,
                                  *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_e8,uVar15,uVar3);
      iVar1 = (int)uStack_e8;
      uVar3 = uStack_e8._4_4_;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      iVar8 = System_DateTimeOffset__get_DayOfWeek_30e1114(&uStack_80,0);
      uVar9 = System_DateTimeOffset__get_Year_30e15d4(&uStack_80,0);
      uVar10 = System_DateTimeOffset__get_Month_30e1374(&uStack_80,0);
      uVar11 = System_DateTimeOffset__get_Day_30e107c(&uStack_80,0);
      lVar14 = *(long *)puVar6;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        FUN_021f0574();
        lVar14 = *(long *)puVar6;
      }
      uStack_e8 = 0;
      uStack_e0 = 0;
      System_DateTimeOffset___ctor_30e0a3c
                (&uStack_e8,uVar9,uVar10,uVar11,uVar3,0,0,**(undefined8 **)(lVar14 + 0xb8),0);
      uStack_b8 = uStack_e0;
      uStack_c0 = uStack_e8;
      auVar19 = System_DateTimeOffset__AddDays_30e174c
                          ((double)-(((iVar8 - iVar1) + 7) % 7),&uStack_c0,0);
      auStack_b0 = auVar19;
      uVar12 = System_DateTimeOffset__op_GreaterThan_30e48c8
                         (auVar19._0_8_,auVar19._8_8_,uStack_80,uStack_78,0);
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auVar19 = System_DateTimeOffset__AddDays_30e174c(0xc01c000000000000,auStack_b0,0);
        auStack_b0 = auVar19;
      }
      uVar2 = auStack_b0._8_8_;
      uVar15 = auStack_b0._0_8_;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar12 = System_DateTimeOffset__op_GreaterThan_30e48c8
                         (uVar15,uVar2,auVar20._0_8_,auVar20._8_8_,0);
      if ((uVar12 & 1) != 0) {
        auVar20 = auStack_b0;
      }
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_a0,*(undefined8 *)PTR_DAT_049cbae8);
  }
  return auVar20;
}

