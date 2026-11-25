/* IL2CPP: LondonTripSheet$$PostLoad
void LondonTripSheet__PostLoad (LondonTripSheet_o* __this, Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x026646b0) */
/* IL2CPP: LondonTripSheet$$PostLoad
   void LondonTripSheet__PostLoad (LondonTripSheet_o* __this,
   Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method); */

void LondonTripSheet__PostLoad_25642ac(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long **pplStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  int aiStack_70 [3];
  int iStack_64;
  
  puVar3 = PTR_DAT_049cbb30;
  if ((bRam0000000004f4c145 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbb30);
    bRam0000000004f4c145 = 1;
  }
  Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___PostLoad_2987db4
            (param_1,param_2,*(undefined8 *)puVar3);
  if ((bRam0000000004f4c146 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbb38);
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049cbb40);
    FUN_021f03f8(PTR_DAT_049cbb48);
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049be138);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    bRam0000000004f4c146 = 1;
  }
  plVar16 = *(long **)(param_1 + 0x10);
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar13 = *plVar16;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049cbb40) {
        puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_02664428;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)FUN_02229a4c(plVar16,*(long *)PTR_DAT_049cbb40,0);
LAB_02664428:
  plStack_78 = (long *)(*(code *)*puVar9)(plVar16,puVar9[1]);
  puVar8 = PTR_DAT_049cbb48;
  puVar7 = PTR_DAT_049b6370;
  puVar6 = PTR_DAT_049b6350;
  puVar5 = PTR_DAT_049b6348;
  puVar4 = PTR_DAT_049b6330;
  puVar3 = PTR_DAT_049b4360;
  pplStack_98 = &plStack_78;
  lStack_a0 = 0;
  if (plStack_78 != (long *)0x0) {
    do {
      plVar16 = plStack_78;
      lVar13 = *plStack_78;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_026644c8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_02229a4c(plStack_78,*(long *)puVar3,0);
LAB_026644c8:
      uVar14 = (*(code *)*puVar9)(plVar16,puVar9[1]);
      plVar16 = plStack_78;
      if ((uVar14 & 1) == 0) {
        plVar16 = *pplStack_98;
        if (plVar16 == (long *)0x0) goto LAB_02664784;
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 == 0) goto LAB_0266475c;
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_02664744;
      }
      if (plStack_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar13 = *plStack_78;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar8) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0266452c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_02229a4c(plStack_78,*(long *)puVar8,0);
LAB_0266452c:
      lVar13 = (*(code *)*puVar9)(plVar16,puVar9[1]);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar10 = LondonTripSheet_Row__GetGifts_25647c8(lVar13);
      if (lVar10 != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (lVar10,&uStack_b8,*(undefined8 *)puVar7);
        uStack_90 = uStack_b8;
        uStack_b8 = 0;
        puStack_88 = puStack_b0;
        uStack_80 = uStack_a8;
        puStack_b0 = &uStack_90;
        do {
          uVar14 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_90,*(undefined8 *)puVar5);
          if ((uVar14 & 1) == 0) goto LAB_02664650;
          lVar17 = *(long *)puVar6;
          lVar11 = *(long *)(lVar17 + 0x20);
          uVar2 = *(ushort *)(lVar11 + 0x135);
          lVar10 = lVar11;
          if ((uVar2 & 1) == 0) {
            lVar10 = FUN_02229718();
            lVar11 = *(long *)(lVar17 + 0x20);
            uVar2 = *(ushort *)(lVar11 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar11 = FUN_02229718();
          }
          uVar12 = thunk_FUN_0224e54c(&uStack_90,
                                      *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(aiStack_70,uVar12,uVar1);
        } while (aiStack_70[0] == 0);
        lVar10 = *(long *)(param_1 + 0x48);
        plVar16 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
        uVar1 = *(undefined4 *)(plVar16[1] + 0xfc);
        uVar12 = thunk_FUN_0224e54c(lVar13,*(undefined8 *)(*plVar16 + 0x80));
        func_0x04608620(aiStack_70,uVar12,uVar1);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        iStack_64 = aiStack_70[0];
        FUN_02333498(lVar10,&iStack_64,*(undefined8 *)PTR_DAT_049be138);
LAB_02664650:
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_90,*(undefined8 *)puVar4);
      }
    } while (plStack_78 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_02664744:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049b3cc8) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_02664778;
    }
  }
LAB_0266475c:
  puVar9 = (undefined8 *)FUN_02229a4c(plVar16,*(long *)PTR_DAT_049b3cc8,0);
LAB_02664778:
  (*(code *)*puVar9)(plVar16,puVar9[1]);
LAB_02664784:
  if (lStack_a0 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f0698();
}

