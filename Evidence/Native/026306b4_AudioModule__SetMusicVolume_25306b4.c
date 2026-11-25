/* IL2CPP: AudioModule$$SetMusicVolume
void AudioModule__SetMusicVolume (AudioModule_o* __this, float volume, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioModule$$SetMusicVolume
   void AudioModule__SetMusicVolume (AudioModule_o* __this, float volume, const MethodInfo* method);
    */

void AudioModule__SetMusicVolume_25306b4(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4bf17 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049c9ef0);
    FUN_021f03f8(PTR_DAT_049c2bf0);
    FUN_021f03f8(PTR_DAT_049c2288);
    bRam0000000004f4bf17 = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  plVar9 = *(long **)(param_2 + 0x28);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b3cc8) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02630778;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b3cc8,0);
LAB_02630778:
    (*(code *)*puVar4)(plVar9,puVar4[1]);
  }
  puVar3 = PTR_DAT_049c9ef0;
  puVar2 = PTR_DAT_049c2bf0;
  puVar1 = PTR_DAT_049c2288;
  if (*(long *)(param_2 + 0x20) != 0) {
    uVar10 = UnityEngine_AudioSource__get_volume_3bbcda4(*(long *)(param_2 + 0x20),0);
    auStack_50 = LitMotion_LMotion__Create_2ea9f9c(uVar10,param_1,0x3fa00000,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar1;
    }
    auVar11 = FUN_02526574(auStack_50,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60),
                           *(undefined8 *)puVar2);
    auVar11 = LitMotion_Extensions_LitMotionAudioExtensions__BindToVolume___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26645e4
                        (auVar11._0_8_,auVar11._8_8_,*(undefined8 *)(param_2 + 0x20),
                         *(undefined8 *)puVar3);
    uVar5 = LitMotion_MotionHandleExtensions__ToDisposable_2eacf90
                      (auVar11._0_8_,auVar11._8_8_ & 0xffffffff,0,0);
    *(undefined8 *)(param_2 + 0x28) = uVar5;
    thunk_FUN_021f190c((undefined8 *)(param_2 + 0x28),uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

