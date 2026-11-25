/* IL2CPP: AdsModule.<HandleInterstitialCompleted>d__14$$MoveNext
void AdsModule__HandleInterstitialCompleted_d__14__MoveNext (AdsModule__HandleInterstitialCompleted_d__14_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdsModule.<HandleInterstitialCompleted>d__14$$MoveNext
   void AdsModule__HandleInterstitialCompleted_d__14__MoveNext
   (AdsModule__HandleInterstitialCompleted_d__14_o __this, const MethodInfo* method); */

void AdsModule__HandleInterstitialCompleted_d__14__MoveNext_253df70(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_60 [32];
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  
  if ((bRam0000000004f4bf9f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca460);
    FUN_021f03f8(PTR_DAT_049c59c8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bf9f = 1;
  }
  puVar3 = PTR_DAT_049c59c8;
  puVar2 = PTR_DAT_049b5310;
  puVar1 = PTR_DAT_049b5138;
  lVar9 = *(long *)(param_1 + 6);
  uStack_38 = 0;
  iStack_34 = 0;
  uStack_40 = 0;
  if (*param_1 == 0) {
    iStack_34 = param_1[10];
    param_1[10] = 0;
    *param_1 = -1;
    uStack_38 = 0;
    goto LAB_0263e0ec;
  }
  if ((char)param_1[4] != '\0') {
    lVar6 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = *(long *)(lVar6 + 0xb8);
    iVar4 = CloudPrefsInt__get_Value_24e99c0(lVar6 + 1000,0);
    CloudPrefsInt__set_Value_24e9a2c(lVar6 + 1000,iVar4 + 1,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar7 = AdsModule__AreNoAdsOfferConditionsMet_253dd90(lVar9,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(lVar9 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      LiveOpsModule__Show_253e230(auStack_60,*(long *)(lVar9 + 0x28),8,1);
      while( true ) {
        if (*(long *)(lVar9 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar7 = Monitors__IsActive_object__2688ab4(*(long *)(lVar9 + 0x20),*(undefined8 *)puVar3);
        if ((uVar7 & 1) == 0) break;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar5 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
        _uStack_38 = CONCAT44(iStack_34,uVar5);
        iVar4 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_38,0);
        iStack_34 = iVar4;
        uVar7 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c
                          (&iStack_34,0);
        puVar2 = PTR_DAT_049ca460;
        if ((uVar7 & 1) == 0) {
          *param_1 = 0;
          uVar8 = *(undefined8 *)puVar2;
          param_1[10] = iStack_34;
          FUN_0235c420(param_1 + 2,&iStack_34,param_1,uVar8);
          return;
        }
LAB_0263e0ec:
        Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_34,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 != 0) {
    (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
  }
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

