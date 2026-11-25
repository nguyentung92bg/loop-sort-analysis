/* IL2CPP: SettingsModule$$IsColorBlindActive
bool SettingsModule__IsColorBlindActive (SettingsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsModule$$IsColorBlindActive
   bool SettingsModule__IsColorBlindActive (SettingsModule_o* __this, const MethodInfo* method); */

undefined1 SettingsModule__IsColorBlindActive_2539ddc(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
                    /* try { // try from 02639ddc to 02739de7 has its CatchHandler @ 0263a1e4 */
  puVar1 = PTR_DAT_049b52a8;
  if ((bRam0000000004f4bf77 & 1) == 0) {
                    /* try { // try from 02639dfc to 02739dff has its CatchHandler @ 0263a190 */
                    /* try { // try from 02639e04 to 02739e0f has its CatchHandler @ 0263a1e0 */
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f4bf77 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b52a8;
                    /* try { // try from 02639e24 to 02739ed7 has its CatchHandler @ 0263a250 */
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
                      (**(long **)(lVar3 + 0xb8),*(undefined8 *)(param_1 + 0x80),auStack_28,
                       *(undefined8 *)PTR_DAT_04a39b98);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      iVar2 = UnityEngine_PlayerPrefs__GetInt_3c0fb44
                        (*(undefined8 *)(param_1 + 0x80),*(undefined1 *)(param_1 + 0x78),0);
      lVar3 = *(long *)puVar1;
      auStack_28[0] = iVar2 == 1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_021f0574();
        lVar3 = *(long *)puVar1;
      }
      if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_0400e7f0;
      auStack_24[0] = auStack_28[0];
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (**(long **)(lVar3 + 0xb8),*(undefined8 *)(param_1 + 0x80),auStack_24,
                 *(undefined8 *)PTR_DAT_049cfad8);
    }
    return auStack_28[0];
  }
LAB_0400e7f0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

