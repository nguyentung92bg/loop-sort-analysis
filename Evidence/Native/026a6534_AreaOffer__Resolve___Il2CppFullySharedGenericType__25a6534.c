/* IL2CPP: AreaOffer$$Resolve<__Il2CppFullySharedGenericType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o AreaOffer__Resolve___Il2CppFullySharedGenericType_ (const MethodInfo_25A6534* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$Resolve<__Il2CppFullySharedGenericType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   AreaOffer__Resolve___Il2CppFullySharedGenericType_ (const MethodInfo_25A6534* method); */

void AreaOffer__Resolve___Il2CppFullySharedGenericType__25a6534(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_2 + 0x38);
  if (lVar2 == 0) {
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    lVar2 = *(long *)(param_2 + 0x38);
    if (lVar2 == 0) {
      FUN_02229774(param_2);
      lVar2 = *(long *)(param_2 + 0x38);
    }
  }
  uVar3 = (ulong)*(uint *)(*(long *)(lVar2 + 8) + 0xfc);
  if (*(int *)(*(long *)PTR_DAT_049b5228 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar2 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)PTR_DAT_049b5f80);
  if (lVar2 == 0) {
    if (*(long *)(lVar1 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    FUN_0235c744(*(undefined8 *)(lVar2 + 0x50),auStack_50 + -(uVar3 + 0xf & 0x1fffffff0),
                 **(undefined8 **)(param_2 + 0x38));
    func_0x04608620(param_1,auStack_50 + -(uVar3 + 0xf & 0x1fffffff0),uVar3);
    if (*(long *)(lVar1 + 0x28) == lStack_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

