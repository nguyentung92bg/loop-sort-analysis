/* IL2CPP: Carrier$$IsBetterCarrier
bool Carrier__IsBetterCarrier (Carrier_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$IsBetterCarrier
   bool Carrier__IsBetterCarrier (Carrier_o* __this, Block_o* block, const MethodInfo* method); */

uint Carrier__IsBetterCarrier_2409a44(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  if ((bRam0000000004f4b6e2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c28a8);
    FUN_021f03f8(PTR_DAT_049c28b0);
    FUN_021f03f8(PTR_DAT_049c28b8);
    FUN_021f03f8(PTR_DAT_049c28c0);
    FUN_021f03f8(PTR_DAT_049c28c8);
    FUN_021f03f8(PTR_DAT_049c28d0);
    bRam0000000004f4b6e2 = 1;
  }
  puVar6 = PTR_DAT_049c28c0;
  puVar5 = PTR_DAT_049c28b8;
  puVar4 = PTR_DAT_049c28b0;
  puVar3 = PTR_DAT_049c28a8;
  lVar9 = *(long *)(param_1 + 0x200);
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lVar9 + 0x18) == 0) {
    uVar8 = 0;
  }
  else {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lVar9,&uStack_78,*(undefined8 *)PTR_DAT_049c28c8);
    uStack_50 = uStack_68;
    uStack_58 = puStack_70;
    uStack_60 = uStack_78;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    do {
      uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_60,*(undefined8 *)puVar4);
      if ((uVar8 & 1) == 0) break;
      lVar15 = *(long *)puVar5;
      lVar10 = *(long *)(lVar15 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
      lVar9 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_02229718();
        lVar10 = *(long *)(lVar15 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_02229718();
      }
      uVar11 = thunk_FUN_0224e54c(&uStack_60,
                                  *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&plStack_48,uVar11,uVar1);
      plVar7 = plStack_48;
      if (plStack_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar9 = *plStack_48;
      uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
            puVar12 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_02509bf8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)FUN_02229a4c(plStack_48,*(long *)puVar6,1);
LAB_02509bf8:
      uVar13 = (*(code *)*puVar12)(plVar7,param_2,puVar12[1]);
    } while ((uVar13 & 1) != 0);
    uVar8 = uVar8 ^ 1;
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_60,*(undefined8 *)puVar3);
  }
  return uVar8 & 1;
}

