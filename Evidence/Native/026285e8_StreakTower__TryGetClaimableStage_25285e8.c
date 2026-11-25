/* IL2CPP: StreakTower$$TryGetClaimableStage
bool StreakTower__TryGetClaimableStage (StreakTower_o* __this, StreakTowerSheet_Stage_o** claimableStage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTower$$TryGetClaimableStage
   bool StreakTower__TryGetClaimableStage (StreakTower_o* __this, StreakTowerSheet_Stage_o**
   claimableStage, const MethodInfo* method); */

undefined8 StreakTower__TryGetClaimableStage_25285e8(long param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4beb4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9a68);
    FUN_021f03f8(PTR_DAT_049c9a70);
    FUN_021f03f8(PTR_DAT_049c9a78);
    FUN_021f03f8(PTR_DAT_049c3be0);
    FUN_021f03f8(PTR_DAT_049c9a80);
    bRam0000000004f4beb4 = 1;
  }
  puVar4 = PTR_DAT_049c9a78;
  puVar3 = PTR_DAT_049c9a70;
  puVar2 = PTR_DAT_049c9a68;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x100), lVar6 != 0)) {
    auStack_50 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar6,*(undefined8 *)PTR_DAT_049c9a80);
    iVar1 = 0;
    while( true ) {
      iVar9 = iVar1;
      uVar7 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                        (auStack_50,*(undefined8 *)puVar3);
      if ((uVar7 & 1) == 0) {
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_50,*(undefined8 *)puVar2);
        *param_2 = 0;
        thunk_FUN_021f190c(param_2,0);
        return 0;
      }
      lVar6 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                        (auStack_50,*(undefined8 *)puVar4);
      if (lVar6 == 0) break;
      uStack_68 = *(undefined8 *)(lVar6 + 0x38);
      uStack_70 = *(undefined8 *)(lVar6 + 0x30);
      uStack_58 = *(undefined8 *)(lVar6 + 0x48);
      uStack_60 = *(undefined8 *)(lVar6 + 0x40);
      iVar1 = *(int *)(lVar6 + 0x18);
      uVar7 = CloudPrefsBool__get_Value_24eb0d0(&uStack_70,0);
      iVar1 = iVar1 + iVar9;
      if ((uVar7 & 1) == 0) {
        iVar5 = StreakTower__get_Save_2527c1c();
        if (iVar9 == iVar5) {
          lVar8 = StreakTowerSheet_Stage__GetRewards_2568b84(lVar6,0);
          if ((lVar8 != 0) && (*(int *)(lVar8 + 0x18) != 0)) {
            *param_2 = lVar6;
            thunk_FUN_021f190c(param_2,lVar6);
            Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                      (auStack_50,*(undefined8 *)puVar2);
            return 1;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

