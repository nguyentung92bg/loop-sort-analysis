/* IL2CPP: AudioPlayer$$WithPitch
AudioPlayer_o AudioPlayer__WithPitch (AudioPlayer_o __this, float pitch, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioPlayer$$WithPitch
   AudioPlayer_o AudioPlayer__WithPitch (AudioPlayer_o __this, float pitch, const MethodInfo*
   method); */

void AudioPlayer__WithPitch_2531198(long *param_1,undefined4 param_2,long *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026310d4 with catch @ 02631198
                        */
  puVar1 = PTR_DAT_049b3b98;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02631100 with catch @ 0263119c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02630ff0 with catch @ 026311a0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02631010 with catch @ 026311a4
                        */
                    /* try { // try from 026311c0 to 027311c3 has its CatchHandler @ 026311dc */
                    /* try { // try from 026311c4 to 027311df has its CatchHandler @ 02630efc */
  if ((bRam0000000004f4bf20 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bf20 = 1;
  }
                    /* catch() { ... } // from try @ 026311c0 with catch @ 026311dc */
                    /* try { // try from 026311e0 to 027311e7 has its CatchHandler @ 026311f0 */
  lVar3 = *param_3;
                    /* try { // try from 026311e8 to 027311f3 has its CatchHandler @ 02630efc */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 026311e0 with catch @ 026311f0
                        */
                    /* try { // try from 026311f4 to 027312af has its CatchHandler @ 026311f4
                       catch() { ... } // from try @ 026311f4 with catch @ 026311f4
                       catch() { ... } // from try @ 0263131c with catch @ 026311f4
                       catch() { ... } // from try @ 02631348 with catch @ 026311f4
                       catch() { ... } // from try @ 02631390 with catch @ 026311f4
                       catch() { ... } // from try @ 026313b4 with catch @ 026311f4 */
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(lVar3,0,0);
  if ((uVar2 & 1) == 0) {
    if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_AudioSource__set_pitch_3bbcf30(param_2,*param_3,0);
  }
  lVar3 = *param_3;
  lVar5 = param_3[3];
  lVar4 = param_3[2];
  param_1[1] = param_3[1];
  *param_1 = lVar3;
  param_1[3] = lVar5;
  param_1[2] = lVar4;
  return;
}

