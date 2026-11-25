/* IL2CPP: SwayEffect$$Update
void SwayEffect__Update (SwayEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SwayEffect$$Update
   void SwayEffect__Update (SwayEffect_o* __this, const MethodInfo* method); */

void SwayEffect__Update_2573704(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar3 = (float)UnityEngine_Time__get_time_3c295c8(0);
  }
  else {
                    /* try { // try from 02673720 to 027737ab has its CatchHandler @ 02673b70 */
    fVar3 = (float)UnityEngine_Time__get_unscaledTime_3c296e8(0);
  }
  FUN_046086e0(fVar3 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2c));
  lVar1 = *(long *)(param_1 + 0x30);
  UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4(0,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f58a0f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26ad0,0);
    bRam0000000004f58a0f = 1;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f58a68 == (code *)0x0) {
      pcRam0000000004f58a68 = (code *)FUN_021f03bc(&UNK_013d4d69);
    }
    (*pcRam0000000004f58a68)(lVar2,&stack0xffffffffffffffd0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

