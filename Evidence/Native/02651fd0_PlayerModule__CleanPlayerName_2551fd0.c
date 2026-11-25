/* IL2CPP: PlayerModule$$CleanPlayerName
System_String_o* PlayerModule__CleanPlayerName (PlayerModule_o* __this, System_String_o* playerName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayerModule$$CleanPlayerName
   System_String_o* PlayerModule__CleanPlayerName (PlayerModule_o* __this, System_String_o*
   playerName, const MethodInfo* method); */

long PlayerModule__CleanPlayerName_2551fd0(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  short *psVar11;
  short *psVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_290 [512];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_6c;
  long lStack_68;
  
  if ((bRam0000000004f4c080 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b48e8);
    FUN_021f03f8(PTR_DAT_049c6268);
    bRam0000000004f4c080 = 1;
  }
  if ((param_2 == 0) || (lVar4 = System_String__TrimStart_2f8231c(param_2,0), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar9 = *(long *)PTR_DAT_049b48e8;
  lVar10 = *(long *)PTR_DAT_049c6268;
  lVar2 = tpidr_el0;
  lStack_68 = *(long *)(lVar2 + 0x28);
  if ((bRam0000000004f4ef9c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049e4528,lVar9,lVar10,0);
    FUN_021f03f8(PTR_DAT_049e4530);
    FUN_021f03f8(PTR_DAT_049e4538);
    FUN_021f03f8(PTR_DAT_049e4540);
    FUN_021f03f8(PTR_DAT_049e4548);
    FUN_021f03f8(PTR_DAT_049e4550);
    bRam0000000004f4ef9c = 1;
  }
  puVar3 = PTR_DAT_049e4528;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (lVar9 == 0) {
    thunk_FUN_02256840(PTR_DAT_049baa58);
    uVar7 = thunk_FUN_0222ca34();
    uVar15 = thunk_FUN_02256840(PTR_DAT_049e4510);
    System_ArgumentNullException___ctor_30655c4(uVar7,uVar15,0);
  }
  else {
    if (*(int *)(lVar9 + 0x10) != 0) {
      if (lVar10 == 0) {
        lVar10 = **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
      }
      func_0x04608670(auStack_290,0,0x200);
      lVar14 = *(long *)puVar3;
      lVar5 = *(long *)(lVar14 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      puVar3 = PTR_DAT_049e4548;
      uVar6 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40));
      if ((uVar6 & 1) != 0) {
        lVar5 = *(long *)(lVar14 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02229718();
        }
        uVar15 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x48);
        if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
          FUN_021f0574(*(long *)(PTR_DAT_049b3bd0 + 0xe0));
        }
        uVar15 = System_Type__GetTypeFromHandle_310ebfc(uVar15,0);
        System_ThrowHelper__ThrowInvalidTypeWithPointersNotSupported_3121438(uVar15,0);
      }
      System_Collections_Generic_ValueListBuilder___Il2CppFullySharedGenericType____ctor_29fd6e4
                (&uStack_90,auStack_290,0x80,*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_049e4530;
      uVar13 = *(uint *)(lVar9 + 0x10);
      iVar1 = *(int *)(lVar4 + 0x10) - uVar13;
      if (-1 < iVar1) {
        iVar16 = 0;
        do {
          if (0 < (int)uVar13) {
            uVar6 = (ulong)uVar13;
            psVar11 = (short *)(lVar4 + 0x14 + (long)iVar16 * 2);
            psVar12 = (short *)(lVar9 + 0x14);
            do {
              if (*psVar11 != *psVar12) {
                iVar16 = iVar16 + 1;
                goto LAB_0307fd04;
              }
              uVar6 = uVar6 - 1;
              psVar11 = psVar11 + 1;
              psVar12 = psVar12 + 1;
            } while (uVar6 != 0);
          }
          iStack_6c = iVar16;
          FUN_03083e34(&uStack_90,&iStack_6c,*(undefined8 *)puVar3);
          uVar13 = *(uint *)(lVar9 + 0x10);
          iVar16 = uVar13 + iVar16;
LAB_0307fd04:
        } while (iVar16 <= iVar1);
      }
      puVar3 = PTR_DAT_049e4540;
      if ((int)uStack_78 != 0) {
        auVar17 = System_Collections_Generic_ValueListBuilder___Il2CppFullySharedGenericType___AsSpan_29fd8f4
                            (&uStack_90,*(undefined8 *)PTR_DAT_049e4538);
        lVar4 = System_String__ReplaceHelper_2f7ff08
                          (lVar4,uVar13,lVar10,auVar17._0_8_,auVar17._8_8_);
        FUN_0308402c(&uStack_90,*(undefined8 *)puVar3);
      }
      if (*(long *)(lVar2 + 0x28) == lStack_68) {
        return lVar4;
      }
      goto LAB_0307fe2c;
    }
    thunk_FUN_02256840(PTR_DAT_049b9870);
    uVar7 = thunk_FUN_0222ca34();
    uVar15 = thunk_FUN_02256840(PTR_DAT_049e4518);
    uVar8 = thunk_FUN_02256840(PTR_DAT_049e4510);
    System_ArgumentException___ctor_306563c(uVar7,uVar15,uVar8,0);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_68) {
    uVar15 = thunk_FUN_02256840(PTR_DAT_049e4558);
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar7,uVar15);
  }
LAB_0307fe2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

