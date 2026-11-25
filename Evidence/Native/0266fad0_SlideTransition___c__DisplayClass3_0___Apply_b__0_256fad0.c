/* IL2CPP: SlideTransition.<>c__DisplayClass3_0$$<Apply>b__0
void SlideTransition___c__DisplayClass3_0___Apply_b__0 (SlideTransition___c__DisplayClass3_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlideTransition.<>c__DisplayClass3_0$$<Apply>b__0
   void SlideTransition___c__DisplayClass3_0___Apply_b__0 (SlideTransition___c__DisplayClass3_0_o*
   __this, const MethodInfo* method); */

void SlideTransition___c__DisplayClass3_0___Apply_b__0_256fad0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  lVar1 = *(long *)(param_1 + 0x10);
                    /* try { // try from 0266fae4 to 0276fb6b has its CatchHandler @ 0266fee0 */
  if (cRam0000000004f49d57 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a18);
    cRam0000000004f49d57 = '\x01';
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_18 = **(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8);
  uStack_14 = (*(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8))[1];
  if ((bRam0000000004f58960 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26c78,0);
    bRam0000000004f58960 = 1;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f589a8 == (code *)0x0) {
      pcRam0000000004f589a8 = (code *)FUN_021f03bc(&UNK_013cb96e);
    }
    (*pcRam0000000004f589a8)(lVar2,&uStack_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

