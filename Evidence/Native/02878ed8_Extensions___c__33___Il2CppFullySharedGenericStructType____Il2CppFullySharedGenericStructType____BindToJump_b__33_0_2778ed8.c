/* IL2CPP: Extensions.<>c__33<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>$$<BindToJump>b__33_0
void Extensions___c__33___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToJump_b__33_0 (Extensions___c__33_TOptions__TAdapter__o* __this, float t, System_ValueTuple_Transform__Vector3__Vector3__float__o tuple, const MethodInfo_2778ED8* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Extensions.<>c__33<__Il2CppFullySharedGenericStructType,
   __Il2CppFullySharedGenericStructType>$$<BindToJump>b__33_0
   void 
   Extensions___c__33___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToJump_b__33_0
   (Extensions___c__33_TOptions__TAdapter__o* __this, float t,
   System_ValueTuple_Transform__Vector3__Vector3__float__o tuple, const MethodInfo_2778ED8* method);
    */

void Extensions___c__33___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToJump_b__33_0_2778ed8
               (float param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_3;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  FUN_046086e0(param_1 * _UNK_013aa860);
  if ((bRam0000000004f58a09 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26ad0,0);
    bRam0000000004f58a09 = 1;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f58a38 == (code *)0x0) {
      pcRam0000000004f58a38 = (code *)FUN_021f03bc(&UNK_013e8d5f);
    }
    (*pcRam0000000004f58a38)(lVar2,&stack0xffffffffffffffd4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

