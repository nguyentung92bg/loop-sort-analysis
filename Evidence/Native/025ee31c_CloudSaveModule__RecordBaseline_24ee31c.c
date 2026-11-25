/* IL2CPP: CloudSaveModule$$RecordBaseline
void CloudSaveModule__RecordBaseline (CloudSaveModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule$$RecordBaseline
   void CloudSaveModule__RecordBaseline (CloudSaveModule_o* __this, const MethodInfo* method); */

void CloudSaveModule__RecordBaseline_24ee31c(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *****pppppuVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  int *piVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  uint uVar27;
  ulong auStack_c0 [4];
  uint uStack_9c;
  ulong uStack_98;
  undefined8 *puStack_90;
  undefined8 ****ppppuStack_88;
  uint uStack_7c;
  undefined8 *puStack_78;
  long *plStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4bce8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8008);
    FUN_021f03f8(PTR_DAT_049c5120);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bce8 = 1;
  }
  puVar3 = PTR_DAT_049b5310;
  plVar21 = *(long **)(param_1 + 0x10);
  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar13 = *plVar21;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_049c8008) {
        puVar5 = (undefined8 *)(lVar13 + (long)(*piVar20 + 2) * 0x10 + 0x138);
        goto LAB_025ee3c8;
      }
      uVar15 = uVar15 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar15 != 0);
  }
  puVar5 = (undefined8 *)FUN_02229a4c(plVar21,*(long *)PTR_DAT_049c8008,2);
LAB_025ee3c8:
  uVar6 = (*(code *)*puVar5)(plVar21,puVar5[1]);
  uVar15 = System_String__IsNullOrEmpty_2f7c924(uVar6,0);
  if ((uVar15 & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (*(int *)(*(long *)PTR_DAT_049c5120 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar4 = PTR_DAT_049c5120;
    lVar13 = *(long *)(*(long *)puVar3 + 0xb8);
    if ((bRam0000000004f5c3ec & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c5120,uVar6,0);
      bRam0000000004f5c3ec = 1;
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar3 = PTR_DAT_049c5120;
    if ((bRam0000000004f5c3ea & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049b9d88);
      FUN_021f03f8(PTR_DAT_049c5120);
      bRam0000000004f5c3ea = 1;
    }
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_021f0574();
      lVar10 = *(long *)puVar3;
    }
    if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (**(long **)(lVar10 + 0xb8),*(undefined8 *)(lVar13 + 0x980),uVar6,
               *(undefined8 *)PTR_DAT_049b9d88);
    uVar15 = UnityEngine_PlayerPrefs__TrySetSetString_3c0f86c
                       (*(undefined8 *)(lVar13 + 0x980),uVar6,0);
    if ((uVar15 & 1) == 0) {
      thunk_FUN_02256840(PTR_DAT_04a264f8);
      uVar6 = thunk_FUN_0222ca34();
      uVar9 = thunk_FUN_02256840(PTR_DAT_04a26500);
      UnityEngine_PlayerPrefsException___ctor_3c0f474(uVar6,uVar9);
      uVar9 = thunk_FUN_02256840(PTR_DAT_04a26518);
                    /* WARNING: Subroutine does not return */
      FUN_021f0564(uVar6,uVar9);
    }
    return;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (*(int *)(*(long *)PTR_DAT_049c5120 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c5120;
  lVar13 = *(long *)(*(long *)puVar3 + 0xb8);
  if ((bRam0000000004f5c3eb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b9da8,0);
    FUN_021f03f8(PTR_DAT_049c5120);
    bRam0000000004f5c3eb = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_PlayerPrefs__DeleteKey_3c10484(*(undefined8 *)(lVar13 + 0x980),0);
  lVar10 = **(long **)(*(long *)puVar4 + 0xb8);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  pppppuVar11 = *(undefined8 ******)(lVar13 + 0x980);
  lVar13 = *(long *)PTR_DAT_049b9da8;
  uVar15 = tpidr_el0;
  lStack_68 = *(long *)(uVar15 + 0x28);
  lVar22 = *(long *)(lVar13 + 0x20);
  lVar16 = *(long *)(lVar22 + 0xc0);
  lVar14 = *(long *)(lVar16 + 0x70);
  uVar18 = *(uint *)(lVar14 + 0xfc);
  uVar24 = (ulong)uVar18;
  auStack_c0[3] = lVar13;
  ppppuStack_88 = pppppuVar11;
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_02229718(lVar14);
    lVar22 = *(long *)(lVar13 + 0x20);
    uVar18 = *(uint *)(lVar14 + 0xfc);
    lVar16 = *(long *)(lVar22 + 0xc0);
    lVar14 = *(long *)(lVar16 + 0x70);
  }
  lVar13 = (long)auStack_c0 - ((ulong)(uVar18 + 0x10) + 0xf & 0x1fffffff0);
  uVar19 = uVar24 + 0xf & 0x1fffffff0;
  uVar18 = *(uint *)(*(long *)(lVar16 + 0x78) + 0xfc);
  puVar5 = (undefined8 *)(lVar13 - uVar19);
  plVar21 = (long *)((long)puVar5 - uVar19);
  if (-1 < *(int *)(lVar14 + 0x28)) {
    pppppuVar11 = &ppppuStack_88;
  }
  func_0x04608620(puVar5,pppppuVar11,uVar24);
  puStack_90 = puVar5;
  uVar19 = FUN_021f0650(*(undefined8 *)(*(long *)(lVar22 + 0xc0) + 0x70),puVar5);
  if ((uVar19 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_3111684(5,0);
  }
  if (*(long *)(lVar10 + 0x10) != 0) {
    plVar26 = *(long **)(lVar10 + 0x30);
    lVar22 = *(long *)(auStack_c0[3] + 0x20);
    lVar16 = *(long *)(lVar22 + 0xc0);
    lVar14 = *(long *)(lVar16 + 0x70);
    if (plVar26 == (long *)0x0) {
      lVar22 = lVar14;
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_02229718(lVar14);
        lVar16 = *(long *)(*(long *)(auStack_c0[3] + 0x20) + 0xc0);
        lVar22 = *(long *)(lVar16 + 0x70);
      }
      uVar19 = auStack_c0[3];
      pppppuVar11 = (undefined8 *****)ppppuStack_88;
      if (-1 < *(int *)(lVar22 + 0x28)) {
        pppppuVar11 = &ppppuStack_88;
      }
      puVar7 = (uint *)FUN_021f1078(lVar14,*(undefined8 *)(lVar16 + 400),lVar13,pppppuVar11,0,
                                    &puStack_78);
      uVar12 = (uint)puStack_78;
    }
    else {
      pppppuVar11 = (undefined8 *****)ppppuStack_88;
      if (-1 < *(int *)(lVar14 + 0x28)) {
        pppppuVar11 = &ppppuStack_88;
      }
      func_0x04608620(puStack_90,pppppuVar11,uVar24);
      lVar14 = *(long *)(lVar22 + 0xc0);
      lVar13 = *(long *)(lVar14 + 8);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_02229718(lVar13);
        lVar14 = *(long *)(*(long *)(auStack_c0[3] + 0x20) + 0xc0);
      }
      uVar19 = auStack_c0[3];
      puVar5 = puStack_90;
      if (-1 < *(int *)(*(long *)(lVar14 + 0x70) + 0x28)) {
        puVar5 = (undefined8 *)*puStack_90;
      }
      lVar14 = *plVar26;
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar13) {
            lVar13 = lVar14 + (long)(*piVar20 + 1) * 0x10 + 0x138;
            goto LAB_0292ef78;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      lVar13 = FUN_02229a4c(plVar26,lVar13,1);
LAB_0292ef78:
      lVar13 = *(long *)(lVar13 + 8);
      puStack_78 = puVar5;
      puVar7 = (uint *)(**(code **)(lVar13 + 0x10))
                                 (*(undefined8 *)(lVar13 + 8),lVar13,plVar26,&puStack_78,&uStack_7c)
      ;
      uVar12 = uStack_7c;
    }
    lVar13 = *(long *)(lVar10 + 0x10);
    if (lVar13 == 0) {
      lVar13 = *(long *)(uVar15 + 0x28);
LAB_0292f45c:
      if (lVar13 == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_0292f484;
    }
    uVar27 = *(uint *)(lVar13 + 0x18);
    uVar12 = uVar12 & 0x7fffffff;
    iVar2 = 0;
    if (uVar27 != 0) {
      iVar2 = (int)uVar12 / (int)uVar27;
    }
    uVar1 = uVar12 - iVar2 * uVar27;
    if (uVar27 <= uVar1) {
LAB_0292f488:
      lVar13 = *(long *)(uVar15 + 0x28);
LAB_0292f474:
      if (lVar13 == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      goto LAB_0292f484;
    }
    uVar27 = *(int *)(lVar13 + (ulong)uVar1 * 4 + 0x20) - 1;
    if (-1 < (int)uVar27) {
      uVar17 = 0xffffffff;
      auStack_c0[0] = (ulong)uVar1;
      auStack_c0[1] = (ulong)uVar18;
      auStack_c0[2] = uVar15;
      uStack_9c = uVar12;
      uStack_98 = uVar24;
      do {
        plVar26 = *(long **)(lVar10 + 0x18);
        if (plVar26 == (long *)0x0) goto LAB_0292f454;
        if (*(uint *)(plVar26 + 3) <= uVar27) {
LAB_0292f46c:
          lVar13 = *(long *)(auStack_c0[2] + 0x28);
          goto LAB_0292f474;
        }
        lVar13 = (ulong)*(uint *)(*plVar26 + 0x104) * (ulong)uVar27;
        puVar7 = (uint *)thunk_FUN_0224e54c((long)plVar26 + lVar13 + 0x20,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) +
                                                       0x68) + 0x80));
        if (*puVar7 == uVar12) {
          plVar23 = *(long **)(lVar10 + 0x30);
          lVar14 = *(long *)(*(long *)(uVar19 + 0x20) + 0xc0);
          if (plVar23 == (long *)0x0) {
            plVar23 = (long *)FUN_026b1a00(*(undefined8 *)(lVar14 + 0x18));
            uVar6 = thunk_FUN_0224e54c((long)plVar26 + lVar13 + 0x20,
                                       *(long *)(*(long *)(*(long *)(*(long *)(uVar19 + 0x20) + 0xc0
                                                                    ) + 0x68) + 0x80) + 0x40);
            puVar5 = puStack_90;
            uVar15 = uStack_98;
            func_0x04608620(puStack_90,uVar6,uStack_98);
            lVar14 = *(long *)(uVar19 + 0x20);
            pppppuVar11 = (undefined8 *****)ppppuStack_88;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x70) + 0x28)) {
              pppppuVar11 = &ppppuStack_88;
            }
            puVar7 = (uint *)func_0x04608620(plVar21,pppppuVar11,uVar15);
            if (plVar23 == (long *)0x0) goto LAB_0292f454;
            plStack_70 = plVar21;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x70) + 0x28)) {
              puVar5 = (undefined8 *)*puVar5;
              plStack_70 = (long *)*plVar21;
            }
            lVar14 = *(long *)(*plVar23 + 0x1c0);
            puStack_78 = puVar5;
            puVar7 = (uint *)(**(code **)(lVar14 + 0x10))
                                       (*(undefined8 *)(lVar14 + 8),lVar14,plVar23,&puStack_78,
                                        &uStack_7c);
            uVar19 = auStack_c0[3];
            uVar12 = uStack_9c;
          }
          else {
            uVar6 = thunk_FUN_0224e54c((long)plVar26 + lVar13 + 0x20,
                                       *(long *)(*(long *)(lVar14 + 0x68) + 0x80) + 0x40);
            uVar15 = uStack_98;
            func_0x04608620(puStack_90,uVar6,uStack_98);
            lVar14 = *(long *)(uVar19 + 0x20);
            pppppuVar11 = (undefined8 *****)ppppuStack_88;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x70) + 0x28)) {
              pppppuVar11 = &ppppuStack_88;
            }
            func_0x04608620(plVar21,pppppuVar11,uVar15);
            lVar16 = *(long *)(lVar14 + 0xc0);
            lVar14 = *(long *)(lVar16 + 8);
            if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
              lVar14 = FUN_02229718(lVar14);
              lVar16 = *(long *)(*(long *)(uVar19 + 0x20) + 0xc0);
            }
            uVar12 = uStack_9c;
            plVar25 = plVar21;
            puVar5 = puStack_90;
            if (-1 < *(int *)(*(long *)(lVar16 + 0x70) + 0x28)) {
              puVar5 = (undefined8 *)*puStack_90;
              plVar25 = (long *)*plVar21;
            }
            lVar16 = *plVar23;
            uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar15 != 0) {
              piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == lVar14) {
                  lVar14 = lVar16 + (long)*piVar20 * 0x10 + 0x138;
                  goto LAB_0292f238;
                }
                uVar15 = uVar15 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar15 != 0);
            }
            lVar14 = FUN_02229a4c(plVar23,lVar14,0);
LAB_0292f238:
            lVar14 = *(long *)(lVar14 + 8);
            puStack_78 = puVar5;
            plStack_70 = plVar25;
            puVar7 = (uint *)(**(code **)(lVar14 + 0x10))
                                       (*(undefined8 *)(lVar14 + 8),lVar14,plVar23,&puStack_78,
                                        &uStack_7c);
          }
          if ((char)uStack_7c != '\0') {
            if ((int)(uint)uVar17 < 0) {
              lVar14 = *(long *)(lVar10 + 0x10);
              puVar7 = (uint *)thunk_FUN_0224e54c((long)plVar26 + lVar13 + 0x20,
                                                  *(long *)(*(long *)(*(long *)(*(long *)(uVar19 + 
                                                  0x20) + 0xc0) + 0x68) + 0x80) + 0x20);
              if (lVar14 == 0) goto LAB_0292f454;
              uVar15 = auStack_c0[2];
              if (*(uint *)(lVar14 + 0x18) <= (uint)auStack_c0[0]) goto LAB_0292f488;
              *(uint *)(lVar14 + auStack_c0[0] * 4 + 0x20) = *puVar7 + 1;
            }
            else {
              plVar21 = *(long **)(lVar10 + 0x18);
              if (plVar21 == (long *)0x0) {
LAB_0292f454:
                lVar13 = *(long *)(auStack_c0[2] + 0x28);
                goto LAB_0292f45c;
              }
              puVar7 = (uint *)thunk_FUN_0224e54c((long)plVar26 + lVar13 + 0x20,
                                                  *(long *)(*(long *)(*(long *)(*(long *)(uVar19 + 
                                                  0x20) + 0xc0) + 0x68) + 0x80) + 0x20);
              if (*(uint *)(plVar21 + 3) <= (uint)uVar17) goto LAB_0292f46c;
              FUN_020186fc((long)plVar21 + *(uint *)(*plVar21 + 0x104) * uVar17 + 0x20,
                           *(long *)(*(long *)(*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 0x68) +
                                    0x80) + 0x20,*puVar7);
            }
            uVar17 = uStack_98;
            uVar15 = auStack_c0[2];
            uVar24 = auStack_c0[1];
            FUN_020186fc((long)plVar26 + lVar13 + 0x20,
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 0x68) + 0x80),
                         0xffffffff);
            FUN_020186fc((long)plVar26 + lVar13 + 0x20,
                         *(long *)(*(long *)(*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 0x68) +
                                  0x80) + 0x20,*(undefined4 *)(lVar10 + 0x24));
            uVar8 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 0x1d0)
                                );
            if ((uVar8 & 1) != 0) {
              uVar6 = thunk_FUN_0224e54c((long)plVar26 + lVar13 + 0x20,
                                         *(long *)(*(long *)(*(long *)(*(long *)(uVar19 + 0x20) +
                                                                      0xc0) + 0x68) + 0x80) + 0x40);
              func_0x04608670(uVar6,0,uVar17);
            }
            uVar17 = FUN_021f1190(*(undefined8 *)
                                   (*(long *)(*(long *)(uVar19 + 0x20) + 0xc0) + 0x1d8));
            if ((uVar17 & 1) != 0) {
              uVar6 = thunk_FUN_0224e54c((long)plVar26 + lVar13 + 0x20,
                                         *(long *)(*(long *)(*(long *)(*(long *)(uVar19 + 0x20) +
                                                                      0xc0) + 0x68) + 0x80) + 0x60);
              func_0x04608670(uVar6,0,uVar24);
            }
            puVar7 = (uint *)0x1;
            *(uint *)(lVar10 + 0x24) = uVar27;
            *(ulong *)(lVar10 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(lVar10 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(lVar10 + 0x28) + 1);
            goto LAB_0292f298;
          }
        }
        puVar7 = (uint *)thunk_FUN_0224e54c((long)plVar26 + lVar13 + 0x20,
                                            *(long *)(*(long *)(*(long *)(*(long *)(uVar19 + 0x20) +
                                                                         0xc0) + 0x68) + 0x80) +
                                            0x20);
        uVar17 = (ulong)uVar27;
        uVar15 = auStack_c0[2];
        uVar27 = *puVar7;
      } while (-1 < (int)*puVar7);
    }
  }
  puVar7 = (uint *)0x0;
LAB_0292f298:
  if (*(long *)(uVar15 + 0x28) == lStack_68) {
    return;
  }
LAB_0292f484:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar7);
}

