/* IL2CPP: SandFlowSystem$$FadeLoop
void SandFlowSystem__FadeLoop (SandFlowSystem_o* __this, UnityEngine_AudioSource_o* source, UnityEngine_AudioClip_o* clip, float volume, bool mute, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$FadeLoop
   void SandFlowSystem__FadeLoop (SandFlowSystem_o* __this, UnityEngine_AudioSource_o* source,
   UnityEngine_AudioClip_o* clip, float volume, bool mute, const MethodInfo* method); */

void SandFlowSystem__FadeLoop_24d0aec
               (float param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bc06 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bc06 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(param_4,0,0);
  fVar7 = 0.0;
  if ((uVar2 & 1) == 0) {
    fVar7 = param_1;
  }
  if (param_3 != 0) {
    UnityEngine_AudioSource__set_mute_3bbd748(param_3,param_5 & 1,0);
    fVar4 = (float)UnityEngine_Time__get_unscaledDeltaTime_3c29788(0);
    fVar8 = _UNK_013aa688;
    if (*(long *)(param_2 + 0x160) != 0) {
      fVar5 = *(float *)(*(long *)(param_2 + 0x160) + 0xf8);
      fVar9 = _UNK_013aa688;
      if (_UNK_013aa688 <= fVar5) {
        fVar9 = fVar5;
      }
      fVar6 = (float)UnityEngine_AudioSource__get_volume_3bbcda4(param_3,0);
      fVar5 = fVar7;
      if (fVar7 <= fVar6) {
        fVar5 = fVar6;
      }
      if (fVar8 <= fVar5) {
        fVar8 = fVar5;
      }
      fVar6 = (fVar4 / fVar9) * fVar8;
      fVar5 = (float)UnityEngine_AudioSource__get_volume_3bbcda4(param_3,0);
      fVar8 = -((fVar4 / fVar9) * fVar8);
      if (0.0 <= fVar7 - fVar5) {
        fVar8 = fVar6;
      }
      fVar8 = fVar5 + fVar8;
      if (ABS(fVar7 - fVar5) <= fVar6) {
        fVar8 = fVar7;
      }
      UnityEngine_AudioSource__set_volume_3bbce58(fVar8,param_3,0);
      fVar7 = (float)UnityEngine_AudioSource__get_volume_3bbcda4(param_3,0);
      if ((0.0 < fVar7) &&
         (uVar2 = UnityEngine_AudioSource__get_isPlaying_3bbd384(param_3,0), (uVar2 & 1) == 0)) {
        UnityEngine_AudioSource__set_clip_3bbcf34(param_3,param_4,0);
        if ((bRam0000000004f5619a & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a254c8);
          FUN_021f03f8(PTR_DAT_049bf4e8);
          bRam0000000004f5619a = 1;
        }
        if (param_3 != 0) {
          lVar3 = *(long *)(param_3 + 0x10);
          if (lVar3 == 0) {
            UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_3c32dbc
                      (param_3,*(undefined8 *)PTR_DAT_049bf4e8,0);
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
      fVar7 = (float)UnityEngine_AudioSource__get_volume_3bbcda4(param_3,0);
      if ((0.0 < fVar7) ||
         (uVar2 = UnityEngine_AudioSource__get_isPlaying_3bbd384(param_3,0), (uVar2 & 1) == 0)) {
        return;
      }
      if ((bRam0000000004f5619c & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a254c8);
        bRam0000000004f5619c = 1;
      }
      if (param_3 != 0) {
        lVar3 = *(long *)(param_3 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_3,0);
        }
        if (pcRam0000000004f561d0 == (code *)0x0) {
          pcRam0000000004f561d0 = (code *)FUN_021f03bc(&UNK_013dfdfb);
        }
                    /* WARNING: Could not recover jumptable at 0x03cbcd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004f561d0)(lVar3,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

