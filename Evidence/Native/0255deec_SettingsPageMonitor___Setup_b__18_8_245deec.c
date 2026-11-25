/* IL2CPP: SettingsPageMonitor$$<Setup>b__18_8
void SettingsPageMonitor___Setup_b__18_8 (SettingsPageMonitor_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPageMonitor$$<Setup>b__18_8
   void SettingsPageMonitor___Setup_b__18_8 (SettingsPageMonitor_o* __this, bool isActive, const
   MethodInfo* method); */

void SettingsPageMonitor___Setup_b__18_8_245deec(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_049b52a8;
  lVar3 = *(long *)(param_1 + 0x98);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  param_2 = param_2 & 1;
  if ((bRam0000000004f4bf79 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8,param_2,0);
    bRam0000000004f4bf79 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsBool__Set_3f0e92c(lVar3 + 0x48,param_2,0);
  if ((*(long *)(lVar3 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + 0x20), lVar3 != 0)) {
    uVar1 = (param_2 ^ 0xffffffff) & 1;
    if ((bRam0000000004f561a9 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a254c8,uVar1,0);
      bRam0000000004f561a9 = 1;
    }
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar3,0);
      }
      if (pcRam0000000004f56230 == (code *)0x0) {
        pcRam0000000004f56230 = (code *)FUN_021f03bc(&UNK_013b8cf2);
      }
                    /* WARNING: Could not recover jumptable at 0x03cbd7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004f56230)(lVar4,uVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

