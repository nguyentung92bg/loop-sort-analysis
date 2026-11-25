/* IL2CPP: Surface$$Start
void Surface__Start (Surface_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Surface$$Start
   void Surface__Start (Surface_o* __this, const MethodInfo* method); */

void Surface__Start_24b6624(long param_1)

{
  long lVar1;
  long lVar2;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  GameBehaviourBase__Start_24f68b4(param_1,0);
  lVar1 = UnityEngine_Component__get_transform_3c18724(param_1,0);
  if (cRam0000000004f4a68f == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a68f = '\x01';
  }
  if ((*(long *)(param_1 + 0xa0) == 0) || (lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  fStack_28 = *(float *)(*(long *)(param_1 + 0xa0) + 0x1c);
  lVar2 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  fStack_24 = *(float *)(lVar2 + 0x2c) * fStack_28;
  fStack_2c = fStack_28 * *(float *)(lVar2 + 0x24);
  fStack_28 = fStack_28 * *(float *)(lVar2 + 0x28);
  if ((bRam0000000004f58a09 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26ad0,0);
    bRam0000000004f58a09 = 1;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f58a38 == (code *)0x0) {
      pcRam0000000004f58a38 = (code *)FUN_021f03bc(&UNK_013e8d5f);
    }
    (*pcRam0000000004f58a38)(lVar2,&fStack_2c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

