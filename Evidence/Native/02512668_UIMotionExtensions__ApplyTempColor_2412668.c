/* IL2CPP: UIMotionExtensions$$ApplyTempColor
LitMotion_MotionHandle_o UIMotionExtensions__ApplyTempColor (UnityEngine_UI_Graphic_o* graphic, UnityEngine_Color_o color, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UIMotionExtensions$$ApplyTempColor
   LitMotion_MotionHandle_o UIMotionExtensions__ApplyTempColor (UnityEngine_UI_Graphic_o* graphic,
   UnityEngine_Color_o color, float duration, const MethodInfo* method); */

void UIMotionExtensions__ApplyTempColor_2412668
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               float param_5,long *param_6)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_90 [16];
  
  uVar7 = param_2;
  uVar8 = param_3;
  uVar9 = param_4;
  if ((bRam0000000004f4b72b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ba0);
    bRam0000000004f4b72b = 1;
  }
  puVar2 = PTR_DAT_049c2ba0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  if (param_6 != (long *)0x0) {
    uVar6 = (**(code **)(*param_6 + 0x298))(param_6,*(undefined8 *)(*param_6 + 0x2a0));
    auVar10 = LitMotion_LMotion__Create_2eaa318(0);
    auVar10 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToColor___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673900
                        (auVar10._0_8_,auVar10._8_8_,param_6,*(undefined8 *)puVar2);
    auVar11 = LitMotion_LMotion__Create_2eaa318
                        (param_1,param_2,param_3,param_4,uVar6,uVar7,uVar8,uVar9,0);
    auVar11 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToColor___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673900
                        (auVar11._0_8_,auVar11._8_8_,param_6,*(undefined8 *)puVar2);
    auStack_90 = LitMotion_LSequence__Create_2eaaa20(0);
    lVar3 = auStack_90._0_8_;
    if (lVar3 != 0) {
      uVar1 = auStack_90._8_4_ & 0xffff;
      if (*(ushort *)(lVar3 + 0x18) == uVar1) {
        LitMotion_MotionSequenceBuilderSource__Append_2eadcdc
                  (lVar3,auVar10._0_8_,auVar10._8_8_ & 0xffffffff,0);
        if (*(ushort *)(lVar3 + 0x18) == uVar1) {
          LitMotion_MotionSequenceBuilderSource__AppendInterval_2eadd5c((double)param_5,lVar3,0);
          if (*(ushort *)(lVar3 + 0x18) == uVar1) {
            LitMotion_MotionSequenceBuilderSource__Append_2eadcdc
                      (lVar3,auVar11._0_8_,auVar11._8_8_ & 0xffffffff,0);
            auVar10 = FUN_025267c4(auStack_90,0,0);
            LitMotion_MotionHandleExtensions__AddTo_2eace68
                      (auVar10._0_8_,auVar10._8_8_ & 0xffffffff,param_6,0);
            return;
          }
        }
      }
    }
    thunk_FUN_02256840(PTR_DAT_049b82b8);
    uVar4 = thunk_FUN_0222ca34();
    uVar5 = thunk_FUN_02256840(PTR_DAT_049c2ba8);
    System_InvalidOperationException___ctor_30fe440(uVar4,uVar5,0);
    uVar5 = thunk_FUN_02256840(PTR_DAT_049c2bb0);
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar4,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

