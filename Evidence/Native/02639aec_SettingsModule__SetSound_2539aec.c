/* IL2CPP: SettingsModule$$SetSound
void SettingsModule__SetSound (SettingsModule_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsModule$$SetSound
   void SettingsModule__SetSound (SettingsModule_o* __this, bool isActive, const MethodInfo*
   method); */

void SettingsModule__SetSound_2539aec(long param_1,byte param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar4 = PTR_DAT_049b52a8;
  if ((bRam0000000004f4bf78 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f4bf78 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsBool__Set_3f0e92c(param_1 + 0x38,param_2 & 1,0);
  lVar10 = *(long *)(param_1 + 0x10);
                    /* try { // try from 02639b4c to 02739bd3 has its CatchHandler @ 0263a264 */
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  bVar1 = (param_2 ^ 0xff) & 1;
  if ((bRam0000000004f4bf16 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9ed0);
    FUN_021f03f8(PTR_DAT_049c9ed8);
    FUN_021f03f8(PTR_DAT_049c9ee0);
    FUN_021f03f8(PTR_DAT_049c9ee8);
    bRam0000000004f4bf16 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  *(byte *)(lVar10 + 0x30) = bVar1;
  puVar6 = PTR_DAT_049c9ee0;
  puVar5 = PTR_DAT_049c9ed8;
  puVar4 = PTR_DAT_049c9ed0;
  if (*(long *)(lVar10 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(lVar10 + 0x38),&uStack_50,*(undefined8 *)PTR_DAT_049c9ee8);
  while( true ) {
    uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_50,*(undefined8 *)puVar5);
    if ((uVar7 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_50,*(undefined8 *)puVar4);
      return;
    }
    lVar11 = *(long *)puVar6;
    lVar8 = *(long *)(lVar11 + 0x20);
    uVar3 = *(ushort *)(lVar8 + 0x135);
    lVar10 = lVar8;
    if ((uVar3 & 1) == 0) {
      lVar10 = FUN_02229718();
      lVar8 = *(long *)(lVar11 + 0x20);
      uVar3 = *(ushort *)(lVar8 + 0x135);
    }
    uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
    if ((uVar3 & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar9 = thunk_FUN_0224e54c(&uStack_50,
                               *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_38,uVar9,uVar2);
    if (lStack_38 == 0) break;
    UnityEngine_AudioSource__set_mute_3bbd748(lStack_38,bVar1,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

