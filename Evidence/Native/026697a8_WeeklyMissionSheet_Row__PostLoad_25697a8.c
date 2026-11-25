/* IL2CPP: WeeklyMissionSheet.Row$$PostLoad
void WeeklyMissionSheet_Row__PostLoad (WeeklyMissionSheet_Row_o* __this, Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionSheet.Row$$PostLoad
   void WeeklyMissionSheet_Row__PostLoad (WeeklyMissionSheet_Row_o* __this,
   Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method); */

void WeeklyMissionSheet_Row__PostLoad_25697a8(undefined8 param_1,undefined8 param_2)

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
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar5 = PTR_DAT_049cbdb0;
  puVar4 = PTR_DAT_049c9c28;
  if ((bRam0000000004f4c186 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9c08);
    FUN_021f03f8(PTR_DAT_049c9c10);
    FUN_021f03f8(PTR_DAT_049c9c18);
    FUN_021f03f8(PTR_DAT_049c9c20);
    FUN_021f03f8(PTR_DAT_049cbdb0);
    FUN_021f03f8(PTR_DAT_049c9c28);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049cbdb8);
    FUN_021f03f8(PTR_DAT_049cbdc0);
    bRam0000000004f4c186 = 1;
  }
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  Cathei_BakingSheet_SheetRowArray___Il2CppFullySharedGenericType__object___PostLoad_2985810
            (param_1,param_2,*(undefined8 *)puVar5);
  plVar10 = (long *)thunk_FUN_0224e54c(param_1,*(undefined8 *)
                                                (**(long **)(*(long *)(*(long *)puVar4 + 0x20) +
                                                            0xc0) + 0x80));
  puVar9 = PTR_DAT_049cbdc0;
  puVar8 = PTR_DAT_049cbdb8;
  puVar7 = PTR_DAT_049c9c18;
  puVar6 = PTR_DAT_049c9c10;
  puVar5 = PTR_DAT_049c9c08;
  puVar4 = PTR_DAT_049c2cf0;
  if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*plVar10,&lStack_b0,*(undefined8 *)PTR_DAT_049c9c20);
  puVar3 = PTR_DAT_049b3bd0;
  plStack_88 = &lStack_80;
  uStack_78 = uStack_a8;
  lStack_80 = lStack_b0;
  uStack_70 = uStack_a0;
  uStack_90 = 0;
  while( true ) {
    uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&lStack_80,*(undefined8 *)puVar6);
    if ((uVar11 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&lStack_80,*(undefined8 *)puVar5);
      return;
    }
    lVar16 = *(long *)puVar7;
    lVar12 = *(long *)(lVar16 + 0x20);
    uVar2 = *(ushort *)(lVar12 + 0x135);
    lVar13 = lVar12;
    if ((uVar2 & 1) == 0) {
      lVar13 = FUN_02229718();
      lVar12 = *(long *)(lVar16 + 0x20);
      uVar2 = *(ushort *)(lVar12 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar12 = FUN_02229718();
    }
    uVar14 = thunk_FUN_0224e54c(&lStack_80,
                                *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_b0,uVar14,uVar1);
    lVar13 = lStack_b0;
    plVar10 = *(long **)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar10[1] + 0xfc);
    uVar14 = thunk_FUN_0224e54c(param_1,*(undefined8 *)(*plVar10 + 0x80));
    func_0x04608620(&lStack_b0,uVar14,uVar1);
    uStack_54 = (undefined4)lStack_b0;
    uVar14 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&uStack_54);
    if (lVar13 == 0) break;
    uStack_58 = *(undefined4 *)(lVar13 + 0x10);
    uVar15 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&uStack_58);
    uVar14 = System_String__Format_2f7dfac(*(undefined8 *)puVar8,uVar14,uVar15,0);
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    CloudPrefsBool___ctor_24eafb8(&lStack_b0,uVar14,0,0,0);
    *(undefined8 *)(lVar13 + 0x40) = uStack_a8;
    *(long *)(lVar13 + 0x38) = lStack_b0;
    *(undefined8 *)(lVar13 + 0x50) = uStack_98;
    *(undefined8 *)(lVar13 + 0x48) = uStack_a0;
    thunk_FUN_021f190c(lVar13 + 0x40,0);
    plVar10 = *(long **)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar10[1] + 0xfc);
    uVar14 = thunk_FUN_0224e54c(param_1,*(undefined8 *)(*plVar10 + 0x80));
    func_0x04608620(&uStack_e0,uVar14,uVar1);
    uStack_b4 = (undefined4)uStack_e0;
    uVar14 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&uStack_b4);
    uStack_b8 = *(undefined4 *)(lVar13 + 0x10);
    uVar15 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&uStack_b8);
    uVar14 = System_String__Format_2f7dfac(*(undefined8 *)puVar9,uVar14,uVar15,0);
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    CloudPrefsBool___ctor_24eafb8(&uStack_e0,uVar14,0,0,0);
    *(undefined8 *)(lVar13 + 0x60) = uStack_d8;
    *(undefined8 *)(lVar13 + 0x58) = uStack_e0;
    *(undefined8 *)(lVar13 + 0x70) = uStack_c8;
    *(undefined8 *)(lVar13 + 0x68) = uStack_d0;
    thunk_FUN_021f190c(lVar13 + 0x60,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

