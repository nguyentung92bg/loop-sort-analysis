/* IL2CPP: LevelAnimationSystem.<ApplyLevelEnter>d__31$$MoveNext
void LevelAnimationSystem__ApplyLevelEnter_d__31__MoveNext (LevelAnimationSystem__ApplyLevelEnter_d__31_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025da640) */
/* WARNING: Removing unreachable block (ram,0x025d9a38) */
/* WARNING: Removing unreachable block (ram,0x025d98c4) */
/* WARNING: Removing unreachable block (ram,0x025da684) */
/* WARNING: Removing unreachable block (ram,0x025d9f08) */
/* WARNING: Removing unreachable block (ram,0x025da64c) */
/* WARNING: Removing unreachable block (ram,0x025da674) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LevelAnimationSystem.<ApplyLevelEnter>d__31$$MoveNext
   void LevelAnimationSystem__ApplyLevelEnter_d__31__MoveNext
   (LevelAnimationSystem__ApplyLevelEnter_d__31_o __this, const MethodInfo* method); */

void LevelAnimationSystem__ApplyLevelEnter_d__31__MoveNext_24d94a8
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,int *param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_100;
  int *piStack_f8;
  undefined8 *puStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 *puStack_d0;
  int iStack_c4;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  
  if ((bRam0000000004f4bc4a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049c7820);
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c2550);
    FUN_021f03f8(PTR_DAT_049c6b50);
    FUN_021f03f8(PTR_DAT_049c2558);
    FUN_021f03f8(PTR_DAT_049c6b58);
    FUN_021f03f8(PTR_DAT_049c2560);
    FUN_021f03f8(PTR_DAT_049c6b60);
    FUN_021f03f8(PTR_DAT_049c2bd8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c7828);
    FUN_021f03f8(PTR_DAT_049c7830);
    FUN_021f03f8(PTR_DAT_049c59c0);
    FUN_021f03f8(PTR_DAT_049c6b68);
    FUN_021f03f8(PTR_DAT_049c2568);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c20a0);
    FUN_021f03f8(PTR_DAT_049c20a8);
    FUN_021f03f8(PTR_DAT_049c2808);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c2248);
    FUN_021f03f8(PTR_DAT_049c22d8);
    FUN_021f03f8(PTR_DAT_049c7838);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4bc4a = 1;
  }
  puVar5 = PTR_DAT_049c6b68;
  puVar6 = PTR_DAT_049c6b60;
  puVar4 = PTR_DAT_049c6b58;
  auStack_e0._0_8_ = 0;
  auStack_e0._8_8_ = 0;
  puStack_d0 = (undefined8 *)0x0;
  uStack_100 = 0;
  piStack_f8 = (int *)0x0;
  puStack_f0 = (undefined8 *)0x0;
  uStack_120._0_4_ = 0;
  uStack_120._4_4_ = 0;
  lStack_118 = 0;
  puStack_110 = (undefined8 *)0x0;
  auStack_130._0_8_ = 0;
  auStack_130._8_8_ = 0;
  auStack_140._8_8_ = 0;
  auStack_140._0_8_ = 0;
  iStack_c4 = *param_4;
  lVar16 = *(long *)(param_4 + 6);
  auStack_150._0_8_ = 0;
  auStack_150._8_8_ = 0;
  if (iStack_c4 != 0) {
    if (iStack_c4 != 1) {
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar16 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar13 = 0;
      iVar19 = Dreamteck_Splines_SplineUser__CalculateLength_235e064
                         (0,0x3ff0000000000000,*(long *)(lVar16 + 0x58),1,0);
      param_4[8] = iVar19;
      if (*(long *)(lVar16 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Dreamteck_Splines_SplineUser__set_clipTo_235accc(0,*(long *)(lVar16 + 0x58),0);
      if (*(long *)(lVar16 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar15 = (long *)(param_4 + 10);
      *plVar15 = *(long *)(*(long *)(lVar16 + 0x60) + 0x58);
      thunk_FUN_021f190c(plVar15);
      if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*plVar15,auStack_c0,*(undefined8 *)puVar5);
      auStack_e0._0_8_ = auStack_c0;
      puStack_d0 = puStack_b0;
      auStack_c0 = (undefined1  [8])0x0;
      puStack_b0 = (undefined8 *)auStack_e0;
      auStack_e0._8_8_ = lStack_b8;
      lStack_b8 = (long)&iStack_c4;
      while (uVar18 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (auStack_e0,*(undefined8 *)puVar4), (uVar18 & 1) != 0) {
        lVar17 = *(long *)puVar6;
        lVar9 = *(long *)(lVar17 + 0x20);
        uVar1 = *(ushort *)(lVar9 + 0x135);
        lVar11 = lVar9;
        if ((uVar1 & 1) == 0) {
          lVar11 = FUN_02229718();
          lVar9 = *(long *)(lVar17 + 0x20);
          uVar1 = *(ushort *)(lVar9 + 0x135);
        }
        uVar28 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar9 = FUN_02229718();
        }
        uVar10 = thunk_FUN_0224e54c(auStack_e0,
                                    *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60)
        ;
        func_0x04608620(&lStack_a8,uVar10,uVar28);
        if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar11 = UnityEngine_Component__get_transform_3c18724(lStack_a8,0);
        if (cRam0000000004f4a233 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a233 = '\x01';
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        puVar12 = *(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        uVar13 = (ulong)(uint)puVar12[1];
        param_3 = puVar12[2];
        UnityEngine_Transform__set_localScale_3c2ddfc(*puVar12,lVar11,0);
      }
      if (iStack_c4 < 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (puStack_b0,*(undefined8 *)PTR_DAT_049c6b50);
      }
      if (*(long *)(lVar16 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar15 = (long *)(param_4 + 0xc);
      *plVar15 = *(long *)(*(long *)(lVar16 + 0x68) + 0x58);
      thunk_FUN_021f190c(plVar15);
      if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*plVar15,auStack_c0,*(undefined8 *)PTR_DAT_049c2568);
      puVar7 = PTR_DAT_049c2560;
      puVar2 = PTR_DAT_049c2558;
      puStack_f0 = puStack_b0;
      piStack_f8 = (int *)lStack_b8;
      uStack_100 = auStack_c0;
      auStack_c0 = (undefined1  [8])0x0;
      puStack_b0 = &uStack_100;
      lStack_b8 = (long)&iStack_c4;
      while (uVar18 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (&uStack_100,*(undefined8 *)puVar2), (uVar18 & 1) != 0) {
        lVar17 = *(long *)puVar7;
        lVar9 = *(long *)(lVar17 + 0x20);
        uVar1 = *(ushort *)(lVar9 + 0x135);
        lVar11 = lVar9;
        if ((uVar1 & 1) == 0) {
          lVar11 = FUN_02229718();
          lVar9 = *(long *)(lVar17 + 0x20);
          uVar1 = *(ushort *)(lVar9 + 0x135);
        }
        uVar28 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar9 = FUN_02229718();
        }
        uVar10 = thunk_FUN_0224e54c(&uStack_100,
                                    *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60)
        ;
        func_0x04608620(&lStack_a8,uVar10,uVar28);
        if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar11 = UnityEngine_GameObject__get_transform_3c1ca74(lStack_a8,0);
        if (*(int *)(*(long *)PTR_DAT_049c1690 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        puVar12 = *(undefined4 **)(*(long *)PTR_DAT_049c1690 + 0xb8);
        uVar13 = (ulong)(uint)puVar12[1];
        param_3 = puVar12[2];
        UnityEngine_Transform__set_localScale_3c2ddfc(*puVar12,lVar11,0);
      }
      if (iStack_c4 < 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (puStack_b0,*(undefined8 *)PTR_DAT_049c2550);
      }
      lVar11 = *(long *)(lVar16 + 0x118);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar9 = *(long *)PTR_DAT_049c59c0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      uVar18 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
      if ((uVar18 & 1) == 0) {
        *(undefined4 *)(lVar11 + 0x18) = 0;
      }
      else {
        iVar19 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        if (0 < iVar19) {
          System_Array__Clear_31229cc(*(undefined8 *)(lVar11 + 0x10),0,iVar19,0);
        }
      }
      lVar11 = *(long *)(lVar16 + 0xa8);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lStack_b8 = 0;
      puStack_b0 = (undefined8 *)0x0;
      auStack_c0 = (undefined1  [8])((ulong)*(uint *)(lVar11 + 0x30) << 0x20);
      thunk_FUN_021f190c(&lStack_b8,0);
      puStack_b0 = *(undefined8 **)(lVar11 + 0x28);
      thunk_FUN_021f190c(&puStack_b0);
      puVar7 = PTR_DAT_049c7838;
      puVar2 = PTR_DAT_049c22d8;
      lStack_118 = lStack_b8;
      uStack_120 = (long)auStack_c0;
      puStack_110 = puStack_b0;
      do {
        puVar3 = PTR_DAT_049b5138;
        uVar24 = (uint)uVar13;
        iVar19 = (int)uStack_120 + -1;
        uStack_120 = CONCAT44(uStack_120._4_4_,iVar19);
        if (iVar19 < 0) {
          uStack_120._4_4_ = uStack_120._4_4_ - 1;
          uStack_120._0_4_ = iVar19;
          if ((int)uStack_120._4_4_ < 0) {
            uVar10 = *(undefined8 *)(lVar16 + 0x118);
            if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
              FUN_021f0574();
            }
            auVar33 = Cysharp_Threading_Tasks_UniTask__WhenAll_37cc4d0(uVar10,0);
            _auStack_c0 = Cysharp_Threading_Tasks_UniTaskExtensions__AttachExternalCancellation_37da07c
                                    (auVar33._0_8_,auVar33._8_8_,*(undefined8 *)(lVar16 + 0x20),0);
            thunk_FUN_021f190c(auStack_c0,0);
            auStack_130 = _auStack_c0;
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
            uVar10 = auStack_130._0_8_;
            if ((long *)auStack_130._0_8_ == (long *)0x0) goto LAB_025d96bc;
            lVar11 = *(long *)auStack_130._0_8_;
            uVar18 = auStack_130._8_8_ & 0xffff;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 == 0) goto LAB_025da54c;
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto LAB_025da534;
          }
          lVar11 = puStack_110[(ulong)uStack_120._4_4_ + 4];
          lStack_118 = *(long *)(lVar11 + 0x18);
          thunk_FUN_021f190c((ulong)&uStack_120 | 8);
          iVar19 = *(int *)(lVar11 + 0x30) + -1;
          uStack_120 = CONCAT44(uStack_120._4_4_,iVar19);
        }
        if (*(long *)(lVar16 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar10 = *(undefined8 *)(lStack_118 + (long)iVar19 * 8 + 0x20);
        plVar15 = (long *)FUN_024f6008(*(long *)(lVar16 + 0xb0),uVar10,*(undefined8 *)puVar2);
        lVar11 = *plVar15;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar9 = UnityEngine_Component__get_transform_3c18724(lVar11,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar29 = UnityEngine_Transform__get_position_3c2d540(lVar9,0);
        uVar28 = param_3;
        uVar25 = uVar24;
        LevelAnimationSystem__GetPositionOutOfCameraBounds_24d89c4(lVar16,lVar9);
        UnityEngine_Transform__set_position_3c2d61c(lVar9,0);
        uVar30 = UnityEngine_Transform__get_position_3c2d540(lVar9,0);
        if (*(long *)(lVar16 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar13 = FUN_024f5708(*(long *)(lVar16 + 0xb8),uVar10,*(undefined8 *)puVar7);
        if ((uVar13 & 1) == 0) {
          lVar11 = UnityEngine_Component__get_transform_3c18724(lVar11,0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar13 = (ulong)uVar24;
          UnityEngine_Transform__set_position_3c2d61c(uVar29,uVar13,param_3,lVar11,0);
        }
        else {
          Carrier__ApplyCloseBackMotion_2407754(lVar11,1,0);
          uVar13 = (ulong)uVar25;
          LevelAnimationSystem__ApplyMoveMotion_24d7e8c
                    (uVar30,uVar13,uVar28,uVar29,uVar24,param_3,lVar16,lVar11);
          param_3 = uVar28;
        }
      } while( true );
    }
    auStack_130 = *(undefined1 (*) [16])(param_4 + 0xe);
    param_4[0xe] = 0;
    param_4[0xf] = 0;
    param_4[0x10] = 0;
    param_4[0x11] = 0;
    iStack_c4 = -1;
    *param_4 = -1;
    auStack_140 = ZEXT816(0);
    goto LAB_025d9cd0;
  }
  auStack_130 = *(undefined1 (*) [16])(param_4 + 0xe);
  param_4[0xe] = 0;
  param_4[0xf] = 0;
  param_4[0x10] = 0;
  param_4[0x11] = 0;
  iStack_c4 = -1;
  *param_4 = -1;
  goto LAB_025d96bc;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_025da534:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_025da5b4;
    }
  }
LAB_025da54c:
  puVar8 = (undefined8 *)FUN_02229a4c(auStack_130._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025da5b4:
  iVar19 = (*(code *)*puVar8)(uVar10,uVar18,puVar8[1]);
  if (iVar19 == 0) {
    iStack_c4 = 0;
    *param_4 = 0;
    *(undefined1 (*) [16])(param_4 + 0xe) = auStack_130;
    thunk_FUN_021f190c(param_4 + 0xe,0);
    FUN_0235c25c(param_4 + 2,auStack_130,param_4,*(undefined8 *)PTR_DAT_049c7820);
    return;
  }
LAB_025d96bc:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar10 = auStack_130._0_8_;
  if ((long *)auStack_130._0_8_ != (long *)0x0) {
    lVar11 = *(long *)auStack_130._0_8_;
    uVar18 = auStack_130._8_8_ & 0xffff;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_025d9aa8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_130._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025d9aa8:
    (*(code *)*puVar8)(uVar10,uVar18,puVar8[1]);
  }
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar15 = *(long **)(lVar16 + 0x50);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar11 = *plVar15;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049c7828) {
        puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_025d9b18;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar8 = (undefined8 *)FUN_02229a4c(plVar15,*(long *)PTR_DAT_049c7828,0);
LAB_025d9b18:
  (*(code *)*puVar8)(plVar15,0,puVar8[1]);
  if (*(long *)(lVar16 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar10 = PrefabModuleExtensions__Rent_object__269ed94
                     (*(undefined8 *)(lVar16 + 0x70),
                      *(undefined8 *)(*(long *)(lVar16 + 0x78) + 0x40),
                      *(undefined8 *)PTR_DAT_049c2248);
  *(undefined8 *)(lVar16 + 0xc0) = uVar10;
  thunk_FUN_021f190c();
  auStack_140 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,(float)param_4[8] * _UNK_013aa674,0);
  uVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2058);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar10,lVar16,*(undefined8 *)PTR_DAT_049c7830,0);
  auVar33 = FUN_024f6d0c(auStack_140,uVar10,*(undefined8 *)PTR_DAT_049c20a8);
  auVar33 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                      (auVar33._0_8_,auVar33._8_8_ & 0xffffffff,*(undefined8 *)(lVar16 + 0x20),0);
  puVar2 = PTR_DAT_049b5138;
  if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
    FUN_021f0574();
  }
  _auStack_c0 = auVar33;
  thunk_FUN_021f190c(auStack_c0,0);
  auStack_130 = _auStack_c0;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar10 = auStack_130._0_8_;
  if ((long *)auStack_130._0_8_ != (long *)0x0) {
    lVar11 = *(long *)auStack_130._0_8_;
    uVar18 = auStack_130._8_8_ & 0xffff;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_025d9cbc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_130._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025d9cbc:
    iVar19 = (*(code *)*puVar8)(uVar10,uVar18,puVar8[1]);
    if (iVar19 == 0) {
      iStack_c4 = 1;
      *param_4 = 1;
      *(undefined1 (*) [16])(param_4 + 0xe) = auStack_130;
      thunk_FUN_021f190c(param_4 + 0xe,0);
      FUN_0235c25c(param_4 + 2,auStack_130,param_4,*(undefined8 *)PTR_DAT_049c7820);
      return;
    }
  }
LAB_025d9cd0:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar10 = auStack_130._0_8_;
  if ((long *)auStack_130._0_8_ != (long *)0x0) {
    lVar11 = *(long *)auStack_130._0_8_;
    uVar18 = auStack_130._8_8_ & 0xffff;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_025d9d50;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_130._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025d9d50:
    (*(code *)*puVar8)(uVar10,uVar18,puVar8[1]);
  }
  lVar11 = *(long *)(param_4 + 10);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lVar11,auStack_c0,*(undefined8 *)puVar5);
  auStack_e0 = _auStack_c0;
  puVar5 = PTR_DAT_049c1670;
  puStack_d0 = puStack_b0;
  lStack_b8 = (long)&iStack_c4;
  auStack_c0 = (undefined1  [8])0x0;
  puStack_b0 = (undefined8 *)auStack_e0;
  while( true ) {
    uVar13 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (auStack_e0,*(undefined8 *)puVar4);
    if ((uVar13 & 1) == 0) break;
    lVar17 = *(long *)puVar6;
    lVar9 = *(long *)(lVar17 + 0x20);
    uVar1 = *(ushort *)(lVar9 + 0x135);
    lVar11 = lVar9;
    if ((uVar1 & 1) == 0) {
      lVar11 = FUN_02229718();
      lVar9 = *(long *)(lVar17 + 0x20);
      uVar1 = *(ushort *)(lVar9 + 0x135);
    }
    uVar28 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    uVar10 = thunk_FUN_0224e54c(auStack_e0,
                                *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_a8,uVar10,uVar28);
    if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar10 = UnityEngine_Component__get_transform_3c18724(lStack_a8,0);
    lVar11 = *(long *)PTR_DAT_049c1690;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      FUN_021f0574();
      lVar11 = *(long *)PTR_DAT_049c1690;
    }
    puVar12 = *(undefined4 **)(lVar11 + 0xb8);
    uVar28 = *puVar12;
    uVar29 = puVar12[1];
    uVar30 = puVar12[2];
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    lVar11 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    auVar33 = LitMotion_LMotion__Create_2eaa1b4
                        (uVar28,uVar29,uVar30,*(undefined4 *)(lVar11 + 0xc),
                         *(undefined4 *)(lVar11 + 0x10),*(undefined4 *)(lVar11 + 0x14),0x3f000000,0)
    ;
    auVar33 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                        (auVar33._0_8_,auVar33._8_8_,uVar10,*(undefined8 *)puVar5);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
              (auVar33._0_8_,auVar33._8_8_ & 0xffffffff,*(undefined8 *)(lVar16 + 0x20),0);
  }
  if (iStack_c4 < 0) {
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (puStack_b0,*(undefined8 *)PTR_DAT_049c6b50);
  }
  lVar11 = *(long *)(param_4 + 0xc);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lVar11,auStack_c0,*(undefined8 *)PTR_DAT_049c2568);
  puVar3 = PTR_DAT_049c2bd8;
  puVar7 = PTR_DAT_049c2808;
  puVar2 = PTR_DAT_049c2558;
  puVar5 = PTR_DAT_049c20a0;
  puVar6 = PTR_DAT_049c1680;
  puVar4 = PTR_DAT_049b6110;
  uVar29 = _UNK_013aa8fc;
  uVar28 = _UNK_013aa62c;
  piStack_f8 = (int *)lStack_b8;
  uStack_100 = auStack_c0;
  puStack_f0 = puStack_b0;
  puStack_b0 = &uStack_100;
  auStack_c0 = (undefined1  [8])0x0;
  lStack_b8 = (long)&iStack_c4;
  while( true ) {
    uVar13 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&uStack_100,*(undefined8 *)puVar2);
    if ((uVar13 & 1) == 0) break;
    lVar17 = *(long *)PTR_DAT_049c2560;
    lVar9 = *(long *)(lVar17 + 0x20);
    uVar1 = *(ushort *)(lVar9 + 0x135);
    lVar11 = lVar9;
    if ((uVar1 & 1) == 0) {
      lVar11 = FUN_02229718();
      lVar9 = *(long *)(lVar17 + 0x20);
      uVar1 = *(ushort *)(lVar9 + 0x135);
    }
    uVar30 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    uVar10 = thunk_FUN_0224e54c(&uStack_100,
                                *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_a8,uVar10,uVar30);
    if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = UnityEngine_GameObject__get_transform_3c1ca74(lStack_a8,0);
    lVar9 = *(long *)PTR_DAT_049c1690;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_021f0574();
      lVar9 = *(long *)PTR_DAT_049c1690;
    }
    puVar12 = *(undefined4 **)(lVar9 + 0xb8);
    uVar30 = *puVar12;
    fVar31 = (float)puVar12[1];
    fVar32 = (float)puVar12[2];
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    lVar9 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    auVar33 = LitMotion_LMotion__Create_2eaa1b4
                        (uVar30,fVar31,fVar32,*(undefined4 *)(lVar9 + 0xc),
                         *(undefined4 *)(lVar9 + 0x10),*(undefined4 *)(lVar9 + 0x14),0x3f000000,0);
    auStack_150 = auVar33;
    auVar33 = FUN_024f4e50(auStack_150,0x1b,*(undefined8 *)puVar6);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar33 = Extensions__BindToLocalScaleNonNegative___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25eebec
                        (auVar33._0_8_,auVar33._8_8_,lVar11,*(undefined8 *)puVar3);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
              (auVar33._0_8_,auVar33._8_8_ & 0xffffffff,*(undefined8 *)(lVar16 + 0x20),0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar30 = UnityEngine_Transform__get_position_3c2d540(lVar11,0);
    fVar26 = fVar32;
    fVar22 = fVar31;
    fVar20 = (float)UnityEngine_Transform__get_position_3c2d540(lVar11,0);
    fVar27 = fVar26;
    fVar23 = fVar22;
    fVar21 = (float)UnityEngine_Transform__get_forward_3c2db78(lVar11,0);
    auVar33 = LitMotion_LMotion__Create_2eaa1b4
                        (fVar20 - fVar21,fVar22 - fVar23,fVar26 - fVar27,uVar30,fVar31,fVar32,uVar28
                         ,0);
    auStack_150 = auVar33;
    auVar33 = FUN_024f4e50(auStack_150,0x1a,*(undefined8 *)puVar6);
    auStack_150 = auVar33;
    auVar33 = FUN_024f6e90(uVar29,auStack_150,0,0,*(undefined8 *)puVar7);
    auVar33 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                        (auVar33._0_8_,auVar33._8_8_,lVar11,*(undefined8 *)puVar5);
    LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
              (auVar33._0_8_,auVar33._8_8_ & 0xffffffff,*(undefined8 *)(lVar16 + 0x20),0);
  }
  if (iStack_c4 < 0) {
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (puStack_b0,*(undefined8 *)PTR_DAT_049c2550);
  }
  *param_4 = -2;
  param_4[10] = 0;
  param_4[0xb] = 0;
  thunk_FUN_021f190c(param_4 + 10,0);
  param_4[0xc] = 0;
  param_4[0xd] = 0;
  thunk_FUN_021f190c(param_4 + 0xc,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar15 = *(long **)(param_4 + 2);
  if (plVar15 != (long *)0x0) {
    lVar16 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar8 = (undefined8 *)(lVar16 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_025da56c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plVar15,*(long *)PTR_DAT_049b56d0,2);
LAB_025da56c:
    (*(code *)*puVar8)(plVar15,puVar8[1]);
  }
  return;
}

