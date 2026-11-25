/* IL2CPP: SandFlowSystem$$UpdateSounds
void SandFlowSystem__UpdateSounds (SandFlowSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$UpdateSounds
   void SandFlowSystem__UpdateSounds (SandFlowSystem_o* __this, const MethodInfo* method); */

void SandFlowSystem__UpdateSounds_24ccf54(long param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar4 = *(uint *)(param_1 + 0x188);
  uVar7 = (ulong)uVar4;
  if ((int)uVar4 < 1) {
    bVar2 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0xb0);
    if (lVar8 == 0) goto LAB_025cd068;
    bVar2 = 0;
    pfVar9 = (float *)(lVar8 + 0x4c);
    do {
      if (*(uint *)(lVar8 + 0x18) <= uVar4 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      uVar7 = uVar7 - 1;
      bVar2 = bVar2 | (3.0 < *pfVar9 || *pfVar9 < 0.5);
      pfVar9 = pfVar9 + 0x24;
    } while (uVar7 != 0);
  }
  cVar1 = *(char *)(param_1 + 0x1c0);
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar4 = SettingsModule__IsSoundActive_2539c7c(*(long *)(param_1 + 0x70),0);
    fVar10 = (float)UnityEngine_Time__get_timeScale_3c29870(0);
    lVar8 = *(long *)(param_1 + 0x160);
    if (lVar8 != 0) {
      uVar11 = 0;
      if (!(bool)(fVar10 <= 0.0 | bVar2 ^ 1)) {
        uVar11 = *(undefined4 *)(lVar8 + 0xf0);
      }
      SandFlowSystem__FadeLoop_24d0aec
                (uVar11,param_1,*(undefined8 *)(param_1 + 0x1b0),*(undefined8 *)(lVar8 + 0xe0),
                 (uVar4 ^ 1) & 1);
      puVar3 = PTR_DAT_049b3b98;
      lVar8 = *(long *)(param_1 + 0x160);
      if (lVar8 != 0) {
        fVar12 = 0.0;
        lVar5 = *(long *)(param_1 + 0x1b8);
        uVar6 = *(undefined8 *)(lVar8 + 0xe8);
        if ((cVar1 != '\0') && (0.0 < fVar10)) {
          fVar12 = *(float *)(lVar8 + 0xf4);
        }
        if ((bRam0000000004f4bc06 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049b3b98);
          bRam0000000004f4bc06 = 1;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(uVar6,0,0);
        fVar10 = 0.0;
        if ((uVar7 & 1) == 0) {
          fVar10 = fVar12;
        }
        if (lVar5 != 0) {
          UnityEngine_AudioSource__set_mute_3bbd748(lVar5,(uVar4 ^ 1) & 1,0);
          fVar13 = (float)UnityEngine_Time__get_unscaledDeltaTime_3c29788(0);
          fVar12 = _UNK_013aa688;
          if (*(long *)(param_1 + 0x160) != 0) {
            fVar14 = *(float *)(*(long *)(param_1 + 0x160) + 0xf8);
            fVar16 = _UNK_013aa688;
            if (_UNK_013aa688 <= fVar14) {
              fVar16 = fVar14;
            }
            fVar15 = (float)UnityEngine_AudioSource__get_volume_3bbcda4(lVar5,0);
            fVar14 = fVar10;
            if (fVar10 <= fVar15) {
              fVar14 = fVar15;
            }
            if (fVar12 <= fVar14) {
              fVar12 = fVar14;
            }
            fVar15 = (fVar13 / fVar16) * fVar12;
            fVar14 = (float)UnityEngine_AudioSource__get_volume_3bbcda4(lVar5,0);
            fVar12 = -((fVar13 / fVar16) * fVar12);
            if (0.0 <= fVar10 - fVar14) {
              fVar12 = fVar15;
            }
            fVar12 = fVar14 + fVar12;
            if (ABS(fVar10 - fVar14) <= fVar15) {
              fVar12 = fVar10;
            }
            UnityEngine_AudioSource__set_volume_3bbce58(fVar12,lVar5,0);
            fVar10 = (float)UnityEngine_AudioSource__get_volume_3bbcda4(lVar5,0);
            if ((0.0 < fVar10) &&
               (uVar7 = UnityEngine_AudioSource__get_isPlaying_3bbd384(lVar5,0), (uVar7 & 1) == 0))
            {
              UnityEngine_AudioSource__set_clip_3bbcf34(lVar5,uVar6,0);
              if ((bRam0000000004f5619a & 1) == 0) {
                FUN_021f03f8(PTR_DAT_04a254c8);
                FUN_021f03f8(PTR_DAT_049bf4e8);
                bRam0000000004f5619a = 1;
              }
              if (lVar5 != 0) {
                lVar8 = *(long *)(lVar5 + 0x10);
                if (lVar8 == 0) {
                  UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_3c32dbc
                            (lVar5,*(undefined8 *)PTR_DAT_049bf4e8,0);
                }
                if (pcRam0000000004f561c0 == (code *)0x0) {
                  pcRam0000000004f561c0 = (code *)FUN_021f03bc(&UNK_013ddeb3);
                }
                    /* WARNING: Could not recover jumptable at 0x03cbcafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000004f561c0)(lVar8,0);
                return;
              }
              UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException_3c32dbc
                        (0,*(undefined8 *)PTR_DAT_049bf4e8,0);
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            fVar10 = (float)UnityEngine_AudioSource__get_volume_3bbcda4(lVar5,0);
            if ((0.0 < fVar10) ||
               (uVar7 = UnityEngine_AudioSource__get_isPlaying_3bbd384(lVar5,0), (uVar7 & 1) == 0))
            {
              return;
            }
            if ((bRam0000000004f5619c & 1) == 0) {
              FUN_021f03f8(PTR_DAT_04a254c8);
              bRam0000000004f5619c = 1;
            }
            if (lVar5 != 0) {
              lVar8 = *(long *)(lVar5 + 0x10);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar5,0);
              }
              if (pcRam0000000004f561d0 == (code *)0x0) {
                pcRam0000000004f561d0 = (code *)FUN_021f03bc(&UNK_013dfdfb);
              }
                    /* WARNING: Could not recover jumptable at 0x03cbcd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004f561d0)(lVar8,1);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
LAB_025cd068:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

