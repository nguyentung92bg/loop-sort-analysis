/* IL2CPP: UIMotionExtensions$$ApplyTempColor
LitMotion_MotionHandle_o UIMotionExtensions__ApplyTempColor (StatefulUI_Runtime_Core_StatefulComponent_o* view, int32_t role, UnityEngine_Color_o color, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UIMotionExtensions$$ApplyTempColor
   LitMotion_MotionHandle_o UIMotionExtensions__ApplyTempColor
   (StatefulUI_Runtime_Core_StatefulComponent_o* view, int32_t role, UnityEngine_Color_o color,
   float duration, const MethodInfo* method); */

void UIMotionExtensions__ApplyTempColor_2412940
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  long lVar1;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4b72c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2bb8);
    bRam0000000004f4b72c = 1;
  }
  lVar1 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                    (param_6,param_7,0);
  if (lVar1 != 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (lVar1,&uStack_48,*(undefined8 *)PTR_DAT_049c2bb8);
    UIMotionExtensions__ApplyTempColor_2412668(param_1,param_2,param_3,param_4,param_5,uStack_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

