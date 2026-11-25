/* IL2CPP: StreakTournament$$GetAnalyticsData
System_Collections_Generic_Dictionary_string__object__o* StreakTournament__GetAnalyticsData (StreakTournament_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$GetAnalyticsData
   System_Collections_Generic_Dictionary_string__object__o* StreakTournament__GetAnalyticsData
   (StreakTournament_o* __this, const MethodInfo* method); */

long StreakTournament__GetAnalyticsData_25247e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_ac [4];
  undefined4 uStack_a8;
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [40];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  
  puVar2 = PTR_DAT_049b4340;
  puVar1 = PTR_DAT_049b4338;
  if ((bRam0000000004f4be90 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4358);
    FUN_021f03f8(PTR_DAT_049b4338);
    FUN_021f03f8(PTR_DAT_049b4340);
    FUN_021f03f8(PTR_DAT_049bbdb0);
    FUN_021f03f8(PTR_DAT_049c9930);
    FUN_021f03f8(PTR_DAT_049c9938);
    FUN_021f03f8(PTR_DAT_049c9940);
    FUN_021f03f8(PTR_DAT_049c9118);
    bRam0000000004f4be90 = 1;
  }
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (lVar5,*(undefined8 *)puVar1);
  StreakTournament__get_Save_2524120(auStack_a0);
  puVar1 = PTR_DAT_049b3bd0;
  uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),auStack_a4);
  puVar3 = PTR_DAT_049c9938;
  puVar2 = PTR_DAT_049b4358;
  if (lVar5 != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar5,*(undefined8 *)PTR_DAT_049c9118,uVar6,*(undefined8 *)PTR_DAT_049b4358);
    StreakTournament__get_Save_2524120(auStack_a0);
    uStack_a8 = uStack_70;
    uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_a8);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
              (lVar5,*(undefined8 *)puVar3,uVar6,*(undefined8 *)puVar2);
    lVar7 = *(long *)(param_1 + 0x78);
    StreakTournament__get_Save_2524120(auStack_a0);
    puVar4 = PTR_DAT_049c9940;
    puVar3 = PTR_DAT_049bbdb0;
    if (lVar7 != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar7,uStack_78,auStack_ac,*(undefined8 *)PTR_DAT_049bbdb0);
      uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),auStack_ac);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar5,*(undefined8 *)puVar4,uVar6,*(undefined8 *)puVar2);
      lVar7 = *(long *)(param_1 + 0x78);
      StreakTournament__get_Save_2524120(auStack_a0);
      puVar4 = PTR_DAT_049c9930;
      if (lVar7 != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar7,uStack_74,auStack_a0,*(undefined8 *)puVar3);
        uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),auStack_a0);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                  (lVar5,*(undefined8 *)puVar4,uVar6,*(undefined8 *)puVar2);
        return lVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

