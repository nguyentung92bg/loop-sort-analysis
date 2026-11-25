/* IL2CPP: Extensions$$BindToBlendShape<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
LitMotion_MotionHandle_o Extensions__BindToBlendShape___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (LitMotion_MotionBuilder_float__TOptions__TAdapter__o builder, UnityEngine_SkinnedMeshRenderer_o* renderer, int32_t idx, const MethodInfo_25EE300* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$BindToBlendShape<__Il2CppFullySharedGenericStructType,
   __Il2CppFullySharedGenericStructType>
   LitMotion_MotionHandle_o
   Extensions__BindToBlendShape___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_
   (LitMotion_MotionBuilder_float__TOptions__TAdapter__o builder, UnityEngine_SkinnedMeshRenderer_o*
   renderer, int32_t idx, const MethodInfo_25EE300* method); */

void Extensions__BindToBlendShape___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee300
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_5 + 0x38) == 0) {
    FUN_021f03f8(PTR_DAT_049cd558);
    FUN_021f03f8(PTR_DAT_049cd560);
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_02229774(param_5);
    }
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_44 = param_4;
  System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a02e24
            (&uStack_40,param_3,&uStack_44,*(undefined8 *)PTR_DAT_049cd560);
  lVar3 = *(long *)(*(long *)(param_5 + 0x38) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02229718();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = *(long *)(*(long *)(param_5 + 0x38) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02229718();
  }
  uVar2 = uStack_38;
  uVar1 = uStack_40;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(*(long *)(param_5 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar3 = *(long *)(*(long *)(param_5 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cd558);
    System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_27af730
              (lVar3,uVar5,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x18),0);
    lVar4 = *(long *)(*(long *)(param_5 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718();
    }
    *(long *)(*(long *)(lVar4 + 0xb8) + 8) = lVar3;
    lVar4 = *(long *)(*(long *)(param_5 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718();
    }
    thunk_FUN_021f190c(*(long *)(lVar4 + 0xb8) + 8,lVar3);
  }
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  LitMotion_MotionBuilderExtensions__Bind___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGeneric_2688b5c
            (param_1,param_2,&uStack_40,lVar3,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x20));
  return;
}

