/* IL2CPP: NoAdsOfferSubMonitor.<HandleClose>d__7$$MoveNext
void NoAdsOfferSubMonitor__HandleClose_d__7__MoveNext (NoAdsOfferSubMonitor__HandleClose_d__7_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NoAdsOfferSubMonitor.<HandleClose>d__7$$MoveNext
   void NoAdsOfferSubMonitor__HandleClose_d__7__MoveNext (NoAdsOfferSubMonitor__HandleClose_d__7_o
   __this, const MethodInfo* method); */

void NoAdsOfferSubMonitor__HandleClose_d__7__MoveNext_248163c(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uStack_38;
  int iStack_34;
  
  if ((bRam0000000004f4ba05 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5a70);
    FUN_021f03f8(PTR_DAT_049c5478);
    FUN_021f03f8(PTR_DAT_049c4168);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4ba05 = 1;
  }
  puVar3 = PTR_DAT_049c5478;
  puVar2 = PTR_DAT_049c4168;
  puVar1 = PTR_DAT_049b5138;
  lVar9 = *(long *)(param_1 + 4);
  uStack_38 = 0;
  iStack_34 = 0;
  if (*param_1 != 0) goto LAB_025816e0;
  iStack_34 = param_1[6];
  param_1[6] = 0;
  *param_1 = -1;
  uStack_38 = 0;
  while( true ) {
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_34,0);
LAB_025816e0:
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar9 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar7 = Monitors__IsActive_object__2688ab4(*(long *)(lVar9 + 0x28),*(undefined8 *)puVar2);
    if ((uVar7 & 1) == 0) break;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar5 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
    _uStack_38 = CONCAT44(iStack_34,uVar5);
    iVar6 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_38,0);
    iStack_34 = iVar6;
    uVar7 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c(&iStack_34,0);
    puVar4 = PTR_DAT_049c5a70;
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      uVar8 = *(undefined8 *)puVar4;
      param_1[6] = iStack_34;
      FUN_0235c420(param_1 + 2,&iStack_34,param_1,uVar8);
      return;
    }
  }
  if (*(long *)(lVar9 + 0x28) != 0) {
    Monitors__Deactivate_object__2688964(*(long *)(lVar9 + 0x28),0,*(undefined8 *)puVar3);
    *param_1 = -2;
    FUN_0235afc8(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

