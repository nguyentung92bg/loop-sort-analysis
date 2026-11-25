/* IL2CPP: WeeklyMissionSheet$$GetTotalRequiredBlockCount
int32_t WeeklyMissionSheet__GetTotalRequiredBlockCount (WeeklyMissionSheet_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0266956c) */
/* WARNING: Removing unreachable block (ram,0x02669640) */
/* IL2CPP: WeeklyMissionSheet$$GetTotalRequiredBlockCount
   int32_t WeeklyMissionSheet__GetTotalRequiredBlockCount (WeeklyMissionSheet_o* __this, const
   MethodInfo* method); */

int WeeklyMissionSheet__GetTotalRequiredBlockCount_2569150(long param_1)

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
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long **pplStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_70;
  undefined1 auStack_68 [8];
  
  if ((bRam0000000004f4c184 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbd90);
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049c9c08);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049c9c10);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049c9c18);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049cbd98);
    FUN_021f03f8(PTR_DAT_049cbda0);
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049c9c20);
    FUN_021f03f8(PTR_DAT_049c9c28);
    bRam0000000004f4c184 = 1;
  }
  plVar17 = *(long **)(param_1 + 0x10);
  plStack_70 = (long *)0x0;
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  uStack_80 = 0;
  lStack_b0 = 0;
  plStack_a8 = (long *)0x0;
  uStack_a0 = 0;
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar13 = *plVar17;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049cbd98) {
        puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0266929c;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar10 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)PTR_DAT_049cbd98,0);
LAB_0266929c:
  plStack_70 = (long *)(*(code *)*puVar10)(plVar17,puVar10[1]);
  puVar9 = PTR_DAT_049c9c18;
  puVar8 = PTR_DAT_049c9c10;
  puVar7 = PTR_DAT_049b6370;
  puVar6 = PTR_DAT_049b6350;
  puVar5 = PTR_DAT_049b6348;
  puVar4 = PTR_DAT_049b6330;
  puVar3 = PTR_DAT_049b4360;
  pplStack_b8 = &plStack_70;
  lStack_c0 = 0;
  if (plStack_70 != (long *)0x0) {
    iVar16 = 0;
    do {
      plVar17 = plStack_70;
      lVar13 = *plStack_70;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0266934c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_02229a4c(plStack_70,*(long *)puVar3,0);
LAB_0266934c:
      uVar14 = (*(code *)*puVar10)(plVar17,puVar10[1]);
      plVar17 = plStack_70;
      if ((uVar14 & 1) == 0) {
        plVar17 = *pplStack_b8;
        if (plVar17 == (long *)0x0) goto LAB_026696f0;
        lVar13 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 == 0) goto LAB_026696c8;
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_026696b0;
      }
      if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar13 = *plStack_70;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049cbda0) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_026693b8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_02229a4c(plStack_70,*(long *)PTR_DAT_049cbda0,0);
LAB_026693b8:
      lVar13 = (*(code *)*puVar10)(plVar17,puVar10[1]);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar17 = (long *)thunk_FUN_0224e54c(lVar13,*(undefined8 *)
                                                   (**(long **)(*(long *)(*(long *)PTR_DAT_049c9c28
                                                                         + 0x20) + 0xc0) + 0x80));
      if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*plVar17,&lStack_d8,*(undefined8 *)PTR_DAT_049c9c20);
      plStack_88 = plStack_d0;
      lStack_90 = lStack_d8;
      uStack_80 = uStack_c8;
      while (uVar14 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (&lStack_90,*(undefined8 *)puVar8), (uVar14 & 1) != 0) {
        lVar18 = *(long *)puVar9;
        lVar11 = *(long *)(lVar18 + 0x20);
        uVar2 = *(ushort *)(lVar11 + 0x135);
        lVar13 = lVar11;
        if ((uVar2 & 1) == 0) {
          lVar13 = FUN_02229718();
          lVar11 = *(long *)(lVar18 + 0x20);
          uVar2 = *(ushort *)(lVar11 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar11 = FUN_02229718();
        }
        uVar12 = thunk_FUN_0224e54c(&lStack_90,
                                    *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&lStack_d8,uVar12,uVar1);
        if (lStack_d8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(long *)(lStack_d8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(lStack_d8 + 0x30),&lStack_d8,*(undefined8 *)puVar7);
        lStack_b0 = lStack_d8;
        lStack_d8 = 0;
        plStack_a8 = plStack_d0;
        uStack_a0 = uStack_c8;
        plStack_d0 = &lStack_b0;
        while (uVar14 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                  (&lStack_b0,*(undefined8 *)puVar5), (uVar14 & 1) != 0) {
          lVar18 = *(long *)puVar6;
          lVar11 = *(long *)(lVar18 + 0x20);
          uVar2 = *(ushort *)(lVar11 + 0x135);
          lVar13 = lVar11;
          if ((uVar2 & 1) == 0) {
            lVar13 = FUN_02229718();
            lVar11 = *(long *)(lVar18 + 0x20);
            uVar2 = *(ushort *)(lVar11 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar11 = FUN_02229718();
          }
          uVar12 = thunk_FUN_0224e54c(&lStack_b0,
                                      *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(auStack_68,uVar12,uVar1);
          if (auStack_68._0_4_ == 0x1e) {
            iVar16 = iVar16 + auStack_68._4_4_;
          }
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&lStack_b0,*(undefined8 *)puVar4);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&lStack_90,*(undefined8 *)PTR_DAT_049c9c08);
    } while (plStack_70 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_026696b0:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049b3cc8) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_026696e4;
    }
  }
LAB_026696c8:
  puVar10 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)PTR_DAT_049b3cc8,0);
LAB_026696e4:
  (*(code *)*puVar10)(plVar17,puVar10[1]);
LAB_026696f0:
  if (lStack_c0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0698();
  }
  return iVar16;
}

