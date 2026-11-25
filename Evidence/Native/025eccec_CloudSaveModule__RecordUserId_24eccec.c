/* IL2CPP: CloudSaveModule$$RecordUserId
void CloudSaveModule__RecordUserId (CloudSaveModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule$$RecordUserId
   void CloudSaveModule__RecordUserId (CloudSaveModule_o* __this, const MethodInfo* method); */

void CloudSaveModule__RecordUserId_24eccec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
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
  lVar7 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049c8008) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_025ecd90;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049c8008,3);
LAB_025ecd90:
  uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  uVar8 = System_String__IsNullOrEmpty_2f7c924(uVar4,0);
  puVar1 = PTR_DAT_049b5310;
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_049b5310 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (*(int *)(*(long *)PTR_DAT_049c5120 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049c5120;
  lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
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
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar1;
  }
  if (**(long **)(lVar6 + 0xb8) != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (**(long **)(lVar6 + 0xb8),*(undefined8 *)(lVar7 + 0x990),uVar4,
               *(undefined8 *)PTR_DAT_049b9d88);
    uVar8 = UnityEngine_PlayerPrefs__TrySetSetString_3c0f86c(*(undefined8 *)(lVar7 + 0x990),uVar4,0)
    ;
    if ((uVar8 & 1) != 0) {
      return;
    }
    thunk_FUN_02256840(PTR_DAT_04a264f8);
    uVar4 = thunk_FUN_0222ca34();
    uVar5 = thunk_FUN_02256840(PTR_DAT_04a26500);
    UnityEngine_PlayerPrefsException___ctor_3c0f474(uVar4,uVar5);
    uVar5 = thunk_FUN_02256840(PTR_DAT_04a26518);
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar4,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

