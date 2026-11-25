/* IL2CPP: Extensions$$ScaleAroundRelative
void Extensions__ScaleAroundRelative (UnityEngine_Transform_o* t, UnityEngine_Vector3_o pivot, UnityEngine_Vector3_o scaleFactor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ScaleAroundRelative
   void Extensions__ScaleAroundRelative (UnityEngine_Transform_o* t, UnityEngine_Vector3_o pivot,
   UnityEngine_Vector3_o scaleFactor, const MethodInfo* method); */

void Extensions__ScaleAroundRelative_3f0c78c
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               long param_5)

{
  long lVar1;
  float fVar2;
  
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  fVar2 = (float)UnityEngine_Transform__get_position_3c2d540(param_5,0);
  UnityEngine_Transform__set_position_3c2d61c(param_1 + param_4 * (fVar2 - param_1),param_5,0);
  UnityEngine_Transform__get_localScale_3c2dd20(param_5,0);
  if ((bRam0000000004f58a11 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26ad0,0);
    bRam0000000004f58a11 = 1;
  }
  if (param_5 != 0) {
    lVar1 = *(long *)(param_5 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_5,0);
    }
    if (pcRam0000000004f58a78 == (code *)0x0) {
      pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
    }
    (*pcRam0000000004f58a78)(lVar1,&stack0xffffffffffffffd4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

