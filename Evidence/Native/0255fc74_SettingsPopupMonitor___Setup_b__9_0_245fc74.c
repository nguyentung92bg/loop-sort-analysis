/* IL2CPP: SettingsPopupMonitor$$<Setup>b__9_0
void SettingsPopupMonitor___Setup_b__9_0 (SettingsPopupMonitor_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPopupMonitor$$<Setup>b__9_0
   void SettingsPopupMonitor___Setup_b__9_0 (SettingsPopupMonitor_o* __this, bool isActive, const
   MethodInfo* method); */

void SettingsPopupMonitor___Setup_b__9_0_245fc74(long param_1,byte param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar4 = PTR_DAT_049b52a8;
  lVar7 = *(long *)(param_1 + 0x98);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  param_2 = param_2 & 1;
  if ((bRam0000000004f4bf78 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8,param_2,0);
    bRam0000000004f4bf78 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsBool__Set_3f0e92c(lVar7 + 0x38,param_2,0);
  lVar7 = *(long *)(lVar7 + 0x10);
  if (lVar7 == 0) {
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
  *(byte *)(lVar7 + 0x30) = bVar1;
  puVar6 = PTR_DAT_049c9ee0;
  puVar5 = PTR_DAT_049c9ed8;
  puVar4 = PTR_DAT_049c9ed0;
  if (*(long *)(lVar7 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(lVar7 + 0x38),&uStack_50,*(undefined8 *)PTR_DAT_049c9ee8);
  while( true ) {
    uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_50,*(undefined8 *)puVar5);
    if ((uVar8 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_50,*(undefined8 *)puVar4);
      return;
    }
    lVar11 = *(long *)puVar6;
    lVar9 = *(long *)(lVar11 + 0x20);
    uVar3 = *(ushort *)(lVar9 + 0x135);
    lVar7 = lVar9;
    if ((uVar3 & 1) == 0) {
      lVar7 = FUN_02229718();
      lVar9 = *(long *)(lVar11 + 0x20);
      uVar3 = *(ushort *)(lVar9 + 0x135);
    }
    uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    uVar10 = thunk_FUN_0224e54c(&uStack_50,
                                *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_38,uVar10,uVar2);
    if (lStack_38 == 0) break;
    UnityEngine_AudioSource__set_mute_3bbd748(lStack_38,bVar1,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

