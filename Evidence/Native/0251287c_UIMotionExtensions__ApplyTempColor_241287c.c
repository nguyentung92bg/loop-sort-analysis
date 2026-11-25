/* IL2CPP: UIMotionExtensions$$ApplyTempColor
LitMotion_MotionHandle_o UIMotionExtensions__ApplyTempColor (StatefulUI_Runtime_Core_StatefulComponent_o* view, int32_t role, UnityEngine_Color_o color, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UIMotionExtensions$$ApplyTempColor
   LitMotion_MotionHandle_o UIMotionExtensions__ApplyTempColor
   (StatefulUI_Runtime_Core_StatefulComponent_o* view, int32_t role, UnityEngine_Color_o color,
   float duration, const MethodInfo* method); */

void UIMotionExtensions__ApplyTempColor_241287c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  lVar1 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                    (param_6,param_7,0);
  if (lVar1 != 0) {
    UIMotionExtensions__ApplyTempColor_2412668
              (param_1,param_2,param_3,param_4,param_5,*(undefined8 *)(lVar1 + 0x38));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

