/* IL2CPP: StreakTournamentSubMonitor$$OnDeactivated
void StreakTournamentSubMonitor__OnDeactivated (StreakTournamentSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentSubMonitor$$OnDeactivated
   void StreakTournamentSubMonitor__OnDeactivated (StreakTournamentSubMonitor_o* __this, const
   MethodInfo* method); */

void StreakTournamentSubMonitor__OnDeactivated_248368c(long param_1)

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
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_58;
  int iStack_54;
  
  lVar12 = *(long *)(param_1 + 0xa0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar17 = *(long *)(param_1 + 0x110);
  if ((bRam0000000004f4be99 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c99e0,lVar17,0);
    FUN_021f03f8(PTR_DAT_049c99e8);
    FUN_021f03f8(PTR_DAT_049c99f0);
    FUN_021f03f8(PTR_DAT_049c99f8);
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049c7d38);
    bRam0000000004f4be99 = 1;
  }
  puVar10 = PTR_DAT_049c99f0;
  puVar9 = PTR_DAT_049c99e8;
  puVar8 = PTR_DAT_049c99e0;
  puVar7 = PTR_DAT_049c7d38;
  puVar6 = PTR_DAT_049b6370;
  puVar5 = PTR_DAT_049b6350;
  puVar4 = PTR_DAT_049b6348;
  puVar3 = PTR_DAT_049b6330;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  iStack_58 = 0;
  if (lVar17 != 0) {
    lVar13 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c99f8);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
              (lVar13,*(undefined8 *)puVar9);
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lVar17,&uStack_98,*(undefined8 *)puVar6);
    uStack_70 = uStack_88;
    uStack_78 = puStack_90;
    uStack_80 = uStack_98;
    uStack_98 = 0;
    puStack_90 = &uStack_80;
    while (uVar14 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&uStack_80,*(undefined8 *)puVar4), (uVar14 & 1) != 0) {
      lVar18 = *(long *)puVar5;
      lVar15 = *(long *)(lVar18 + 0x20);
      uVar2 = *(ushort *)(lVar15 + 0x135);
      lVar17 = lVar15;
      if ((uVar2 & 1) == 0) {
        lVar17 = FUN_02229718();
        lVar15 = *(long *)(lVar18 + 0x20);
        uVar2 = *(ushort *)(lVar15 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar15 = FUN_02229718();
      }
      uVar16 = thunk_FUN_0224e54c(&uStack_80,
                                  *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_68,uVar16,uVar1);
      iVar11 = iStack_64;
      uVar1 = uStack_68;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                (lVar13,&uStack_68,&iStack_58,*(undefined8 *)puVar8);
      iStack_54 = iStack_58 + iVar11;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar13,&uStack_68,&iStack_54,*(undefined8 *)puVar10);
      lVar17 = *(long *)(lVar12 + 0x48);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      FulfillModule__FulfillFreePayout_254358c(lVar17,uVar1,(double)iVar11,*(undefined8 *)puVar7,0);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_80,*(undefined8 *)puVar3);
  }
  return;
}

