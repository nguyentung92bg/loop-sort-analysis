/* IL2CPP: AudioPlayer$$WithCooldown
AudioPlayer_o AudioPlayer__WithCooldown (AudioPlayer_o __this, float cooldownTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioPlayer$$WithCooldown
   AudioPlayer_o AudioPlayer__WithCooldown (AudioPlayer_o __this, float cooldownTime, const
   MethodInfo* method); */

void AudioPlayer__WithCooldown_253133c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)((long)param_3 + 0xc) = param_2;
  uVar3 = *param_3;
  uVar2 = param_3[3];
  uVar1 = param_3[2];
  param_1[1] = param_3[1];
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
                    /* try { // try from 02631348 to 0273138b has its CatchHandler @ 026311f4 */
  return;
}

