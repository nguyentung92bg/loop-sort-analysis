/* IL2CPP: LoopSortEmailCodeVerifier.<GetVerificationCodeAsync>d__2$$MoveNext
void LoopSortEmailCodeVerifier__GetVerificationCodeAsync_d__2__MoveNext (LoopSortEmailCodeVerifier__GetVerificationCodeAsync_d__2_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0233f80c) */
/* IL2CPP: LoopSortEmailCodeVerifier.<GetVerificationCodeAsync>d__2$$MoveNext
   void LoopSortEmailCodeVerifier__GetVerificationCodeAsync_d__2__MoveNext
   (LoopSortEmailCodeVerifier__GetVerificationCodeAsync_d__2_o __this, const MethodInfo* method); */

void LoopSortEmailCodeVerifier__GetVerificationCodeAsync_d__2__MoveNext_223f2a4(int *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  int *piStack_b8;
  int **ppiStack_b0;
  undefined8 uStack_a0;
  int iStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  int iStack_2c;
  int *piStack_28;
  
  piStack_28 = param_1;
  if ((bRam0000000004f49af8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049b5168);
    FUN_021f03f8(PTR_DAT_049b5170);
    FUN_021f03f8(PTR_DAT_049b5178);
    FUN_021f03f8(PTR_DAT_049b5140);
    FUN_021f03f8(PTR_DAT_049b5180);
    FUN_021f03f8(PTR_DAT_049b5188);
    FUN_021f03f8(PTR_DAT_049b5190);
    FUN_021f03f8(PTR_DAT_049b5198);
    FUN_021f03f8(PTR_DAT_049b51a0);
    FUN_021f03f8(PTR_DAT_049b51a8);
    FUN_021f03f8(PTR_DAT_049b51b0);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f49af8 = 1;
  }
  iStack_2c = *param_1;
  lVar11 = *(long *)(param_1 + 0xc);
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  auVar3 = ZEXT816(0);
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auVar2 = ZEXT816(0);
  auVar1 = ZEXT816(0);
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  iStack_98 = 0;
  if (iStack_2c == 0) {
    auStack_40 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    iStack_2c = -1;
    *param_1 = -1;
LAB_0233f450:
    auStack_50 = auVar1;
    Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__GetResult_37d5b64(auStack_40,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = *(long *)(piStack_28 + 10);
    uVar10 = Monitors__Get_object__26889d0(lVar11,*(undefined8 *)PTR_DAT_049b5198);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    puVar9 = (undefined8 *)(lVar8 + 0x10);
    *puVar9 = uVar10;
    thunk_FUN_021f190c(puVar9);
    piVar6 = piStack_28;
    uVar7 = *(undefined8 *)(piStack_28 + 10);
    uVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
    System_Action___ctor_306b98c(uVar10,uVar7,*(undefined8 *)PTR_DAT_049b51a0,0);
    if (*(int *)(*(long *)PTR_DAT_049b5190 + 0xe4) == 0) {
      FUN_021f0574();
    }
    System_Threading_CancellationToken__Register_3162a38(&uStack_d8,piVar6 + 8,uVar10,0);
    piStack_b8 = (int *)uStack_d0;
    uStack_c0 = uStack_d8;
    ppiStack_b0 = (int **)uStack_c8;
    *(undefined8 *)(piStack_28 + 0x14) = uStack_d0;
    *(undefined8 *)(piStack_28 + 0x12) = uStack_d8;
    *(undefined8 *)(piStack_28 + 0x16) = uStack_c8;
    thunk_FUN_021f190c(piStack_28 + 0x12,0);
    piStack_b8 = &iStack_2c;
    uStack_c0 = 0;
    ppiStack_b0 = &piStack_28;
    auVar2 = auStack_50;
    auVar3 = auStack_40;
    if (iStack_2c == 1) goto LAB_0233f538;
    if (*(long *)(piStack_28 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = *(long *)(*(long *)(piStack_28 + 10) + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    EmailCodeMonitor__RequestCode_243e014(&uStack_d8,lVar11,0);
    uStack_88 = uStack_d0;
    uStack_90 = uStack_d8;
    uStack_80 = uStack_c8;
    FUN_0235b0c0(&uStack_90,&uStack_d8,*(undefined8 *)PTR_DAT_049b51b0);
    lVar8 = *(long *)PTR_DAT_049b5188;
    uStack_68 = uStack_d0;
    uStack_70 = uStack_d8;
    uStack_60 = uStack_c8;
    lVar11 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02229718();
    }
    uVar10 = thunk_FUN_0224e54c(&uStack_70,
                                *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0x80));
    lVar11 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02229718();
    }
    iVar4 = FUN_0235b2a0(uVar10,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18));
    if (iVar4 == 0) {
      iStack_2c = 1;
      *piStack_28 = 1;
      *(undefined8 *)(piStack_28 + 0x1a) = uStack_68;
      *(undefined8 *)(piStack_28 + 0x18) = uStack_70;
      *(undefined8 *)(piStack_28 + 0x1c) = uStack_60;
      thunk_FUN_021f190c(piStack_28 + 0x18,0);
      piVar6 = piStack_28;
      if (*(int *)(*(long *)PTR_DAT_049b5140 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b5140,extraout_x1_00,piStack_28);
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder___Il2CppFullySharedGenericType___AwaitUnsafeOnCompleted___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25872a8
                (piVar6 + 2,&uStack_70,piStack_28,*(undefined8 *)PTR_DAT_049b5168);
      uVar10 = 0;
      iVar4 = 5;
      goto LAB_0233f640;
    }
  }
  else {
    if (iStack_2c != 1) {
      uVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b51a8);
      System_Object___ctor_3142338(uVar10,0);
      *(undefined8 *)(piStack_28 + 10) = uVar10;
      thunk_FUN_021f190c(piStack_28 + 10,uVar10);
      uVar10 = *(undefined8 *)(piStack_28 + 8);
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_50 = Cysharp_Threading_Tasks_UniTask__SwitchToMainThread_37cb170(uVar10,0);
      auStack_40 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable__GetAwaiter_37d5a6c
                             (auStack_50,0);
      uVar5 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__get_IsCompleted_37d5ab4
                        (auStack_40,0);
      auVar1 = auStack_50;
      if ((uVar5 & 1) == 0) {
        iStack_2c = 0;
        *piStack_28 = 0;
        *(undefined1 (*) [16])(piStack_28 + 0xe) = auStack_40;
        thunk_FUN_021f190c(piStack_28 + 0x10,0);
        piVar6 = piStack_28;
        if (*(int *)(*(long *)PTR_DAT_049b5140 + 0xe4) == 0) {
          FUN_021f0574(*(long *)PTR_DAT_049b5140,extraout_x1,piStack_28);
        }
        System_Runtime_CompilerServices_AsyncTaskMethodBuilder___Il2CppFullySharedGenericType___AwaitUnsafeOnCompleted___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25872a8
                  (piVar6 + 2,auStack_40,piStack_28,*(undefined8 *)PTR_DAT_049b5170);
        return;
      }
      goto LAB_0233f450;
    }
LAB_0233f538:
    ppiStack_b0 = &piStack_28;
    piStack_b8 = &iStack_2c;
    uStack_c0 = 0;
    iStack_2c = -1;
    uStack_68 = *(undefined8 *)(piStack_28 + 0x1a);
    uStack_70 = *(undefined8 *)(piStack_28 + 0x18);
    uStack_60 = *(undefined8 *)(piStack_28 + 0x1c);
    piStack_28[0x18] = 0;
    piStack_28[0x19] = 0;
    piStack_28[0x1a] = 0;
    piStack_28[0x1b] = 0;
    piStack_28[0x1c] = 0;
    piStack_28[0x1d] = 0;
    *piStack_28 = -1;
    auStack_50 = auVar2;
    auStack_40 = auVar3;
  }
  FUN_0235b3fc(&uStack_70,&uStack_d8,*(undefined8 *)PTR_DAT_049b5180);
  iVar4 = 8;
  uVar10 = uStack_d8;
LAB_0233f640:
  if (iStack_2c < 0) {
    System_Threading_CancellationTokenRegistration__Dispose_31651c0(*ppiStack_b0 + 0x12,0);
  }
  if (iVar4 == 8) {
    *piStack_28 = -2;
    piVar6 = piStack_28 + 10;
    piVar6[0] = 0;
    piVar6[1] = 0;
    thunk_FUN_021f190c(piVar6,0);
    piVar6 = piStack_28;
    if (*(int *)(*(long *)PTR_DAT_049b5140 + 0xe4) == 0) {
      FUN_021f0574();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder___Il2CppFullySharedGenericType___SetResult_27d0414
              (piVar6 + 2,uVar10,*(undefined8 *)PTR_DAT_049b5178);
  }
  else if (iVar4 == 0) {
    uVar10 = (&uStack_a0)[iStack_98 + -1];
    *piStack_28 = -2;
    piVar6 = piStack_28 + 10;
    piVar6[0] = 0;
    piVar6[1] = 0;
    thunk_FUN_021f190c(piVar6,0);
    piVar6 = piStack_28;
    lVar11 = thunk_FUN_02256840(PTR_DAT_049b5140);
    if (*(int *)(lVar11 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar7 = thunk_FUN_02256840(PTR_DAT_049b51b8);
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder___Il2CppFullySharedGenericType___SetException_27d08f0
              (piVar6 + 2,uVar10,uVar7);
  }
  return;
}

