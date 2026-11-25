/* IL2CPP: PrefabModule$$GetOrCreatePool
System_Collections_Generic_Stack_GameObject__o* PrefabModule__GetOrCreatePool (PrefabModule_o* __this, UnityEngine_GameObject_o* original, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabModule$$GetOrCreatePool
   System_Collections_Generic_Stack_GameObject__o* PrefabModule__GetOrCreatePool (PrefabModule_o*
   __this, UnityEngine_GameObject_o* original, const MethodInfo* method); */

undefined8 PrefabModule__GetOrCreatePool_25375e0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4bf6a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca250);
    FUN_021f03f8(PTR_DAT_049ca230);
    FUN_021f03f8(PTR_DAT_049ca270);
    FUN_021f03f8(PTR_DAT_049ca278);
    bRam0000000004f4bf6a = 1;
  }
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x10),param_2,&uStack_28,*(undefined8 *)PTR_DAT_049ca230)
    ;
    if ((uVar1 & 1) == 0) {
      uVar2 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049ca278);
      System_Collections_Generic_Stack___Il2CppFullySharedGenericType____ctor_29a21c8
                (uVar2,*(undefined8 *)PTR_DAT_049ca270);
      uStack_28 = uVar2;
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_026376bc;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (*(long *)(param_1 + 0x10),param_2,uVar2,*(undefined8 *)PTR_DAT_049ca250);
    }
    return uStack_28;
  }
LAB_026376bc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

