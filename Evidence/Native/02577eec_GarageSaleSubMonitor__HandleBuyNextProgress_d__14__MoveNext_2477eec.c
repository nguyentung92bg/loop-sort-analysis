/* IL2CPP: GarageSaleSubMonitor.<HandleBuyNextProgress>d__14$$MoveNext
void GarageSaleSubMonitor__HandleBuyNextProgress_d__14__MoveNext (GarageSaleSubMonitor__HandleBuyNextProgress_d__14_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GarageSaleSubMonitor.<HandleBuyNextProgress>d__14$$MoveNext
   void GarageSaleSubMonitor__HandleBuyNextProgress_d__14__MoveNext
   (GarageSaleSubMonitor__HandleBuyNextProgress_d__14_o __this, const MethodInfo* method); */

void GarageSaleSubMonitor__HandleBuyNextProgress_d__14__MoveNext_2477eec
               (undefined1 param_1 [16],float param_2,float param_3,int *param_4)

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
  float fVar11;
  undefined4 uStack_58;
  int iStack_54;
  long lStack_48;
  
  if ((bRam0000000004f4b9d7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5828);
    FUN_021f03f8(PTR_DAT_049c4168);
    FUN_021f03f8(PTR_DAT_049c5830);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b9d7 = 1;
  }
  puVar4 = PTR_DAT_049c5830;
  puVar2 = PTR_DAT_049c4168;
  puVar1 = PTR_DAT_049b5138;
  lVar10 = *(long *)(param_4 + 4);
  uStack_58 = 0;
  iStack_54 = 0;
  if (*param_4 != 0) goto LAB_02577f98;
  iStack_54 = param_4[8];
  param_4[8] = 0;
  *param_4 = -1;
  uStack_58 = 0;
  while( true ) {
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_54,0);
LAB_02577f98:
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
    _uStack_58 = CONCAT44(iStack_54,uVar5);
    iVar6 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_58,0);
    iStack_54 = iVar6;
    uVar7 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c(&iStack_54,0);
    puVar3 = PTR_DAT_049c5828;
    if ((uVar7 & 1) == 0) {
      *param_4 = 0;
      uVar9 = *(undefined8 *)puVar3;
      param_4[8] = iStack_54;
      FUN_0235c420(param_4 + 2,&iStack_54,param_4,uVar9);
      return;
    }
  }
  if (*(long *)(lVar10 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_Queue___Il2CppFullySharedGenericType___Dequeue_291ff58
            (*(long *)(lVar10 + 0x70),&lStack_48,*(undefined8 *)puVar4);
  if (lStack_48 != 0) {
    lVar8 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0(lStack_48,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar11 = (float)UnityEngine_Transform__get_position_3c2d540(lVar8,0);
    if (cRam0000000004f4a55e == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a55e = '\x01';
    }
    if (*(long *)(lVar10 + 0x60) != 0) {
      lVar8 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      FulfillItemsMonitor__Show_243ea38
                (fVar11 + *(float *)(lVar8 + 0x18) * 1.5,param_2 + *(float *)(lVar8 + 0x1c) * 1.5,
                 param_3 + *(float *)(lVar8 + 0x20) * 1.5,*(long *)(lVar10 + 0x60),
                 *(undefined8 *)(param_4 + 6),0);
      lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                        (lVar10,0xbcdc2f95,0);
      uVar9 = UnityEngine_Component__get_gameObject_3c187f4(lStack_48,0);
      if (lVar8 != 0) {
        StatefulUI_Runtime_Core_ContainerView__Remove_334765c(lVar8,uVar9,0,0);
        GarageSaleSubMonitor__UpdateProgressView_24776c8(lVar10,1);
        *param_4 = -2;
        FUN_0235afc8(param_4 + 2,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(uVar9,uVar9);
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

