/* IL2CPP: AudioPlayer$$WithSkipCount
AudioPlayer_o AudioPlayer__WithSkipCount (AudioPlayer_o __this, int32_t skipCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioPlayer$$WithSkipCount
   AudioPlayer_o AudioPlayer__WithSkipCount (AudioPlayer_o __this, int32_t skipCount, const
   MethodInfo* method); */

void AudioPlayer__WithSkipCount_253136c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026312b0 with catch @ 02631370
                        */
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02631338 with catch @ 02631374
                        */
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026312d0 with catch @ 02631378
                        */
  return;
}

