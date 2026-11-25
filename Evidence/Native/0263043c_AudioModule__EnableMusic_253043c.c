/* IL2CPP: AudioModule$$EnableMusic
void AudioModule__EnableMusic (AudioModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioModule$$EnableMusic
   void AudioModule__EnableMusic (AudioModule_o* __this, const MethodInfo* method); */

void AudioModule__EnableMusic_253043c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = UnityEngine_AudioSource__get_isPlaying_3bbd384(*(long *)(param_1 + 0x20),0);
    if ((uVar1 & 1) != 0) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      if ((bRam0000000004f5619a & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a254c8);
        FUN_021f03f8(PTR_DAT_049bf4e8);
        bRam0000000004f5619a = 1;
      }
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar2 + 0x10);
        if (lVar3 == 0) {
          UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_3c32dbc
                    (lVar2,*(undefined8 *)PTR_DAT_049bf4e8,0);
        }
        if (pcRam0000000004f561c0 == (code *)0x0) {
          pcRam0000000004f561c0 = (code *)FUN_021f03bc(&UNK_013ddeb3);
        }
                    /* WARNING: Could not recover jumptable at 0x03cbcafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004f561c0)(lVar3,0);
        return;
      }
      UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_3c32dbc
                (0,*(undefined8 *)PTR_DAT_049bf4e8,0);
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

