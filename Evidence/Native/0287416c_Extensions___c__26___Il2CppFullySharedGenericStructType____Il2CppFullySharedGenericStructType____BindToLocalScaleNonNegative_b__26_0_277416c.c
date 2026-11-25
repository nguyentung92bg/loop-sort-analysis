/* IL2CPP: Extensions.<>c__26<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>$$<BindToLocalScaleNonNegative>b__26_0
void Extensions___c__26___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToLocalScaleNonNegative_b__26_0 (Extensions___c__26_TOptions__TAdapter__o* __this, UnityEngine_Vector3_o x, UnityEngine_Transform_o* t, const MethodInfo_277416C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions.<>c__26<__Il2CppFullySharedGenericStructType,
   __Il2CppFullySharedGenericStructType>$$<BindToLocalScaleNonNegative>b__26_0
   void 
   Extensions___c__26___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToLocalScaleNonNegative_b__26_0
   (Extensions___c__26_TOptions__TAdapter__o* __this, UnityEngine_Vector3_o x,
   UnityEngine_Transform_o* t, const MethodInfo_277416C* method); */

void Extensions___c__26___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToLocalScaleNonNegative_b__26_0_277416c
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_049c1690;
  if ((bRam0000000004f4c4b0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4c4b0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f58a11 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26ad0,0);
    bRam0000000004f58a11 = 1;
  }
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_2,0);
    }
    if (pcRam0000000004f58a78 == (code *)0x0) {
      pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
    }
    (*pcRam0000000004f58a78)(lVar2,&stack0xffffffffffffffd4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

