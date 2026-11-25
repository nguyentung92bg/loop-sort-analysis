/* IL2CPP: WeeklyMissions$$CanShowNotificationBadge
bool WeeklyMissions__CanShowNotificationBadge (WeeklyMissions_o* __this, System_String_o** text, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0262d294) */
/* WARNING: Removing unreachable block (ram,0x0262d304) */
/* IL2CPP: WeeklyMissions$$CanShowNotificationBadge
   bool WeeklyMissions__CanShowNotificationBadge (WeeklyMissions_o* __this, System_String_o** text,
   const MethodInfo* method); */

bool WeeklyMissions__CanShowNotificationBadge_252cfe0(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  int iStack_6c;
  long lStack_68;
  
  if ((bRam0000000004f4beda & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9bc8);
    FUN_021f03f8(PTR_DAT_049c9c08);
    FUN_021f03f8(PTR_DAT_049c9bd8);
    FUN_021f03f8(PTR_DAT_049c9c10);
    FUN_021f03f8(PTR_DAT_049c9be8);
    FUN_021f03f8(PTR_DAT_049c9c18);
    FUN_021f03f8(PTR_DAT_049c9c20);
    FUN_021f03f8(PTR_DAT_049c9c28);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c9c00);
    bRam0000000004f4beda = 1;
  }
  iStack_6c = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  iVar10 = WeeklyMissions__GetCurrentDay_252c638(param_1);
  puVar9 = PTR_DAT_049c9c20;
  puVar8 = PTR_DAT_049c9c18;
  puVar7 = PTR_DAT_049c9c10;
  puVar6 = PTR_DAT_049c9c08;
  puVar5 = PTR_DAT_049c9be8;
  puVar4 = PTR_DAT_049c9bd8;
  puVar3 = PTR_DAT_049c2cf0;
  iStack_6c = 0;
  if ((*(long *)(param_1 + 0x78) == 0) ||
     (lVar11 = *(long *)(*(long *)(param_1 + 0x78) + 0xa0), lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auStack_80 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                         (lVar11,*(undefined8 *)PTR_DAT_049c9c00);
  puStack_a8 = auStack_80;
  lStack_b0 = 0;
  while( true ) {
    uVar12 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                       (auStack_80,*(undefined8 *)puVar4);
    if ((uVar12 & 1) == 0) break;
    lVar11 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                       (auStack_80,*(undefined8 *)puVar5);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar15 = *(long **)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar15[1] + 0xfc);
    uVar13 = thunk_FUN_0224e54c(lVar11,*(undefined8 *)(*plVar15 + 0x80));
    func_0x04608620(&uStack_c8,uVar13,uVar1);
    if (iVar10 < (int)uStack_c8) break;
    plVar15 = (long *)thunk_FUN_0224e54c(lVar11,*(undefined8 *)
                                                 (**(long **)(*(long *)(*(long *)PTR_DAT_049c9c28 +
                                                                       0x20) + 0xc0) + 0x80));
    if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*plVar15,&uStack_c8,*(undefined8 *)puVar9);
    uStack_a0 = uStack_c8;
    uStack_c8 = 0;
    puStack_98 = puStack_c0;
    uStack_90 = uStack_b8;
    puStack_c0 = &uStack_a0;
    while( true ) {
      uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&uStack_a0,*(undefined8 *)puVar7);
      if ((uVar12 & 1) == 0) break;
      lVar16 = *(long *)puVar8;
      lVar14 = *(long *)(lVar16 + 0x20);
      uVar2 = *(ushort *)(lVar14 + 0x135);
      lVar11 = lVar14;
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_02229718();
        lVar14 = *(long *)(lVar16 + 0x20);
        uVar2 = *(ushort *)(lVar14 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar14 = FUN_02229718();
      }
      uVar13 = thunk_FUN_0224e54c(&uStack_a0,
                                  *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_68,uVar13,uVar1);
      lVar11 = lStack_68;
      if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_e8 = *(undefined8 *)(lStack_68 + 0x40);
      uStack_f0 = *(undefined8 *)(lStack_68 + 0x38);
      uStack_d8 = *(undefined8 *)(lStack_68 + 0x50);
      uStack_e0 = *(undefined8 *)(lStack_68 + 0x48);
      uVar12 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_f0,0);
      if ((uVar12 & 1) == 0) {
        uVar12 = WeeklyMissions__IsCompleted_252ad88(uVar12,*(undefined8 *)(lVar11 + 0x28));
        if ((uVar12 & 1) != 0) {
          iStack_6c = iStack_6c + 1;
        }
      }
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_a0,*(undefined8 *)puVar6);
  }
  lVar11 = lStack_b0;
  Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
            (puStack_a8,*(undefined8 *)PTR_DAT_049c9bc8);
  if (lVar11 == 0) {
    uVar13 = System_Int32__ToString_30fbaa0(&iStack_6c,0);
    *param_2 = uVar13;
    thunk_FUN_021f190c();
    return 0 < iStack_6c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f0698(lVar11);
}

