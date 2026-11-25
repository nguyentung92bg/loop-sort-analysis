/* IL2CPP: SettingsPageMonitor$$<Setup>b__18_9
void SettingsPageMonitor___Setup_b__18_9 (SettingsPageMonitor_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPageMonitor$$<Setup>b__18_9
   void SettingsPageMonitor___Setup_b__18_9 (SettingsPageMonitor_o* __this, bool isActive, const
   MethodInfo* method); */

void SettingsPageMonitor___Setup_b__18_9_245df08(long param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_049b52a8;
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  param_2 = param_2 & 1;
  if ((bRam0000000004f4bf7a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8,param_2,0);
    bRam0000000004f4bf7a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsBool__Set_3f0e92c(lVar2 + 0x58,param_2,0);
  if (*(long *)(lVar2 + 0x18) != 0) {
    *(byte *)(*(long *)(lVar2 + 0x18) + 0x2c) = (param_2 ^ 0xff) & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

