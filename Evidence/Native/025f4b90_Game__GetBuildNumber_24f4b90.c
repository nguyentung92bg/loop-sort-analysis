/* IL2CPP: Game$$GetBuildNumber
System_String_o* Game__GetBuildNumber (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Game$$GetBuildNumber
   System_String_o* Game__GetBuildNumber (const MethodInfo* method); */

long Game__GetBuildNumber_24f4b90(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
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
  
  if ((bRam0000000004f4bd18 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b61a0);
    FUN_021f03f8(PTR_DAT_049c83a8);
    FUN_021f03f8(PTR_DAT_049b6568);
    bRam0000000004f4bd18 = 1;
  }
  lVar4 = Game__GetBuildInfo_24f4a0c();
  uVar5 = System_String__IsNullOrEmpty_2f7c924(lVar4,0);
  if (((uVar5 & 1) != 0) ||
     (uVar5 = System_String__op_Equality_2f7b7fc(lVar4,*(undefined8 *)PTR_DAT_049b61a0,0),
     (uVar5 & 1) != 0)) {
    return **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  }
  if ((lVar4 == 0) ||
     (lVar4 = System_String__Split_2f802dc(lVar4,0x20,0,0), puVar3 = PTR_DAT_049b3bd0, lVar4 == 0))
  {
LAB_025f4c98:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
  if (*(long *)(lVar4 + 0x28) == 0) goto LAB_025f4c98;
  lVar4 = System_String__Replace_2f7fb18
                    (*(long *)(lVar4 + 0x28),*(undefined8 *)PTR_DAT_049c83a8,
                     **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8),0);
  if (lVar4 == 0) goto LAB_025f4c98;
  lVar10 = **(long **)(*(long *)(puVar3 + 0x90) + 0xb8);
  lVar9 = *(long *)PTR_DAT_049b6568;
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
      lVar6 = *(long *)(lVar14 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02229718();
      }
      puVar3 = PTR_DAT_049e4548;
      uVar5 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40));
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)(lVar14 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02229718();
        }
        uVar15 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48);
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
            uVar5 = (ulong)uVar13;
            psVar11 = (short *)(lVar4 + 0x14 + (long)iVar16 * 2);
            psVar12 = (short *)(lVar9 + 0x14);
            do {
              if (*psVar11 != *psVar12) {
                iVar16 = iVar16 + 1;
                goto LAB_0307fd04;
              }
              uVar5 = uVar5 - 1;
              psVar11 = psVar11 + 1;
              psVar12 = psVar12 + 1;
            } while (uVar5 != 0);
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

