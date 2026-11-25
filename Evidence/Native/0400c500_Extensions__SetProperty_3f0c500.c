/* IL2CPP: Extensions$$SetProperty
void Extensions__SetProperty (UnityEngine_MaterialPropertyBlock_o* b, int32_t id, float v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$SetProperty
   void Extensions__SetProperty (UnityEngine_MaterialPropertyBlock_o* b, int32_t id, float v, const
   MethodInfo* method); */

void Extensions__SetProperty_3f0c500(undefined4 param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_2,0);
    }
    if (pcRam0000000004f56e80 == (code *)0x0) {
      pcRam0000000004f56e80 = (code *)FUN_021f03bc(&UNK_013d09b0);
    }
                    /* WARNING: Could not recover jumptable at 0x03cdaed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f56e80)(param_1,lVar1,param_3 & 0xffffffff);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0(0,param_3,0);
}

