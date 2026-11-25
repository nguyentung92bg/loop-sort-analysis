/* IL2CPP: GarageSaleSubMonitor$$ApplyProgressViewMotion
LitMotion_MotionHandle_o GarageSaleSubMonitor__ApplyProgressViewMotion (GarageSaleSubMonitor_o* __this, UnityEngine_RectTransform_o* view, UnityEngine_RectTransform_o* container, System_Action_o* onComplete, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GarageSaleSubMonitor$$ApplyProgressViewMotion
   LitMotion_MotionHandle_o GarageSaleSubMonitor__ApplyProgressViewMotion (GarageSaleSubMonitor_o*
   __this, UnityEngine_RectTransform_o* view, UnityEngine_RectTransform_o* container,
   System_Action_o* onComplete, const MethodInfo* method); */

void GarageSaleSubMonitor__ApplyProgressViewMotion_2477be8
               (undefined1 param_1 [16],undefined4 param_2,undefined8 param_3,long param_4,
               long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_60 [16];
  
  if ((bRam0000000004f4b9d3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f70);
    FUN_021f03f8(PTR_DAT_049c2d70);
    FUN_021f03f8(PTR_DAT_049c5810);
    bRam0000000004f4b9d3 = 1;
  }
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if ((param_4 != 0) &&
     (uVar4 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(param_4,0),
     puVar3 = PTR_DAT_049c5810, puVar2 = PTR_DAT_049c2f70, puVar1 = PTR_DAT_049c2d70, param_5 != 0))
  {
    uVar6 = param_2;
    uVar5 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(param_5,0);
    auStack_60 = LitMotion_LMotion__Create_2eaa148(uVar4,param_2,uVar5,uVar6,0x3f000000,0);
    auVar7 = FUN_024f4e50(auStack_60,0x1b,*(undefined8 *)puVar1);
    auStack_60 = auVar7;
    auVar7 = FUN_024f6b84(auStack_60,param_6,*(undefined8 *)puVar3);
    auVar7 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                       (auVar7._0_8_,auVar7._8_8_,param_4,*(undefined8 *)puVar2);
    LitMotion_MotionHandleExtensions__AddTo_2eace68
              (auVar7._0_8_,auVar7._8_8_ & 0xffffffff,param_3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

