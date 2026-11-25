/* IL2CPP: AudioPlayer$$CreatePlayer
AudioPlayer_o AudioPlayer__CreatePlayer (UnityEngine_AudioSource_o* audioSource, bool mute, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioPlayer$$CreatePlayer
   AudioPlayer_o AudioPlayer__CreatePlayer (UnityEngine_AudioSource_o* audioSource, bool mute, const
   MethodInfo* method); */

void AudioPlayer__CreatePlayer_2530bc8(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_40 = param_2;
  thunk_FUN_021f190c(&uStack_40,param_2);
  uStack_38 = CONCAT71(uStack_38._1_7_,param_3);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[3] = uStack_28;
  param_1[2] = uStack_30;
  return;
}

