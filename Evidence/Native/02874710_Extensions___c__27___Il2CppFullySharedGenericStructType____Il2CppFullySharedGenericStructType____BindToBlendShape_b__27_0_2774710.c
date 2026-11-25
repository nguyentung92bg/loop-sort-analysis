/* IL2CPP: Extensions.<>c__27<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>$$<BindToBlendShape>b__27_0
void Extensions___c__27___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToBlendShape_b__27_0 (Extensions___c__27_TOptions__TAdapter__o* __this, float x, System_ValueTuple_SkinnedMeshRenderer__int__o tuple, const MethodInfo_2774710* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions.<>c__27<__Il2CppFullySharedGenericStructType,
   __Il2CppFullySharedGenericStructType>$$<BindToBlendShape>b__27_0
   void 
   Extensions___c__27___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToBlendShape_b__27_0
   (Extensions___c__27_TOptions__TAdapter__o* __this, float x,
   System_ValueTuple_SkinnedMeshRenderer__int__o tuple, const MethodInfo_2774710* method); */

void Extensions___c__27___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToBlendShape_b__27_0_2774710
               (undefined4 param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f576f9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a25dd8,param_4,0);
    bRam0000000004f576f9 = 1;
  }
  if (param_3 != 0) {
    lVar1 = *(long *)(param_3 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_3,0);
    }
    if (pcRam0000000004f57708 == (code *)0x0) {
      pcRam0000000004f57708 = (code *)FUN_021f03bc(&UNK_013de76b);
    }
                    /* WARNING: Could not recover jumptable at 0x03cefde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f57708)(param_1,lVar1,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

