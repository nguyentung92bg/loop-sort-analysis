/* IL2CPP: TypeH$$NameOf<__Il2CppFullySharedGenericType>
System_String_o* TypeH__NameOf___Il2CppFullySharedGenericType_ (const MethodInfo_26E3720* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TypeH$$NameOf<__Il2CppFullySharedGenericType>
   System_String_o* TypeH__NameOf___Il2CppFullySharedGenericType_ (const MethodInfo_26E3720*
   method); */

undefined8 TypeH__NameOf___Il2CppFullySharedGenericType__26e3720(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    FUN_02229774(param_1);
    lVar1 = *(long *)(param_1 + 0x38);
  }
  lVar1 = *(long *)(lVar1 + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02229718();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02229718();
  }
  return **(undefined8 **)(lVar1 + 0xb8);
}

