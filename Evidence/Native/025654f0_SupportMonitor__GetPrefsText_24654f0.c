/* IL2CPP: SupportMonitor$$GetPrefsText
System_String_o* SupportMonitor__GetPrefsText (SupportMonitor_o* __this, System_Text_StringBuilder_o* sb, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025659cc) */
/* IL2CPP: SupportMonitor$$GetPrefsText
   System_String_o* SupportMonitor__GetPrefsText (SupportMonitor_o* __this,
   System_Text_StringBuilder_o* sb, const MethodInfo* method); */

void SupportMonitor__GetPrefsText_24654f0(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long **pplStack_b8;
  long *plStack_b0;
  undefined4 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_68;
  uint uStack_54;
  
  if ((bRam0000000004f4b963 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049b5290);
    FUN_021f03f8(PTR_DAT_049b5298);
    FUN_021f03f8(PTR_DAT_049c5290);
    FUN_021f03f8(PTR_DAT_049b7048);
    FUN_021f03f8(PTR_DAT_049c5298);
    FUN_021f03f8(PTR_DAT_049bbeb0);
    bRam0000000004f4b963 = 1;
  }
  puVar4 = PTR_DAT_049c5290;
  uStack_54 = 0;
  plStack_68 = (long *)0x0;
  lStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Text_StringBuilder__Clear_2f8ba20(param_2,0);
  puVar2 = PTR_DAT_049b3bd0;
  uVar16 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  plVar8 = (long *)System_Type__GetTypeFromHandle_310ebfc(uVar16,0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar9 = (**(code **)(*plVar8 + 0x6e8))(plVar8,0x18,*(undefined8 *)(*plVar8 + 0x6f0));
  puVar4 = PTR_DAT_049bbeb0;
  uStack_54 = 0;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar1 = *(uint *)(lVar9 + 0x18);
  if (0 < (int)uVar1) {
    do {
      if (uVar1 <= uStack_54) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      plVar8 = *(long **)(lVar9 + (long)(int)uStack_54 * 8 + 0x20);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar16 = (**(code **)(*plVar8 + 0x2e8))(plVar8,0,*(undefined8 *)(*plVar8 + 0x2f0));
      uVar10 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      uVar16 = System_String__Format_2f7dfac(*(undefined8 *)puVar4,uVar10,uVar16,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar16,0);
      uVar1 = *(uint *)(lVar9 + 0x18);
      uStack_54 = uStack_54 + 1;
    } while ((int)uStack_54 < (int)uVar1);
  }
  uVar16 = *(undefined8 *)PTR_DAT_049b5290;
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar16 = System_Type__GetTypeFromHandle_310ebfc(uVar16,0);
  if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar9 = System_Enum__GetValues_3134724(uVar16,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar8 = (long *)System_Array__GetEnumerator_31257a0(lVar9,0);
  puVar7 = PTR_DAT_049c5298;
  puVar6 = PTR_DAT_049b7048;
  puVar5 = PTR_DAT_049b6110;
  puVar2 = PTR_DAT_049b5298;
  puVar4 = PTR_DAT_049b4360;
  pplStack_b8 = &plStack_68;
  uStack_c0 = 0;
  plStack_b0 = &lStack_98;
  do {
    plStack_68 = plVar8;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar13 = *plVar8;
    lVar9 = *(long *)puVar4;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_02565794;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_02229a4c(plVar8,lVar9,0);
LAB_02565794:
    uVar14 = (*(code *)*puVar11)(plVar8,puVar11[1]);
    plVar8 = plStack_68;
    puVar3 = PTR_DAT_049b3cc8;
    if ((uVar14 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_0222c938(plStack_68,*(undefined8 *)PTR_DAT_049b3cc8);
      *plStack_b0 = (long)plVar8;
      if (plVar8 == (long *)0x0) goto LAB_0256596c;
      lVar9 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar14 == 0) goto LAB_02565944;
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar13 = *plStack_68;
    lVar9 = *(long *)puVar4;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_025657fc;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar11 = (undefined8 *)FUN_02229a4c(plStack_68,lVar9,1);
LAB_025657fc:
    plVar8 = (long *)(*(code *)*puVar11)(plVar8,puVar11[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0a20();
    }
    puVar12 = (uint *)thunk_FUN_0222cb7c();
    uVar1 = *puVar12;
    plVar8 = plStack_68;
    if (((0x13 < uVar1) || ((1 << (ulong)(uVar1 & 0x1f) & 0x80009U) == 0)) && (1 < uVar1 - 100)) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Extensions__GetPrefs_24e7680(&uStack_e0,uVar1,0,0);
      uStack_88 = uStack_d8;
      uStack_80 = CONCAT44(uStack_cc,uStack_d0);
      uStack_d8 = 0xffffffffffffffff;
      uStack_90 = uStack_e0;
      uStack_78 = uStack_c8;
      uStack_e0 = *(undefined8 *)puVar2;
      uStack_d0 = uVar1;
      uVar16 = System_Enum__ToString_3135e00(&uStack_e0,0);
      uStack_54 = CloudPrefsInt__get_Value_24e99c0(&uStack_90,0);
      uVar10 = System_Int32__ToString_30fbaa0(&uStack_54,0);
      uVar16 = System_String__Concat_2f7dbac
                         (*(undefined8 *)puVar7,uVar16,*(undefined8 *)puVar6,uVar10,0);
      System_Text_StringBuilder__AppendLine_2f8c724(param_2,uVar16,0);
      plVar8 = plStack_68;
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_02565960;
    }
  }
LAB_02565944:
  puVar11 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)puVar3,0);
LAB_02565960:
  (*(code *)*puVar11)(plVar8,puVar11[1]);
LAB_0256596c:
  (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
  return;
}

