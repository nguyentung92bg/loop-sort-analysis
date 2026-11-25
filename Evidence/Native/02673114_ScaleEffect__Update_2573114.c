/* IL2CPP: ScaleEffect$$Update
void ScaleEffect__Update (ScaleEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ScaleEffect$$Update
   void ScaleEffect__Update (ScaleEffect_o* __this, const MethodInfo* method); */

void ScaleEffect__Update_2573114(long param_1)

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
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    FUN_04608760(fVar3 * *(float *)(param_1 + 0x24));
    if ((bRam0000000004f58a11 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a26ad0,0);
      bRam0000000004f58a11 = 1;
    }
    if (lVar2 != 0) {
      lVar1 = *(long *)(lVar2 + 0x10);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

