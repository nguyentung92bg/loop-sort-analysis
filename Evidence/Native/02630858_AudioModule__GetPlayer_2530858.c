/* IL2CPP: AudioModule$$GetPlayer
AudioPlayer_o AudioModule__GetPlayer (AudioModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioModule$$GetPlayer
   AudioPlayer_o AudioModule__GetPlayer (AudioModule_o* __this, const MethodInfo* method); */

void AudioModule__GetPlayer_2530858(long *param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  puVar2 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bf18 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1b50);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bf18 = 1;
  }
  lVar3 = AudioModule__GetAvailableSource_2530974(param_2);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar2);
  }
  uVar4 = UnityEngine_Object__op_Equality_3c1eeb4(lVar3,0,0);
  if ((uVar4 & 1) == 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_AudioSource__set_mute_3bbd748(lVar3,*(undefined1 *)(param_2 + 0x30),0);
    UnityEngine_AudioSource__set_volume_3bbce58(0x3e800000,lVar3,0);
    UnityEngine_AudioSource__set_pitch_3bbcf30(0x3f800000,lVar3,0);
    uVar1 = *(undefined1 *)(param_2 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_049c1b50 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lStack_48 = 0;
    lStack_38 = 0;
    lStack_40 = 0;
    lStack_50 = lVar3;
    thunk_FUN_021f190c(&lStack_50,lVar3);
    lStack_48 = CONCAT71(lStack_48._1_7_,uVar1);
    param_1[1] = lStack_48;
    *param_1 = lStack_50;
    param_1[3] = lStack_38;
    param_1[2] = lStack_40;
  }
  else {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}

