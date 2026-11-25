/* IL2CPP: NicknameGenerator$$Generate
System_String_array* NicknameGenerator__Generate (NicknameGenerator_o* __this, int32_t count, System_Collections_Generic_IReadOnlyCollection_string__o* exclude, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02650648) */
/* IL2CPP: NicknameGenerator$$Generate
   System_String_array* NicknameGenerator__Generate (NicknameGenerator_o* __this, int32_t count,
   System_Collections_Generic_IReadOnlyCollection_string__o* exclude, const MethodInfo* method); */

long NicknameGenerator__Generate_25501b8(undefined8 param_1,uint param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  
  puVar5 = PTR_DAT_049cad08;
  puVar4 = PTR_DAT_049cad00;
  puVar3 = PTR_DAT_049cacf8;
  puVar1 = PTR_DAT_049cacf0;
  puVar2 = PTR_DAT_049b82c8;
  if ((bRam0000000004f4c073 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6588);
    FUN_021f03f8(PTR_DAT_049cad10);
    FUN_021f03f8(PTR_DAT_049b6598);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049bb708);
    FUN_021f03f8(PTR_DAT_049bb710);
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049b82c8);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049cad08);
    FUN_021f03f8(PTR_DAT_049cacf0);
    FUN_021f03f8(PTR_DAT_049cad00);
    FUN_021f03f8(PTR_DAT_049cacf8);
    bRam0000000004f4c073 = 1;
  }
  uVar6 = NicknameGenerator__GetPool_25506ac(param_1,*(undefined8 *)puVar1);
  uVar7 = NicknameGenerator__GetPool_25506ac(param_1,*(undefined8 *)puVar3);
  uVar8 = NicknameGenerator__GetPool_25506ac(param_1,*(undefined8 *)puVar4);
  uVar9 = NicknameGenerator__GetPool_25506ac(param_1,*(undefined8 *)puVar5);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar2);
  }
  if (cRam0000000004f4baee == '\0') {
    FUN_021f03f8(PTR_DAT_049b82c8);
    cRam0000000004f4baee = '\x01';
  }
  puVar3 = PTR_DAT_049cad10;
  puVar1 = PTR_DAT_049b6598;
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
    lVar10 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_049b6588;
  uVar18 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18);
  lVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType____ctor_28a1948
            (lVar10,uVar18,*(undefined8 *)puVar3);
  if (param_3 != (long *)0x0) {
    lVar15 = *param_3;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049bb708) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_026503dc;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_02229a4c(param_3,*(long *)PTR_DAT_049bb708,0);
LAB_026503dc:
    plVar12 = (long *)(*(code *)*puVar11)(param_3,puVar11[1]);
    puVar3 = PTR_DAT_049bb710;
    puVar1 = PTR_DAT_049b4360;
    do {
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar15 = *plVar12;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_02650458;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)puVar1,0);
LAB_02650458:
      uVar16 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      if ((uVar16 & 1) == 0) {
        if (plVar12 == (long *)0x0) break;
        lVar15 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 == 0) goto LAB_02650540;
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_02650528;
      }
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar15 = *plVar12;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_026504bc;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)puVar3,0);
LAB_026504bc:
      uVar18 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      uVar16 = System_String__IsNullOrEmpty_2f7c924(uVar18,0);
      if ((uVar16 & 1) == 0) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                  (lVar10,uVar18,*(undefined8 *)puVar2);
      }
    } while( true );
  }
  goto LAB_0265056c;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_02650528:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049b3cc8) {
      puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0265055c;
    }
  }
LAB_02650540:
  puVar11 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049b3cc8,0);
LAB_0265055c:
  (*(code *)*puVar11)(plVar12,puVar11[1]);
LAB_0265056c:
  lVar15 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049b4540,param_2);
  if (0 < (int)param_2) {
    uVar16 = 0;
    do {
      do {
        do {
          lVar13 = NicknameGenerator__BuildCandidate_2550718(param_1,uVar6,uVar7,uVar8,uVar9);
          if (lVar13 == 0) {
LAB_02650638:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        } while (0xe < *(int *)(lVar13 + 0x10));
        if (lVar10 == 0) goto LAB_02650638;
        uVar14 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                           (lVar10,lVar13,*(undefined8 *)puVar2);
      } while ((uVar14 & 1) == 0);
      if (lVar15 == 0) goto LAB_02650638;
      if (*(uint *)(lVar15 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      *(long *)(lVar15 + uVar16 * 8 + 0x20) = lVar13;
      thunk_FUN_021f190c(lVar15 + 0x20 + uVar16 * 8,lVar13);
      uVar16 = uVar16 + 1;
    } while (uVar16 != param_2);
  }
  return lVar15;
}

