/* IL2CPP: SlicedFilledImage.SetPropertyUtility$$SetClass<object>
bool SlicedFilledImage_SetPropertyUtility__SetClass_object_ (Il2CppObject** currentValue, Il2CppObject* newValue, const MethodInfo_2737B98* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage.SetPropertyUtility$$SetClass<object>
   bool SlicedFilledImage_SetPropertyUtility__SetClass_object_ (Il2CppObject** currentValue,
   Il2CppObject* newValue, const MethodInfo_2737B98* method); */

undefined8
SlicedFilledImage_SetPropertyUtility__SetClass_object__2737b98(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)*param_1;
  if (param_2 == 0 && plVar1 == (long *)0x0) {
LAB_02837bcc:
    uVar3 = 0;
  }
  else {
    if (plVar1 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x138))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x140));
      if ((uVar2 & 1) != 0) goto LAB_02837bcc;
    }
    *param_1 = param_2;
    thunk_FUN_021f190c(param_1,param_2);
    uVar3 = 1;
  }
  return uVar3;
}

