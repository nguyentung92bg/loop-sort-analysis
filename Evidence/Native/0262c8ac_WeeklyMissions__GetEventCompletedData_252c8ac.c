/* IL2CPP: WeeklyMissions$$GetEventCompletedData
LiveOpsEventCompletedArgs_o WeeklyMissions__GetEventCompletedData (WeeklyMissions_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$GetEventCompletedData
   LiveOpsEventCompletedArgs_o WeeklyMissions__GetEventCompletedData (WeeklyMissions_o* __this,
   const MethodInfo* method); */

void WeeklyMissions__GetEventCompletedData_252c8ac(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [16];
  int iStack_64;
  
  if ((bRam0000000004f4bed5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9bc8);
    FUN_021f03f8(PTR_DAT_049c9bd8);
    FUN_021f03f8(PTR_DAT_049c9be8);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049c5d90);
    FUN_021f03f8(PTR_DAT_049c5d98);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c9c00);
    bRam0000000004f4bed5 = 1;
  }
  puVar6 = PTR_DAT_049c9be8;
  puVar5 = PTR_DAT_049c9bd8;
  puVar4 = PTR_DAT_049c5d98;
  puVar3 = PTR_DAT_049c5d90;
  puVar2 = PTR_DAT_049c2cf0;
  auStack_78._0_8_ = 0;
  auStack_78._8_8_ = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if ((*(long *)(param_2 + 0x78) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_2 + 0x78) + 0xa0), lVar8 != 0)) {
    auStack_78 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar8,*(undefined8 *)PTR_DAT_049c9c00);
    iVar14 = 0;
    iVar15 = 0;
    puStack_a8 = auStack_78;
    uStack_b0 = 0;
    while( true ) {
      uVar9 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                        (auStack_78,*(undefined8 *)puVar5);
      if ((uVar9 & 1) == 0) {
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_78,*(undefined8 *)PTR_DAT_049c9bc8);
        puVar2 = PTR_DAT_049b3c20;
        uStack_b0 = 0;
        uStack_b8 = CONCAT44(uStack_b8._4_4_,iVar15);
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_b0,&uStack_b8,*(undefined8 *)PTR_DAT_049b3c20);
        uVar11 = uStack_b0;
        uStack_b8 = 0;
        iStack_64 = iVar14;
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_b8,&iStack_64,*(undefined8 *)puVar2);
        *param_1 = uVar11;
        param_1[1] = 0;
        param_1[4] = 0;
        param_1[2] = 0;
        param_1[3] = uStack_b8;
        return;
      }
      lVar8 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                        (auStack_78,*(undefined8 *)puVar6);
      if (lVar8 == 0) break;
      iVar13 = 0;
      while( true ) {
        iVar7 = Cathei_BakingSheet_SheetRowArray___Il2CppFullySharedGenericType__object___get_Count_2985650
                          (lVar8,*(undefined8 *)puVar3);
        if (iVar7 <= iVar13) break;
        lVar10 = Cathei_BakingSheet_SheetRowArray___Il2CppFullySharedGenericType__object___get_Item_298568c
                           (lVar8,iVar13,*(undefined8 *)puVar4);
        if (lVar10 != 0) {
          uStack_98 = *(undefined8 *)(lVar10 + 0x40);
          uStack_a0 = *(undefined8 *)(lVar10 + 0x38);
          uStack_88 = *(undefined8 *)(lVar10 + 0x50);
          uStack_90 = *(undefined8 *)(lVar10 + 0x48);
          uVar9 = CloudPrefsBool__get_Value_24eb0d0(&uStack_a0,0);
          if ((uVar9 & 1) != 0) {
            plVar12 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
            uVar1 = *(undefined4 *)(plVar12[1] + 0xfc);
            uVar11 = thunk_FUN_0224e54c(lVar8,*(undefined8 *)(*plVar12 + 0x80));
            func_0x04608620(&uStack_b8,uVar11,uVar1);
            if (iVar14 < (int)uStack_b8) {
              plVar12 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
              uVar1 = *(undefined4 *)(plVar12[1] + 0xfc);
              uVar11 = thunk_FUN_0224e54c(lVar8,*(undefined8 *)(*plVar12 + 0x80));
              func_0x04608620(&uStack_b8,uVar11,uVar1);
              iVar14 = (int)uStack_b8;
            }
            if (iVar15 < iVar13 + 1) {
              iVar15 = iVar13 + 1;
            }
          }
        }
        iVar13 = iVar13 + 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

