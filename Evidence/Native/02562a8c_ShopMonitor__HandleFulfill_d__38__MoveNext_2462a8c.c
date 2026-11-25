/* IL2CPP: ShopMonitor.<HandleFulfill>d__38$$MoveNext
void ShopMonitor__HandleFulfill_d__38__MoveNext (ShopMonitor__HandleFulfill_d__38_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor.<HandleFulfill>d__38$$MoveNext
   void ShopMonitor__HandleFulfill_d__38__MoveNext (ShopMonitor__HandleFulfill_d__38_o __this, const
   MethodInfo* method); */

void ShopMonitor__HandleFulfill_d__38__MoveNext_2462a8c(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((bRam0000000004f4b956 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c50b8);
    FUN_021f03f8(PTR_DAT_049c50c0);
    FUN_021f03f8(PTR_DAT_049c4538);
    FUN_021f03f8(PTR_DAT_049c4168);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b956 = 1;
  }
  puVar2 = PTR_DAT_049c4168;
  puVar1 = PTR_DAT_049b5138;
  lVar8 = *(long *)(param_1 + 4);
  uStack_28 = 0;
  iStack_24 = 0;
  if (*param_1 != 0) goto LAB_02562b34;
  iStack_24 = param_1[6];
  param_1[6] = 0;
  *param_1 = -1;
  uStack_28 = 0;
  while( true ) {
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_24,0);
LAB_02562b34:
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar6 = Monitors__IsActive_object__2688ab4(*(long *)(lVar8 + 0x30),*(undefined8 *)puVar2);
    if ((uVar6 & 1) == 0) break;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
    _uStack_28 = CONCAT44(iStack_24,uVar4);
    iVar5 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_28,0);
    iStack_24 = iVar5;
    uVar6 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c(&iStack_24,0);
    puVar3 = PTR_DAT_049c50b8;
    if ((uVar6 & 1) == 0) {
      *param_1 = 0;
      uVar7 = *(undefined8 *)puVar3;
      param_1[6] = iStack_24;
      FUN_0235c420(param_1 + 2,&iStack_24,param_1,uVar7);
      return;
    }
  }
  if (*(char *)(lVar8 + 0x110) == '\0') {
    if (*(long *)(lVar8 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar6 = HomeNavigationMonitor__IsCurrentPageOfType_object__2641554
                      (*(long *)(lVar8 + 0xc0),*(undefined8 *)PTR_DAT_049c50c0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(lVar8 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      HomeNavigationMonitor__TransitionTo_object__2641638
                (*(long *)(lVar8 + 0xc0),*(undefined8 *)PTR_DAT_049c4538);
    }
  }
  else {
    ShopMonitor__OnCloseClicked_24624ac(lVar8);
  }
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

