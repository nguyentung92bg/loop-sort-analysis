/* IL2CPP: AudioPlayer$$WithPitchRange
AudioPlayer_o AudioPlayer__WithPitchRange (AudioPlayer_o __this, float pitchRange, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioPlayer$$WithPitchRange
   AudioPlayer_o AudioPlayer__WithPitchRange (AudioPlayer_o __this, float pitchRange, const
   MethodInfo* method); */

void AudioPlayer__WithPitchRange_2531238(long *param_1,float param_2,long *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bf21 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bf21 = 1;
  }
  lVar3 = *param_3;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(lVar3,0,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = *param_3;
    fVar4 = (float)UnityEngine_Random__get_value_3c11d1c(0);
                    /* try { // try from 026312b0 to 027312b7 has its CatchHandler @ 02631370 */
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 026312d0 to 0273131b has its CatchHandler @ 02631378 */
    UnityEngine_AudioSource__set_pitch_3bbcf30(fVar4 * param_2 + param_2 * -0.5 + 1.0,lVar3,0);
  }
  lVar3 = *param_3;
  lVar6 = param_3[3];
  lVar5 = param_3[2];
  param_1[1] = param_3[1];
  *param_1 = lVar3;
  param_1[3] = lVar6;
  param_1[2] = lVar5;
  return;
}

