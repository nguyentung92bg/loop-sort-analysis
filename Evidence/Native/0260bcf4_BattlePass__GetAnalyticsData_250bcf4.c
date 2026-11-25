/* IL2CPP: BattlePass$$GetAnalyticsData
System_Collections_Generic_Dictionary_string__object__o* BattlePass__GetAnalyticsData (BattlePass_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass$$GetAnalyticsData
   System_Collections_Generic_Dictionary_string__object__o* BattlePass__GetAnalyticsData
   (BattlePass_o* __this, const MethodInfo* method); */

long BattlePass__GetAnalyticsData_250bcf4(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar3 = PTR_DAT_049b4340;
  puVar2 = PTR_DAT_049b4338;
  if ((bRam0000000004f4bdcd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4358);
    FUN_021f03f8(PTR_DAT_049b4338);
    FUN_021f03f8(PTR_DAT_049b4340);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c9118);
    bRam0000000004f4bdcd = 1;
  }
  lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (lVar4,*(undefined8 *)puVar2);
  lVar5 = BattlePass__GetCurrentLevelData_250be14(param_1);
  if (lVar5 != 0) {
    plVar7 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
                    /* try { // try from 0260bd98 to 0270bdfb has its CatchHandler @ 0260c7b8 */
    uVar1 = *(undefined4 *)(plVar7[1] + 0xfc);
    uVar6 = thunk_FUN_0224e54c(lVar5,*(undefined8 *)(*plVar7 + 0x80));
    func_0x04608620(&uStack_24,uVar6,uVar1);
    uStack_28 = uStack_24;
    uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_28);
    if (lVar4 != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (lVar4,*(undefined8 *)PTR_DAT_049c9118,uVar6,*(undefined8 *)PTR_DAT_049b4358);
      return lVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

