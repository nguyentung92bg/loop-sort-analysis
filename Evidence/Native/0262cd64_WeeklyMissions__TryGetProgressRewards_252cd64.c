/* IL2CPP: WeeklyMissions$$TryGetProgressRewards
bool WeeklyMissions__TryGetProgressRewards (WeeklyMissions_o* __this, int32_t* id, System_Collections_Generic_List_RewardInfo__o** rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$TryGetProgressRewards
   bool WeeklyMissions__TryGetProgressRewards (WeeklyMissions_o* __this, int32_t* id,
   System_Collections_Generic_List_RewardInfo__o** rewards, const MethodInfo* method); */

uint WeeklyMissions__TryGetProgressRewards_252cd64
               (long param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [16];
  undefined4 uStack_54;
  
  if ((bRam0000000004f4bed9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9bd0);
    FUN_021f03f8(PTR_DAT_049c9be0);
    FUN_021f03f8(PTR_DAT_049c9bf0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c9bf8);
    bRam0000000004f4bed9 = 1;
  }
  auStack_68._0_8_ = 0;
  auStack_68._8_8_ = 0;
  *param_2 = 0xffffffff;
  *param_3 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  thunk_FUN_021f190c(param_3,0);
  puVar6 = PTR_DAT_049c9bf0;
  puVar5 = PTR_DAT_049c9be0;
  puVar4 = PTR_DAT_049c9bd0;
  puVar3 = PTR_DAT_049b5310;
  if ((*(long *)(param_1 + 0x78) == 0) ||
     (lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0xa8), lVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auStack_68 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                         (lVar9,*(undefined8 *)PTR_DAT_049c9bf8);
  do {
    do {
      uVar7 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                        (auStack_68,*(undefined8 *)puVar5);
      if ((uVar7 & 1) == 0) goto LAB_0262cf34;
      lVar9 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                        (auStack_68,*(undefined8 *)puVar6);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar10 = *(long *)puVar3;
      iVar1 = *(int *)(lVar9 + 0x18);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_021f0574();
        lVar10 = *(long *)puVar3;
      }
      iVar8 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar10 + 0xb8) + 0x438,0);
    } while (iVar8 < iVar1);
    uStack_88 = *(undefined8 *)(lVar9 + 0x30);
    uStack_90 = *(undefined8 *)(lVar9 + 0x28);
    uStack_78 = *(undefined8 *)(lVar9 + 0x40);
    uStack_80 = *(undefined8 *)(lVar9 + 0x38);
    uVar11 = CloudPrefsBool__get_Value_24eb0d0(&uStack_90,0);
  } while ((uVar11 & 1) != 0);
  uStack_88 = *(undefined8 *)(lVar9 + 0x30);
  uStack_90 = *(undefined8 *)(lVar9 + 0x28);
  uStack_78 = *(undefined8 *)(lVar9 + 0x40);
  uStack_80 = *(undefined8 *)(lVar9 + 0x38);
  CloudPrefsBool__Set_24eb1bc(&uStack_90,1,0);
  plVar13 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
  uVar2 = *(undefined4 *)(plVar13[1] + 0xfc);
  uVar12 = thunk_FUN_0224e54c(lVar9,*(undefined8 *)(*plVar13 + 0x80));
  func_0x04608620(&uStack_54,uVar12,uVar2);
  uVar12 = *(undefined8 *)(lVar9 + 0x48);
  *param_2 = uStack_54;
  *param_3 = uVar12;
  thunk_FUN_021f190c(param_3);
LAB_0262cf34:
  Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
            (auStack_68,*(undefined8 *)puVar4);
  return uVar7 & 1;
}

