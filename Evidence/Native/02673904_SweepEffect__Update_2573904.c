/* IL2CPP: SweepEffect$$Update
void SweepEffect__Update (SweepEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SweepEffect$$Update
   void SweepEffect__Update (SweepEffect_o* __this, const MethodInfo* method); */

void SweepEffect__Update_2573904(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar3 = (float)UnityEngine_Time__get_time_3c295c8(0);
  }
  else {
    fVar3 = (float)UnityEngine_Time__get_unscaledTime_3c296e8(0);
  }
  fVar4 = *(float *)(param_1 + 0x48);
  if (fVar4 < 0.0) {
    fVar4 = *(float *)(param_1 + 0x4c);
    if (fVar4 < 0.0) {
      fVar4 = (float)UnityEngine_Random__Range_3c11c54(0,*(undefined4 *)(param_1 + 0x38),0);
      fVar4 = fVar3 + fVar4;
      *(float *)(param_1 + 0x4c) = fVar4;
    }
    if (fVar3 < fVar4) {
      return;
    }
    *(float *)(param_1 + 0x48) = fVar3;
                    /* try { // try from 02673988 to 02773a07 has its CatchHandler @ 02673bbc */
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x28),0),
       lVar1 == 0)) goto LAB_02673acc;
    UnityEngine_GameObject__SetActive_3c1ce34(lVar1,1,0);
    fVar4 = *(float *)(param_1 + 0x48);
  }
  if (1.0 <= (fVar3 - fVar4) / *(float *)(param_1 + 0x30)) {
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x28),0),
       lVar1 != 0)) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar1,0,0);
      *(undefined4 *)(param_1 + 0x48) = 0xbf800000;
                    /* try { // try from 02673aa8 to 02773ab3 has its CatchHandler @ 02673b5c */
      fVar4 = (float)UnityEngine_Random__Range_3c11c54
                               (*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),0);
      *(float *)(param_1 + 0x4c) = fVar3 + fVar4;
                    /* try { // try from 02673ac4 to 02773acf has its CatchHandler @ 02673b58 */
      return;
    }
  }
  else if (*(long *)(param_1 + 0x40) != 0) {
    UnityEngine_RectTransform__get_rect_3c2ba98(*(long *)(param_1 + 0x40),0);
    if (*(long *)(param_1 + 0x28) != 0) {
      UnityEngine_RectTransform__get_rect_3c2ba98(*(long *)(param_1 + 0x28),0);
      if (*(long *)(param_1 + 0x28) != 0) {
        UnityEngine_Transform__get_localPosition_3c2c388(*(long *)(param_1 + 0x28),0);
        lVar1 = *(long *)(param_1 + 0x28);
                    /* try { // try from 02673a14 to 02773a1b has its CatchHandler @ 02673bb8 */
                    /* try { // try from 02673a30 to 02773a37 has its CatchHandler @ 02673ba8 */
                    /* try { // try from 02673a48 to 02773a53 has its CatchHandler @ 02673ba4 */
        if (lVar1 != 0) {
          if ((bRam0000000004f58a0b & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a26ad0,0);
            bRam0000000004f58a0b = 1;
          }
          if (lVar1 != 0) {
            lVar2 = *(long *)(lVar1 + 0x10);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
            }
            if (pcRam0000000004f58a48 == (code *)0x0) {
              pcRam0000000004f58a48 = (code *)FUN_021f03bc(&UNK_013d4d13);
            }
            (*pcRam0000000004f58a48)(lVar2,&stack0xffffffffffffffd4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
LAB_02673acc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

