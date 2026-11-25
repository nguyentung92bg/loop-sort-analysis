/* IL2CPP: SelectBoosterSystem.<ClearSelectables>d__23$$MoveNext
void SelectBoosterSystem__ClearSelectables_d__23__MoveNext (SelectBoosterSystem__ClearSelectables_d__23_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024fcfb4) */
/* WARNING: Removing unreachable block (ram,0x024fd040) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SelectBoosterSystem.<ClearSelectables>d__23$$MoveNext
   void SelectBoosterSystem__ClearSelectables_d__23__MoveNext
   (SelectBoosterSystem__ClearSelectables_d__23_o __this, const MethodInfo* method); */

void SelectBoosterSystem__ClearSelectables_d__23__MoveNext_23fcbac(int *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_108 [16];
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  int iStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f4b683 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2490);
    FUN_021f03f8(PTR_DAT_049c2498);
    FUN_021f03f8(PTR_DAT_049c2320);
    FUN_021f03f8(PTR_DAT_049c2330);
    FUN_021f03f8(PTR_DAT_049c2338);
    FUN_021f03f8(PTR_DAT_049c2340);
    FUN_021f03f8(PTR_DAT_049c2348);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b683 = 1;
  }
  iStack_64 = *param_1;
  lVar17 = *(long *)(param_1 + 4);
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  uStack_90 = 0;
  auStack_b0._8_8_ = 0;
  auStack_b0._0_8_ = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  lStack_c8 = 0;
  uStack_d8 = 0;
  if (iStack_64 == 0) {
    auStack_80 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    iStack_64 = -1;
    *param_1 = -1;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar8 = System_TimeSpan__FromSeconds_311711c(_UNK_013a82c8,0);
    puVar3 = PTR_DAT_049b5138;
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar15 = *(undefined8 *)(lVar17 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_108 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar8,0,8,uVar15,0,0);
    thunk_FUN_021f190c(auStack_108,0);
    uVar15 = auStack_108._8_8_;
    uVar8 = auStack_108._0_8_;
    auStack_80 = auStack_108;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar8 != (long *)0x0) {
      lVar11 = *(long *)uVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_024fcdc8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02229a4c(uVar8,*(long *)PTR_DAT_049b54e0,0);
LAB_024fcdc8:
      iVar7 = (*(code *)*puVar9)(uVar8,uVar15 & 0xffffffff,puVar9[1]);
      if (iVar7 == 0) {
        iStack_64 = 0;
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_80;
        thunk_FUN_021f190c(param_1 + 6,0);
        FUN_0235c420(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c2490);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar8 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar11 = *(long *)auStack_80._0_8_;
    uVar16 = auStack_80._8_8_ & 0xffff;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_024fce60;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_024fce60:
    (*(code *)*puVar9)(uVar8,uVar16,puVar9[1]);
  }
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar17 + 0x70) != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
              (*(long *)(lVar17 + 0x70),auStack_108,*(undefined8 *)PTR_DAT_049c2320);
    auStack_b0 = auStack_108;
    puVar6 = PTR_DAT_049c2498;
    puVar5 = PTR_DAT_049c2348;
    puVar4 = PTR_DAT_049c2340;
    puVar3 = PTR_DAT_049c2338;
    uStack_98 = uStack_f0;
    uStack_a0 = puStack_f8;
    uStack_90 = uStack_e8;
    auStack_108._8_8_ = &iStack_64;
    auStack_108._0_8_ = 0;
    puStack_f8 = auStack_b0;
    while( true ) {
      uVar12 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                         (auStack_b0,*(undefined8 *)puVar3);
      if ((uVar12 & 1) == 0) {
        if (iStack_64 < 0) {
          System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
                    (puStack_f8,*(undefined8 *)PTR_DAT_049c2330);
        }
        if (*(long *)(lVar17 + 0x70) != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                    (*(long *)(lVar17 + 0x70),*(undefined8 *)puVar6);
          *param_1 = -2;
          FUN_0235afc8(param_1 + 2,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar14 = *(long *)puVar4;
      lVar10 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
      lVar11 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_02229718();
        lVar10 = *(long *)(lVar14 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_02229718();
      }
      uVar8 = thunk_FUN_0224e54c(auStack_b0,
                                 *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_60,uVar8,uVar1);
      uStack_b8 = uStack_58;
      uStack_c0 = uStack_60;
      System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
                (&uStack_c0,&lStack_c8,&uStack_d0,*(undefined8 *)puVar5);
      if (lStack_c8 == 0) break;
      Carrier__EnableGroupBlock_23fd170();
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

