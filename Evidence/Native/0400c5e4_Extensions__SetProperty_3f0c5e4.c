/* IL2CPP: Extensions$$SetProperty
void Extensions__SetProperty (UnityEngine_MaterialPropertyBlock_o* b, int32_t id, UnityEngine_ComputeBuffer_o* v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$SetProperty
   void Extensions__SetProperty (UnityEngine_MaterialPropertyBlock_o* b, int32_t id,
   UnityEngine_ComputeBuffer_o* v, const MethodInfo* method); */

void Extensions__SetProperty_3f0c5e4(long param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_1,0);
    }
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = *(undefined8 *)(param_3 + 0x10);
    }
    if (pcRam0000000004f56ea8 == (code *)0x0) {
      pcRam0000000004f56ea8 = (code *)FUN_021f03bc(&UNK_013bccb5);
    }
                    /* WARNING: Could not recover jumptable at 0x03cdb31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f56ea8)(lVar1,param_2,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

