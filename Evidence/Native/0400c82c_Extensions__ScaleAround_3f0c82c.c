/* IL2CPP: Extensions$$ScaleAround
void Extensions__ScaleAround (UnityEngine_Transform_o* t, UnityEngine_Vector3_o pivot, UnityEngine_Vector3_o newScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ScaleAround
   void Extensions__ScaleAround (UnityEngine_Transform_o* t, UnityEngine_Vector3_o pivot,
   UnityEngine_Vector3_o newScale, const MethodInfo* method); */

void Extensions__ScaleAround_3f0c82c
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               long param_7)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  fVar5 = param_2;
  fVar6 = param_3;
  fVar2 = (float)UnityEngine_Transform__get_position_3c2d540(param_7,0);
  fVar3 = fVar5 - param_2;
  fVar7 = fVar6 - param_3;
  fVar4 = (float)UnityEngine_Transform__get_localScale_3c2dd20(param_7,0);
  UnityEngine_Transform__get_localScale_3c2dd20(param_7,0);
  UnityEngine_Transform__get_localScale_3c2dd20(param_7,0);
  UnityEngine_Transform__set_position_3c2d61c
            (param_1 + (fVar2 - param_1) * (param_4 / fVar4),param_2 + fVar3 * (param_5 / fVar5),
             param_3 + fVar7 * (param_6 / fVar6),param_7,0);
  if ((bRam0000000004f58a11 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26ad0,0);
    bRam0000000004f58a11 = 1;
  }
  if (param_7 != 0) {
    lVar1 = *(long *)(param_7 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_7,0);
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

