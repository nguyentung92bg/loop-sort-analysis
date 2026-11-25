/* IL2CPP: AudioPlayer$$WithVolumeScale
AudioPlayer_o AudioPlayer__WithVolumeScale (AudioPlayer_o __this, float volumeScale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioPlayer$$WithVolumeScale
   AudioPlayer_o AudioPlayer__WithVolumeScale (AudioPlayer_o __this, float volumeScale, const
   MethodInfo* method); */

void AudioPlayer__WithVolumeScale_25310e8(long *param_1,float param_2,long *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_049b3b98;
                    /* try { // try from 02631100 to 0273110b has its CatchHandler @ 0263119c */
  if ((bRam0000000004f4bf1f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bf1f = 1;
  }
  lVar3 = *param_3;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 02631140 to 02731147 has its CatchHandler @ 02631194 */
                    /* try { // try from 02631148 to 02731183 has its CatchHandler @ 02630efc */
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(lVar3,0,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = *param_3;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02631140 with catch @ 02631194
                        */
      FUN_021f06a0();
    }
    fVar4 = (float)UnityEngine_AudioSource__get_volume_3bbcda4(lVar3,0);
    UnityEngine_AudioSource__set_volume_3bbce58(fVar4 * param_2,lVar3,0);
  }
  lVar3 = *param_3;
  lVar6 = param_3[3];
  lVar5 = param_3[2];
                    /* try { // try from 02631184 to 02731187 has its CatchHandler @ 02631190 */
  param_1[1] = param_3[1];
  *param_1 = lVar3;
  param_1[3] = lVar6;
  param_1[2] = lVar5;
                    /* try { // try from 02631188 to 027311bf has its CatchHandler @ 02630efc */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02631094 with catch @ 0263118c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02631184 with catch @ 02631190
                        */
  return;
}

