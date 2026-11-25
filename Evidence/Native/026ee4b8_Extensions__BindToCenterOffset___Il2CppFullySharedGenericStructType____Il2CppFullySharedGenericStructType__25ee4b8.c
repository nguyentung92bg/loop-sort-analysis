/* IL2CPP: Extensions$$BindToCenterOffset<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
LitMotion_MotionHandle_o Extensions__BindToCenterOffset___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (LitMotion_MotionBuilder_Vector2__TOptions__TAdapter__o builder, Unity_Cinemachine_CinemachineGroupFraming_o* groupFraming, const MethodInfo_25EE4B8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$BindToCenterOffset<__Il2CppFullySharedGenericStructType,
   __Il2CppFullySharedGenericStructType>
   LitMotion_MotionHandle_o
   Extensions__BindToCenterOffset___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_
   (LitMotion_MotionBuilder_Vector2__TOptions__TAdapter__o builder,
   Unity_Cinemachine_CinemachineGroupFraming_o* groupFraming, const MethodInfo_25EE4B8* method); */

void Extensions__BindToCenterOffset___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee4b8
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
    FUN_021f03f8(PTR_DAT_049cd568);
    lVar1 = *(long *)(param_4 + 0x38);
    if (lVar1 == 0) {
      FUN_02229774(param_4);
      lVar1 = *(long *)(param_4 + 0x38);
    }
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02229718();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar2 = *(long *)(param_4 + 0x38);
  lVar1 = *(long *)(lVar2 + 0x10);
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
                    /* try { // try from 026ee580 to 027ee647 has its CatchHandler @ 026ee580
                       catch() { ... } // from try @ 026ee580 with catch @ 026ee580
                       catch() { ... } // from try @ 026ee8ec with catch @ 026ee580
                       catch() { ... } // from try @ 026ee9d8 with catch @ 026ee580
                       catch() { ... } // from try @ 026eea34 with catch @ 026ee580
                       catch() { ... } // from try @ 026eea9c with catch @ 026ee580 */
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    lVar1 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cd568);
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

