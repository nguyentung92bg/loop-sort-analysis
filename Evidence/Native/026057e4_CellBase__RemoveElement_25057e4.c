/* IL2CPP: CellBase$$RemoveElement
void CellBase__RemoveElement (CellBase_o* __this, CellElementBase_o* cellElement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CellBase$$RemoveElement
   void CellBase__RemoveElement (CellBase_o* __this, CellElementBase_o* cellElement, const
   MethodInfo* method); */

void CellBase__RemoveElement_25057e4(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 ****ppppuVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  uint uVar24;
  ulong auStack_c0 [4];
  uint uStack_9c;
  ulong uStack_98;
  undefined8 *puStack_90;
  undefined8 ***pppuStack_88;
  uint uStack_7c;
  undefined8 *puStack_78;
  long *plStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4bd85 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8de8);
    FUN_021f03f8(PTR_DAT_049c8df0);
    bRam0000000004f4bd85 = 1;
  }
  if (*(long *)(param_1 + 0xa0) == 0) {
LAB_02605884:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar3 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove_28d00fc
                    (*(long *)(param_1 + 0xa0),param_2,*(undefined8 *)PTR_DAT_049c8df0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (param_2 == 0) goto LAB_02605884;
  lVar19 = *(long *)(param_1 + 0xe0);
                    /* try { // try from 02605848 to 0270598b has its CatchHandler @ 02605848
                       catch() { ... } // from try @ 02605848 with catch @ 02605848
                       catch() { ... } // from try @ 026059f8 with catch @ 02605848
                       catch() { ... } // from try @ 02605a4c with catch @ 02605848
                       catch() { ... } // from try @ 02605c5c with catch @ 02605848
                       catch() { ... } // from try @ 02605c90 with catch @ 02605848
                       catch() { ... } // from try @ 02605cb4 with catch @ 02605848 */
  ppppuVar4 = (undefined8 ****)System_Object__GetType_3142aac(param_2,0);
  if (lVar19 == 0) goto LAB_02605884;
  lVar8 = *(long *)PTR_DAT_049c8de8;
  uVar3 = tpidr_el0;
  lStack_68 = *(long *)(uVar3 + 0x28);
  lVar17 = *(long *)(lVar8 + 0x20);
  lVar11 = *(long *)(lVar17 + 0xc0);
  lVar10 = *(long *)(lVar11 + 0x70);
  uVar14 = *(uint *)(lVar10 + 0xfc);
  uVar21 = (ulong)uVar14;
  auStack_c0[3] = lVar8;
  pppuStack_88 = ppppuVar4;
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718(lVar10);
    lVar17 = *(long *)(lVar8 + 0x20);
    uVar14 = *(uint *)(lVar10 + 0xfc);
    lVar11 = *(long *)(lVar17 + 0xc0);
    lVar10 = *(long *)(lVar11 + 0x70);
  }
  lVar8 = (long)auStack_c0 - ((ulong)(uVar14 + 0x10) + 0xf & 0x1fffffff0);
  uVar15 = uVar21 + 0xf & 0x1fffffff0;
  uVar14 = *(uint *)(*(long *)(lVar11 + 0x78) + 0xfc);
  puVar20 = (undefined8 *)(lVar8 - uVar15);
  plVar12 = (long *)((long)puVar20 - uVar15);
  if (-1 < *(int *)(lVar10 + 0x28)) {
    ppppuVar4 = &pppuStack_88;
  }
  func_0x04608620(puVar20,ppppuVar4,uVar21);
  puStack_90 = puVar20;
  uVar15 = FUN_021f0650(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x70),puVar20);
  if ((uVar15 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_3111684(5,0);
  }
  if (*(long *)(lVar19 + 0x10) != 0) {
    plVar23 = *(long **)(lVar19 + 0x30);
    lVar17 = *(long *)(auStack_c0[3] + 0x20);
    lVar11 = *(long *)(lVar17 + 0xc0);
    lVar10 = *(long *)(lVar11 + 0x70);
    if (plVar23 == (long *)0x0) {
      lVar17 = lVar10;
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02229718(lVar10);
        lVar11 = *(long *)(*(long *)(auStack_c0[3] + 0x20) + 0xc0);
        lVar17 = *(long *)(lVar11 + 0x70);
      }
      uVar15 = auStack_c0[3];
      ppppuVar4 = (undefined8 ****)pppuStack_88;
      if (-1 < *(int *)(lVar17 + 0x28)) {
        ppppuVar4 = &pppuStack_88;
      }
      puVar5 = (uint *)FUN_021f1078(lVar10,*(undefined8 *)(lVar11 + 400),lVar8,ppppuVar4,0,
                                    &puStack_78);
      uVar9 = (uint)puStack_78;
    }
    else {
      ppppuVar4 = (undefined8 ****)pppuStack_88;
      if (-1 < *(int *)(lVar10 + 0x28)) {
        ppppuVar4 = &pppuStack_88;
      }
      func_0x04608620(puStack_90,ppppuVar4,uVar21);
      lVar10 = *(long *)(lVar17 + 0xc0);
      lVar8 = *(long *)(lVar10 + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02229718(lVar8);
        lVar10 = *(long *)(*(long *)(auStack_c0[3] + 0x20) + 0xc0);
      }
      uVar15 = auStack_c0[3];
      puVar20 = puStack_90;
      if (-1 < *(int *)(*(long *)(lVar10 + 0x70) + 0x28)) {
        puVar20 = (undefined8 *)*puStack_90;
      }
      lVar10 = *plVar23;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar8) {
            lVar8 = lVar10 + (long)(*piVar16 + 1) * 0x10 + 0x138;
            goto LAB_0292ef78;
          }
          uVar13 = uVar13 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar13 != 0);
      }
      lVar8 = FUN_02229a4c(plVar23,lVar8,1);
LAB_0292ef78:
      lVar8 = *(long *)(lVar8 + 8);
      puStack_78 = puVar20;
      puVar5 = (uint *)(**(code **)(lVar8 + 0x10))
                                 (*(undefined8 *)(lVar8 + 8),lVar8,plVar23,&puStack_78,&uStack_7c);
      uVar9 = uStack_7c;
    }
    lVar8 = *(long *)(lVar19 + 0x10);
    if (lVar8 == 0) {
      lVar19 = *(long *)(uVar3 + 0x28);
LAB_0292f45c:
      if (lVar19 == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_0292f484;
    }
    uVar24 = *(uint *)(lVar8 + 0x18);
    uVar9 = uVar9 & 0x7fffffff;
    iVar2 = 0;
    if (uVar24 != 0) {
      iVar2 = (int)uVar9 / (int)uVar24;
    }
    uVar1 = uVar9 - iVar2 * uVar24;
    if (uVar24 <= uVar1) {
LAB_0292f488:
      lVar19 = *(long *)(uVar3 + 0x28);
LAB_0292f474:
      if (lVar19 == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      goto LAB_0292f484;
    }
    uVar24 = *(int *)(lVar8 + (ulong)uVar1 * 4 + 0x20) - 1;
    if (-1 < (int)uVar24) {
      uVar13 = 0xffffffff;
      auStack_c0[0] = (ulong)uVar1;
      auStack_c0[1] = (ulong)uVar14;
      auStack_c0[2] = uVar3;
      uStack_9c = uVar9;
      uStack_98 = uVar21;
      do {
        plVar23 = *(long **)(lVar19 + 0x18);
        if (plVar23 == (long *)0x0) goto LAB_0292f454;
        if (*(uint *)(plVar23 + 3) <= uVar24) {
LAB_0292f46c:
          lVar19 = *(long *)(auStack_c0[2] + 0x28);
          goto LAB_0292f474;
        }
        lVar8 = (ulong)*(uint *)(*plVar23 + 0x104) * (ulong)uVar24;
        puVar5 = (uint *)thunk_FUN_0224e54c((long)plVar23 + lVar8 + 0x20,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(*(long *)(uVar15 + 0x20) + 0xc0) +
                                                       0x68) + 0x80));
        if (*puVar5 == uVar9) {
          plVar18 = *(long **)(lVar19 + 0x30);
          lVar10 = *(long *)(*(long *)(uVar15 + 0x20) + 0xc0);
          if (plVar18 == (long *)0x0) {
            plVar18 = (long *)FUN_026b1a00(*(undefined8 *)(lVar10 + 0x18));
            uVar6 = thunk_FUN_0224e54c((long)plVar23 + lVar8 + 0x20,
                                       *(long *)(*(long *)(*(long *)(*(long *)(uVar15 + 0x20) + 0xc0
                                                                    ) + 0x68) + 0x80) + 0x40);
            puVar20 = puStack_90;
            uVar3 = uStack_98;
            func_0x04608620(puStack_90,uVar6,uStack_98);
            lVar10 = *(long *)(uVar15 + 0x20);
            ppppuVar4 = (undefined8 ****)pppuStack_88;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x70) + 0x28)) {
              ppppuVar4 = &pppuStack_88;
            }
            puVar5 = (uint *)func_0x04608620(plVar12,ppppuVar4,uVar3);
            if (plVar18 == (long *)0x0) goto LAB_0292f454;
            plStack_70 = plVar12;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x70) + 0x28)) {
              puVar20 = (undefined8 *)*puVar20;
              plStack_70 = (long *)*plVar12;
            }
            lVar10 = *(long *)(*plVar18 + 0x1c0);
            puStack_78 = puVar20;
            puVar5 = (uint *)(**(code **)(lVar10 + 0x10))
                                       (*(undefined8 *)(lVar10 + 8),lVar10,plVar18,&puStack_78,
                                        &uStack_7c);
            uVar15 = auStack_c0[3];
            uVar9 = uStack_9c;
          }
          else {
            uVar6 = thunk_FUN_0224e54c((long)plVar23 + lVar8 + 0x20,
                                       *(long *)(*(long *)(lVar10 + 0x68) + 0x80) + 0x40);
            uVar3 = uStack_98;
            func_0x04608620(puStack_90,uVar6,uStack_98);
            lVar10 = *(long *)(uVar15 + 0x20);
            ppppuVar4 = (undefined8 ****)pppuStack_88;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x70) + 0x28)) {
              ppppuVar4 = &pppuStack_88;
            }
            func_0x04608620(plVar12,ppppuVar4,uVar3);
            lVar11 = *(long *)(lVar10 + 0xc0);
            lVar10 = *(long *)(lVar11 + 8);
            if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_02229718(lVar10);
              lVar11 = *(long *)(*(long *)(uVar15 + 0x20) + 0xc0);
            }
            uVar9 = uStack_9c;
            plVar22 = plVar12;
            puVar20 = puStack_90;
            if (-1 < *(int *)(*(long *)(lVar11 + 0x70) + 0x28)) {
              puVar20 = (undefined8 *)*puStack_90;
              plVar22 = (long *)*plVar12;
            }
            lVar11 = *plVar18;
            uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar3 != 0) {
              piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar10) {
                  lVar10 = lVar11 + (long)*piVar16 * 0x10 + 0x138;
                  goto LAB_0292f238;
                }
                uVar3 = uVar3 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar3 != 0);
            }
            lVar10 = FUN_02229a4c(plVar18,lVar10,0);
LAB_0292f238:
            lVar10 = *(long *)(lVar10 + 8);
            puStack_78 = puVar20;
            plStack_70 = plVar22;
            puVar5 = (uint *)(**(code **)(lVar10 + 0x10))
                                       (*(undefined8 *)(lVar10 + 8),lVar10,plVar18,&puStack_78,
                                        &uStack_7c);
          }
          if ((char)uStack_7c != '\0') {
            if ((int)(uint)uVar13 < 0) {
              lVar10 = *(long *)(lVar19 + 0x10);
              puVar5 = (uint *)thunk_FUN_0224e54c((long)plVar23 + lVar8 + 0x20,
                                                  *(long *)(*(long *)(*(long *)(*(long *)(uVar15 + 
                                                  0x20) + 0xc0) + 0x68) + 0x80) + 0x20);
              if (lVar10 == 0) goto LAB_0292f454;
              uVar3 = auStack_c0[2];
              if (*(uint *)(lVar10 + 0x18) <= (uint)auStack_c0[0]) goto LAB_0292f488;
              *(uint *)(lVar10 + auStack_c0[0] * 4 + 0x20) = *puVar5 + 1;
            }
            else {
              plVar12 = *(long **)(lVar19 + 0x18);
              if (plVar12 == (long *)0x0) {
LAB_0292f454:
                lVar19 = *(long *)(auStack_c0[2] + 0x28);
                goto LAB_0292f45c;
              }
              puVar5 = (uint *)thunk_FUN_0224e54c((long)plVar23 + lVar8 + 0x20,
                                                  *(long *)(*(long *)(*(long *)(*(long *)(uVar15 + 
                                                  0x20) + 0xc0) + 0x68) + 0x80) + 0x20);
              if (*(uint *)(plVar12 + 3) <= (uint)uVar13) goto LAB_0292f46c;
              FUN_020186fc((long)plVar12 + *(uint *)(*plVar12 + 0x104) * uVar13 + 0x20,
                           *(long *)(*(long *)(*(long *)(*(long *)(uVar15 + 0x20) + 0xc0) + 0x68) +
                                    0x80) + 0x20,*puVar5);
            }
            uVar13 = uStack_98;
            uVar3 = auStack_c0[2];
            uVar21 = auStack_c0[1];
            FUN_020186fc((long)plVar23 + lVar8 + 0x20,
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(uVar15 + 0x20) + 0xc0) + 0x68) + 0x80),
                         0xffffffff);
            FUN_020186fc((long)plVar23 + lVar8 + 0x20,
                         *(long *)(*(long *)(*(long *)(*(long *)(uVar15 + 0x20) + 0xc0) + 0x68) +
                                  0x80) + 0x20,*(undefined4 *)(lVar19 + 0x24));
            uVar7 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(uVar15 + 0x20) + 0xc0) + 0x1d0)
                                );
            if ((uVar7 & 1) != 0) {
              uVar6 = thunk_FUN_0224e54c((long)plVar23 + lVar8 + 0x20,
                                         *(long *)(*(long *)(*(long *)(*(long *)(uVar15 + 0x20) +
                                                                      0xc0) + 0x68) + 0x80) + 0x40);
              func_0x04608670(uVar6,0,uVar13);
            }
            uVar13 = FUN_021f1190(*(undefined8 *)
                                   (*(long *)(*(long *)(uVar15 + 0x20) + 0xc0) + 0x1d8));
            if ((uVar13 & 1) != 0) {
              uVar6 = thunk_FUN_0224e54c((long)plVar23 + lVar8 + 0x20,
                                         *(long *)(*(long *)(*(long *)(*(long *)(uVar15 + 0x20) +
                                                                      0xc0) + 0x68) + 0x80) + 0x60);
              func_0x04608670(uVar6,0,uVar21);
            }
            puVar5 = (uint *)0x1;
            *(uint *)(lVar19 + 0x24) = uVar24;
            *(ulong *)(lVar19 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(lVar19 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(lVar19 + 0x28) + 1);
            goto LAB_0292f298;
          }
        }
        puVar5 = (uint *)thunk_FUN_0224e54c((long)plVar23 + lVar8 + 0x20,
                                            *(long *)(*(long *)(*(long *)(*(long *)(uVar15 + 0x20) +
                                                                         0xc0) + 0x68) + 0x80) +
                                            0x20);
        uVar13 = (ulong)uVar24;
        uVar3 = auStack_c0[2];
        uVar24 = *puVar5;
      } while (-1 < (int)*puVar5);
    }
  }
  puVar5 = (uint *)0x0;
LAB_0292f298:
  if (*(long *)(uVar3 + 0x28) == lStack_68) {
    return;
  }
LAB_0292f484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}

