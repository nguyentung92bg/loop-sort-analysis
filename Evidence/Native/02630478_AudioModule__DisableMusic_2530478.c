/* IL2CPP: AudioModule$$DisableMusic
void AudioModule__DisableMusic (AudioModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioModule$$DisableMusic
   void AudioModule__DisableMusic (AudioModule_o* __this, const MethodInfo* method); */

void AudioModule__DisableMusic_2530478(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f5619c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a254c8);
    bRam0000000004f5619c = 1;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f561d0 == (code *)0x0) {
      pcRam0000000004f561d0 = (code *)FUN_021f03bc(&UNK_013dfdfb);
    }
                    /* WARNING: Could not recover jumptable at 0x03cbcd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f561d0)(lVar2,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

