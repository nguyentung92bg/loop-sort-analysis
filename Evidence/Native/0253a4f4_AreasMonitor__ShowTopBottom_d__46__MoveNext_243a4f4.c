/* IL2CPP: AreasMonitor.<ShowTopBottom>d__46$$MoveNext
void AreasMonitor__ShowTopBottom_d__46__MoveNext (AreasMonitor__ShowTopBottom_d__46_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: AreasMonitor.<ShowTopBottom>d__46$$MoveNext
   void AreasMonitor__ShowTopBottom_d__46__MoveNext (AreasMonitor__ShowTopBottom_d__46_o __this,
   const MethodInfo* method); */

void AreasMonitor__ShowTopBottom_d__46__MoveNext_243a4f4(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auStack_40 [16];
  undefined4 uStack_28;
  int iStack_24;
  
  if ((bRam0000000004f4b80e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3c80);
    FUN_021f03f8(PTR_DAT_049c2be8);
    FUN_021f03f8(PTR_DAT_049b99c8);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b80e = 1;
  }
  puVar1 = PTR_DAT_049b5138;
  auStack_40._8_8_ = 0;
  lVar9 = *(long *)(param_1 + 4);
  auStack_40._0_8_ = 0;
  auVar10 = ZEXT816(0);
  uStack_28 = 0;
  iStack_24 = 0;
  if (*param_1 == 0) {
    iStack_24 = param_1[6];
    param_1[6] = 0;
    *param_1 = -1;
    uStack_28 = 0;
    goto LAB_0253a6d8;
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_049b99c8 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02229718();
  }
  pcVar6 = (char *)thunk_FUN_0224e54c(lVar9 + 0x118,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar6 == '\0') {
    uVar7 = UniTimer__get_IsRunning_3f0efa0(lVar9 + 0x130,0);
    auStack_40 = UniTimer__CreateFromSeconds_3f0f2f4(_UNK_013aa4f4,0);
    auVar10 = UniTimer__SetUnscaled_3f0f260(auStack_40,0);
    *(undefined1 (*) [16])(lVar9 + 0x130) = auVar10;
    if ((uVar7 & 1) == 0) {
      FUN_024f75b8(*(undefined8 *)(lVar9 + 0x140),*(undefined4 *)(lVar9 + 0x148),1,0);
      if (*(long *)(lVar9 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_CanvasGroup__set_blocksRaycasts_3ec2e80(*(long *)(lVar9 + 0x128),1,0);
      auVar10 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,_UNK_013aa388,0);
      auVar11 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                          (auVar10._0_8_,auVar10._8_8_,*(undefined8 *)(lVar9 + 0x128),
                           *(undefined8 *)PTR_DAT_049c2be8);
      *(undefined1 (*) [12])(lVar9 + 0x140) = auVar11;
      while( true ) {
        uVar7 = UniTimer__get_IsRunning_3f0efa0(lVar9 + 0x130,0);
        if ((uVar7 & 1) == 0) break;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar3 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
        _uStack_28 = CONCAT44(iStack_24,uVar3);
        iVar4 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_28,0);
        iStack_24 = iVar4;
        uVar7 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c
                          (&iStack_24,0);
        puVar2 = PTR_DAT_049c3c80;
        auVar10 = auStack_40;
        if ((uVar7 & 1) == 0) {
          *param_1 = 0;
          uVar8 = *(undefined8 *)puVar2;
          param_1[6] = iStack_24;
          FUN_0235c420(param_1 + 2,&iStack_24,param_1,uVar8);
          return;
        }
LAB_0253a6d8:
        auStack_40 = auVar10;
        Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_24,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      if (*(long *)(lVar9 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_CanvasGroup__set_blocksRaycasts_3ec2e80(*(long *)(lVar9 + 0x128),0,0);
      auVar10 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0,_UNK_013aa388,0);
      auVar11 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                          (auVar10._0_8_,auVar10._8_8_,*(undefined8 *)(lVar9 + 0x128),
                           *(undefined8 *)PTR_DAT_049c2be8);
      *(undefined1 (*) [12])(lVar9 + 0x140) = auVar11;
    }
  }
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

