/* IL2CPP: SandPileField$$Allocate
void SandPileField__Allocate (Unity_Collections_NativeArray_float__o* array, int32_t length, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandPileField$$Allocate
   void SandPileField__Allocate (Unity_Collections_NativeArray_float__o* array, int32_t length,
   const MethodInfo* method); */

void SandPileField__Allocate_24d3d5c(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lStack_30;
  long lStack_28;
  
  if ((bRam0000000004f4bc2a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6f10);
    FUN_021f03f8(PTR_DAT_049c6ee0);
    FUN_021f03f8(PTR_DAT_049c6ef0);
    bRam0000000004f4bc2a = 1;
  }
  puVar1 = PTR_DAT_049c6ee0;
  if (*param_1 != 0) {
    Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
              (param_1,*(undefined8 *)PTR_DAT_049c6f10);
  }
  lStack_30 = 0;
  lStack_28 = 0;
  Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType____ctor_28f42d0
            (&lStack_30,param_2,4,1,*(undefined8 *)puVar1);
  param_1[1] = lStack_28;
  *param_1 = lStack_30;
  return;
}

