/* IL2CPP: CloudSaveModule$$SyncCloudPrefs
void CloudSaveModule__SyncCloudPrefs (CloudSaveModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025edf38) */
/* IL2CPP: CloudSaveModule$$SyncCloudPrefs
   void CloudSaveModule__SyncCloudPrefs (CloudSaveModule_o* __this, const MethodInfo* method); */

void CloudSaveModule__SyncCloudPrefs_24eda5c(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined4 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined1 auStack_78 [16];
  long *plStack_68;
  
                    /* try { // try from 025eda5c to 026eda63 has its CatchHandler @ 025edb68 */
                    /* try { // try from 025eda7c to 026edac7 has its CatchHandler @ 025edb6c */
  if ((bRam0000000004f4bce6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f20);
    FUN_021f03f8(PTR_DAT_049c8020);
    FUN_021f03f8(PTR_DAT_049c8028);
    FUN_021f03f8(PTR_DAT_049c8030);
    FUN_021f03f8(PTR_DAT_049c8070);
                    /* try { // try from 025edac8 to 026edadb has its CatchHandler @ 025ed980 */
    FUN_021f03f8(PTR_DAT_049c7f38);
    FUN_021f03f8(PTR_DAT_049c8008);
                    /* try { // try from 025edadc to 026edae7 has its CatchHandler @ 025edb60 */
    FUN_021f03f8(PTR_DAT_049c8040);
                    /* try { // try from 025edaec to 026edaf3 has its CatchHandler @ 025edb64 */
    FUN_021f03f8(PTR_DAT_049c8048);
                    /* try { // try from 025edaf4 to 026edb4b has its CatchHandler @ 025ed980 */
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bce6 = 1;
  }
  puVar5 = PTR_DAT_049c8008;
  plVar16 = *(long **)(param_1 + 0x10);
  auStack_78._0_8_ = 0;
  auStack_78._8_8_ = 0;
  lStack_80 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar13 = *plVar16;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
                    /* try { // try from 025edb4c to 026edb4f has its CatchHandler @ 025edb5c */
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049c8008) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025eda7c with catch @ 025edb6c
                        */
        puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_025edb78;
      }
                    /* try { // try from 025edb50 to 026edb53 has its CatchHandler @ 025edb58 */
      uVar14 = uVar14 - 1;
                    /* try { // try from 025edb54 to 026edb87 has its CatchHandler @ 025ed980 */
      piVar15 = piVar15 + 4;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025edb50 with catch @ 025edb58
                        */
    } while (uVar14 != 0);
  }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025edb4c with catch @ 025edb5c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025edadc with catch @ 025edb60
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025edaec with catch @ 025edb64
                        */
  puVar9 = (undefined8 *)FUN_02229a4c(plVar16,*(long *)PTR_DAT_049c8008,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025eda5c with catch @ 025edb68
                        */
LAB_025edb78:
  lVar13 = (*(code *)*puVar9)(plVar16,puVar9[1]);
  puVar4 = PTR_DAT_049c7f20;
  puVar3 = PTR_DAT_049b5310;
  if (lVar13 != 0) {
                    /* try { // try from 025edb88 to 026edb8b has its CatchHandler @ 025edba4 */
                    /* try { // try from 025edb8c to 026edba7 has its CatchHandler @ 025ed980 */
    lVar13 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar13 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 025edb88 with catch @ 025edba4 */
      FUN_021f0574();
                    /* try { // try from 025edba8 to 026edbaf has its CatchHandler @ 025edbb8 */
      lVar13 = *(long *)puVar3;
    }
                    /* try { // try from 025edbb0 to 026edbbb has its CatchHandler @ 025ed980 */
    uVar14 = CloudPrefsBool__get_Value_24eb0d0(*(long *)(lVar13 + 0xb8) + 400);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025edba8 with catch @ 025edbb8
                        */
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar4);
    }
    auStack_78 = CloudPrefsRegistry__GetAllPrefs_24e96d4(&lStack_80);
    puStack_c0 = auStack_78;
    lStack_c8 = 0;
    if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lStack_80,&lStack_e0,*(undefined8 *)PTR_DAT_049c8040);
    puVar8 = PTR_DAT_049c8030;
    puVar7 = PTR_DAT_049c8028;
    puVar6 = PTR_DAT_049c8020;
    puVar4 = PTR_DAT_049c7f38;
    uStack_98 = plStack_d8;
    lStack_a0 = lStack_e0;
    uStack_90 = uStack_d0;
    plStack_d8 = &lStack_a0;
    lStack_e0 = 0;
    while( true ) {
      uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&lStack_a0,*(undefined8 *)puVar7);
      if ((uVar10 & 1) == 0) break;
      lVar17 = *(long *)puVar8;
      lVar11 = *(long *)(lVar17 + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
      lVar13 = lVar11;
      if ((uVar2 & 1) == 0) {
        lVar13 = FUN_02229718();
        lVar11 = *(long *)(lVar17 + 0x20);
        uVar2 = *(ushort *)(lVar11 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      uVar12 = thunk_FUN_0224e54c(&lStack_a0,
                                  *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&plStack_68,uVar12,uVar1);
      plVar16 = plStack_68;
      plVar18 = *(long **)(param_1 + 0x10);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar13 = *plVar18;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_025edd18;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_02229a4c(plVar18,*(long *)puVar5,0);
LAB_025edd18:
      uVar12 = (*(code *)*puVar9)(plVar18,puVar9[1]);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar13 = *plVar16;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_025edd7c;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_02229a4c(plVar16,*(long *)puVar4,2);
LAB_025edd7c:
      (*(code *)*puVar9)(plVar16,uVar12,puVar9[1]);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (plStack_d8,*(undefined8 *)puVar6);
    if (lStack_e0 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0698();
    }
    CloudSaveModule__RecordBaseline_24ee31c(param_1);
    if ((uVar14 & 1) == 0) {
      lVar13 = *(long *)puVar3;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        FUN_021f0574();
        lVar13 = *(long *)puVar3;
      }
      uVar14 = CloudPrefsBool__get_Value_24eb0d0(*(long *)(lVar13 + 0xb8) + 400);
      if ((uVar14 & 1) != 0) {
        plVar16 = *(long **)(param_1 + 0x18);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049c8070) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_025edfc8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_02229a4c(plVar16,*(long *)PTR_DAT_049c8070,0);
LAB_025edfc8:
        (*(code *)*puVar9)(plVar16,puVar9[1]);
      }
    }
    lVar13 = lStack_c8;
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (puStack_c0,*(undefined8 *)PTR_DAT_049c8048);
    if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0698(lVar13);
    }
  }
  return;
}

