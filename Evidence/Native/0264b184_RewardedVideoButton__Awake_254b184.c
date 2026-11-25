/* IL2CPP: RewardedVideoButton$$Awake
void RewardedVideoButton__Awake (RewardedVideoButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RewardedVideoButton$$Awake
   void RewardedVideoButton__Awake (RewardedVideoButton_o* __this, const MethodInfo* method); */

void RewardedVideoButton__Awake_254b184(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_18;
  
  puVar1 = PTR_DAT_049ca9f8;
  if ((bRam0000000004f4c043 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c82a0);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049ca9f8);
    bRam0000000004f4c043 = 1;
  }
  if (**(long **)(*(long *)puVar1 + 0xb8) == 0) {
    if (*(int *)(*(long *)PTR_DAT_049b5228 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar2 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)PTR_DAT_049b5f80);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    FUN_0235c744(*(undefined8 *)(lVar2 + 0x50),&uStack_18,*(undefined8 *)PTR_DAT_049c82a0);
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uStack_18;
    thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8));
  }
  return;
}

