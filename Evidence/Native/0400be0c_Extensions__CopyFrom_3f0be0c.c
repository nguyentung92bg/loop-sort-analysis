/* IL2CPP: Extensions$$CopyFrom
void Extensions__CopyFrom (UnityEngine_Animator_o* target, UnityEngine_Animator_o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$CopyFrom
   void Extensions__CopyFrom (UnityEngine_Animator_o* target, UnityEngine_Animator_o* source, const
   MethodInfo* method); */

void Extensions__CopyFrom_3f0be0c(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 == 0) || (uVar2 = UnityEngine_Animator__get_avatar_3bb3d2c(param_2,0), param_1 == 0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_Animator__set_avatar_3bb4c30(param_1,uVar2,0);
  uVar2 = UnityEngine_Animator__get_runtimeAnimatorController_3bb47a4(param_2,0);
  UnityEngine_Animator__set_runtimeAnimatorController_3bb4874(param_1,uVar2,0);
  uVar1 = UnityEngine_Animator__get_applyRootMotion_3baeedc(param_2,0);
  UnityEngine_Animator__set_applyRootMotion_3baef90(param_1,uVar1 & 1,0);
  if ((bRam0000000004f55a83 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a251f8);
    bRam0000000004f55a83 = 1;
  }
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_1,0);
    }
    if (pcRam0000000004f55ed0 == (code *)0x0) {
      pcRam0000000004f55ed0 = (code *)FUN_021f03bc(&UNK_013dfdb7);
    }
                    /* WARNING: Could not recover jumptable at 0x03cb5db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f55ed0)(lVar3,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

