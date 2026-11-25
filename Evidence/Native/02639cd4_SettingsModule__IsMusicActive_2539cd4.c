/* IL2CPP: SettingsModule$$IsMusicActive
bool SettingsModule__IsMusicActive (SettingsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsModule$$IsMusicActive
   bool SettingsModule__IsMusicActive (SettingsModule_o* __this, const MethodInfo* method); */

undefined1 SettingsModule__IsMusicActive_2539cd4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  puVar1 = PTR_DAT_049b52a8;
                    /* try { // try from 02639cdc to 02739cef has its CatchHandler @ 0263a214 */
  if ((bRam0000000004f4bf74 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8);
                    /* try { // try from 02639d00 to 02739d0b has its CatchHandler @ 0263a210 */
    bRam0000000004f4bf74 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b52a8;
                    /* try { // try from 02639d20 to 02739d23 has its CatchHandler @ 0263a20c */
  if ((bRam0000000004f5c3f1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a39b98,0);
    FUN_021f03f8(PTR_DAT_049cfad8);
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f5c3f1 = 1;
  }
  lVar3 = *(long *)puVar1;
  auStack_28[0] = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    uVar4 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (**(long **)(lVar3 + 0xb8),*(undefined8 *)(param_1 + 0x50),auStack_28,
                       *(undefined8 *)PTR_DAT_04a39b98);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      iVar2 = UnityEngine_PlayerPrefs__GetInt_3c0fb44
                        (*(undefined8 *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x48),0);
      lVar3 = *(long *)puVar1;
      auStack_28[0] = iVar2 == 1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_021f0574();
        lVar3 = *(long *)puVar1;
      }
      if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_0400e7f0;
      auStack_24[0] = auStack_28[0];
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (**(long **)(lVar3 + 0xb8),*(undefined8 *)(param_1 + 0x50),auStack_24,
                 *(undefined8 *)PTR_DAT_049cfad8);
    }
    return auStack_28[0];
  }
LAB_0400e7f0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

