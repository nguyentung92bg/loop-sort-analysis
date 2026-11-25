/* IL2CPP: PlayingMonitor$$<OnSpeedBoostClicked>b__45_0
void PlayingMonitor___OnSpeedBoostClicked_b__45_0 (PlayingMonitor_o* __this, int32_t seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$<OnSpeedBoostClicked>b__45_0
   void PlayingMonitor___OnSpeedBoostClicked_b__45_0 (PlayingMonitor_o* __this, int32_t seconds,
   const MethodInfo* method); */

void PlayingMonitor___OnSpeedBoostClicked_b__45_0_2451984(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_24 [4];
  
  if (*(long *)(param_1 + 0x130) != 0) {
    ConveyorSpeedSystem__AddSpeedBoost_24b6128((float)param_2,*(long *)(param_1 + 0x130),0);
    puVar2 = PTR_DAT_049b5310;
    if (*(long *)(param_1 + 0x130) != 0) {
      if ((bRam0000000004f4bb90 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b52a8,1,0);
        FUN_021f03f8(PTR_DAT_049b5310);
        bRam0000000004f4bb90 = 1;
      }
      puVar1 = PTR_DAT_049b52a8;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      puVar1 = PTR_DAT_049b52a8;
      lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
      if ((bRam0000000004f5c3f2 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049cfad8,1,0);
        FUN_021f03f8(PTR_DAT_049b52a8);
        bRam0000000004f5c3f2 = 1;
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_021f0574();
        lVar3 = *(long *)puVar1;
      }
      if (**(long **)(lVar3 + 0xb8) != 0) {
        auStack_24[0] = 1;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                  (**(long **)(lVar3 + 0xb8),*(undefined8 *)(lVar4 + 0x9b0),auStack_24,
                   *(undefined8 *)PTR_DAT_049cfad8);
        UnityEngine_PlayerPrefs__SetInt_3c0faec(*(undefined8 *)(lVar4 + 0x9b0),1,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

