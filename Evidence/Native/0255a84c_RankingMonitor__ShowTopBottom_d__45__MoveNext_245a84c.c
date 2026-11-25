/* IL2CPP: RankingMonitor.<ShowTopBottom>d__45$$MoveNext
void RankingMonitor__ShowTopBottom_d__45__MoveNext (RankingMonitor__ShowTopBottom_d__45_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: RankingMonitor.<ShowTopBottom>d__45$$MoveNext
   void RankingMonitor__ShowTopBottom_d__45__MoveNext (RankingMonitor__ShowTopBottom_d__45_o __this,
   const MethodInfo* method); */

void RankingMonitor__ShowTopBottom_d__45__MoveNext_245a84c(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined1 auStack_40 [16];
  undefined4 uStack_28;
  int iStack_24;
  
  if ((bRam0000000004f4b90c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4c18);
    FUN_021f03f8(PTR_DAT_049b5418);
    FUN_021f03f8(PTR_DAT_049c2be8);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b90c = 1;
  }
  puVar1 = PTR_DAT_049b5138;
  auStack_40._8_8_ = 0;
  lVar8 = *(long *)(param_1 + 4);
  auStack_40._0_8_ = 0;
  auVar9 = ZEXT816(0);
  uStack_28 = 0;
  iStack_24 = 0;
  if (*param_1 == 0) {
    iStack_24 = param_1[6];
    param_1[6] = 0;
    *param_1 = -1;
    uStack_28 = 0;
    goto LAB_0255aa4c;
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar8 + 0xf8) == 0) {
    FUN_024f75b8(*(undefined8 *)(lVar8 + 0x130),*(undefined4 *)(lVar8 + 0x138),1,0);
  }
  else {
    lVar7 = *(long *)(*(long *)(lVar8 + 0xf8) + 0x60);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(lVar7 + 0x18) < 0x1e) {
      FUN_024f75b8(*(undefined8 *)(lVar8 + 0x130),*(undefined4 *)(lVar8 + 0x138),1,0);
    }
    else {
      uVar5 = UniTimer__get_IsRunning_3f0efa0(lVar8 + 0x120,0);
      auStack_40 = UniTimer__CreateFromSeconds_3f0f2f4(_UNK_013aa4f4,0);
      auVar9 = UniTimer__SetUnscaled_3f0f260(auStack_40,0);
      *(undefined1 (*) [16])(lVar8 + 0x120) = auVar9;
      if ((uVar5 & 1) == 0) {
        FUN_024f75b8(*(undefined8 *)(lVar8 + 0x130),*(undefined4 *)(lVar8 + 0x138),1,0);
        if (*(long *)(lVar8 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_CanvasGroup__set_blocksRaycasts_3ec2e80(*(long *)(lVar8 + 0x118),1,0);
        auVar9 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,_UNK_013aa388,0);
        auVar10 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                            (auVar9._0_8_,auVar9._8_8_,*(undefined8 *)(lVar8 + 0x118),
                             *(undefined8 *)PTR_DAT_049c2be8);
        *(undefined1 (*) [12])(lVar8 + 0x130) = auVar10;
        while( true ) {
          uVar5 = UniTimer__get_IsRunning_3f0efa0(lVar8 + 0x120,0);
          if ((uVar5 & 1) == 0) break;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar3 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
          _uStack_28 = CONCAT44(iStack_24,uVar3);
          iVar4 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_28,0);
          iStack_24 = iVar4;
          uVar5 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c
                            (&iStack_24,0);
          puVar2 = PTR_DAT_049c4c18;
          auVar9 = auStack_40;
          if ((uVar5 & 1) == 0) {
            *param_1 = 0;
            uVar6 = *(undefined8 *)puVar2;
            param_1[6] = iStack_24;
            FUN_0235c420(param_1 + 2,&iStack_24,param_1,uVar6);
            return;
          }
LAB_0255aa4c:
          auStack_40 = auVar9;
          Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_24,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        }
        if (*(long *)(lVar8 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_CanvasGroup__set_blocksRaycasts_3ec2e80(*(long *)(lVar8 + 0x118),0,0);
        auVar9 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0,_UNK_013aa388,0);
        auVar10 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                            (auVar9._0_8_,auVar9._8_8_,*(undefined8 *)(lVar8 + 0x118),
                             *(undefined8 *)PTR_DAT_049c2be8);
        *(undefined1 (*) [12])(lVar8 + 0x130) = auVar10;
      }
    }
  }
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

