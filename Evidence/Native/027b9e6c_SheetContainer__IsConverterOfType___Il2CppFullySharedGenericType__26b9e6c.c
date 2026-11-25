/* IL2CPP: SheetContainer$$IsConverterOfType<__Il2CppFullySharedGenericType>
bool SheetContainer__IsConverterOfType___Il2CppFullySharedGenericType_ (SheetContainer_o* __this, const MethodInfo_26B9E6C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SheetContainer$$IsConverterOfType<__Il2CppFullySharedGenericType>
   bool SheetContainer__IsConverterOfType___Il2CppFullySharedGenericType_ (SheetContainer_o* __this,
   const MethodInfo_26B9E6C* method); */

bool SheetContainer__IsConverterOfType___Il2CppFullySharedGenericType__26b9e6c
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_02229774(param_2);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x20);
                    /* try { // try from 027b9ea4 to 028b9eaf has its CatchHandler @ 027ba0ac */
      lVar1 = **(long **)(param_2 + 0x38);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02229718(lVar1);
      }
      lVar1 = thunk_FUN_0222c938(uVar2,lVar1);
      return lVar1 != 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

