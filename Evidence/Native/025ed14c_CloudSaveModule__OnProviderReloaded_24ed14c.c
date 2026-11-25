/* IL2CPP: CloudSaveModule$$OnProviderReloaded
void CloudSaveModule__OnProviderReloaded (CloudSaveModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule$$OnProviderReloaded
   void CloudSaveModule__OnProviderReloaded (CloudSaveModule_o* __this, const MethodInfo* method);
    */

void CloudSaveModule__OnProviderReloaded_24ed14c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  
  CloudSaveModule__ReconcileAccountSwitch_24ec564();
  uVar5 = CloudSaveModule__ShouldPushLocal_24ece0c(param_1);
  if ((uVar5 & 1) == 0) {
    CloudSaveModule__SyncCloudPrefs_24eda5c(param_1);
  }
  else {
    CloudSaveModule__MarkDirty_24ed184(param_1);
  }
  if ((bRam0000000004f4bce0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8008);
    FUN_021f03f8(PTR_DAT_049c5120);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bce0 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x10);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = *plVar10;
  uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049c8008) {
        puVar3 = (undefined8 *)(lVar8 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_025ecd90;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049c8008,3);
LAB_025ecd90:
  uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  uVar5 = System_String__IsNullOrEmpty_2f7c924(uVar4,0);
  puVar1 = PTR_DAT_049b5310;
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_049b5310 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (*(int *)(*(long *)PTR_DAT_049c5120 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049c5120;
  lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
  if ((bRam0000000004f5c3ec & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5120,uVar4,0);
    bRam0000000004f5c3ec = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049c5120;
  if ((bRam0000000004f5c3ea & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b9d88);
    FUN_021f03f8(PTR_DAT_049c5120);
    bRam0000000004f5c3ea = 1;
  }
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
    lVar7 = *(long *)puVar1;
  }
  if (**(long **)(lVar7 + 0xb8) != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (**(long **)(lVar7 + 0xb8),*(undefined8 *)(lVar8 + 0x990),uVar4,
               *(undefined8 *)PTR_DAT_049b9d88);
    uVar5 = UnityEngine_PlayerPrefs__TrySetSetString_3c0f86c(*(undefined8 *)(lVar8 + 0x990),uVar4,0)
    ;
    if ((uVar5 & 1) != 0) {
      return;
    }
    thunk_FUN_02256840(PTR_DAT_04a264f8);
    uVar4 = thunk_FUN_0222ca34();
    uVar6 = thunk_FUN_02256840(PTR_DAT_04a26500);
    UnityEngine_PlayerPrefsException___ctor_3c0f474(uVar4,uVar6);
    uVar6 = thunk_FUN_02256840(PTR_DAT_04a26518);
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar4,uVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

