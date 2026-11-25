/* IL2CPP: CanvasAlphaTransitionElement$$OnEnable
void CanvasAlphaTransitionElement__OnEnable (CanvasAlphaTransitionElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CanvasAlphaTransitionElement$$OnEnable
   void CanvasAlphaTransitionElement__OnEnable (CanvasAlphaTransitionElement_o* __this, const
   MethodInfo* method); */

void CanvasAlphaTransitionElement__OnEnable_2413b24(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f5bc40 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a38698,0);
    bRam0000000004f5bc40 = 1;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f5bc50 == (code *)0x0) {
      pcRam0000000004f5bc50 = (code *)FUN_021f03bc(&UNK_013e5856);
    }
                    /* WARNING: Could not recover jumptable at 0x03fc2c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f5bc50)(0x3f800000,lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

