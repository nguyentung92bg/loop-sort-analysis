/* IL2CPP: SlideTransition$$Apply
Cysharp_Threading_Tasks_UniTask_o SlideTransition__Apply (SlideTransition_o __this, IMonitor_o* _monitor, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlideTransition$$Apply
   Cysharp_Threading_Tasks_UniTask_o SlideTransition__Apply (SlideTransition_o __this, IMonitor_o*
   _monitor, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

undefined8
SlideTransition__Apply_256f768
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,int *param_4,long *param_5,
          undefined8 param_6)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_50 [16];
  
  puVar3 = PTR_DAT_049cc088;
  if ((bRam0000000004f4c1be & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049cc090);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049c2240);
    FUN_021f03f8(PTR_DAT_049c2bf0);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049bc0c8);
    FUN_021f03f8(PTR_DAT_049cbf60);
    FUN_021f03f8(PTR_DAT_049cc098);
    FUN_021f03f8(PTR_DAT_049cc088);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4c1be = 1;
  }
  puVar2 = PTR_DAT_049b5138;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Object___ctor_3142338(lVar4,0);
  if (param_5 == (long *)0x0) {
LAB_0266f8f0:
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar2;
    }
                    /* try { // try from 0266f904 to 0276f913 has its CatchHandler @ 0266feac */
    return *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_049cbf60 + 0x130);
                    /* try { // try from 0266f868 to 0276f8eb has its CatchHandler @ 0266f868
                       catch() { ... } // from try @ 0266f868 with catch @ 0266f868
                       catch() { ... } // from try @ 0266fe10 with catch @ 0266f868
                       catch() { ... } // from try @ 0266fe78 with catch @ 0266f868
                       catch() { ... } // from try @ 0266ff20 with catch @ 0266f868
                       catch() { ... } // from try @ 0266ff58 with catch @ 0266f868
                       catch() { ... } // from try @ 0266ffc0 with catch @ 0266f868 */
  if (((*(byte *)(*param_5 + 0x130) < bVar1) ||
      (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_049cbf60))
     || (uVar5 = StatefulUISupport_Scripts_Components_StatefulView__HasObject_335199c
                           (param_5,0x8ac5d2f7,0), (uVar5 & 1) == 0)) goto LAB_0266f8f0;
  lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_5,0x8ac5d2f7,0)
  ;
  if ((lVar6 == 0) ||
     (plVar7 = (long *)UnityEngine_GameObject__get_transform_3c1ca74(lVar6,0), lVar4 == 0))
  goto LAB_0266fac4;
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
  }
  else {
    lVar6 = *(long *)PTR_DAT_049bc0c8;
    plVar9 = plVar7;
    if (*plVar7 != lVar6) {
      plVar9 = (long *)0x0;
    }
    *(long **)(lVar4 + 0x10) = plVar9;
    if (*plVar7 != lVar6) {
      plVar7 = (long *)0x0;
    }
  }
  plVar9 = (long *)(lVar4 + 0x10);
  thunk_FUN_021f190c(plVar9,plVar7);
  if ((char)param_4[1] == '\0') {
    fVar11 = 0.0;
  }
  else {
    lVar6 = *plVar9;
    if (*param_4 == 0) {
      if (lVar6 == 0) goto LAB_0266fac4;
      UnityEngine_RectTransform__get_rect_3c2ba98(lVar6,0);
      fVar11 = -500.0 - param_3;
    }
    else {
      if (lVar6 == 0) goto LAB_0266fac4;
      UnityEngine_RectTransform__get_rect_3c2ba98(lVar6,0);
      fVar11 = param_3 + 500.0;
    }
    fVar10 = 0.0;
                    /* try { // try from 0266f990 to 0276f9ab has its CatchHandler @ 0266fea8 */
    if ((char)param_4[1] != '\0') goto LAB_0266f9d4;
  }
  lVar6 = *plVar9;
  if (*param_4 == 0) {
    if (lVar6 == 0) goto LAB_0266fac4;
    UnityEngine_RectTransform__get_rect_3c2ba98(lVar6,0);
                    /* try { // try from 0266f9c8 to 0276f9cf has its CatchHandler @ 0266fe98 */
    fVar10 = -500.0 - param_3;
  }
  else {
    if (lVar6 == 0) {
LAB_0266fac4:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_RectTransform__get_rect_3c2ba98(lVar6,0);
                    /* try { // try from 0266f9ac to 0276f9bb has its CatchHandler @ 0266fea0 */
    fVar10 = param_3 + 500.0;
  }
LAB_0266f9d4:
                    /* try { // try from 0266f9e0 to 0276f9e3 has its CatchHandler @ 0266fe80 */
  auStack_50 = LitMotion_LMotion__Create_2ea9f9c(fVar11,fVar10,param_4[2],0);
                    /* try { // try from 0266f9e4 to 0276f9ff has its CatchHandler @ 0266fe94 */
  auVar12 = FUN_024f4e50(auStack_50,3,*(undefined8 *)PTR_DAT_049c1358);
  puVar3 = PTR_DAT_049c2288;
                    /* try { // try from 0266fa04 to 0276fa0f has its CatchHandler @ 0266fe90 */
  lVar6 = *(long *)PTR_DAT_049c2288;
  auStack_50 = auVar12;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar3;
  }
                    /* try { // try from 0266fa24 to 0276fad7 has its CatchHandler @ 0266fed0 */
  auVar12 = FUN_02526574(auStack_50,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60),
                         *(undefined8 *)PTR_DAT_049c2bf0);
  auStack_50 = auVar12;
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
  System_Action___ctor_306b98c(uVar8,lVar4,*(undefined8 *)PTR_DAT_049cc098,0);
  auVar12 = FUN_024f6b84(auStack_50,uVar8,*(undefined8 *)PTR_DAT_049c2240);
  auVar12 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPositionX___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2667050
                      (auVar12._0_8_,auVar12._8_8_,*(undefined8 *)(lVar4 + 0x10),
                       *(undefined8 *)PTR_DAT_049cc090);
  auVar12 = LitMotion_MotionHandleExtensions__AddTo_2eace68
                      (auVar12._0_8_,auVar12._8_8_ & 0xffffffff,param_5,0);
  uVar8 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                    (auVar12._0_8_,auVar12._8_8_ & 0xffffffff,param_6,0);
  return uVar8;
}

