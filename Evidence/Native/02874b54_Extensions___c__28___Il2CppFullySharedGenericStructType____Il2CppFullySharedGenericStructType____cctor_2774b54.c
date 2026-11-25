/* IL2CPP: Extensions.<>c__28<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>$$.cctor
void Extensions___c__28___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____cctor (const MethodInfo_2774B54* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions.<>c__28<__Il2CppFullySharedGenericStructType,
   __Il2CppFullySharedGenericStructType>$$.cctor
   void 
   Extensions___c__28___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____cctor
   (const MethodInfo_2774B54* method); */

void Extensions___c__28___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____cctor_2774b54
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02229718();
  }
  if ((*(ushort *)(**(long **)(lVar1 + 0xc0) + 0x135) & 1) == 0) {
    FUN_02229718();
  }
  uVar2 = thunk_FUN_0222ca34();
  if ((*(ushort *)(*(long *)(param_1 + 0x20) + 0x135) & 1) == 0) {
    FUN_02229718(*(long *)(param_1 + 0x20));
  }
  System_Object___ctor_3142338(uVar2,0);
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02229718();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02229718();
  }
  lVar3 = *(long *)(param_1 + 0x20);
  **(undefined8 **)(lVar1 + 0xb8) = uVar2;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02229718();
  }
  lVar1 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02229718();
  }
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (*(ulong *)(lVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(lVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

