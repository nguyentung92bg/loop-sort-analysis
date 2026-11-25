/* IL2CPP: SettingsPageMonitor$$<Setup>b__18_6
void SettingsPageMonitor___Setup_b__18_6 (SettingsPageMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPageMonitor$$<Setup>b__18_6
   void SettingsPageMonitor___Setup_b__18_6 (SettingsPageMonitor_o* __this, const MethodInfo*
   method); */

long SettingsPageMonitor___Setup_b__18_6_245dec8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long alStack_58 [7];
  
  if (*(char *)(param_1 + 0x111) != '\0') {
    return param_1;
  }
  uVar3 = SettingsPageMonitor__IsSignedIn_245d8bc();
  puVar2 = PTR_DAT_049c4e70;
  puVar1 = PTR_DAT_049c4e68;
  if ((uVar3 & 1) != 0) {
    if ((bRam0000000004f4b92c & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c4e70);
      bRam0000000004f4b92c = 1;
    }
    alStack_58[3] = 0;
    alStack_58[0] = 0;
    lStack_60 = 0;
    alStack_58[2] = 0;
    alStack_58[1] = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    thunk_FUN_021f190c((ulong)&uStack_70 | 8,0);
    alStack_58[0] = param_1;
    thunk_FUN_021f190c(alStack_58,param_1);
    lStack_60 = CONCAT44(lStack_60._4_4_,2);
    uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
    Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
              ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar2);
    return 0;
  }
  if ((bRam0000000004f4b92b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4e68);
    bRam0000000004f4b92b = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  alStack_58[0] = 0;
  lStack_60 = 0;
  alStack_58[2] = 0;
  alStack_58[1] = 0;
  alStack_58[4] = 0;
  alStack_58[3] = 0;
  thunk_FUN_021f190c((ulong)&uStack_70 | 8,0);
  lStack_60 = param_1;
  thunk_FUN_021f190c(&lStack_60,param_1);
  alStack_58[0] = CONCAT44(alStack_58[0]._4_4_,2);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
  return 0;
}

