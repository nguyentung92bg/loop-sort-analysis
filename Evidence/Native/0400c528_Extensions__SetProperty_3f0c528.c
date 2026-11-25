/* IL2CPP: Extensions$$SetProperty
void Extensions__SetProperty (UnityEngine_MaterialPropertyBlock_o* b, int32_t id, UnityEngine_Vector2_o v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$SetProperty
   void Extensions__SetProperty (UnityEngine_MaterialPropertyBlock_o* b, int32_t id,
   UnityEngine_Vector2_o v, const MethodInfo* method); */

void Extensions__SetProperty_3f0c528
               (undefined4 param_1,undefined4 param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_30 = param_1;
  uStack_2c = param_2;
  if (param_3 != 0) {
    lVar1 = *(long *)(param_3 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_3,0);
    }
    if (pcRam0000000004f56e88 == (code *)0x0) {
      pcRam0000000004f56e88 = (code *)FUN_021f03bc(&UNK_013b9000);
    }
    (*pcRam0000000004f56e88)(lVar1,param_4 & 0xffffffff,&uStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0(0,param_4,0);
}

