/* IL2CPP: AudioPlayer$$WithPitchIncrease
AudioPlayer_o AudioPlayer__WithPitchIncrease (AudioPlayer_o __this, float increaseAmount, float increaseCooldownTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioPlayer$$WithPitchIncrease
   AudioPlayer_o AudioPlayer__WithPitchIncrease (AudioPlayer_o __this, float increaseAmount, float
   increaseCooldownTime, const MethodInfo* method); */

void AudioPlayer__WithPitchIncrease_253134c
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_4 + 2) = param_3;
  *(undefined4 *)((long)param_4 + 0x14) = param_2;
  uVar1 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  param_1[1] = param_4[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}

