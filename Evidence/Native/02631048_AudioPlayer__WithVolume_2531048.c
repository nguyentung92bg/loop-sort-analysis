/* IL2CPP: AudioPlayer$$WithVolume
AudioPlayer_o AudioPlayer__WithVolume (AudioPlayer_o __this, float volume, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioPlayer$$WithVolume
   AudioPlayer_o AudioPlayer__WithVolume (AudioPlayer_o __this, float volume, const MethodInfo*
   method); */

void AudioPlayer__WithVolume_2531048(long *param_1,undefined4 param_2,long *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_049b3b98;
                    /* try { // try from 0263105c to 02731093 has its CatchHandler @ 02630efc */
  if ((bRam0000000004f4bf1e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bf1e = 1;
  }
  lVar3 = *param_3;
                    /* try { // try from 02631094 to 02731097 has its CatchHandler @ 0263118c */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(lVar3,0,0);
  if ((uVar2 & 1) == 0) {
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_AudioSource__set_volume_3bbce58(param_2,*param_3,0);
  }
  lVar3 = *param_3;
  lVar5 = param_3[3];
  lVar4 = param_3[2];
                    /* try { // try from 026310d4 to 027310eb has its CatchHandler @ 02631198 */
  param_1[1] = param_3[1];
  *param_1 = lVar3;
  param_1[3] = lVar5;
  param_1[2] = lVar4;
  return;
}

