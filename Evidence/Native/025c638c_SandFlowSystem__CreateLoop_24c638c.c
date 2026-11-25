/* IL2CPP: SandFlowSystem$$CreateLoop
UnityEngine_AudioSource_o* SandFlowSystem__CreateLoop (UnityEngine_GameObject_o* owner, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$CreateLoop
   UnityEngine_AudioSource_o* SandFlowSystem__CreateLoop (UnityEngine_GameObject_o* owner, const
   MethodInfo* method); */

long SandFlowSystem__CreateLoop_24c638c(long param_1)

{
  long lVar1;
  
  if ((bRam0000000004f4bc05 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7178);
    bRam0000000004f4bc05 = 1;
  }
  if ((param_1 != 0) &&
     (lVar1 = UnityEngine_GameObject__AddComponent_object__261a774
                        (param_1,*(undefined8 *)PTR_DAT_049c7178), lVar1 != 0)) {
    UnityEngine_AudioSource__set_loop_3bbd438(lVar1,1,0);
    UnityEngine_AudioSource__set_playOnAwake_3bbd5c0(lVar1,0,0);
    UnityEngine_AudioSource__set_volume_3bbce58(0,lVar1,0);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

