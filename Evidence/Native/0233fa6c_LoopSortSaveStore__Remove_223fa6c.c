/* IL2CPP: LoopSortSaveStore$$Remove
void LoopSortSaveStore__Remove (LoopSortSaveStore_o* __this, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortSaveStore$$Remove
   void LoopSortSaveStore__Remove (LoopSortSaveStore_o* __this, System_String_o* key, const
   MethodInfo* method); */

void LoopSortSaveStore__Remove_223fa6c(long param_1,undefined8 ****param_2)

{
  undefined8 ****ppppuVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  long *plVar19;
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
  
  if ((bRam0000000004f49afc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b51d8);
    bRam0000000004f49afc = 1;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c675 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cfaf0,param_2,*(undefined8 *)PTR_DAT_049b51d8);
    FUN_021f03f8(PTR_DAT_049cfaf8);
    FUN_021f03f8(PTR_DAT_049cfb00);
    FUN_021f03f8(PTR_DAT_049b9da8);
    bRam0000000004f4c675 = 1;
  }
  if (*(long *)(lVar4 + 0x30) == 0) {
LAB_028f2e7c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
            (*(long *)(lVar4 + 0x30),param_2,*(undefined8 *)PTR_DAT_049b9da8);
  if (*(long *)(lVar4 + 0x38) == 0) goto LAB_028f2e7c;
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
            (*(long *)(lVar4 + 0x38),param_2,*(undefined8 *)PTR_DAT_049cfaf0);
  if (*(long *)(lVar4 + 0x40) == 0) goto LAB_028f2e7c;
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
            (*(long *)(lVar4 + 0x40),param_2,*(undefined8 *)PTR_DAT_049cfb00);
  lVar4 = *(long *)(lVar4 + 0x48);
  if (lVar4 == 0) goto LAB_028f2e7c;
  lVar8 = *(long *)PTR_DAT_049cfaf8;
  uVar14 = tpidr_el0;
  lStack_68 = *(long *)(uVar14 + 0x28);
  lVar18 = *(long *)(lVar8 + 0x20);
  lVar11 = *(long *)(lVar18 + 0xc0);
  lVar10 = *(long *)(lVar11 + 0x70);
  uVar15 = *(uint *)(lVar10 + 0xfc);
  uVar21 = (ulong)uVar15;
  auStack_c0[3] = lVar8;
  pppuStack_88 = param_2;
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_02229718(lVar10);
    lVar18 = *(long *)(lVar8 + 0x20);
    uVar15 = *(uint *)(lVar10 + 0xfc);
    lVar11 = *(long *)(lVar18 + 0xc0);
    lVar10 = *(long *)(lVar11 + 0x70);
  }
  lVar8 = (long)auStack_c0 - ((ulong)(uVar15 + 0x10) + 0xf & 0x1fffffff0);
  uVar16 = uVar21 + 0xf & 0x1fffffff0;
  uVar15 = *(uint *)(*(long *)(lVar11 + 0x78) + 0xfc);
  puVar20 = (undefined8 *)(lVar8 - uVar16);
  plVar12 = (long *)((long)puVar20 - uVar16);
  if (-1 < *(int *)(lVar10 + 0x28)) {
    param_2 = &pppuStack_88;
  }
  func_0x04608620(puVar20,param_2,uVar21);
  puStack_90 = puVar20;
  uVar16 = FUN_021f0650(*(undefined8 *)(*(long *)(lVar18 + 0xc0) + 0x70),puVar20);
  if ((uVar16 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_3111684(5,0);
  }
  if (*(long *)(lVar4 + 0x10) != 0) {
    plVar23 = *(long **)(lVar4 + 0x30);
    lVar18 = *(long *)(auStack_c0[3] + 0x20);
    lVar11 = *(long *)(lVar18 + 0xc0);
    lVar10 = *(long *)(lVar11 + 0x70);
    if (plVar23 == (long *)0x0) {
      lVar18 = lVar10;
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02229718(lVar10);
        lVar11 = *(long *)(*(long *)(auStack_c0[3] + 0x20) + 0xc0);
        lVar18 = *(long *)(lVar11 + 0x70);
      }
      uVar16 = auStack_c0[3];
      ppppuVar1 = (undefined8 ****)pppuStack_88;
      if (-1 < *(int *)(lVar18 + 0x28)) {
        ppppuVar1 = &pppuStack_88;
      }
      puVar5 = (uint *)FUN_021f1078(lVar10,*(undefined8 *)(lVar11 + 400),lVar8,ppppuVar1,0,
                                    &puStack_78);
      uVar9 = (uint)puStack_78;
    }
    else {
      ppppuVar1 = (undefined8 ****)pppuStack_88;
      if (-1 < *(int *)(lVar10 + 0x28)) {
        ppppuVar1 = &pppuStack_88;
      }
      func_0x04608620(puStack_90,ppppuVar1,uVar21);
      lVar10 = *(long *)(lVar18 + 0xc0);
      lVar8 = *(long *)(lVar10 + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02229718(lVar8);
        lVar10 = *(long *)(*(long *)(auStack_c0[3] + 0x20) + 0xc0);
      }
      uVar16 = auStack_c0[3];
      puVar20 = puStack_90;
      if (-1 < *(int *)(*(long *)(lVar10 + 0x70) + 0x28)) {
        puVar20 = (undefined8 *)*puStack_90;
      }
      lVar10 = *plVar23;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar8) {
            lVar8 = lVar10 + (long)(*piVar17 + 1) * 0x10 + 0x138;
            goto LAB_0292ef78;
          }
          uVar13 = uVar13 - 1;
          piVar17 = piVar17 + 4;
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
    lVar8 = *(long *)(lVar4 + 0x10);
    if (lVar8 == 0) {
      lVar4 = *(long *)(uVar14 + 0x28);
LAB_0292f45c:
      if (lVar4 == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_0292f484;
    }
    uVar24 = *(uint *)(lVar8 + 0x18);
    uVar9 = uVar9 & 0x7fffffff;
    iVar3 = 0;
    if (uVar24 != 0) {
      iVar3 = (int)uVar9 / (int)uVar24;
    }
    uVar2 = uVar9 - iVar3 * uVar24;
    if (uVar24 <= uVar2) {
LAB_0292f488:
      lVar4 = *(long *)(uVar14 + 0x28);
LAB_0292f474:
      if (lVar4 == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      goto LAB_0292f484;
    }
    uVar24 = *(int *)(lVar8 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar24) {
      uVar13 = 0xffffffff;
      auStack_c0[0] = (ulong)uVar2;
      auStack_c0[1] = (ulong)uVar15;
      auStack_c0[2] = uVar14;
      uStack_9c = uVar9;
      uStack_98 = uVar21;
      do {
        plVar23 = *(long **)(lVar4 + 0x18);
        if (plVar23 == (long *)0x0) goto LAB_0292f454;
        if (*(uint *)(plVar23 + 3) <= uVar24) {
LAB_0292f46c:
          lVar4 = *(long *)(auStack_c0[2] + 0x28);
          goto LAB_0292f474;
        }
        lVar8 = (ulong)*(uint *)(*plVar23 + 0x104) * (ulong)uVar24;
        puVar5 = (uint *)thunk_FUN_0224e54c((long)plVar23 + lVar8 + 0x20,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(*(long *)(uVar16 + 0x20) + 0xc0) +
                                                       0x68) + 0x80));
        if (*puVar5 == uVar9) {
          plVar19 = *(long **)(lVar4 + 0x30);
          lVar10 = *(long *)(*(long *)(uVar16 + 0x20) + 0xc0);
          if (plVar19 == (long *)0x0) {
            plVar19 = (long *)FUN_026b1a00(*(undefined8 *)(lVar10 + 0x18));
            uVar6 = thunk_FUN_0224e54c((long)plVar23 + lVar8 + 0x20,
                                       *(long *)(*(long *)(*(long *)(*(long *)(uVar16 + 0x20) + 0xc0
                                                                    ) + 0x68) + 0x80) + 0x40);
            puVar20 = puStack_90;
            uVar14 = uStack_98;
            func_0x04608620(puStack_90,uVar6,uStack_98);
            lVar10 = *(long *)(uVar16 + 0x20);
            ppppuVar1 = (undefined8 ****)pppuStack_88;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x70) + 0x28)) {
              ppppuVar1 = &pppuStack_88;
            }
            puVar5 = (uint *)func_0x04608620(plVar12,ppppuVar1,uVar14);
            if (plVar19 == (long *)0x0) goto LAB_0292f454;
            plStack_70 = plVar12;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x70) + 0x28)) {
              puVar20 = (undefined8 *)*puVar20;
              plStack_70 = (long *)*plVar12;
            }
            lVar10 = *(long *)(*plVar19 + 0x1c0);
            puStack_78 = puVar20;
            puVar5 = (uint *)(**(code **)(lVar10 + 0x10))
                                       (*(undefined8 *)(lVar10 + 8),lVar10,plVar19,&puStack_78,
                                        &uStack_7c);
            uVar16 = auStack_c0[3];
            uVar9 = uStack_9c;
          }
          else {
            uVar6 = thunk_FUN_0224e54c((long)plVar23 + lVar8 + 0x20,
                                       *(long *)(*(long *)(lVar10 + 0x68) + 0x80) + 0x40);
            uVar14 = uStack_98;
            func_0x04608620(puStack_90,uVar6,uStack_98);
            lVar10 = *(long *)(uVar16 + 0x20);
            ppppuVar1 = (undefined8 ****)pppuStack_88;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x70) + 0x28)) {
              ppppuVar1 = &pppuStack_88;
            }
            func_0x04608620(plVar12,ppppuVar1,uVar14);
            lVar11 = *(long *)(lVar10 + 0xc0);
            lVar10 = *(long *)(lVar11 + 8);
            if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_02229718(lVar10);
              lVar11 = *(long *)(*(long *)(uVar16 + 0x20) + 0xc0);
            }
            uVar9 = uStack_9c;
            plVar22 = plVar12;
            puVar20 = puStack_90;
            if (-1 < *(int *)(*(long *)(lVar11 + 0x70) + 0x28)) {
              puVar20 = (undefined8 *)*puStack_90;
              plVar22 = (long *)*plVar12;
            }
            lVar11 = *plVar19;
            uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar14 != 0) {
              piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar10) {
                  lVar10 = lVar11 + (long)*piVar17 * 0x10 + 0x138;
                  goto LAB_0292f238;
                }
                uVar14 = uVar14 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar14 != 0);
            }
            lVar10 = FUN_02229a4c(plVar19,lVar10,0);
LAB_0292f238:
            lVar10 = *(long *)(lVar10 + 8);
            puStack_78 = puVar20;
            plStack_70 = plVar22;
            puVar5 = (uint *)(**(code **)(lVar10 + 0x10))
                                       (*(undefined8 *)(lVar10 + 8),lVar10,plVar19,&puStack_78,
                                        &uStack_7c);
          }
          if ((char)uStack_7c != '\0') {
            if ((int)(uint)uVar13 < 0) {
              lVar10 = *(long *)(lVar4 + 0x10);
              puVar5 = (uint *)thunk_FUN_0224e54c((long)plVar23 + lVar8 + 0x20,
                                                  *(long *)(*(long *)(*(long *)(*(long *)(uVar16 + 
                                                  0x20) + 0xc0) + 0x68) + 0x80) + 0x20);
              if (lVar10 == 0) goto LAB_0292f454;
              uVar14 = auStack_c0[2];
              if (*(uint *)(lVar10 + 0x18) <= (uint)auStack_c0[0]) goto LAB_0292f488;
              *(uint *)(lVar10 + auStack_c0[0] * 4 + 0x20) = *puVar5 + 1;
            }
            else {
              plVar12 = *(long **)(lVar4 + 0x18);
              if (plVar12 == (long *)0x0) {
LAB_0292f454:
                lVar4 = *(long *)(auStack_c0[2] + 0x28);
                goto LAB_0292f45c;
              }
              puVar5 = (uint *)thunk_FUN_0224e54c((long)plVar23 + lVar8 + 0x20,
                                                  *(long *)(*(long *)(*(long *)(*(long *)(uVar16 + 
                                                  0x20) + 0xc0) + 0x68) + 0x80) + 0x20);
              if (*(uint *)(plVar12 + 3) <= (uint)uVar13) goto LAB_0292f46c;
              FUN_020186fc((long)plVar12 + *(uint *)(*plVar12 + 0x104) * uVar13 + 0x20,
                           *(long *)(*(long *)(*(long *)(*(long *)(uVar16 + 0x20) + 0xc0) + 0x68) +
                                    0x80) + 0x20,*puVar5);
            }
            uVar13 = uStack_98;
            uVar14 = auStack_c0[2];
            uVar21 = auStack_c0[1];
            FUN_020186fc((long)plVar23 + lVar8 + 0x20,
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(uVar16 + 0x20) + 0xc0) + 0x68) + 0x80),
                         0xffffffff);
            FUN_020186fc((long)plVar23 + lVar8 + 0x20,
                         *(long *)(*(long *)(*(long *)(*(long *)(uVar16 + 0x20) + 0xc0) + 0x68) +
                                  0x80) + 0x20,*(undefined4 *)(lVar4 + 0x24));
            uVar7 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(uVar16 + 0x20) + 0xc0) + 0x1d0)
                                );
            if ((uVar7 & 1) != 0) {
              uVar6 = thunk_FUN_0224e54c((long)plVar23 + lVar8 + 0x20,
                                         *(long *)(*(long *)(*(long *)(*(long *)(uVar16 + 0x20) +
                                                                      0xc0) + 0x68) + 0x80) + 0x40);
              func_0x04608670(uVar6,0,uVar13);
            }
            uVar13 = FUN_021f1190(*(undefined8 *)
                                   (*(long *)(*(long *)(uVar16 + 0x20) + 0xc0) + 0x1d8));
            if ((uVar13 & 1) != 0) {
              uVar6 = thunk_FUN_0224e54c((long)plVar23 + lVar8 + 0x20,
                                         *(long *)(*(long *)(*(long *)(*(long *)(uVar16 + 0x20) +
                                                                      0xc0) + 0x68) + 0x80) + 0x60);
              func_0x04608670(uVar6,0,uVar21);
            }
            puVar5 = (uint *)0x1;
            *(uint *)(lVar4 + 0x24) = uVar24;
            *(ulong *)(lVar4 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(lVar4 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(lVar4 + 0x28) + 1);
            goto LAB_0292f298;
          }
        }
        puVar5 = (uint *)thunk_FUN_0224e54c((long)plVar23 + lVar8 + 0x20,
                                            *(long *)(*(long *)(*(long *)(*(long *)(uVar16 + 0x20) +
                                                                         0xc0) + 0x68) + 0x80) +
                                            0x20);
        uVar13 = (ulong)uVar24;
        uVar14 = auStack_c0[2];
        uVar24 = *puVar5;
      } while (-1 < (int)*puVar5);
    }
  }
  puVar5 = (uint *)0x0;
LAB_0292f298:
  if (*(long *)(uVar14 + 0x28) == lStack_68) {
    return;
  }
LAB_0292f484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}

