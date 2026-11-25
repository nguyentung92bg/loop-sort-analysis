/* IL2CPP: LondonTripSubMonitor.<HandleBuyNextProgress>d__18$$MoveNext
void LondonTripSubMonitor__HandleBuyNextProgress_d__18__MoveNext (LondonTripSubMonitor__HandleBuyNextProgress_d__18_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LondonTripSubMonitor.<HandleBuyNextProgress>d__18$$MoveNext
   void LondonTripSubMonitor__HandleBuyNextProgress_d__18__MoveNext
   (LondonTripSubMonitor__HandleBuyNextProgress_d__18_o __this, const MethodInfo* method); */

void LondonTripSubMonitor__HandleBuyNextProgress_d__18__MoveNext_247fe70(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uStack_40;
  int iStack_3c;
  long lStack_38;
  
  if ((bRam0000000004f4b9fe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5a20);
    FUN_021f03f8(PTR_DAT_049c4168);
    FUN_021f03f8(PTR_DAT_049c5830);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b9fe = 1;
  }
  puVar3 = PTR_DAT_049c5830;
  puVar2 = PTR_DAT_049c4168;
  puVar1 = PTR_DAT_049b5138;
  lVar10 = *(long *)(param_1 + 4);
  uStack_40 = 0;
  iStack_3c = 0;
  if (*param_1 != 0) goto LAB_0257ff14;
  iStack_3c = param_1[8];
  param_1[8] = 0;
  *param_1 = -1;
  uStack_40 = 0;
  while( true ) {
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_3c,0);
LAB_0257ff14:
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar7 = Monitors__IsActive_object__2688ab4(*(long *)(lVar10 + 0x28),*(undefined8 *)puVar2);
    if ((uVar7 & 1) == 0) break;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar5 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
    _uStack_40 = CONCAT44(iStack_3c,uVar5);
    iVar6 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_40,0);
    iStack_3c = iVar6;
    uVar7 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c(&iStack_3c,0);
    puVar4 = PTR_DAT_049c5a20;
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      uVar9 = *(undefined8 *)puVar4;
      param_1[8] = iStack_3c;
      FUN_0235c420(param_1 + 2,&iStack_3c,param_1,uVar9);
      return;
    }
  }
  if (*(long *)(lVar10 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_Queue___Il2CppFullySharedGenericType___Dequeue_291ff58
            (*(long *)(lVar10 + 0x88),&lStack_38,*(undefined8 *)puVar3);
  lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (lVar10,0xbcdc2f95,0);
  if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar9 = UnityEngine_Component__get_gameObject_3c187f4(lStack_38,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(uVar9,uVar9);
  }
  StatefulUI_Runtime_Core_ContainerView__Remove_334765c(lVar8,uVar9,1,0);
  lVar8 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                    (lStack_38,0xbcdc2f95,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = StatefulUI_Runtime_Core_ContainerView__get_RectTransform_3346638
                    (*(long *)(lVar8 + 0x20),0);
  if (lVar8 != 0) {
    UnityEngine_Transform__get_position_3c2d540(lVar8,0);
    if (*(long *)(lVar10 + 0x60) != 0) {
      FulfillItemsMonitor__Show_243ea38(*(long *)(lVar10 + 0x60),*(undefined8 *)(param_1 + 6),0);
      LondonTripSubMonitor__CreateNextProgressElement_247f598(lVar10);
      LondonTripSubMonitor__UpdateProgressView_247f400(lVar10,1);
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

