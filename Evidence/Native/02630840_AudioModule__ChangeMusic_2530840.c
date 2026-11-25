/* IL2CPP: AudioModule$$ChangeMusic
void AudioModule__ChangeMusic (AudioModule_o* __this, UnityEngine_AudioClip_o* clip, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioModule$$ChangeMusic
   void AudioModule__ChangeMusic (AudioModule_o* __this, UnityEngine_AudioClip_o* clip, const
   MethodInfo* method); */

void AudioModule__ChangeMusic_2530840(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f5619f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a254c8,param_2,0);
    FUN_021f03f8(PTR_DAT_04a254d0);
    bRam0000000004f5619f = 1;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (*(long *)(*(long *)PTR_DAT_04a254d0 + 0x38) == 0) {
      FUN_02229774();
    }
    uVar3 = 0;
    if (param_2 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
    }
    if (pcRam0000000004f561e8 == (code *)0x0) {
      pcRam0000000004f561e8 = (code *)FUN_021f03bc(&UNK_013dbf63);
    }
                    /* WARNING: Could not recover jumptable at 0x03cbcfe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f561e8)(lVar2,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

