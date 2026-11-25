/* IL2CPP: Carrier.<AddBlock>d__116$$MoveNext
void Carrier__AddBlock_d__116__MoveNext (Carrier__AddBlock_d__116_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0250ae90) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Carrier.<AddBlock>d__116$$MoveNext
   void Carrier__AddBlock_d__116__MoveNext (Carrier__AddBlock_d__116_o __this, const MethodInfo*
   method); */

void Carrier__AddBlock_d__116__MoveNext_240a264
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,int *param_4)

{
  ushort uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b0 [16];
  long lStack_98;
  int iStack_8c;
  int *piStack_88;
  undefined1 auStack_80 [16];
  
  piStack_88 = param_4;
  if ((bRam0000000004f4b6ee & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2938);
    FUN_021f03f8(PTR_DAT_049c2940);
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c2948);
    FUN_021f03f8(PTR_DAT_049c2950);
    FUN_021f03f8(PTR_DAT_049c2958);
    FUN_021f03f8(PTR_DAT_049c1c80);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1520);
    FUN_021f03f8(PTR_DAT_049c1528);
    FUN_021f03f8(PTR_DAT_049c2960);
    FUN_021f03f8(PTR_DAT_049c2968);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b6ee = 1;
  }
  iStack_8c = *param_4;
  lStack_98 = *(long *)(param_4 + 8);
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  lStack_e0 = 0;
  uStack_d8 = 0;
  if (iStack_8c == 0) {
    auStack_b0 = *(undefined1 (*) [16])(param_4 + 0x12);
    param_4[0x12] = 0;
    param_4[0x13] = 0;
    param_4[0x14] = 0;
    param_4[0x15] = 0;
    iStack_8c = -1;
    *param_4 = -1;
    goto LAB_0250a3d4;
  }
  if (iStack_8c == 1) {
    auStack_b0 = *(undefined1 (*) [16])(param_4 + 0x12);
    param_4[0x12] = 0;
    param_4[0x13] = 0;
    param_4[0x14] = 0;
    param_4[0x15] = 0;
    iStack_8c = -1;
    *param_4 = -1;
LAB_0250ab64:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar5 = auStack_b0._0_8_;
    if ((long *)auStack_b0._0_8_ != (long *)0x0) {
      lVar9 = *(long *)auStack_b0._0_8_;
      uVar16 = auStack_b0._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_0250abe4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02229a4c(auStack_b0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0250abe4:
      (*(code *)*puVar7)(uVar5,uVar16,puVar7[1]);
    }
    if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
LAB_0250abfc:
    piVar12 = piStack_88 + 0x10;
    piVar12[0] = 0;
    piVar12[1] = 0;
    piStack_88[0xc] = 0;
    piStack_88[0xd] = 0;
    piStack_88[0xe] = 0;
    thunk_FUN_021f190c(piVar12,0);
    iVar4 = 0x13;
  }
  else {
    if (*(long *)(param_4 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Block__SetContainer_23dc64c(*(long *)(param_4 + 6),lStack_98,0);
    if (*(long *)(piStack_88 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = *(long *)(*(long *)(piStack_88 + 6) + 0x140);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Rigidbody__set_isKinematic_3c8a7bc(lVar9,1,0);
    if (*(long *)(piStack_88 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = *(long *)(*(long *)(piStack_88 + 6) + 0x140);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Rigidbody__set_detectCollisions_3c8a944(lVar9,0,0);
    if (*(long *)(piStack_88 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = *(long *)(*(long *)(piStack_88 + 6) + 0x140);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Rigidbody__set_interpolation_3c8ad64(lVar9,0,0);
    if (*(long *)(piStack_88 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = *(long *)(*(long *)(piStack_88 + 6) + 0x148);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Collider__set_enabled_3c855c0(lVar9,0,0);
    if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_98 + 0x1f8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
              (*(long *)(lStack_98 + 0x1f8),*(undefined8 *)(piStack_88 + 6),
               *(undefined8 *)PTR_DAT_049c2948);
    if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = *(long *)(lStack_98 + 0x1e0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar17 = *(undefined4 *)(lVar9 + 0x18);
    FUN_02333498(lVar9,*(undefined8 *)(piStack_88 + 6),*(undefined8 *)PTR_DAT_049c1c80);
    if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_98 + 0x1e8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_80._0_4_ = uVar17;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (*(long *)(lStack_98 + 0x1e8),*(undefined8 *)(piStack_88 + 6),auStack_80,
               *(undefined8 *)PTR_DAT_049c2940);
    if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar24 = Carrier__GetBlockCoordinate_2408bc0(lStack_98,uVar17);
    *(undefined1 (*) [12])(piStack_88 + 0xc) = auVar24;
    puVar2 = PTR_DAT_049c1410;
    if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = *(long *)(lStack_98 + 0x1d0);
    lVar10 = *(long *)(piStack_88 + 6);
    if (*(int *)(*(long *)PTR_DAT_049c1410 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar11 = FUN_024f5708(lVar9,*(undefined8 *)(lVar10 + 0x60),*(undefined8 *)PTR_DAT_049c2960);
    if ((uVar11 & 1) != 0) {
      if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar9 = *(long *)(lStack_98 + 0x1d0);
      lVar10 = *(long *)(piStack_88 + 6);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      FUN_024f581c(lVar9,*(undefined8 *)(lVar10 + 0x60),*(undefined8 *)PTR_DAT_049c2968);
    }
    lVar9 = lStack_98;
    if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar11 = Carrier__HasReachedCompleteCount_2409564(lStack_98);
    if (((uVar11 & 1) != 0) &&
       (uVar11 = Carrier__AreAllBlocksSameColor_23fad40(lVar9), (uVar11 & 1) != 0)) {
      if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Carrier__SetComplete_240882c();
    }
    if (*(long *)(piStack_88 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = UnityEngine_Component__get_transform_3c18724(*(long *)(piStack_88 + 6),0);
    *(undefined8 *)(piStack_88 + 0x10) = uVar5;
    thunk_FUN_021f190c();
    if (*(long *)(piStack_88 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__set_parent_3c2ded4(*(long *)(piStack_88 + 0x10),0,0);
    if ((char)piStack_88[10] == '\0') {
LAB_0250a7c0:
      if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(piStack_88 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_Transform__set_parent_3c2ded4
                (*(long *)(piStack_88 + 0x10),*(undefined8 *)(lStack_98 + 0xc0),0);
      if ((char)piStack_88[10] != '\0') {
        if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(long *)(lStack_98 + 0x150) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar11 = SandFlowSystem__DrivesIntake_24ce56c
                           (*(long *)(lStack_98 + 0x150),*(undefined8 *)(piStack_88 + 6),0);
        if ((uVar11 & 1) == 0) {
          if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          if (*(long *)(lStack_98 + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          HapticModule__PlaySoft_2535438(*(long *)(lStack_98 + 0x148),0);
        }
      }
      if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar17 = Carrier__CoordinateToLocalPosition_2408cbc
                         (lStack_98,*(undefined8 *)(piStack_88 + 0xc),piStack_88[0xe]);
      lVar9 = *(long *)(piStack_88 + 6);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_c8 = *(undefined8 *)(lVar9 + 0x128);
      uStack_d0 = *(undefined8 *)(lVar9 + 0x120);
      uStack_c0 = *(undefined4 *)(lVar9 + 0x130);
      lVar9 = *(long *)(*(long *)PTR_DAT_049c1528 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02229718();
      }
      pcVar6 = (char *)thunk_FUN_0224e54c(&uStack_d0,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
      if (*pcVar6 == '\0') {
        if (cRam0000000004f4a191 == '\0') {
          FUN_021f03f8(PTR_DAT_049bc158);
          cRam0000000004f4a191 = '\x01';
        }
        puVar8 = *(undefined4 **)(*(long *)PTR_DAT_049bc158 + 0xb8);
        uVar19 = *puVar8;
        uVar20 = puVar8[1];
        uVar21 = puVar8[2];
        uVar22 = puVar8[3];
      }
      else {
        lVar13 = *(long *)PTR_DAT_049c1520;
        lVar10 = *(long *)(lVar13 + 0x20);
        uVar1 = *(ushort *)(lVar10 + 0x135);
        lVar9 = lVar10;
        if ((uVar1 & 1) == 0) {
          lVar9 = FUN_02229718();
          lVar10 = *(long *)(lVar13 + 0x20);
          uVar1 = *(ushort *)(lVar10 + 0x135);
        }
        uVar19 = *(undefined4 *)(**(long **)(lVar9 + 0xc0) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar10 = FUN_02229718();
        }
        uVar5 = thunk_FUN_0224e54c(&uStack_d0,
                                   *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x20)
        ;
        func_0x04608620(auStack_80,uVar5,uVar19);
        uVar19 = auStack_80._0_4_;
        uVar20 = auStack_80._4_4_;
        uVar21 = auStack_80._8_4_;
        uVar22 = auStack_80._12_4_;
      }
      lVar9 = *(long *)(piStack_88 + 0x10);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lStack_98 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar18 = *(float *)(*(long *)(lStack_98 + 0x170) + 0x34);
      lVar10 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      UnityEngine_Transform__set_localScale_3c2ddfc
                (*(float *)(lVar10 + 0xc) * fVar18,*(float *)(lVar10 + 0x10) * fVar18,
                 *(float *)(lVar10 + 0x14) * fVar18,lVar9,0);
      if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lStack_98 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(piStack_88 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Block__SetMesh_23dc584
                (*(long *)(piStack_88 + 6),*(undefined8 *)(*(long *)(lStack_98 + 0x158) + 0x18),0);
      if ((char)piStack_88[10] != '\0') {
        if (*(long *)(piStack_88 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        auVar23 = Block__ApplyMoveToCarrierMotion_23dbb90
                            (uVar17,param_2,param_3,uVar19,uVar20,uVar21,uVar22,
                             *(long *)(piStack_88 + 6),0);
        puVar2 = PTR_DAT_049b5138;
        if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auStack_80 = auVar23;
        thunk_FUN_021f190c(auStack_80,0);
        auStack_b0 = auStack_80;
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
        uVar5 = auStack_b0._0_8_;
        if ((long *)auStack_b0._0_8_ != (long *)0x0) {
          lVar9 = *(long *)auStack_b0._0_8_;
          uVar16 = auStack_b0._8_8_ & 0xffff;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0250ab50;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_02229a4c(auStack_b0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0250ab50:
          iVar4 = (*(code *)*puVar7)(uVar5,uVar16,puVar7[1]);
          if (iVar4 == 0) {
            iStack_8c = 1;
            *piStack_88 = 1;
            *(undefined1 (*) [16])(piStack_88 + 0x12) = auStack_b0;
            thunk_FUN_021f190c(piStack_88 + 0x12,0);
            FUN_0235c25c(piStack_88 + 2,auStack_b0,piStack_88,*(undefined8 *)PTR_DAT_049c2938);
            goto LAB_0250ae84;
          }
        }
        goto LAB_0250ab64;
      }
      if (*(long *)(piStack_88 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0250af2c to 0260b027 has its CatchHandler @ 0250af2c
                       catch() { ... } // from try @ 0250af2c with catch @ 0250af2c
                       catch() { ... } // from try @ 0250b094 with catch @ 0250af2c
                       catch() { ... } // from try @ 0250b100 with catch @ 0250af2c
                       catch() { ... } // from try @ 0250b128 with catch @ 0250af2c
                       catch() { ... } // from try @ 0250b154 with catch @ 0250af2c
                       catch() { ... } // from try @ 0250b178 with catch @ 0250af2c */
        FUN_021f06a0();
      }
      UnityEngine_Transform__set_localPosition_3c2c450
                (uVar17,param_2,param_3,*(long *)(piStack_88 + 0x10),0);
      if (*(long *)(piStack_88 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_Transform__set_localRotation_3c2d9f0
                (uVar19,uVar20,uVar21,uVar22,*(long *)(piStack_88 + 0x10),0);
      goto LAB_0250abfc;
    }
    fVar18 = (float)piStack_88[0xb];
    if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar5 = System_TimeSpan__FromSeconds_311711c((double)fVar18,0);
    puVar2 = PTR_DAT_049b5138;
    if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar15 = *(undefined8 *)(lStack_98 + 0x98);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_80 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar5,0,8,uVar15,0,0);
    thunk_FUN_021f190c(auStack_80,0);
    auStack_b0 = auStack_80;
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
    uVar5 = auStack_b0._0_8_;
    if ((long *)auStack_b0._0_8_ == (long *)0x0) {
LAB_0250a3d4:
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar5 = auStack_b0._0_8_;
      if ((long *)auStack_b0._0_8_ != (long *)0x0) {
        lVar9 = *(long *)auStack_b0._0_8_;
        uVar16 = auStack_b0._8_8_ & 0xffff;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_0250a7b0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_02229a4c(auStack_b0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0250a7b0:
        (*(code *)*puVar7)(uVar5,uVar16,puVar7[1]);
      }
      goto LAB_0250a7c0;
    }
    lVar9 = *(long *)auStack_b0._0_8_;
    uVar16 = auStack_b0._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0250ae34;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(auStack_b0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0250ae34:
    iVar4 = (*(code *)*puVar7)(uVar5,uVar16,puVar7[1]);
    if (iVar4 != 0) goto LAB_0250a3d4;
    iStack_8c = 0;
    *piStack_88 = 0;
    *(undefined1 (*) [16])(piStack_88 + 0x12) = auStack_b0;
    thunk_FUN_021f190c(piStack_88 + 0x12,0);
    FUN_0235c25c(piStack_88 + 2,auStack_b0,piStack_88,*(undefined8 *)PTR_DAT_049c2938);
LAB_0250ae84:
    iVar4 = 8;
  }
  if (iStack_8c < 0) {
    if ((lStack_98 == 0) || (*(long *)(lStack_98 + 0x1f8) == 0)) {
LAB_0250ae8c:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(lStack_98 + 0x1f8),*(undefined8 *)(piStack_88 + 6),
               *(undefined8 *)PTR_DAT_049c2950);
    if (*(long *)(piStack_88 + 6) == 0) goto LAB_0250ae8c;
    Block__CompleteContainer_23dcb18(*(long *)(piStack_88 + 6),0);
  }
  if (iVar4 != 0x13) {
    if (iVar4 == 0x12) goto LAB_0250ad24;
    if (iVar4 != 0) {
      return;
    }
  }
  if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar14 = *(long **)(lStack_98 + 0x188);
  lStack_e0 = lStack_98;
  uStack_d8 = 0;
  thunk_FUN_021f190c(&lStack_e0);
  uStack_d8 = *(undefined8 *)(piStack_88 + 6);
  thunk_FUN_021f190c(&uStack_d8);
  uVar5 = uStack_d8;
  lVar9 = lStack_e0;
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar10 = *plVar14;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049c2958) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0250ad10;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)PTR_DAT_049c2958,0);
LAB_0250ad10:
  (*(code *)*puVar7)(plVar14,lVar9,uVar5,puVar7[1]);
LAB_0250ad24:
  piVar12 = piStack_88;
  cVar3 = cRam0000000004f49bfa;
  *piStack_88 = -2;
  if (cVar3 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar14 = *(long **)(piVar12 + 2);
  if (plVar14 != (long *)0x0) {
    lVar9 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_0250adb0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)PTR_DAT_049b56d0,2);
LAB_0250adb0:
    (*(code *)*puVar7)(plVar14,puVar7[1]);
  }
  return;
}

