/* IL2CPP: LoseSystem$$IsConveyorFull
bool LoseSystem__IsConveyorFull (LoseSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoseSystem$$IsConveyorFull
   bool LoseSystem__IsConveyorFull (LoseSystem_o* __this, const MethodInfo* method); */

bool LoseSystem__IsConveyorFull_24df8b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4bc5f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c1a08);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c22d8);
    FUN_021f03f8(PTR_DAT_049c1ad0);
    FUN_021f03f8(PTR_DAT_049c1b98);
    FUN_021f03f8(PTR_DAT_049c1ba0);
    bRam0000000004f4bc5f = 1;
  }
  puVar8 = PTR_DAT_049c22d8;
  uStack_b0 = 0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  uStack_f0 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  if ((*(long *)(param_1 + 0x120) != 0) && (lVar17 = *(long *)(param_1 + 0xb0), lVar17 != 0)) {
    iVar10 = *(int *)(*(long *)(param_1 + 0x120) + 0x14);
    lStack_70 = 0;
    lStack_68 = 0;
    lStack_78 = (ulong)*(uint *)(lVar17 + 0x30) << 0x20;
    thunk_FUN_021f190c(&lStack_70,0);
    lStack_68 = *(long *)(lVar17 + 0x28);
    thunk_FUN_021f190c(&lStack_68);
    lStack_a8 = lStack_70;
    uStack_b0 = lStack_78;
    lStack_a0 = lStack_68;
    do {
      iVar11 = (int)uStack_b0 + -1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar11);
      if (iVar11 < 0) {
        uVar5 = uStack_b0._4_4_ - 1;
        uStack_b0 = CONCAT44(uVar5,iVar11);
        if ((int)uVar5 < 0) {
          lVar17 = *(long *)(param_1 + 0xb8);
          if (lVar17 == 0) break;
          lStack_70 = 0;
          lStack_68 = 0;
          lStack_78 = (ulong)*(uint *)(lVar17 + 0x30) << 0x20;
          thunk_FUN_021f190c(&lStack_70,0);
          lStack_68 = *(long *)(lVar17 + 0x28);
          thunk_FUN_021f190c(&lStack_68);
          puVar7 = PTR_DAT_049c1410;
          puVar6 = PTR_DAT_049b3b98;
          lStack_a8 = lStack_70;
          uStack_b0 = lStack_78;
          lStack_a0 = lStack_68;
          goto LAB_025dfac8;
        }
        lVar17 = *(long *)(lStack_a0 + (ulong)uVar5 * 8 + 0x20);
        lStack_a8 = *(long *)(lVar17 + 0x18);
        thunk_FUN_021f190c((ulong)&uStack_b0 | 8);
        iVar11 = *(int *)(lVar17 + 0x30) + -1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar11);
      }
      if (*(long *)(param_1 + 200) == 0) break;
      plVar12 = (long *)FUN_024f6008(*(long *)(param_1 + 200),
                                     *(undefined8 *)(lStack_a8 + (long)iVar11 * 8 + 0x20),
                                     *(undefined8 *)puVar8);
      if (*plVar12 == 0) break;
      if (*(char *)(*plVar12 + 0x1b0) != '\0') {
                    /* catch() { ... } // from try @ 025dfc14 with catch @ 025dffa4 */
                    /* catch() { ... } // from try @ 025dfd98 with catch @ 025dffa8 */
                    /* catch() { ... } // from try @ 025dfd68 with catch @ 025dffac */
                    /* catch() { ... } // from try @ 025dfc78 with catch @ 025dffb0 */
                    /* catch() { ... } // from try @ 025dff50 with catch @ 025dffb4 */
                    /* catch() { ... } // from try @ 025dfc30 with catch @ 025dffb8 */
                    /* catch() { ... } // from try @ 025dff48 with catch @ 025dffbc */
                    /* catch() { ... } // from try @ 025dfdc4 with catch @ 025dffc0 */
                    /* catch() { ... } // from try @ 025dfb8c with catch @ 025dffc4 */
        return false;
      }
    } while( true );
  }
LAB_025dfffc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
LAB_025dfac8:
  iVar11 = (int)uStack_b0 + -1;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar11);
  if (iVar11 < 0) {
    uVar5 = uStack_b0._4_4_ - 1;
    uStack_b0 = CONCAT44(uVar5,iVar11);
    if ((int)uVar5 < 0) {
                    /* catch() { ... } // from try @ 025dfe2c with catch @ 025dffc8 */
                    /* catch() { ... } // from try @ 025dfde0 with catch @ 025dffcc */
      if (*(long *)(param_1 + 0x80) != 0) {
                    /* catch() { ... } // from try @ 025dfd50 with catch @ 025dffd0 */
                    /* catch() { ... } // from try @ 025dfc60 with catch @ 025dffd4 */
        iVar10 = Conveyor__GetOccupiedSlotCount_24b0dfc(*(long *)(param_1 + 0x80),0);
                    /* catch() { ... } // from try @ 025dfc18 with catch @ 025dffd8 */
                    /* catch() { ... } // from try @ 025dfdc8 with catch @ 025dffdc */
        if (*(long *)(param_1 + 0x80) != 0) {
                    /* catch() { ... } // from try @ 025dff40 with catch @ 025dffe0 */
                    /* catch() { ... } // from try @ 025dff30 with catch @ 025dffe4 */
                    /* catch() { ... } // from try @ 025dfb74 with catch @ 025dffe8 */
                    /* catch() { ... } // from try @ 025dff18 with catch @ 025dffec */
          iVar11 = Conveyor__GetTotalSlotCount_24b0e24(*(long *)(param_1 + 0x80),0);
                    /* catch() { ... } // from try @ 025dfbe0 with catch @ 025dfff0
                       catch() { ... } // from try @ 025dff38 with catch @ 025dfff0 */
                    /* catch() { ... } // from try @ 025dfbc4 with catch @ 025dfff4
                       catch() { ... } // from try @ 025dff28 with catch @ 025dfff4 */
          return iVar11 <= iVar10;
                    /* catch() { ... } // from try @ 025dfb68 with catch @ 025dfff8
                       catch() { ... } // from try @ 025dff20 with catch @ 025dfff8 */
        }
      }
      goto LAB_025dfffc;
    }
    lVar17 = *(long *)(lStack_a0 + (ulong)uVar5 * 8 + 0x20);
    lStack_a8 = *(long *)(lVar17 + 0x18);
    thunk_FUN_021f190c((ulong)&uStack_b0 | 8);
    iVar11 = *(int *)(lVar17 + 0x30) + -1;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar11);
  }
  if (*(long *)(param_1 + 0xc0) == 0) goto LAB_025dfffc;
  plVar12 = (long *)FUN_024f6008(*(long *)(param_1 + 0xc0),
                                 *(undefined8 *)(lStack_a8 + (long)iVar11 * 8 + 0x20),
                                 *(undefined8 *)PTR_DAT_049c1ad0);
  lVar17 = *plVar12;
  if (lVar17 == 0) goto LAB_025dfffc;
  uVar13 = ConveyorSlot__IsElementBeingAdded_24b10ac(lVar17,0);
  if ((uVar13 & 1) != 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x120) == 0) goto LAB_025dfffc;
  if (*(char *)(*(long *)(param_1 + 0x120) + 0x10) == '\0') {
    if (*(long *)(lVar17 + 0xf8) == 0) goto LAB_025dfffc;
                    /* try { // try from 025dfb68 to 026dfb6f has its CatchHandler @ 025dfff8 */
                    /* try { // try from 025dfb74 to 026dfb7f has its CatchHandler @ 025dffe8 */
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(lVar17 + 0xf8),&uStack_108,*(undefined8 *)PTR_DAT_049c14f0);
    uStack_c0 = uStack_f8;
    puStack_c8 = puStack_100;
    uStack_d0 = uStack_108;
                    /* try { // try from 025dfb8c to 026dfb97 has its CatchHandler @ 025dffc4 */
    uStack_108 = 0;
    puStack_100 = &uStack_d0;
LAB_025dfb90:
    uVar13 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&uStack_d0,*(undefined8 *)PTR_DAT_049c14e0);
    if ((uVar13 & 1) != 0) {
      lVar18 = *(long *)PTR_DAT_049c14e8;
      lVar14 = *(long *)(lVar18 + 0x20);
      uVar4 = *(ushort *)(lVar14 + 0x135);
      lVar17 = lVar14;
      if ((uVar4 & 1) == 0) {
                    /* try { // try from 025dfbc4 to 026dfbcb has its CatchHandler @ 025dfff4 */
        lVar17 = FUN_02229718();
        lVar14 = *(long *)(lVar18 + 0x20);
        uVar4 = *(ushort *)(lVar14 + 0x135);
      }
                    /* try { // try from 025dfbe0 to 026dfbeb has its CatchHandler @ 025dfff0 */
      uVar3 = *(undefined4 *)(*(long *)(*(long *)(lVar17 + 0xc0) + 0x10) + 0xfc);
      if ((uVar4 & 1) == 0) {
        lVar14 = FUN_02229718();
      }
      uVar15 = thunk_FUN_0224e54c(&uStack_d0,
                                  *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60);
                    /* try { // try from 025dfc14 to 026dfc17 has its CatchHandler @ 025dffa4 */
                    /* try { // try from 025dfc18 to 026dfc27 has its CatchHandler @ 025dffd8 */
      func_0x04608620(&lStack_98,uVar15,uVar3);
      lVar17 = lStack_98;
      lVar14 = *(long *)(param_1 + 0xb0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lStack_88 = 0;
                    /* try { // try from 025dfc30 to 026dfc3b has its CatchHandler @ 025dffb8 */
      lStack_80 = 0;
      lStack_90 = (ulong)*(uint *)(lVar14 + 0x30) << 0x20;
      thunk_FUN_021f190c(&lStack_88,0);
      lStack_80 = *(long *)(lVar14 + 0x28);
      thunk_FUN_021f190c(&lStack_80);
                    /* try { // try from 025dfc5c to 026dfc5f has its CatchHandler @ 025dffa0 */
      lStack_e8 = lStack_88;
      uStack_f0 = lStack_90;
                    /* try { // try from 025dfc60 to 026dfc6f has its CatchHandler @ 025dffd4 */
      lStack_e0 = lStack_80;
      do {
        iVar11 = (int)uStack_f0 + -1;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar11);
        if (iVar11 < 0) {
                    /* try { // try from 025dfc78 to 026dfc83 has its CatchHandler @ 025dffb0 */
          uVar5 = uStack_f0._4_4_ - 1;
          uStack_f0 = CONCAT44(uVar5,iVar11);
          if ((int)uVar5 < 0) {
            lVar14 = 0;
            break;
          }
          lVar14 = *(long *)(lStack_e0 + (ulong)uVar5 * 8 + 0x20);
          lStack_e8 = *(long *)(lVar14 + 0x18);
          thunk_FUN_021f190c(&lStack_e8);
                    /* try { // try from 025dfca0 to 026dfcab has its CatchHandler @ 025dff80 */
          iVar11 = *(int *)(lVar14 + 0x30) + -1;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar11);
        }
        if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        plVar12 = (long *)FUN_024f6008(*(long *)(param_1 + 200),
                                       *(undefined8 *)(lStack_e8 + (long)iVar11 * 8 + 0x20),
                                       *(undefined8 *)puVar8);
        lVar14 = *plVar12;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 025dfcd4 to 026dfcdf has its CatchHandler @ 025dff98 */
        uVar13 = Carrier__IsBetterCarrier_2409a44(lVar14,lVar17,0);
      } while ((uVar13 & 1) == 0);
                    /* try { // try from 025dfcec to 026dfcf7 has its CatchHandler @ 025dff78 */
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar13 = UnityEngine_Object__op_Inequality_3c1b96c(lVar14,0,0);
      if ((uVar13 & 1) == 0) {
        lVar14 = *(long *)(param_1 + 0xb0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 025dfd2c to 026dfd37 has its CatchHandler @ 025dff8c */
        lStack_70 = 0;
        lStack_68 = 0;
        lStack_78 = (ulong)*(uint *)(lVar14 + 0x30) << 0x20;
        thunk_FUN_021f190c(&lStack_70,0);
        lStack_68 = *(long *)(lVar14 + 0x28);
                    /* try { // try from 025dfd4c to 026dfd4f has its CatchHandler @ 025dff90 */
                    /* try { // try from 025dfd50 to 026dfd63 has its CatchHandler @ 025dffd0 */
        thunk_FUN_021f190c(&lStack_68);
        lStack_e8 = lStack_70;
        uStack_f0 = lStack_78;
        lStack_e0 = lStack_68;
LAB_025dfd68:
                    /* try { // try from 025dfd68 to 026dfd73 has its CatchHandler @ 025dffac */
        iVar11 = (int)uStack_f0 + -1;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar11);
        if (iVar11 < 0) {
          uVar5 = uStack_f0._4_4_ - 1;
          uStack_f0 = CONCAT44(uVar5,iVar11);
          if ((int)uVar5 < 0) goto LAB_025dfb90;
          lVar14 = *(long *)(lStack_e0 + (ulong)uVar5 * 8 + 0x20);
                    /* try { // try from 025dfd94 to 026dfd97 has its CatchHandler @ 025dff7c */
          lStack_e8 = *(long *)(lVar14 + 0x18);
                    /* try { // try from 025dfd98 to 026dfda7 has its CatchHandler @ 025dffa8 */
          thunk_FUN_021f190c(&lStack_e8);
          iVar11 = *(int *)(lVar14 + 0x30) + -1;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar11);
        }
        if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 025dfdc4 to 026dfdc7 has its CatchHandler @ 025dffc0 */
                    /* try { // try from 025dfdc8 to 026dfdd7 has its CatchHandler @ 025dffdc */
        puVar16 = (undefined8 *)
                  FUN_024f6008(*(long *)(param_1 + 200),
                               *(undefined8 *)(lStack_e8 + (long)iVar11 * 8 + 0x20),
                               *(undefined8 *)puVar8);
        uVar15 = *puVar16;
        uVar13 = LoseSystem__CanTransferBlockTo_24e0824(puVar16,uVar15,lVar17);
        if ((uVar13 & 1) != 0) {
                    /* try { // try from 025dfde0 to 026dfdeb has its CatchHandler @ 025dffcc */
          lVar14 = *(long *)(param_1 + 0xd0);
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
                    /* try { // try from 025dfdfc to 026dfe07 has its CatchHandler @ 025dff88 */
          uVar13 = FUN_024f5708(lVar14,*(undefined8 *)(lVar17 + 0x60),
                                *(undefined8 *)PTR_DAT_049c1ba0);
          if ((uVar13 & 1) == 0) goto LAB_025dff90;
          lVar14 = *(long *)(param_1 + 0xd0);
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            FUN_021f0574();
          }
                    /* try { // try from 025dfe2c to 026dfe37 has its CatchHandler @ 025dffc8 */
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
                    /* try { // try from 025dfe38 to 026dfeff has its CatchHandler @ 025df8a8 */
          puVar16 = (undefined8 *)
                    FUN_024f6008(lVar14,*(undefined8 *)(lVar17 + 0x60),
                                 *(undefined8 *)PTR_DAT_049c1b98);
          lVar14 = *(long *)puVar6;
          uVar1 = *puVar16;
          uVar2 = puVar16[1];
          if (*(int *)(lVar14 + 0xe4) == 0) {
            FUN_021f0574(lVar14);
          }
          bVar9 = UnityEngine_Object__op_Equality_3c1eeb4(uVar1,uVar15,0);
          if ((bVar9 & iVar10 <= (int)uVar2) == 0) goto LAB_025dff90;
        }
        goto LAB_025dfd68;
      }
      uVar13 = LoseSystem__CanTransferBlockTo_24e0824(uVar13,lVar14,lVar17);
                    /* try { // try from 025dfd1c to 026dfd2b has its CatchHandler @ 025dff94 */
      if ((uVar13 & 1) != 0) {
LAB_025dff90:
                    /* catch() { ... } // from try @ 025dfd4c with catch @ 025dff90 */
                    /* catch() { ... } // from try @ 025dfd1c with catch @ 025dff94 */
                    /* catch() { ... } // from try @ 025dfcd4 with catch @ 025dff98 */
                    /* catch() { ... } // from try @ 025dff58 with catch @ 025dff9c */
                    /* catch() { ... } // from try @ 025dfc5c with catch @ 025dffa0 */
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_d0,*(undefined8 *)PTR_DAT_049c14d8);
        return false;
      }
      goto LAB_025dfb90;
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_d0,*(undefined8 *)PTR_DAT_049c14d8);
  }
  goto LAB_025dfac8;
}

