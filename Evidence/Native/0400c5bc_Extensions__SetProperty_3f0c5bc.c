/* IL2CPP: Extensions$$SetProperty
void Extensions__SetProperty (UnityEngine_MaterialPropertyBlock_o* b, int32_t id, UnityEngine_Texture_o* v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$SetProperty
   void Extensions__SetProperty (UnityEngine_MaterialPropertyBlock_o* b, int32_t id,
   UnityEngine_Texture_o* v, const MethodInfo* method); */

void Extensions__SetProperty_3f0c5bc(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f56e41 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a25a90,param_2,param_3,0);
    FUN_021f03f8(PTR_DAT_049bf468);
    bRam0000000004f56e41 = 1;
  }
  if (param_3 == 0) {
    UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_3c32dbc
              (0,*(undefined8 *)PTR_DAT_049bf468,0);
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_1,0);
    }
    if (param_3 != 0) {
      lVar2 = *(long *)(param_3 + 0x10);
      if (lVar2 == 0) {
        UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_3c32dbc
                  (param_3,*(undefined8 *)PTR_DAT_049bf468,0);
      }
      if (pcRam0000000004f56ea0 == (code *)0x0) {
        pcRam0000000004f56ea0 = (code *)FUN_021f03bc(&UNK_013e471c);
      }
                    /* WARNING: Could not recover jumptable at 0x03cdb258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004f56ea0)(lVar1,param_2 & 0xffffffff,lVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

