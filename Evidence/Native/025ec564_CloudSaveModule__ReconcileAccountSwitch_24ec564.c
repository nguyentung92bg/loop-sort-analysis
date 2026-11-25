/* IL2CPP: CloudSaveModule$$ReconcileAccountSwitch
void CloudSaveModule__ReconcileAccountSwitch (CloudSaveModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025eca68) */
/* IL2CPP: CloudSaveModule$$ReconcileAccountSwitch
   void CloudSaveModule__ReconcileAccountSwitch (CloudSaveModule_o* __this, const MethodInfo*
   method); */

void CloudSaveModule__ReconcileAccountSwitch_24ec564(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  long *plVar17;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_50;
  undefined1 auStack_48 [16];
  long *plStack_38;
  
  if ((bRam0000000004f4bcdf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f20);
    FUN_021f03f8(PTR_DAT_049c8018);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c8020);
    FUN_021f03f8(PTR_DAT_049c8028);
    FUN_021f03f8(PTR_DAT_049c8030);
    FUN_021f03f8(PTR_DAT_049c7f38);
    FUN_021f03f8(PTR_DAT_049c8008);
    FUN_021f03f8(PTR_DAT_049c7f28);
    FUN_021f03f8(PTR_DAT_049c8038);
    FUN_021f03f8(PTR_DAT_049c8040);
    FUN_021f03f8(PTR_DAT_049c5120);
    FUN_021f03f8(PTR_DAT_049c8048);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c8050);
    bRam0000000004f4bcdf = 1;
  }
  puVar3 = PTR_DAT_049b5310;
  plVar17 = *(long **)(param_1 + 0x10);
  auStack_48._0_8_ = 0;
  auStack_48._8_8_ = 0;
  lStack_50 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  if (plVar17 != (long *)0x0) {
    lVar13 = *plVar17;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049c8008) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_025ec6b8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)PTR_DAT_049c8008,3);
LAB_025ec6b8:
    puVar4 = PTR_DAT_049c5120;
    uVar10 = (*(code *)*puVar9)(plVar17,puVar9[1]);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar3);
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar11 = PlayerPrefsString__get_Value_3f0e288(*(long *)(*(long *)puVar3 + 0xb8) + 0x988,0);
    uVar14 = System_String__IsNullOrEmpty_2f7c924(uVar10,0);
    if ((((uVar14 & 1) == 0) &&
        (uVar14 = System_String__IsNullOrEmpty_2f7c924(uVar11,0), (uVar14 & 1) == 0)) &&
       (uVar14 = System_String__op_Equality_2f7b7fc(uVar10,uVar11,0), (uVar14 & 1) == 0)) {
      plVar17 = *(long **)(param_1 + 0x20);
      if (plVar17 == (long *)0x0) goto LAB_025eca58;
      lVar13 = *plVar17;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049c8038) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_025ec79c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)PTR_DAT_049c8038,0);
LAB_025ec79c:
      (*(code *)*puVar9)(plVar17,0,puVar9[1]);
      lVar13 = *(long *)puVar3;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        FUN_021f0574();
        lVar13 = *(long *)puVar3;
      }
      iVar7 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar13 + 0xb8) + 0x60);
      iVar8 = CloudSaveModule__StoreLevel_24ecb08(param_1);
      puVar3 = PTR_DAT_049c8018;
      if (iVar7 <= iVar8) {
        lVar13 = *(long *)PTR_DAT_049c8018;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          FUN_021f0574();
          lVar13 = *(long *)puVar3;
        }
        uVar10 = System_String__Concat_2f72b28
                           (**(undefined8 **)(lVar13 + 0xb8),*(undefined8 *)PTR_DAT_049c8050,0);
        if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
          FUN_021f0574(*(long *)PTR_DAT_049b3c58);
        }
        UnityEngine_Debug__Log_3bd0be4(uVar10,0);
        if (*(int *)(*(long *)PTR_DAT_049c7f20 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auStack_48 = CloudPrefsRegistry__GetAllPrefs_24e96d4(&lStack_50);
        puStack_78 = auStack_48;
        lStack_80 = 0;
        if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 025ec88c to 026ec97f has its CatchHandler @ 025ec88c
                       catch() { ... } // from try @ 025ec88c with catch @ 025ec88c
                       catch() { ... } // from try @ 025ec9ec with catch @ 025ec88c
                       catch() { ... } // from try @ 025eca58 with catch @ 025ec88c
                       catch() { ... } // from try @ 025ecaf0 with catch @ 025ec88c
                       catch() { ... } // from try @ 025ecb24 with catch @ 025ec88c
                       catch() { ... } // from try @ 025ecb48 with catch @ 025ec88c */
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (lStack_50,&uStack_98,*(undefined8 *)PTR_DAT_049c8040);
        puVar6 = PTR_DAT_049c8030;
        puVar5 = PTR_DAT_049c8028;
        puVar4 = PTR_DAT_049c7f38;
        puVar3 = PTR_DAT_049c7f28;
        uStack_68 = puStack_90;
        uStack_70 = uStack_98;
        uStack_60 = uStack_88;
        puStack_90 = &uStack_70;
        uStack_98 = 0;
        while( true ) {
          uVar14 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_70,*(undefined8 *)puVar5);
          if ((uVar14 & 1) == 0) break;
          lVar16 = *(long *)puVar6;
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
          uVar10 = thunk_FUN_0224e54c(&uStack_70,
                                      *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&plStack_38,uVar10,uVar1);
          plVar17 = plStack_38;
          if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar13 = *plStack_38;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_025ec998;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
                    /* try { // try from 025ec980 to 026ec987 has its CatchHandler @ 025ecb04 */
          puVar9 = (undefined8 *)FUN_02229a4c(plStack_38,*(long *)puVar4,0);
LAB_025ec998:
                    /* try { // try from 025ec9a0 to 026ec9eb has its CatchHandler @ 025ecb0c */
          uVar14 = (*(code *)*puVar9)(plVar17,puVar9[1]);
          if ((uVar14 & 1) == 0) {
            lVar13 = *plVar17;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                    /* try { // try from 025ec9ec to 026eca0f has its CatchHandler @ 025ec88c */
                  puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                  goto LAB_025ec9f8;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar9 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)puVar3,2);
LAB_025ec9f8:
            (*(code *)*puVar9)(plVar17,puVar9[1]);
          }
        }
                    /* try { // try from 025eca10 to 026eca13 has its CatchHandler @ 025ecaf4 */
                    /* try { // try from 025eca14 to 026eca23 has its CatchHandler @ 025ecb00 */
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_70,*(undefined8 *)PTR_DAT_049c8020);
        lVar13 = lStack_80;
                    /* try { // try from 025eca30 to 026eca57 has its CatchHandler @ 025ecb08 */
        UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                  (puStack_78,*(undefined8 *)PTR_DAT_049c8048);
        if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0698(lVar13);
        }
      }
    }
    return;
  }
LAB_025eca58:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025eca58 to 026ecae7 has its CatchHandler @ 025ec88c */
  FUN_021f06a0();
}

