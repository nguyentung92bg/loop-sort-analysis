/* IL2CPP: SandJellyRenderer$$HiddenColor
UnityEngine_Vector4_o SandJellyRenderer__HiddenColor (UnityEngine_Material_o* material, System_String_o* name, UnityEngine_Color_o fallback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandJellyRenderer$$HiddenColor
   UnityEngine_Vector4_o SandJellyRenderer__HiddenColor (UnityEngine_Material_o* material,
   System_String_o* name, UnityEngine_Color_o fallback, const MethodInfo* method); */

undefined4
SandJellyRenderer__HiddenColor_24d2f9c(undefined4 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    uVar1 = UnityEngine_Material__HasProperty_3be6890(param_2,param_3,0);
    if ((uVar1 & 1) != 0) {
      param_1 = UnityEngine_Material__GetColor_3bee3a4(param_2,param_3,0);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

