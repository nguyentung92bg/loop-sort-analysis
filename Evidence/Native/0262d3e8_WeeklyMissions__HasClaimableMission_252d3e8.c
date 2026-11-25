/* IL2CPP: WeeklyMissions$$HasClaimableMission
bool WeeklyMissions__HasClaimableMission (WeeklyMissions_o* __this, int32_t day, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$HasClaimableMission
   bool WeeklyMissions__HasClaimableMission (WeeklyMissions_o* __this, int32_t day, const
   MethodInfo* method); */

uint WeeklyMissions__HasClaimableMission_252d3e8(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f4bedb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9c08);
    FUN_021f03f8(PTR_DAT_049c9c10);
    FUN_021f03f8(PTR_DAT_049c9c18);
    FUN_021f03f8(PTR_DAT_049c9c20);
    FUN_021f03f8(PTR_DAT_049c9c28);
    FUN_021f03f8(PTR_DAT_049c5da0);
    bRam0000000004f4bedb = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x78) + 0xa0), lVar7 != 0)) {
    uStack_80 = CONCAT44(uStack_80._4_4_,param_2);
    lVar7 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                      (lVar7,&uStack_80,*(undefined8 *)PTR_DAT_049c5da0);
    if (lVar7 == 0) {
      uVar6 = 0;
    }
    else {
      plVar8 = (long *)thunk_FUN_0224e54c(lVar7,*(undefined8 *)
                                                 (**(long **)(*(long *)(*(long *)PTR_DAT_049c9c28 +
                                                                       0x20) + 0xc0) + 0x80));
      puVar5 = PTR_DAT_049c9c18;
      puVar4 = PTR_DAT_049c9c10;
      puVar3 = PTR_DAT_049c9c08;
      if (*plVar8 == 0) goto LAB_0262d5d0;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*plVar8,&uStack_50,*(undefined8 *)PTR_DAT_049c9c20);
      uStack_80 = 0;
      puStack_78 = &uStack_50;
      do {
        do {
          uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                            (&uStack_50,*(undefined8 *)puVar4);
          if ((uVar6 & 1) == 0) goto LAB_0262d5a4;
          lVar12 = *(long *)puVar5;
          lVar9 = *(long *)(lVar12 + 0x20);
          uVar2 = *(ushort *)(lVar9 + 0x135);
          lVar7 = lVar9;
          if ((uVar2 & 1) == 0) {
            lVar7 = FUN_02229718();
            lVar9 = *(long *)(lVar12 + 0x20);
            uVar2 = *(ushort *)(lVar9 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar9 = FUN_02229718();
          }
          uVar10 = thunk_FUN_0224e54c(&uStack_50,
                                      *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&lStack_38,uVar10,uVar1);
          lVar7 = lStack_38;
        } while (lStack_38 == 0);
        uStack_68 = *(undefined8 *)(lStack_38 + 0x40);
        uStack_70 = *(undefined8 *)(lStack_38 + 0x38);
        uStack_58 = *(undefined8 *)(lStack_38 + 0x50);
        uStack_60 = *(undefined8 *)(lStack_38 + 0x48);
        uVar11 = CloudPrefsBool__get_Value_24eb0d0(&uStack_70,0);
      } while (((uVar11 & 1) != 0) ||
              (uVar11 = WeeklyMissions__IsCompleted_252ad88(uVar11,*(undefined8 *)(lVar7 + 0x28)),
              (uVar11 & 1) == 0));
LAB_0262d5a4:
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_50,*(undefined8 *)puVar3);
    }
    return uVar6 & 1;
  }
LAB_0262d5d0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

