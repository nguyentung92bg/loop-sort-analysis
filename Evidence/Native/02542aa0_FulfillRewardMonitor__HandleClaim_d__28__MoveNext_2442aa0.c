/* IL2CPP: FulfillRewardMonitor.<HandleClaim>d__28$$MoveNext
void FulfillRewardMonitor__HandleClaim_d__28__MoveNext (FulfillRewardMonitor__HandleClaim_d__28_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: FulfillRewardMonitor.<HandleClaim>d__28$$MoveNext
   void FulfillRewardMonitor__HandleClaim_d__28__MoveNext (FulfillRewardMonitor__HandleClaim_d__28_o
   __this, const MethodInfo* method); */

void FulfillRewardMonitor__HandleClaim_d__28__MoveNext_2442aa0(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 uStack_38;
  int iStack_34;
  
  if ((bRam0000000004f4b852 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4150);
    FUN_021f03f8(PTR_DAT_049c4158);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b852 = 1;
  }
  puVar2 = PTR_DAT_049b6110;
  puVar1 = PTR_DAT_049b5138;
  iStack_34 = 0;
  lVar10 = *(long *)(param_1 + 4);
  uStack_38 = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (*param_1 == 0) {
    iStack_34 = param_1[6];
    param_1[6] = 0;
    *param_1 = -1;
    goto LAB_02542c44;
  }
  if (*param_1 == 1) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    FulfillRewardMonitor__ApplyClaimMotion_24411d4(lVar10);
    if (*(char *)(lVar10 + 0xe8) == '\0') goto LAB_02542b8c;
    while( true ) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar11 = *(undefined8 *)(lVar10 + 0xf0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar8 = Extensions__HasPlayingMotions_24e6bcc(uVar11,0);
      if ((uVar8 & 1) == 0) break;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uStack_38 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
      iStack_34 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_38,0);
      uVar8 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c(&iStack_34,0);
      puVar3 = PTR_DAT_049c4150;
      if ((uVar8 & 1) == 0) {
        *param_1 = 0;
        uVar11 = *(undefined8 *)puVar3;
        param_1[6] = iStack_34;
        FUN_0235c420(param_1 + 2,&iStack_34,param_1,uVar11);
        return;
      }
LAB_02542c44:
      Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_34,0);
    }
    if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar11 = System_TimeSpan__FromSeconds_311711c(_UNK_013a7660,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar11,1,8,0,0,0);
    thunk_FUN_021f190c(auStack_50,0);
    uVar4 = auStack_50._8_8_;
    uVar11 = auStack_50._0_8_;
    auStack_60 = auStack_50;
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
    if ((long *)uVar11 != (long *)0x0) {
      lVar7 = *(long *)uVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02542dd8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(uVar11,*(long *)PTR_DAT_049b54e0,0);
LAB_02542dd8:
      iVar5 = (*(code *)*puVar6)(uVar11,uVar4 & 0xffffffff,puVar6[1]);
      if (iVar5 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_60;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c4158);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar11 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_60._0_8_;
    uVar12 = auStack_60._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02542e70;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02542e70:
    (*(code *)*puVar6)(uVar11,uVar12,puVar6[1]);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_02542b8c:
  lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (lVar10,0x8204c370,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar7,0);
  if (*(long *)(lVar10 + 0x30) != 0) {
    Monitors__Deactivate_256e214(*(long *)(lVar10 + 0x30),lVar10,0,0);
    if (*(long *)(lVar10 + 0xc0) != 0) {
      EconomyModule__DisableUpdateInterceptor_2534190(*(long *)(lVar10 + 0xc0),0);
      *param_1 = -2;
      FUN_0235afc8(param_1 + 2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

