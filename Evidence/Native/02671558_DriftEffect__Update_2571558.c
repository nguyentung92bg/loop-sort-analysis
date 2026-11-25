/* IL2CPP: DriftEffect$$Update
void DriftEffect__Update (DriftEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DriftEffect$$Update
   void DriftEffect__Update (DriftEffect_o* __this, const MethodInfo* method); */

void DriftEffect__Update_2571558(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    UnityEngine_RectTransform__get_rect_3c2ba98(*(long *)(param_1 + 0x30),0);
    if (*(long *)(param_1 + 0x28) != 0) {
      UnityEngine_RectTransform__get_rect_3c2ba98(*(long *)(param_1 + 0x28),0);
      if (*(long *)(param_1 + 0x28) != 0) {
        UnityEngine_Transform__get_localPosition_3c2c388(*(long *)(param_1 + 0x28),0);
        if (*(char *)(param_1 + 0x20) == '\0') {
          UnityEngine_Time__get_deltaTime_3c29670(0);
        }
        else {
          UnityEngine_Time__get_unscaledDeltaTime_3c29788();
        }
        lVar1 = *(long *)(param_1 + 0x28);
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
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

