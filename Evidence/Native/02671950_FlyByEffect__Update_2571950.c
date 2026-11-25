/* IL2CPP: FlyByEffect$$Update
void FlyByEffect__Update (FlyByEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: FlyByEffect$$Update
   void FlyByEffect__Update (FlyByEffect_o* __this, const MethodInfo* method); */

void FlyByEffect__Update_2571950
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
               long param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(param_5 + 0x20) == '\0') {
    fVar3 = (float)UnityEngine_Time__get_time_3c295c8(0);
  }
  else {
    fVar3 = (float)UnityEngine_Time__get_unscaledTime_3c296e8(0);
  }
  if (*(long *)(param_5 + 0x50) != 0) {
    UnityEngine_RectTransform__get_rect_3c2ba98(*(long *)(param_5 + 0x50),0);
    fVar4 = *(float *)(param_5 + 0x58);
    if (fVar4 < 0.0) {
      fVar4 = *(float *)(param_5 + 0x5c);
      if (fVar4 < 0.0) {
        fVar4 = (float)UnityEngine_Random__Range_3c11c54
                                 (*(float *)(param_5 + 0x30) * _UNK_013aa838,0);
        fVar4 = fVar3 + fVar4;
        *(float *)(param_5 + 0x5c) = fVar4;
      }
      if (fVar3 < fVar4) {
        return;
      }
      *(float *)(param_5 + 0x58) = fVar3;
      fVar5 = (float)UnityEngine_Random__Range_3c11c54
                               (*(undefined4 *)(param_5 + 0x3c),*(undefined4 *)(param_5 + 0x40),0);
      fVar4 = 1.0;
      if (fVar5 <= 1.0) {
        fVar4 = fVar5;
      }
      fVar6 = 0.0;
      if (0.0 <= fVar5) {
        fVar6 = fVar4;
      }
      *(float *)(param_5 + 0x60) = param_2 + ((param_4 + param_2) - param_2) * fVar6;
      if ((*(long *)(param_5 + 0x28) == 0) ||
         (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_5 + 0x28),0),
         lVar1 == 0)) goto LAB_02671b30;
      UnityEngine_GameObject__SetActive_3c1ce34(lVar1,1,0);
      fVar4 = *(float *)(param_5 + 0x58);
    }
    lVar1 = *(long *)(param_5 + 0x28);
    if (1.0 <= (fVar3 - fVar4) / *(float *)(param_5 + 0x38)) {
      if ((lVar1 != 0) &&
         (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(lVar1,0), lVar1 != 0)) {
        UnityEngine_GameObject__SetActive_3c1ce34(lVar1,0,0);
        *(undefined4 *)(param_5 + 0x58) = 0xbf800000;
        fVar4 = (float)UnityEngine_Random__Range_3c11c54
                                 (*(undefined4 *)(param_5 + 0x30),*(undefined4 *)(param_5 + 0x34),0)
        ;
        *(float *)(param_5 + 0x5c) = fVar3 + fVar4;
        return;
      }
    }
    else if (lVar1 != 0) {
      FUN_046086e0((fVar3 - fVar4) * *(float *)(param_5 + 0x48));
      if ((bRam0000000004f58a0b & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a26ad0,0);
        bRam0000000004f58a0b = 1;
      }
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar2 = *(long *)(lVar1 + 0x10);
      if (lVar2 != 0) {
        if (pcRam0000000004f58a48 == (code *)0x0) {
          pcRam0000000004f58a48 = (code *)FUN_021f03bc(&UNK_013d4d13);
        }
        (*pcRam0000000004f58a48)(lVar2,&stack0xffffffffffffffd4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
  }
LAB_02671b30:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

