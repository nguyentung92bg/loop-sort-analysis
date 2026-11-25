/* IL2CPP: BobEffect$$Update
void BobEffect__Update (BobEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BobEffect$$Update
   void BobEffect__Update (BobEffect_o* __this, const MethodInfo* method); */

void BobEffect__Update_257058c(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar3 = (float)UnityEngine_Time__get_time_3c295c8(0);
  }
  else {
    fVar3 = (float)UnityEngine_Time__get_unscaledTime_3c296e8(0);
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  FUN_046086e0(fVar3 * *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x30));
  if ((bRam0000000004f58960 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26c78,0);
    bRam0000000004f58960 = 1;
  }
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
    }
    if (pcRam0000000004f589a8 == (code *)0x0) {
      pcRam0000000004f589a8 = (code *)FUN_021f03bc(&UNK_013cb96e);
    }
    (*pcRam0000000004f589a8)(lVar1,&stack0xffffffffffffffe8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

