/* IL2CPP: TagCarrier$$SetModelDown
void TagCarrier__SetModelDown (TagCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TagCarrier$$SetModelDown
   void TagCarrier__SetModelDown (TagCarrier_o* __this, const MethodInfo* method); */

void TagCarrier__SetModelDown_24ac990(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(char *)(param_1 + 0x120) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x120) = 0;
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (lVar1 = UnityEngine_GameObject__get_transform_3c1ca74(*(long *)(param_1 + 0xa0),0), lVar1 != 0
     )) {
    uStack_2c = *(undefined4 *)(param_1 + 0x114);
    uStack_30 = *(undefined4 *)(param_1 + 0x110);
    uStack_24 = *(undefined4 *)(param_1 + 0x11c);
    uStack_28 = *(undefined4 *)(param_1 + 0x118);
    if ((bRam0000000004f58a0d & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a26ad0,0);
      bRam0000000004f58a0d = 1;
    }
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
      }
      if (pcRam0000000004f58a58 == (code *)0x0) {
        pcRam0000000004f58a58 = (code *)FUN_021f03bc(&UNK_013b3a78);
      }
      (*pcRam0000000004f58a58)(lVar2,&uStack_30);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

