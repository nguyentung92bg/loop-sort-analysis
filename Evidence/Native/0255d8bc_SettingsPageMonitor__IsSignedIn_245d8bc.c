/* IL2CPP: SettingsPageMonitor$$IsSignedIn
bool SettingsPageMonitor__IsSignedIn (SettingsPageMonitor_o* __this, int32_t authType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPageMonitor$$IsSignedIn
   bool SettingsPageMonitor__IsSignedIn (SettingsPageMonitor_o* __this, int32_t authType, const
   MethodInfo* method); */

byte SettingsPageMonitor__IsSignedIn_245d8bc(long param_1,undefined4 param_2)

{
  byte bVar1;
  char acStack_28 [4];
  undefined4 uStack_24;
  
  if ((bRam0000000004f4b92d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4e78);
    bRam0000000004f4b92d = 1;
  }
  acStack_28[0] = '\0';
  if (*(long *)(param_1 + 0x108) != 0) {
    uStack_24 = param_2;
    bVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x108),&uStack_24,acStack_28,
                       *(undefined8 *)PTR_DAT_049c4e78);
    return bVar1 & acStack_28[0] != '\0';
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

