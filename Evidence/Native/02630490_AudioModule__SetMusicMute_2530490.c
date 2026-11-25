/* IL2CPP: AudioModule$$SetMusicMute
void AudioModule__SetMusicMute (AudioModule_o* __this, bool mute, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioModule$$SetMusicMute
   void AudioModule__SetMusicMute (AudioModule_o* __this, bool mute, const MethodInfo* method); */

void AudioModule__SetMusicMute_2530490(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f561a9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a254c8,param_2 & 1,0);
    bRam0000000004f561a9 = 1;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f56230 == (code *)0x0) {
      pcRam0000000004f56230 = (code *)FUN_021f03bc(&UNK_013b8cf2);
    }
                    /* WARNING: Could not recover jumptable at 0x03cbd7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f56230)(lVar2,param_2 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

