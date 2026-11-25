/* IL2CPP: SandFlowSystem$$Jelly
void SandFlowSystem__Jelly (SandFlowSystem_o* __this, UnityEngine_MeshRenderer_o* meshRenderer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$Jelly
   void SandFlowSystem__Jelly (SandFlowSystem_o* __this, UnityEngine_MeshRenderer_o* meshRenderer,
   const MethodInfo* method); */

void SandFlowSystem__Jelly_24cee3c(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bbfe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1da0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bbfe = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x158) == 0) ||
     (System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                (*(long *)(param_1 + 0x158),param_2,*(undefined8 *)PTR_DAT_049c1da0), param_2 == 0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f56eed & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a25b08,1,0);
    bRam0000000004f56eed = 1;
  }
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_2,0);
    }
    if (pcRam0000000004f56fa8 == (code *)0x0) {
      pcRam0000000004f56fa8 = (code *)FUN_021f03bc(&UNK_013d0a63);
    }
                    /* WARNING: Could not recover jumptable at 0x03cdd044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f56fa8)(lVar3,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

