/* IL2CPP: AudioModule$$ReturnOriginalMusicVolume
void AudioModule__ReturnOriginalMusicVolume (AudioModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: AudioModule$$ReturnOriginalMusicVolume
   void AudioModule__ReturnOriginalMusicVolume (AudioModule_o* __this, const MethodInfo* method); */

void AudioModule__ReturnOriginalMusicVolume_2530834(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_50 [16];
  
  uVar1 = _UNK_013aa810;
  if ((bRam0000000004f4bf17 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049c9ef0);
    FUN_021f03f8(PTR_DAT_049c2bf0);
    FUN_021f03f8(PTR_DAT_049c2288);
    bRam0000000004f4bf17 = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  plVar10 = *(long **)(param_1 + 0x28);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b3cc8) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02630778;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b3cc8,0);
LAB_02630778:
    (*(code *)*puVar5)(plVar10,puVar5[1]);
  }
  puVar4 = PTR_DAT_049c9ef0;
  puVar3 = PTR_DAT_049c2bf0;
  puVar2 = PTR_DAT_049c2288;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar11 = UnityEngine_AudioSource__get_volume_3bbcda4(*(long *)(param_1 + 0x20),0);
    auStack_50 = LitMotion_LMotion__Create_2ea9f9c(uVar11,uVar1,0x3fa00000,0);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar2;
    }
    auVar12 = FUN_02526574(auStack_50,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x60),
                           *(undefined8 *)puVar3);
    auVar12 = LitMotion_Extensions_LitMotionAudioExtensions__BindToVolume___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26645e4
                        (auVar12._0_8_,auVar12._8_8_,*(undefined8 *)(param_1 + 0x20),
                         *(undefined8 *)puVar4);
    uVar6 = LitMotion_MotionHandleExtensions__ToDisposable_2eacf90
                      (auVar12._0_8_,auVar12._8_8_ & 0xffffffff,0,0);
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x28),uVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

