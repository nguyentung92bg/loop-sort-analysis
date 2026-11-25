/* IL2CPP: CollectItems.<ApplyHomeAction>d__6$$MoveNext
void CollectItems__ApplyHomeAction_d__6__MoveNext (CollectItems__ApplyHomeAction_d__6_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x026116a0) */
/* IL2CPP: CollectItems.<ApplyHomeAction>d__6$$MoveNext
   void CollectItems__ApplyHomeAction_d__6__MoveNext (CollectItems__ApplyHomeAction_d__6_o __this,
   const MethodInfo* method); */

void CollectItems__ApplyHomeAction_d__6__MoveNext_2511060(uint *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  uint *puVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  uint **ppuStack_f0;
  undefined8 uStack_e8;
  uint *puStack_e0;
  long *plStack_d8;
  undefined8 *puStack_d0;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  uint uStack_64;
  uint *puStack_58;
  
  puStack_58 = param_1;
  if ((bRam0000000004f4bdf2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9228);
    FUN_021f03f8(PTR_DAT_049c9230);
    FUN_021f03f8(PTR_DAT_049c3e70);
    FUN_021f03f8(PTR_DAT_049c9238);
    FUN_021f03f8(PTR_DAT_049c3e78);
    FUN_021f03f8(PTR_DAT_049c3e80);
    FUN_021f03f8(PTR_DAT_049c9240);
    FUN_021f03f8(PTR_DAT_049c4640);
    FUN_021f03f8(PTR_DAT_049c9248);
    FUN_021f03f8(PTR_DAT_049c3e88);
    FUN_021f03f8(PTR_DAT_049c4648);
    FUN_021f03f8(PTR_DAT_049c2dd0);
    FUN_021f03f8(PTR_DAT_049c8ca0);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bdf2 = 1;
  }
  uStack_64 = *param_1;
  lVar15 = *(long *)(param_1 + 6);
  uStack_78 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  lStack_70 = lVar15;
  if (1 < uStack_64) {
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar10 = Monitors__Get_object__26889d0(*(long *)(lVar15 + 0x10),*(undefined8 *)PTR_DAT_049c2dd0)
    ;
    *(undefined8 *)(lVar15 + 0x30) = uVar10;
    thunk_FUN_021f190c((undefined8 *)(lVar15 + 0x30));
    lVar15 = lStack_70;
    if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_70 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar10 = Monitors__Get_object__26889d0
                       (*(long *)(lStack_70 + 0x10),*(undefined8 *)PTR_DAT_049c8ca0);
    *(undefined8 *)(lVar15 + 0x38) = uVar10;
    thunk_FUN_021f190c((undefined8 *)(lVar15 + 0x38));
    if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_70 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    HomeMonitor__DisableRaycasterExceptPlay_24462b4(*(long *)(lStack_70 + 0x30),lStack_70,0);
    if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar15 = *(long *)(lStack_70 + 0x28);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar13 = *(long *)PTR_DAT_049c4640;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    uVar11 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
    if ((uVar11 & 1) == 0) {
      *(undefined4 *)(lVar15 + 0x18) = 0;
    }
    else {
      iVar9 = *(int *)(lVar15 + 0x18);
      *(undefined4 *)(lVar15 + 0x18) = 0;
      if (0 < iVar9) {
        System_Array__Clear_31229cc(*(undefined8 *)(lVar15 + 0x10),0,iVar9,0);
      }
    }
  }
  puVar6 = PTR_DAT_049c9240;
  puVar5 = PTR_DAT_049c9238;
  puVar4 = PTR_DAT_049b54e0;
  puVar3 = PTR_DAT_049b5138;
  puStack_e0 = &uStack_64;
  puStack_d0 = &uStack_b8;
  uStack_e8 = 0;
  plStack_d8 = &lStack_70;
  if (uStack_64 == 1) {
    uStack_64 = 0xffffffff;
    auStack_a0 = *(undefined1 (*) [16])(puStack_58 + 0x10);
    puStack_58[0x10] = 0;
    puStack_58[0x11] = 0;
    puStack_58[0x12] = 0;
    puStack_58[0x13] = 0;
    *puStack_58 = 0xffffffff;
    goto LAB_02611824;
  }
  if (uStack_64 != 0) {
    if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_70 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(lStack_70 + 0x20),auStack_120,*(undefined8 *)PTR_DAT_049c9248);
    auStack_100._8_8_ = auStack_120._8_8_;
    auStack_100._0_8_ = auStack_120._0_8_;
    ppuStack_f0 = (uint **)uStack_110;
    *(undefined8 *)(puStack_58 + 0xc) = auStack_120._8_8_;
    *(undefined8 *)(puStack_58 + 10) = auStack_120._0_8_;
    *(undefined8 *)(puStack_58 + 0xe) = uStack_110;
    thunk_FUN_021f190c(puStack_58 + 10,0);
    auStack_100._8_8_ = &uStack_64;
    auStack_100._0_8_ = 0;
    ppuStack_f0 = &puStack_58;
    if (uStack_64 != 0) goto LAB_02611438;
  }
  ppuStack_f0 = &puStack_58;
  auStack_100._8_8_ = &uStack_64;
  auStack_100._0_8_ = 0;
  uStack_64 = 0xffffffff;
  auStack_a0 = *(undefined1 (*) [16])(puStack_58 + 0x10);
  puStack_58[0x10] = 0;
  puStack_58[0x11] = 0;
  puStack_58[0x12] = 0;
  puStack_58[0x13] = 0;
  *puStack_58 = 0xffffffff;
  do {
    do {
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar10 = auStack_a0._0_8_;
      if ((long *)auStack_a0._0_8_ != (long *)0x0) {
        lVar15 = *(long *)auStack_a0._0_8_;
        uVar18 = auStack_a0._8_8_ & 0xffff;
        uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar11 != 0) {
          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar15 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_02611428;
            }
            uVar11 = uVar11 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar11 != 0);
        }
        puVar12 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)puVar4,2);
LAB_02611428:
        (*(code *)*puVar12)(uVar10,uVar18,puVar12[1]);
      }
LAB_02611438:
      do {
        uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (puStack_58 + 10,*(undefined8 *)puVar5);
        puVar8 = puStack_58;
        if ((uVar11 & 1) == 0) {
          iVar9 = 10;
          goto LAB_026115e8;
        }
        lVar16 = *(long *)puVar6;
        lVar13 = *(long *)(lVar16 + 0x20);
        uVar2 = *(ushort *)(lVar13 + 0x135);
        lVar15 = lVar13;
        if ((uVar2 & 1) == 0) {
          lVar15 = FUN_02229718();
          lVar13 = *(long *)(lVar16 + 0x20);
          uVar2 = *(ushort *)(lVar13 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar13 = FUN_02229718();
        }
        uVar10 = thunk_FUN_0224e54c(puVar8 + 10,
                                    *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(auStack_120,uVar10,uVar1);
        if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(long *)(lStack_70 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar11 = HomeMonitor__TryGetLiveOpsSlot_2447404
                           (*(long *)(lStack_70 + 0x30),auStack_120._0_8_ & 0xffffffff,&uStack_88,0)
        ;
      } while ((uVar11 & 1) == 0);
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_138 = uStack_80;
      uStack_140 = uStack_88;
      uStack_130 = uStack_78;
      CollectItems__TryCollectItem_250e810(lStack_70,&uStack_140);
      uVar10 = *(undefined8 *)(puStack_58 + 8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar19 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(300,0,8,uVar10,0,0);
      auStack_120 = auVar19;
      thunk_FUN_021f190c(auStack_120,0);
      auStack_a0 = auStack_120;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar10 = auStack_a0._0_8_;
    } while ((long *)auStack_a0._0_8_ == (long *)0x0);
    lVar15 = *(long *)auStack_a0._0_8_;
    uVar18 = auStack_a0._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar11 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0261163c;
        }
        uVar11 = uVar11 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)puVar4,0);
LAB_0261163c:
    iVar9 = (*(code *)*puVar12)(uVar10,uVar18,puVar12[1]);
  } while (iVar9 != 0);
  uStack_64 = 0;
  *puStack_58 = 0;
  *(undefined1 (*) [16])(puStack_58 + 0x10) = auStack_a0;
  thunk_FUN_021f190c(puStack_58 + 0x10,0);
  FUN_0235c25c(puStack_58 + 2,auStack_a0,puStack_58,*(undefined8 *)PTR_DAT_049c9228);
  iVar9 = 9;
LAB_026115e8:
  if ((int)uStack_64 < 0) {
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (*ppuStack_f0 + 10,*(undefined8 *)PTR_DAT_049c9230);
  }
  if ((iVar9 == 10) || (iVar9 == 0)) {
    puStack_58[0xc] = 0;
    puStack_58[0xd] = 0;
    puStack_58[0xe] = 0;
    puStack_58[0xf] = 0;
    puStack_58[10] = 0;
    puStack_58[0xb] = 0;
    while( true ) {
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lStack_70 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(*(long *)(lStack_70 + 0x28) + 0x18) < 1) break;
      uVar10 = *(undefined8 *)(puStack_58 + 8);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar19 = Cysharp_Threading_Tasks_UniTask__Yield_37c8000(uVar10,0,0);
      auStack_100 = auVar19;
      thunk_FUN_021f190c(auStack_100,0);
      auStack_a0 = auStack_100;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar10 = auStack_a0._0_8_;
      if ((long *)auStack_a0._0_8_ != (long *)0x0) {
        lVar15 = *(long *)auStack_a0._0_8_;
        uVar18 = auStack_a0._8_8_ & 0xffff;
        uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar11 != 0) {
          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_02611810;
            }
            uVar11 = uVar11 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar11 != 0);
        }
        puVar12 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)puVar4,0);
LAB_02611810:
        iVar9 = (*(code *)*puVar12)(uVar10,uVar18,puVar12[1]);
        if (iVar9 == 0) {
          uStack_64 = 1;
          *puStack_58 = 1;
          *(undefined1 (*) [16])(puStack_58 + 0x10) = auStack_a0;
          thunk_FUN_021f190c(puStack_58 + 0x10,0);
          FUN_0235c25c(puStack_58 + 2,auStack_a0,puStack_58,*(undefined8 *)PTR_DAT_049c9228);
          iVar9 = 9;
          goto LAB_02611914;
        }
      }
LAB_02611824:
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar10 = auStack_a0._0_8_;
      if ((long *)auStack_a0._0_8_ != (long *)0x0) {
        lVar15 = *(long *)auStack_a0._0_8_;
        uVar18 = auStack_a0._8_8_ & 0xffff;
        uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar11 != 0) {
          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar15 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_0261189c;
            }
            uVar11 = uVar11 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar11 != 0);
        }
        puVar12 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)puVar4,2);
LAB_0261189c:
        (*(code *)*puVar12)(uVar10,uVar18,puVar12[1]);
      }
    }
    iVar9 = 0xe;
  }
LAB_02611914:
  FUN_0201f2dc(&uStack_e8);
  puVar8 = puStack_58;
  cVar7 = cRam0000000004f49bfa;
  if ((iVar9 == 0) || (iVar9 == 0xe)) {
    *puStack_58 = 0xfffffffe;
    if (cVar7 == '\0') {
      FUN_021f03f8(PTR_DAT_049b56d0);
      cRam0000000004f49bfa = '\x01';
    }
    plVar17 = *(long **)(puVar8 + 2);
    if (plVar17 != (long *)0x0) {
      lVar15 = *plVar17;
      uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar11 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b56d0) {
            puVar12 = (undefined8 *)(lVar15 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_026119b4;
          }
          uVar11 = uVar11 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar11 != 0);
      }
      puVar12 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)PTR_DAT_049b56d0,2);
LAB_026119b4:
      (*(code *)*puVar12)(plVar17,puVar12[1]);
    }
  }
  return;
}

