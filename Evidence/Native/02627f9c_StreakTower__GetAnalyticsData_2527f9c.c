/* IL2CPP: StreakTower$$GetAnalyticsData
System_Collections_Generic_Dictionary_string__object__o* StreakTower__GetAnalyticsData (StreakTower_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTower$$GetAnalyticsData
   System_Collections_Generic_Dictionary_string__object__o* StreakTower__GetAnalyticsData
   (StreakTower_o* __this, const MethodInfo* method); */

long StreakTower__GetAnalyticsData_2527f9c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_049b4340;
  puVar1 = PTR_DAT_049b4338;
  if ((bRam0000000004f4beae & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4358);
    FUN_021f03f8(PTR_DAT_049b4338);
    FUN_021f03f8(PTR_DAT_049b4340);
    FUN_021f03f8(PTR_DAT_049c9938);
    FUN_021f03f8(PTR_DAT_049c9118);
    bRam0000000004f4beae = 1;
  }
  lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (lVar4,*(undefined8 *)puVar1);
  uStack_24 = StreakTower__GetMilestoneLevel_25280b8(param_1);
  puVar1 = PTR_DAT_049b3bd0;
  uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_24);
  puVar3 = PTR_DAT_049c9938;
  puVar2 = PTR_DAT_049b4358;
  if (lVar4 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar4,*(undefined8 *)PTR_DAT_049c9118,uVar5,*(undefined8 *)PTR_DAT_049b4358);
    uStack_28 = StreakTower__get_Save_2527c1c();
    uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_28);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar4,*(undefined8 *)puVar3,uVar5,*(undefined8 *)puVar2);
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

