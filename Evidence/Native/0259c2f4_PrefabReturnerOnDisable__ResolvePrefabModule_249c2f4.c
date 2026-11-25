/* IL2CPP: PrefabReturnerOnDisable$$ResolvePrefabModule
void PrefabReturnerOnDisable__ResolvePrefabModule (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabReturnerOnDisable$$ResolvePrefabModule
   void PrefabReturnerOnDisable__ResolvePrefabModule (const MethodInfo* method); */

void PrefabReturnerOnDisable__ResolvePrefabModule_249c2f4(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_18;
  
  puVar1 = PTR_DAT_049c6398;
  if ((bRam0000000004f4babe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c63a0);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c6398);
    bRam0000000004f4babe = 1;
  }
  if (**(long **)(*(long *)puVar1 + 0xb8) == 0) {
    if (*(int *)(*(long *)PTR_DAT_049b5228 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar2 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)PTR_DAT_049b5f80);
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574(*(long *)PTR_DAT_049b3b98);
    }
    uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar2 + 0x50) != 0) {
        FUN_0235c744(*(long *)(lVar2 + 0x50),&uStack_18,*(undefined8 *)PTR_DAT_049c63a0);
        **(undefined8 **)(*(long *)puVar1 + 0xb8) = uStack_18;
        thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8));
      }
    }
  }
  return;
}

