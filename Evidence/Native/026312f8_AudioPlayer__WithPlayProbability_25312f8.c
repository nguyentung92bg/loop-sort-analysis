/* IL2CPP: AudioPlayer$$WithPlayProbability
AudioPlayer_o AudioPlayer__WithPlayProbability (AudioPlayer_o __this, float playProbability, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioPlayer$$WithPlayProbability
   AudioPlayer_o AudioPlayer__WithPlayProbability (AudioPlayer_o __this, float playProbability,
   const MethodInfo* method); */

void AudioPlayer__WithPlayProbability_25312f8(undefined8 *param_1,float param_2,undefined8 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  fVar1 = (float)UnityEngine_Random__get_value_3c11d1c(0);
                    /* try { // try from 0263131c to 02731337 has its CatchHandler @ 026311f4 */
  *(bool *)(param_3 + 1) = param_2 < fVar1;
  uVar2 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
                    /* try { // try from 02631338 to 02731347 has its CatchHandler @ 02631374 */
  return;
}

