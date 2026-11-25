/* IL2CPP: AudioModule$$RestartMusic
void AudioModule__RestartMusic (AudioModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioModule$$RestartMusic
   void AudioModule__RestartMusic (AudioModule_o* __this, const MethodInfo* method); */

void AudioModule__RestartMusic_25304dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f5619a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a254c8);
    FUN_021f03f8(PTR_DAT_049bf4e8);
    bRam0000000004f5619a = 1;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
      UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_3c32dbc
                (lVar1,*(undefined8 *)PTR_DAT_049bf4e8,0);
    }
    if (pcRam0000000004f561c0 == (code *)0x0) {
      pcRam0000000004f561c0 = (code *)FUN_021f03bc(&UNK_013ddeb3);
    }
                    /* WARNING: Could not recover jumptable at 0x03cbcafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f561c0)(lVar2,0);
    return;
  }
  UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_3c32dbc
            (0,*(undefined8 *)PTR_DAT_049bf4e8,0);
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

