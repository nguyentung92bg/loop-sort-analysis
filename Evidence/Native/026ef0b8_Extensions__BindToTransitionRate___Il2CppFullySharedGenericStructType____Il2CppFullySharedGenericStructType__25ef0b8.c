/* IL2CPP: Extensions$$BindToTransitionRate<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
LitMotion_MotionHandle_o Extensions__BindToTransitionRate___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (LitMotion_MotionBuilder_float__TOptions__TAdapter__o builder, Coffee_UIEffects_UIEffect_o* uiEffect, const MethodInfo_25EF0B8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$BindToTransitionRate<__Il2CppFullySharedGenericStructType,
   __Il2CppFullySharedGenericStructType>
   LitMotion_MotionHandle_o
   Extensions__BindToTransitionRate___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_
   (LitMotion_MotionBuilder_float__TOptions__TAdapter__o builder, Coffee_UIEffects_UIEffect_o*
   uiEffect, const MethodInfo_25EF0B8* method); */

void Extensions__BindToTransitionRate___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ef0b8
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_4 + 0x38);
  uStack_40 = param_1;
  uStack_38 = param_2;
  if (lVar1 == 0) {
    FUN_021f03f8(PTR_DAT_049cd5b0);
    lVar1 = *(long *)(param_4 + 0x38);
    if (lVar1 == 0) {
                    /* try { // try from 026ef0f4 to 027ef103 has its CatchHandler @ 026ef104 */
      FUN_02229774(param_4);
      lVar1 = *(long *)(param_4 + 0x38);
    }
  }
  lVar1 = *(long *)(lVar1 + 0x10);
                    /* catch() { ... } // from try @ 026ef08c with catch @ 026ef104
                       catch() { ... } // from try @ 026ef0f4 with catch @ 026ef104 */
                    /* try { // try from 026ef108 to 027ef10b has its CatchHandler @ 026ef114 */
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 026ef10c to 027ef117 has its CatchHandler @ 026eeab4 */
    lVar1 = FUN_02229718();
  }
                    /* catch() { ... } // from try @ 026ef018 with catch @ 026ef114
                       catch() { ... } // from try @ 026ef04c with catch @ 026ef114
                       catch() { ... } // from try @ 026ef108 with catch @ 026ef114 */
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar2 = *(long *)(param_4 + 0x38);
  lVar1 = *(long *)(lVar2 + 0x10);
                    /* try { // try from 026ef124 to 027ef293 has its CatchHandler @ 026ef124
                       catch() { ... } // from try @ 026ef124 with catch @ 026ef124
                       catch() { ... } // from try @ 026ef438 with catch @ 026ef124
                       catch() { ... } // from try @ 026efa00 with catch @ 026ef124
                       catch() { ... } // from try @ 026efaf4 with catch @ 026ef124
                       catch() { ... } // from try @ 026efb3c with catch @ 026ef124
                       catch() { ... } // from try @ 026efb74 with catch @ 026ef124
                       catch() { ... } // from try @ 026efbb8 with catch @ 026ef124
                       catch() { ... } // from try @ 026efc20 with catch @ 026ef124 */
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02229718();
    lVar2 = *(long *)(param_4 + 0x38);
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 == 0) {
    lVar1 = *(long *)(lVar2 + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02229718();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar1 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02229718();
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    lVar1 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cd5b0);
    System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_27af730
              (lVar1,uVar3,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18),0);
    lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02229718();
    }
    *(long *)(*(long *)(lVar2 + 0xb8) + 8) = lVar1;
    lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02229718();
    }
    thunk_FUN_021f190c(*(long *)(lVar2 + 0xb8) + 8,lVar1);
    lVar2 = *(long *)(param_4 + 0x38);
  }
  FUN_024f4ff0(&uStack_40,param_3,lVar1,*(undefined8 *)(lVar2 + 0x20));
  return;
}

