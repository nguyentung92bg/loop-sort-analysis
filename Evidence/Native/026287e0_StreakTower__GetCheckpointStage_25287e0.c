/* IL2CPP: StreakTower$$GetCheckpointStage
StreakTowerSheet_Stage_o* StreakTower__GetCheckpointStage (StreakTower_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTower$$GetCheckpointStage
   StreakTowerSheet_Stage_o* StreakTower__GetCheckpointStage (StreakTower_o* __this, const
   MethodInfo* method); */

long StreakTower__GetCheckpointStage_25287e0(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4beb5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9a68);
    FUN_021f03f8(PTR_DAT_049c9a70);
    FUN_021f03f8(PTR_DAT_049c9a78);
    FUN_021f03f8(PTR_DAT_049c9a80);
    bRam0000000004f4beb5 = 1;
  }
  puVar5 = PTR_DAT_049c9a78;
  puVar4 = PTR_DAT_049c9a70;
  puVar3 = PTR_DAT_049c9a68;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if ((*(long *)(param_1 + 0x30) == 0) ||
     (lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x100), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auStack_50 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                         (lVar7,*(undefined8 *)PTR_DAT_049c9a80);
  lVar7 = 0;
  iVar10 = 0;
  do {
    lVar9 = lVar7;
    uVar8 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                      (auStack_50,*(undefined8 *)puVar4);
    if ((uVar8 & 1) == 0) break;
    lVar7 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                      (auStack_50,*(undefined8 *)puVar5);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar2 = *(int *)(lVar7 + 0x18);
    iVar6 = StreakTower__get_Save_2527c1c();
    bVar1 = iVar10 <= iVar6;
    iVar10 = iVar2 + iVar10;
  } while (bVar1);
  Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
            (auStack_50,*(undefined8 *)puVar3);
  return lVar9;
}

