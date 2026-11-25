/* IL2CPP: TutorialMonitor$$SetFade
void TutorialMonitor__SetFade (TutorialMonitor_o* __this, UnityEngine_Vector3_o worldPoint, float v, UnityEngine_Vector2_o offset, float duration, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: TutorialMonitor$$SetFade
   void TutorialMonitor__SetFade (TutorialMonitor_o* __this, UnityEngine_Vector3_o worldPoint, float
   v, UnityEngine_Vector2_o offset, float duration, float delay, const MethodInfo* method); */

void TutorialMonitor__SetFade_2468588
               (undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,float param_5
               ,float param_6,undefined4 param_7,undefined4 param_8,long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auStack_90 [16];
  
  if ((bRam0000000004f4b971 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5388);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c20d8);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049c2bf0);
    FUN_021f03f8(PTR_DAT_049c2288);
    bRam0000000004f4b971 = 1;
  }
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  if ((*(long *)(param_9 + 0x98) != 0) &&
     (lVar6 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_9 + 0x98),0), lVar6 != 0
     )) {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar6,1,0);
    MonitorBase__WorldToCanvasSpace_256cc8c
              (param_1,param_2,param_3,param_9,*(undefined8 *)(param_9 + 0x98),0);
    puVar4 = PTR_DAT_049c2288;
    puVar3 = PTR_DAT_049c20d8;
    lVar6 = *(long *)(param_9 + 0x98);
    if (lVar6 != 0) {
      fVar9 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar6,0);
      UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                (param_5 + fVar9,param_6 + param_2,lVar6,0);
      uVar7 = FUN_025691dc(*(undefined8 *)(param_9 + 0xa8),*(undefined4 *)(param_9 + 0xb0),0);
      if ((uVar7 & 1) != 0) {
        FUN_024f73c0(*(undefined8 *)(param_9 + 0xa8),*(undefined4 *)(param_9 + 0xb0),1,0);
      }
      puVar5 = PTR_DAT_049c2bf0;
      puVar2 = PTR_DAT_049c1358;
      puVar1 = PTR_DAT_049b6110;
      auStack_90 = LitMotion_LMotion__Create_2ea9f9c(_UNK_013aa900,param_4,param_7,0);
      auVar10 = FUN_024f6e90(param_8,auStack_90,0,1,*(undefined8 *)puVar3);
      lVar6 = *(long *)puVar4;
      auStack_90 = auVar10;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar4;
      }
      puVar3 = PTR_DAT_049c5388;
      auVar10 = FUN_02526574(auStack_90,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60),
                             *(undefined8 *)puVar5);
      auStack_90 = auVar10;
      auVar10 = FUN_024f4e50(auStack_90,8,*(undefined8 *)puVar2);
      uVar8 = *(undefined8 *)(param_9 + 0xa0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar10 = Extensions__BindToTransitionRate___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ef0b8
                          (auVar10._0_8_,auVar10._8_8_,uVar8,*(undefined8 *)puVar3);
      uVar8 = UnityEngine_Component__get_gameObject_3c187f4(param_9,0);
      auVar11 = LitMotion_MotionHandleExtensions__AddTo_2eacb88
                          (auVar10._0_8_,auVar10._8_8_ & 0xffffffff,uVar8,0);
      *(undefined1 (*) [12])(param_9 + 0xa8) = auVar11;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

