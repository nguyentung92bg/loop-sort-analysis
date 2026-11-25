/* IL2CPP: CloudPrefsRegistry$$IsRegistered
bool CloudPrefsRegistry__IsRegistered (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsRegistry$$IsRegistered
   bool CloudPrefsRegistry__IsRegistered (System_String_o* key, const MethodInfo* method); */

void CloudPrefsRegistry__IsRegistered_24e91dc(undefined8 ****param_1)

{
  undefined8 ****ppppuVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  int iVar20;
  ulong uVar21;
  long alStack_b0 [2];
  undefined8 ***pppuStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 ***pppuStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  char acStack_6c [4];
  long lStack_68;
  
  puVar4 = PTR_DAT_049c7f20;
  if ((bRam0000000004f4bcaa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f20);
    FUN_021f03f8(PTR_DAT_049b9570);
    bRam0000000004f4bcaa = 1;
  }
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar4;
  }
  lStack_98 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar10 = *(long *)PTR_DAT_049b9570;
  lVar5 = tpidr_el0;
  lStack_68 = *(long *)(lVar5 + 0x28);
  lVar15 = *(long *)(*(long *)(lVar10 + 0x20) + 0xc0);
  lVar12 = *(long *)(lVar15 + 0x98);
  uVar21 = (ulong)*(uint *)(lVar12 + 0xfc);
  uVar13 = uVar21 + 0xf & 0x1fffffff0;
  puVar16 = (undefined8 *)((long)alStack_b0 - uVar13);
  pppuStack_88 = param_1;
  if (*(long *)(lStack_98 + 0x10) == 0) {
LAB_029a254c:
    puVar6 = (uint *)0x0;
  }
  else {
    iVar20 = *(int *)(lVar12 + 0x28);
    ppppuVar1 = param_1;
    if (-1 < iVar20) {
      ppppuVar1 = &pppuStack_88;
    }
    plStack_90 = (long *)((long)puVar16 - uVar13);
    func_0x04608620(puVar16,ppppuVar1,uVar21);
    plVar9 = plStack_90;
    if (iVar20 < 0) {
      func_0x04608620(plStack_90,ppppuVar1,uVar21);
    }
    else {
      plVar9 = (long *)*puVar16;
    }
    lVar12 = lStack_98;
    puVar6 = (uint *)System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___InternalGetHashCode_28a6adc
                               (lStack_98,plVar9,*(undefined8 *)(lVar15 + 0xb0));
    lVar12 = *(long *)(lVar12 + 0x10);
    if (lVar12 == 0) {
      lVar5 = *(long *)(lVar5 + 0x28);
LAB_029a25fc:
      if (lVar5 == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_029a260c;
    }
    uVar11 = *(uint *)(lVar12 + 0x18);
    uVar3 = (uint)puVar6;
    iVar20 = 0;
    if (uVar11 != 0) {
      iVar20 = (int)uVar3 / (int)uVar11;
    }
    uVar2 = uVar3 - iVar20 * uVar11;
    if (uVar11 <= uVar2) {
      lVar5 = *(long *)(lVar5 + 0x28);
LAB_029a2594:
      if (lVar5 == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      goto LAB_029a260c;
    }
    uVar11 = *(int *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) - 1;
    if ((int)uVar11 < 0) goto LAB_029a254c;
    plVar9 = *(long **)(lStack_98 + 0x18);
    alStack_b0[0] = lVar5;
    alStack_b0[1] = uVar21;
    pppuStack_a0 = param_1;
    if (plVar9 == (long *)0x0) {
LAB_029a25f4:
      lVar5 = *(long *)(alStack_b0[0] + 0x28);
      goto LAB_029a25fc;
    }
    iVar20 = 0;
    do {
      if (*(uint *)(plVar9 + 3) <= uVar11) {
LAB_029a258c:
        lVar5 = *(long *)(alStack_b0[0] + 0x28);
        goto LAB_029a2594;
      }
      puVar6 = (uint *)thunk_FUN_0224e54c((long)plVar9 +
                                          (ulong)*(uint *)(*plVar9 + 0x104) * (ulong)uVar11 + 0x20,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                     0x90) + 0x80));
      if (*puVar6 == uVar3) {
        if (*(uint *)(plVar9 + 3) <= uVar11) goto LAB_029a258c;
        plVar19 = *(long **)(lStack_98 + 0x30);
        uVar7 = thunk_FUN_0224e54c((long)plVar9 +
                                   (ulong)*(uint *)(*plVar9 + 0x104) * (ulong)uVar11 + 0x20,
                                   *(long *)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                      0x90) + 0x80) + 0x40);
        lVar5 = alStack_b0[1];
        func_0x04608620(puVar16,uVar7,alStack_b0[1]);
        lVar12 = *(long *)(lVar10 + 0x20);
        ppppuVar1 = (undefined8 ****)pppuStack_a0;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x98) + 0x28)) {
          ppppuVar1 = &pppuStack_88;
        }
        puVar6 = (uint *)func_0x04608620(plStack_90,ppppuVar1,lVar5);
        if (plVar19 == (long *)0x0) goto LAB_029a25f4;
        lVar12 = *(long *)(lVar12 + 0xc0);
        lVar5 = *(long *)(lVar12 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02229718(lVar5);
          lVar12 = *(long *)(*(long *)(lVar10 + 0x20) + 0xc0);
        }
        puVar17 = puVar16;
        plVar18 = plStack_90;
        if (-1 < *(int *)(*(long *)(lVar12 + 0x98) + 0x28)) {
          puVar17 = (undefined8 *)*puVar16;
          plVar18 = (long *)*plStack_90;
        }
        lVar12 = *plVar19;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar5) {
              lVar5 = lVar12 + (long)*piVar14 * 0x10 + 0x138;
              goto LAB_029a24d8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        lVar5 = FUN_02229a4c(plVar19,lVar5,0);
LAB_029a24d8:
        lVar5 = *(long *)(lVar5 + 8);
        puStack_80 = puVar17;
        plStack_78 = plVar18;
        puVar6 = (uint *)(**(code **)(lVar5 + 0x10))
                                   (*(undefined8 *)(lVar5 + 8),lVar5,plVar19,&puStack_80,acStack_6c)
        ;
        if (acStack_6c[0] != '\0') {
          puVar6 = (uint *)0x1;
          lVar5 = alStack_b0[0];
          goto LAB_029a255c;
        }
      }
      if ((int)*(uint *)(plVar9 + 3) <= iVar20) {
        thunk_FUN_02256840(PTR_DAT_049b82b8);
        uVar7 = thunk_FUN_0222ca34();
        uVar8 = thunk_FUN_02256840(PTR_DAT_049d0640);
        puVar6 = (uint *)System_InvalidOperationException___ctor_30fe440(uVar7,uVar8,0);
        if (*(long *)(alStack_b0[0] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0564(uVar7,lVar10);
        }
        goto LAB_029a260c;
      }
      if (*(uint *)(plVar9 + 3) <= uVar11) goto LAB_029a258c;
      iVar20 = iVar20 + 1;
      puVar6 = (uint *)thunk_FUN_0224e54c((long)plVar9 +
                                          (ulong)*(uint *)(*plVar9 + 0x104) * (ulong)uVar11 + 0x20,
                                          *(long *)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) +
                                                                       0xc0) + 0x90) + 0x80) + 0x20)
      ;
      uVar11 = *puVar6;
    } while (-1 < (int)uVar11);
    puVar6 = (uint *)0x0;
    lVar5 = alStack_b0[0];
  }
LAB_029a255c:
  if (*(long *)(lVar5 + 0x28) == lStack_68) {
    return;
  }
LAB_029a260c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar6);
}

