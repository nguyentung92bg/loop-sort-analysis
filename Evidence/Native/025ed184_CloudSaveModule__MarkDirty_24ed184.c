/* IL2CPP: CloudSaveModule$$MarkDirty
void CloudSaveModule__MarkDirty (CloudSaveModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule$$MarkDirty
   void CloudSaveModule__MarkDirty (CloudSaveModule_o* __this, const MethodInfo* method); */

void CloudSaveModule__MarkDirty_24ed184(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined4 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined1 auStack_78 [16];
  long *plStack_68;
  
  if ((bRam0000000004f4bce3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f20);
    FUN_021f03f8(PTR_DAT_049c8018);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c8020);
    FUN_021f03f8(PTR_DAT_049c8028);
    FUN_021f03f8(PTR_DAT_049c8030);
                    /* try { // try from 025ed200 to 026ed207 has its CatchHandler @ 025ed5c4 */
    FUN_021f03f8(PTR_DAT_049c3da0);
    FUN_021f03f8(PTR_DAT_049c7f38);
    FUN_021f03f8(PTR_DAT_049c8008);
                    /* try { // try from 025ed220 to 026ed26b has its CatchHandler @ 025ed620 */
    FUN_021f03f8(PTR_DAT_049c8040);
    FUN_021f03f8(PTR_DAT_049c5120);
    FUN_021f03f8(PTR_DAT_049c8048);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c8060);
    bRam0000000004f4bce3 = 1;
  }
  puVar2 = PTR_DAT_049c8008;
  plVar17 = *(long **)(param_1 + 0x10);
  auStack_78._0_8_ = 0;
  auStack_78._8_8_ = 0;
  lStack_80 = 0;
                    /* try { // try from 025ed26c to 026ed2b7 has its CatchHandler @ 025ed078 */
  lStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar14 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049c8008) {
        puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_025ed2d0;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
                    /* try { // try from 025ed2b8 to 026ed2e7 has its CatchHandler @ 025ed5c8 */
  puVar10 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)PTR_DAT_049c8008,0);
LAB_025ed2d0:
  lVar14 = (*(code *)*puVar10)(plVar17,puVar10[1]);
  if (lVar14 != 0) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      *(undefined1 *)(param_1 + 0x29) = 0;
      iVar7 = CloudSaveModule__StoreLevel_24ecb08(param_1);
      puVar3 = PTR_DAT_049b5310;
      lVar14 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        FUN_021f0574(lVar14);
        lVar14 = *(long *)puVar3;
      }
      iVar8 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar14 + 0xb8) + 0x60);
      puVar4 = PTR_DAT_049c8018;
      if (iVar8 < iVar7) {
        lVar14 = *(long *)PTR_DAT_049c8018;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          FUN_021f0574();
          lVar14 = *(long *)puVar4;
        }
        uVar18 = **(undefined8 **)(lVar14 + 0xb8);
        uVar9 = CloudSaveModule__StoreLevel_24ecb08(param_1);
        puVar2 = PTR_DAT_049b3bd0;
        lStack_d8 = CONCAT44(lStack_d8._4_4_,uVar9);
        uVar11 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&lStack_d8);
        lVar14 = *(long *)puVar3;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          FUN_021f0574(lVar14);
          lVar14 = *(long *)puVar3;
        }
        uVar9 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar14 + 0xb8) + 0x60);
        lStack_c0 = CONCAT44(lStack_c0._4_4_,uVar9);
        uVar12 = thunk_FUN_0222c66c(*(undefined8 *)(puVar2 + 0x48),&lStack_c0);
                    /* try { // try from 025ed3bc to 026ed3c3 has its CatchHandler @ 025ed5c0 */
                    /* try { // try from 025ed3dc to 026ed427 has its CatchHandler @ 025ed5d8 */
        uVar11 = System_String__Format_2f7dff0
                           (*(undefined8 *)PTR_DAT_049c8060,uVar18,uVar11,uVar12,0);
        if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
          FUN_021f0574(*(long *)PTR_DAT_049b3c58);
        }
        UnityEngine_Debug__LogWarning_3bcf90c(uVar11,0);
        CloudSaveModule__SyncCloudPrefs_24eda5c(param_1);
      }
      else {
                    /* try { // try from 025ed428 to 026ed43b has its CatchHandler @ 025ed078 */
        if (*(int *)(*(long *)PTR_DAT_049c7f20 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auStack_78 = CloudPrefsRegistry__GetAllPrefs_24e96d4(&lStack_80);
                    /* try { // try from 025ed43c to 026ed447 has its CatchHandler @ 025ed5b8 */
        puStack_b8 = auStack_78;
        lStack_c0 = 0;
        if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 025ed450 to 026ed45f has its CatchHandler @ 025ed5d4 */
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (lStack_80,&lStack_d8,*(undefined8 *)PTR_DAT_049c8040);
        puVar6 = PTR_DAT_049c8030;
        puVar5 = PTR_DAT_049c8028;
        puVar4 = PTR_DAT_049c7f38;
                    /* try { // try from 025ed46c to 026ed473 has its CatchHandler @ 025ed5b4 */
                    /* try { // try from 025ed478 to 026ed483 has its CatchHandler @ 025ed590 */
        uStack_98 = plStack_d0;
        lStack_a0 = lStack_d8;
                    /* try { // try from 025ed48c to 026ed497 has its CatchHandler @ 025ed594 */
        uStack_90 = uStack_c8;
        plStack_d0 = &lStack_a0;
                    /* try { // try from 025ed4a0 to 026ed4bb has its CatchHandler @ 025ed5cc */
        lStack_d8 = 0;
        while( true ) {
          uVar15 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&lStack_a0,*(undefined8 *)puVar5);
          if ((uVar15 & 1) == 0) break;
          lVar19 = *(long *)puVar6;
                    /* try { // try from 025ed4bc to 026ed4e3 has its CatchHandler @ 025ed5d0 */
          lVar13 = *(long *)(lVar19 + 0x20);
          uVar1 = *(ushort *)(lVar13 + 0x135);
          lVar14 = lVar13;
          if ((uVar1 & 1) == 0) {
            lVar14 = FUN_02229718();
            lVar13 = *(long *)(lVar19 + 0x20);
            uVar1 = *(ushort *)(lVar13 + 0x135);
          }
                    /* try { // try from 025ed4f0 to 026ed573 has its CatchHandler @ 025ed078 */
          uVar9 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
          if ((uVar1 & 1) == 0) {
            lVar13 = FUN_02229718();
          }
          uVar11 = thunk_FUN_0224e54c(&lStack_a0,
                                      *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&plStack_68,uVar11,uVar9);
          plVar17 = plStack_68;
          plVar20 = *(long **)(param_1 + 0x10);
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar14 = *plVar20;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                    /* try { // try from 025ed574 to 026ed577 has its CatchHandler @ 025ed5bc */
                    /* try { // try from 025ed578 to 026ed57b has its CatchHandler @ 025ed5b0 */
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_025ed57c;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_02229a4c(plVar20,*(long *)puVar2,0);
LAB_025ed57c:
                    /* try { // try from 025ed57c to 026ed57f has its CatchHandler @ 025ed59c */
                    /* try { // try from 025ed580 to 026ed583 has its CatchHandler @ 025ed598 */
                    /* try { // try from 025ed584 to 026ed587 has its CatchHandler @ 025ed5a0 */
          uVar11 = (*(code *)*puVar10)(plVar20,puVar10[1]);
                    /* try { // try from 025ed588 to 026ed5eb has its CatchHandler @ 025ed078 */
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
                    /* catch() { ... } // from try @ 025ed4e4 with catch @ 025ed58c */
          lVar14 = *plVar17;
                    /* catch() { ... } // from try @ 025ed478 with catch @ 025ed590 */
                    /* catch() { ... } // from try @ 025ed48c with catch @ 025ed594 */
                    /* catch() { ... } // from try @ 025ed580 with catch @ 025ed598 */
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    /* catch() { ... } // from try @ 025ed57c with catch @ 025ed59c */
          if (uVar15 != 0) {
                    /* catch() { ... } // from try @ 025ed584 with catch @ 025ed5a0 */
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
                    /* catch() { ... } // from try @ 025ed578 with catch @ 025ed5b0 */
              if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                    /* catch() { ... } // from try @ 025ed4bc with catch @ 025ed5d0 */
                    /* catch() { ... } // from try @ 025ed450 with catch @ 025ed5d4 */
                    /* catch() { ... } // from try @ 025ed3dc with catch @ 025ed5d8 */
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_025ed5e0;
              }
                    /* catch() { ... } // from try @ 025ed46c with catch @ 025ed5b4 */
              uVar15 = uVar15 - 1;
                    /* catch() { ... } // from try @ 025ed43c with catch @ 025ed5b8 */
              piVar16 = piVar16 + 4;
                    /* catch() { ... } // from try @ 025ed574 with catch @ 025ed5bc */
            } while (uVar15 != 0);
          }
                    /* catch() { ... } // from try @ 025ed3bc with catch @ 025ed5c0 */
                    /* catch() { ... } // from try @ 025ed200 with catch @ 025ed5c4 */
                    /* catch() { ... } // from try @ 025ed2b8 with catch @ 025ed5c8 */
          puVar10 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)puVar4,1);
                    /* catch() { ... } // from try @ 025ed4a0 with catch @ 025ed5cc */
LAB_025ed5e0:
                    /* try { // try from 025ed5ec to 026ed5ef has its CatchHandler @ 025ed610 */
          (*(code *)*puVar10)(plVar17,uVar11,puVar10[1]);
                    /* try { // try from 025ed5f0 to 026ed613 has its CatchHandler @ 025ed078 */
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (plStack_d0,*(undefined8 *)PTR_DAT_049c8020);
        if (lStack_d8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0698();
        }
        plVar17 = *(long **)(param_1 + 0x10);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar14 = *plVar17;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_025ed890;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)puVar2,0);
LAB_025ed890:
        plVar17 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (*(int *)(*(long *)PTR_DAT_049c5120 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar14 = *plVar17;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x620);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049c3da0) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_025ed930;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)PTR_DAT_049c3da0,1);
LAB_025ed930:
        (*(code *)*puVar10)(plVar17,uVar11,puVar10[1]);
        plVar17 = *(long **)(param_1 + 0x10);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar14 = *plVar17;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 10) * 0x10 + 0x138);
              goto LAB_025ed998;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
                    /* try { // try from 025ed980 to 026eda5b has its CatchHandler @ 025ed980
                       catch() { ... } // from try @ 025ed980 with catch @ 025ed980
                       catch() { ... } // from try @ 025edac8 with catch @ 025ed980
                       catch() { ... } // from try @ 025edaf4 with catch @ 025ed980
                       catch() { ... } // from try @ 025edb54 with catch @ 025ed980
                       catch() { ... } // from try @ 025edb8c with catch @ 025ed980
                       catch() { ... } // from try @ 025edbb0 with catch @ 025ed980 */
        puVar10 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)puVar2,10);
LAB_025ed998:
        (*(code *)*puVar10)(plVar17,puVar10[1]);
        lVar14 = lStack_c0;
        UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                  (puStack_b8,*(undefined8 *)PTR_DAT_049c8048);
        if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0698(lVar14);
        }
      }
    }
    else {
                    /* try { // try from 025ed2e8 to 026ed3bb has its CatchHandler @ 025ed078 */
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
  }
  return;
}

