/* IL2CPP: WinFireworkVariant.<HandleMotion>d__6$$MoveNext
void WinFireworkVariant__HandleMotion_d__6__MoveNext (WinFireworkVariant__HandleMotion_d__6_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: WinFireworkVariant.<HandleMotion>d__6$$MoveNext
   void WinFireworkVariant__HandleMotion_d__6__MoveNext (WinFireworkVariant__HandleMotion_d__6_o
   __this, const MethodInfo* method); */

void WinFireworkVariant__HandleMotion_d__6__MoveNext_24938dc(int *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000004f4ba8e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5fc8);
    FUN_021f03f8(PTR_DAT_049c1b50);
    FUN_021f03f8(PTR_DAT_049c2bd8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c2bc0);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4ba8e = 1;
  }
  puVar5 = PTR_DAT_049c2288;
  puVar4 = PTR_DAT_049c1b50;
  puVar3 = PTR_DAT_049c1690;
  puVar2 = PTR_DAT_049b5138;
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  auStack_a0._8_8_ = 0;
  auStack_a0._0_8_ = 0;
  auVar1 = ZEXT816(0);
  uStack_88 = 0;
  uStack_90 = 0;
  iVar6 = *param_1;
  lVar13 = *(long *)(param_1 + 4);
  auStack_c0._0_8_ = 0;
  auStack_c0._8_8_ = 0;
  auVar20 = ZEXT816(0);
  uStack_c8 = 0;
  if (iVar6 == 0) {
    auStack_b0 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_02593c18:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar16 = auStack_b0._0_8_;
    if ((long *)auStack_b0._0_8_ != (long *)0x0) {
      lVar10 = *(long *)auStack_b0._0_8_;
      uVar15 = auStack_b0._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_02593c98;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02229a4c(auStack_b0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02593c98:
      (*(code *)*puVar7)(uVar16,uVar15,puVar7[1]);
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar13 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    AudioModule__GetPlayer_2530858(auStack_f0,*(long *)(lVar13 + 0x38),0);
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    auStack_a0 = auStack_f0;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    AudioPlayer__WithVolumeScale_25310e8(auStack_f0,_UNK_013aa3e4,auStack_a0,0);
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    auStack_a0 = auStack_f0;
    if (*(long *)(lVar13 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    AudioPlayer__Play_2530c98(auStack_a0,*(undefined8 *)(lVar10 + 0x30),0);
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_021f0574();
      lVar10 = *(long *)puVar3;
    }
    puVar8 = *(undefined4 **)(lVar10 + 0xb8);
    uVar17 = *puVar8;
    uVar18 = puVar8[1];
    uVar19 = puVar8[2];
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    lVar10 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    auStack_c0 = LitMotion_LMotion__Create_2eaa1b4
                           (uVar17,uVar18,uVar19,*(undefined4 *)(lVar10 + 0xc),
                            *(undefined4 *)(lVar10 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                            _UNK_013aa4f4,0);
    lVar10 = *(long *)puVar5;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_021f0574();
      lVar10 = *(long *)puVar5;
    }
    auVar20 = FUN_02526574(auStack_c0,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x60),
                           *(undefined8 *)PTR_DAT_049c2bc0);
    auStack_c0 = auVar20;
    auVar20 = FUN_024f4e50(auStack_c0,0x1b,*(undefined8 *)PTR_DAT_049c1680);
    uVar16 = *(undefined8 *)(param_1 + 6);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar20 = Extensions__BindToLocalScaleNonNegative___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25eebec
                        (auVar20._0_8_,auVar20._8_8_,uVar16,*(undefined8 *)PTR_DAT_049c2bd8);
    LitMotion_MotionHandleExtensions__AddTo_2eace68
              (auVar20._0_8_,auVar20._8_8_ & 0xffffffff,lVar13,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar20 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(0x578,1,8,0,0,0);
    auStack_f0 = auVar20;
    thunk_FUN_021f190c(auStack_f0,0);
    auStack_b0 = auStack_f0;
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
    uVar16 = auStack_b0._0_8_;
    auVar20 = auStack_c0;
    auVar1 = auStack_a0;
    if ((long *)auStack_b0._0_8_ != (long *)0x0) {
      lVar10 = *(long *)auStack_b0._0_8_;
      uVar15 = auStack_b0._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02593f20;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02229a4c(auStack_b0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02593f20:
      iVar6 = (*(code *)*puVar7)(uVar16,uVar15,puVar7[1]);
      auVar20 = auStack_c0;
      auVar1 = auStack_a0;
      if (iVar6 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_b0;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c420(param_1 + 2,auStack_b0,param_1,*(undefined8 *)PTR_DAT_049c5fc8);
        return;
      }
    }
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 2) {
        auStack_b0 = *(undefined1 (*) [16])(param_1 + 8);
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        *param_1 = -1;
        auStack_c0 = auVar20;
        auStack_a0 = auVar1;
        goto LAB_025941dc;
      }
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar13 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      AudioModule__GetPlayer_2530858(auStack_f0,*(long *)(lVar13 + 0x38),0);
      auStack_a0._8_8_ = auStack_f0._8_8_;
      auStack_a0._0_8_ = auStack_f0._0_8_;
      uStack_88 = uStack_d8;
      uStack_90 = uStack_e0;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      AudioPlayer__WithVolumeScale_25310e8(auStack_f0,_UNK_013aa3e4,auStack_a0,0);
      auStack_a0._8_8_ = auStack_f0._8_8_;
      auStack_a0._0_8_ = auStack_f0._0_8_;
      uStack_88 = uStack_d8;
      uStack_90 = uStack_e0;
      if (*(long *)(lVar13 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      AudioPlayer__Play_2530c98(auStack_a0,*(undefined8 *)(lVar10 + 0x28),0);
      StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(lVar13,0xcc12786d,0);
      lVar10 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                         (lVar13,0x1e28bddf,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar10 = UnityEngine_GameObject__get_transform_3c1ca74(lVar10,0);
      plVar14 = (long *)(param_1 + 6);
      *plVar14 = lVar10;
      thunk_FUN_021f190c(plVar14);
      lVar10 = *plVar14;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      puVar8 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
      UnityEngine_Transform__set_localScale_3c2ddfc(*puVar8,puVar8[1],puVar8[2],lVar10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_f0 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(300,1,8,0,0,0);
      thunk_FUN_021f190c(auStack_f0,0);
      auStack_b0 = auStack_f0;
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
      uVar16 = auStack_b0._0_8_;
      if ((long *)auStack_b0._0_8_ != (long *)0x0) {
        lVar10 = *(long *)auStack_b0._0_8_;
        uVar15 = auStack_b0._8_8_ & 0xffff;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_02593c04;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_02229a4c(auStack_b0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02593c04:
        iVar6 = (*(code *)*puVar7)(uVar16,uVar15,puVar7[1]);
        if (iVar6 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 8) = auStack_b0;
          thunk_FUN_021f190c(param_1 + 8,0);
          FUN_0235c420(param_1 + 2,auStack_b0,param_1,*(undefined8 *)PTR_DAT_049c5fc8);
          return;
        }
      }
      goto LAB_02593c18;
    }
    auStack_b0 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  auStack_c0 = auVar20;
  auStack_a0 = auVar1;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar16 = auStack_b0._0_8_;
  if ((long *)auStack_b0._0_8_ != (long *)0x0) {
    lVar10 = *(long *)auStack_b0._0_8_;
    uVar15 = auStack_b0._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_02593fb4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(auStack_b0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02593fb4:
    (*(code *)*puVar7)(uVar16,uVar15,puVar7[1]);
  }
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  lVar10 = *(long *)puVar3;
  lVar9 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  uVar17 = *(undefined4 *)(lVar9 + 0xc);
  uVar18 = *(undefined4 *)(lVar9 + 0x10);
  uVar19 = *(undefined4 *)(lVar9 + 0x14);
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
    lVar10 = *(long *)puVar3;
  }
  puVar8 = *(undefined4 **)(lVar10 + 0xb8);
  auVar20 = LitMotion_LMotion__Create_2eaa1b4
                      (uVar17,uVar18,uVar19,*puVar8,puVar8[1],puVar8[2],0x3f000000,0);
  lVar10 = *(long *)puVar5;
  auStack_c0 = auVar20;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574();
    lVar10 = *(long *)puVar5;
  }
  auVar20 = FUN_02526574(auStack_c0,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x60),
                         *(undefined8 *)PTR_DAT_049c2bc0);
  auStack_c0 = auVar20;
  auVar20 = FUN_024f4e50(auStack_c0,0x1b,*(undefined8 *)PTR_DAT_049c1680);
  uVar16 = *(undefined8 *)(param_1 + 6);
  if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar20 = Extensions__BindToLocalScaleNonNegative___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25eebec
                      (auVar20._0_8_,auVar20._8_8_,uVar16,*(undefined8 *)PTR_DAT_049c2bd8);
  LitMotion_MotionHandleExtensions__AddTo_2eace68(auVar20._0_8_,auVar20._8_8_ & 0xffffffff,lVar13,0)
  ;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar20 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(600,1,8,0,0,0);
  auStack_f0 = auVar20;
  thunk_FUN_021f190c(auStack_f0,0);
  auStack_b0 = auStack_f0;
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
  uVar16 = auStack_b0._0_8_;
  if ((long *)auStack_b0._0_8_ != (long *)0x0) {
    lVar10 = *(long *)auStack_b0._0_8_;
    uVar15 = auStack_b0._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_025941c8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(auStack_b0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025941c8:
    iVar6 = (*(code *)*puVar7)(uVar16,uVar15,puVar7[1]);
    if (iVar6 == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 8) = auStack_b0;
      thunk_FUN_021f190c(param_1 + 8,0);
      FUN_0235c420(param_1 + 2,auStack_b0,param_1,*(undefined8 *)PTR_DAT_049c5fc8);
      return;
    }
  }
LAB_025941dc:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar16 = auStack_b0._0_8_;
  if ((long *)auStack_b0._0_8_ != (long *)0x0) {
    lVar10 = *(long *)auStack_b0._0_8_;
    uVar15 = auStack_b0._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_0259425c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(auStack_b0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0259425c:
    (*(code *)*puVar7)(uVar16,uVar15,puVar7[1]);
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(lVar13,0x78d4e5eb,0);
  if (*(long *)(lVar13 + 0x38) != 0) {
    AudioModule__GetPlayer_2530858(auStack_f0,*(long *)(lVar13 + 0x38),0);
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    auStack_a0 = auStack_f0;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    AudioPlayer__WithVolumeScale_25310e8(auStack_f0,_UNK_013aa3e4,auStack_a0,0);
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    auStack_a0 = auStack_f0;
    if (*(long *)(lVar13 + 0x38) != 0) {
      lVar13 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if (lVar13 != 0) {
        AudioPlayer__Play_2530c98(auStack_a0,*(undefined8 *)(lVar13 + 0x38),0);
        piVar12 = param_1 + 6;
        piVar12[0] = 0;
        piVar12[1] = 0;
        *param_1 = -2;
        thunk_FUN_021f190c(piVar12,0);
        FUN_0235afc8(param_1 + 2,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

