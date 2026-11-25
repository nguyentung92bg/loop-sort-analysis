/* IL2CPP: FulfillRewardMonitor.<StartFulfillAsync>d__23$$MoveNext
void FulfillRewardMonitor__StartFulfillAsync_d__23__MoveNext (FulfillRewardMonitor__StartFulfillAsync_d__23_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillRewardMonitor.<StartFulfillAsync>d__23$$MoveNext
   void FulfillRewardMonitor__StartFulfillAsync_d__23__MoveNext
   (FulfillRewardMonitor__StartFulfillAsync_d__23_o __this, const MethodInfo* method); */

void FulfillRewardMonitor__StartFulfillAsync_d__23__MoveNext_2442fb4(uint *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  uint *puStack_68;
  long *plStack_60;
  undefined4 uStack_48;
  undefined4 uStack_3c;
  long lStack_38;
  uint uStack_28;
  uint uStack_24;
  
  if ((bRam0000000004f4b853 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4160);
    FUN_021f03f8(PTR_DAT_049c4058);
    FUN_021f03f8(PTR_DAT_049c4060);
    FUN_021f03f8(PTR_DAT_049c4168);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b853 = 1;
  }
  uStack_24 = *param_1;
  lStack_38 = *(long *)(param_1 + 4);
  uStack_3c = 0;
  uStack_48 = 0;
  uStack_28 = 0;
  uVar5 = uStack_28;
  uStack_28 = 0;
  if (2 < uStack_24) {
    if (lStack_38 == 0) {
      uStack_28 = uVar5;
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(char *)(lStack_38 + 0xe9) != '\0') goto LAB_02543398;
    if (*(long *)(lStack_38 + 0x100) == 0) {
      uStack_28 = uVar5;
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Count_282b138
                      (*(long *)(lStack_38 + 0x100),*(undefined8 *)PTR_DAT_049c4058);
    uVar5 = uStack_28;
    if (iVar6 == 0) goto LAB_02543398;
  }
  uStack_28 = uVar5;
  puVar4 = PTR_DAT_049c4168;
  puVar2 = PTR_DAT_049c4060;
  puVar1 = PTR_DAT_049b5138;
  puStack_68 = &uStack_24;
  uStack_70 = 0;
  plStack_60 = &lStack_38;
  if (uStack_24 == 0) {
    uStack_28 = param_1[6];
    param_1[6] = 0;
    *param_1 = 0xffffffff;
    uStack_24 = 0xffffffff;
    goto LAB_02543164;
  }
  if (uStack_24 == 1) {
    uStack_28 = param_1[6];
    param_1[6] = 0;
    *param_1 = 0xffffffff;
    uStack_24 = 0xffffffff;
    goto LAB_0254327c;
  }
  if (uStack_24 != 2) {
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined1 *)(lStack_38 + 0xe9) = 1;
LAB_02543174:
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_38 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar7 = Monitors__IsActive_object__2688ab4(*(long *)(lStack_38 + 0x30),*(undefined8 *)puVar4);
    if ((uVar7 & 1) == 0) {
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lStack_38 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Monitors__DisableRaycaster_256ea20(*(long *)(lStack_38 + 0x30),lStack_38,0);
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lStack_38 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      HomeNavigationMonitor__DisableNavigation_24435b4();
      while( true ) {
        if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(long *)(lStack_38 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(long *)(*(long *)(lStack_38 + 200) + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar7 = SwipeablePageLayout__IsInTransition_244b994();
        if ((uVar7 & 1) == 0) {
          if (lStack_38 != 0) {
            FulfillRewardMonitor__ShowFulfill_2440490();
            goto LAB_02543364;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uStack_3c = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
        uStack_28 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_3c,0);
        uVar7 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c
                          (&uStack_28,0);
        puVar4 = PTR_DAT_049c4160;
        if ((uVar7 & 1) == 0) break;
LAB_0254327c:
        Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&uStack_28,0);
      }
      uStack_24 = 1;
      *param_1 = 1;
      uVar8 = *(undefined8 *)puVar4;
      param_1[6] = uStack_28;
      FUN_0235c420(param_1 + 2,&uStack_28,param_1,uVar8);
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uStack_3c = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
      uStack_28 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_3c,0);
      uVar7 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c(&uStack_28,0);
      puVar3 = PTR_DAT_049c4160;
      if ((uVar7 & 1) != 0) goto LAB_02543164;
      uStack_24 = 0;
      *param_1 = 0;
      uVar8 = *(undefined8 *)puVar3;
      param_1[6] = uStack_28;
      FUN_0235c420(param_1 + 2,&uStack_28,param_1,uVar8);
    }
    goto LAB_02543230;
  }
  uStack_28 = param_1[6];
  param_1[6] = 0;
  *param_1 = 0xffffffff;
  uStack_24 = 0xffffffff;
  do {
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&uStack_28,0);
LAB_02543364:
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_38 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar7 = Monitors__IsActive_object__2688ab4(*(long *)(lStack_38 + 0x30),*(undefined8 *)puVar2);
    if ((uVar7 & 1) == 0) {
      iVar6 = 0x15;
      goto LAB_02543384;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uStack_3c = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
    uStack_28 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_3c,0);
    uVar7 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c(&uStack_28,0);
    puVar4 = PTR_DAT_049c4160;
  } while ((uVar7 & 1) != 0);
  uStack_24 = 2;
  *param_1 = 2;
  uVar8 = *(undefined8 *)puVar4;
  param_1[6] = uStack_28;
  FUN_0235c420(param_1 + 2,&uStack_28,param_1,uVar8);
LAB_02543230:
  iVar6 = 0xc;
LAB_02543384:
  FUN_0201a318(&uStack_70);
  uVar5 = uStack_28;
  if ((iVar6 != 0) && (iVar6 != 0x15)) {
    return;
  }
LAB_02543398:
  uStack_28 = uVar5;
  *param_1 = 0xfffffffe;
  FUN_0235afc8(param_1 + 2,0);
  return;
LAB_02543164:
  Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&uStack_28,0);
  goto LAB_02543174;
}

