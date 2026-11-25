/* IL2CPP: FulfillRewardMonitor.<AwaitFulfillCompletion>d__22$$MoveNext
void FulfillRewardMonitor__AwaitFulfillCompletion_d__22__MoveNext (FulfillRewardMonitor__AwaitFulfillCompletion_d__22_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillRewardMonitor.<AwaitFulfillCompletion>d__22$$MoveNext
   void FulfillRewardMonitor__AwaitFulfillCompletion_d__22__MoveNext
   (FulfillRewardMonitor__AwaitFulfillCompletion_d__22_o __this, const MethodInfo* method); */

void FulfillRewardMonitor__AwaitFulfillCompletion_d__22__MoveNext_2442018(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((bRam0000000004f4b850 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4130);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b850 = 1;
  }
  puVar1 = PTR_DAT_049b5138;
  lVar11 = *(long *)(param_1 + 6);
  uStack_28 = 0;
  iStack_24 = 0;
  if (*param_1 == 0) {
    iStack_24 = param_1[8];
    param_1[8] = 0;
    *param_1 = -1;
    uStack_28 = 0;
    goto LAB_025420e0;
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  FulfillRewardMonitor__StartFulfillAsync_2440404(lVar11);
  while (cVar3 = cRam0000000004f49bfa, *(char *)(lVar11 + 0xe9) != '\0') {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
    _uStack_28 = CONCAT44(iStack_24,uVar4);
    iVar5 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_28,0);
    iStack_24 = iVar5;
    uVar8 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c(&iStack_24,0);
    puVar2 = PTR_DAT_049c4130;
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      uVar7 = *(undefined8 *)puVar2;
      param_1[8] = iStack_24;
      FUN_0235c25c(param_1 + 2,&iStack_24,param_1,uVar7);
      return;
    }
LAB_025420e0:
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_24,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  *param_1 = -2;
  if (cVar3 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_025421ac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b56d0,2);
LAB_025421ac:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  return;
}

