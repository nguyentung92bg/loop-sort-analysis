/* IL2CPP: WinStandartVariant.<ApplyWordArtMotion>d__26$$MoveNext
void WinStandartVariant__ApplyWordArtMotion_d__26__MoveNext (WinStandartVariant__ApplyWordArtMotion_d__26_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: WinStandartVariant.<ApplyWordArtMotion>d__26$$MoveNext
   void WinStandartVariant__ApplyWordArtMotion_d__26__MoveNext
   (WinStandartVariant__ApplyWordArtMotion_d__26_o __this, const MethodInfo* method); */

void WinStandartVariant__ApplyWordArtMotion_d__26__MoveNext_249565c(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f4ba9c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6020);
    FUN_021f03f8(PTR_DAT_049c1b50);
    FUN_021f03f8(PTR_DAT_049c2bd8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c2bc0);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1690);
    FUN_021f03f8(PTR_DAT_049c6028);
    bRam0000000004f4ba9c = 1;
  }
  puVar2 = PTR_DAT_049b6110;
  puVar1 = PTR_DAT_049b5138;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  iVar4 = *param_1;
  uStack_78 = 0;
  plStack_80 = (long *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  lVar11 = *(long *)(param_1 + 6);
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  auVar18 = ZEXT816(0);
  uStack_a8 = 0;
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      auStack_90 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
LAB_0259598c:
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar12 = auStack_90._0_8_;
      if ((long *)auStack_90._0_8_ != (long *)0x0) {
        lVar11 = *(long *)auStack_90._0_8_;
        uVar14 = auStack_90._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_02595a0c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02595a0c:
        (*(code *)*puVar5)(uVar12,uVar14,puVar5[1]);
      }
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(param_1 + 10),1,0);
      uVar12 = *(undefined8 *)(param_1 + 0xe);
      uVar13 = *(undefined8 *)(param_1 + 8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar18 = Extensions__WaitUntilComplete_24e6d68(uVar12,uVar13,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_d0 = auVar18;
      thunk_FUN_021f190c(auStack_d0,0);
      auStack_90 = auStack_d0;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar12 = auStack_90._0_8_;
      if ((long *)auStack_90._0_8_ != (long *)0x0) {
        lVar11 = *(long *)auStack_90._0_8_;
        uVar14 = auStack_90._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02595b38;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02595b38:
        iVar4 = (*(code *)*puVar5)(uVar12,uVar14,puVar5[1]);
        if (iVar4 == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 0x10) = auStack_90;
          thunk_FUN_021f190c(param_1 + 0x10,0);
          FUN_0235c25c(param_1 + 2,auStack_90,param_1,*(undefined8 *)PTR_DAT_049c6020);
          return;
        }
      }
    }
    else {
      if (iVar4 != 1) goto LAB_0259578c;
      auStack_90 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
    }
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar12 = auStack_90._0_8_;
    if ((long *)auStack_90._0_8_ != (long *)0x0) {
      lVar11 = *(long *)auStack_90._0_8_;
      uVar14 = auStack_90._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_02595bcc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02595bcc:
      (*(code *)*puVar5)(uVar12,uVar14,puVar5[1]);
    }
    uVar12 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar18 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(0xa8c,1,8,uVar12,0,0);
    auStack_d0 = auVar18;
    thunk_FUN_021f190c(auStack_d0,0);
    auStack_90 = auStack_d0;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar12 = auStack_90._0_8_;
    if ((long *)auStack_90._0_8_ != (long *)0x0) {
      lVar11 = *(long *)auStack_90._0_8_;
      uVar14 = auStack_90._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02595cd4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02595cd4:
      iVar4 = (*(code *)*puVar5)(uVar12,uVar14,puVar5[1]);
      if (iVar4 == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 0x10) = auStack_90;
        thunk_FUN_021f190c(param_1 + 0x10,0);
        FUN_0235c25c(param_1 + 2,auStack_90,param_1,*(undefined8 *)PTR_DAT_049c6020);
        return;
      }
    }
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 == 3) {
        auStack_90 = *(undefined1 (*) [16])(param_1 + 0x10);
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        *param_1 = -1;
        goto LAB_02595f9c;
      }
LAB_0259578c:
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar11 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      AudioModule__GetPlayer_2530858(auStack_d0,*(long *)(lVar11 + 0x38),0);
      uStack_78 = auStack_d0._8_8_;
      plStack_80 = (long *)auStack_d0._0_8_;
      uStack_68 = uStack_b8;
      uStack_70 = uStack_c0;
      if (*(int *)(*(long *)PTR_DAT_049c1b50 + 0xe4) == 0) {
        FUN_021f0574();
      }
      AudioPlayer__WithVolumeScale_25310e8(auStack_d0,0x3f400000,&plStack_80,0);
      uStack_78 = auStack_d0._8_8_;
      plStack_80 = (long *)auStack_d0._0_8_;
      uStack_68 = uStack_b8;
      uStack_70 = uStack_c0;
      if (*(long *)(lVar11 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar6 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      AudioPlayer__Play_2530c98(&plStack_80,*(undefined8 *)(lVar6 + 0x28),0);
      if (*(long *)(lVar11 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar11 = Spine_Unity_SkeletonGraphic__get_AnimationState_331b0d0(*(long *)(lVar11 + 0xa8),0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar12 = Spine_AnimationState__SetAnimation_32d33f8
                         (lVar11,0,*(undefined8 *)PTR_DAT_049c6028,0,0);
      *(undefined8 *)(param_1 + 0xe) = uVar12;
      thunk_FUN_021f190c();
      uVar12 = *(undefined8 *)(param_1 + 0xe);
      uVar13 = *(undefined8 *)(param_1 + 8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_d0 = Extensions__WaitUntilFirstEvent_24e6e20(uVar12,uVar13,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      thunk_FUN_021f190c(auStack_d0,0);
      auStack_90 = auStack_d0;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar12 = auStack_90._0_8_;
      if ((long *)auStack_90._0_8_ != (long *)0x0) {
        lVar11 = *(long *)auStack_90._0_8_;
        uVar14 = auStack_90._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02595978;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02595978:
        iVar4 = (*(code *)*puVar5)(uVar12,uVar14,puVar5[1]);
        if (iVar4 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x10) = auStack_90;
          thunk_FUN_021f190c(param_1 + 0x10,0);
          FUN_0235c25c(param_1 + 2,auStack_90,param_1,*(undefined8 *)PTR_DAT_049c6020);
          return;
        }
      }
      goto LAB_0259598c;
    }
    auStack_90 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar12 = auStack_90._0_8_;
  if ((long *)auStack_90._0_8_ != (long *)0x0) {
    lVar11 = *(long *)auStack_90._0_8_;
    uVar14 = auStack_90._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02595d68;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02595d68:
    (*(code *)*puVar5)(uVar12,uVar14,puVar5[1]);
  }
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  puVar3 = PTR_DAT_049c1690;
  lVar11 = *(long *)PTR_DAT_049c1690;
  lVar6 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  uVar15 = *(undefined4 *)(lVar6 + 0xc);
  uVar16 = *(undefined4 *)(lVar6 + 0x10);
  uVar17 = *(undefined4 *)(lVar6 + 0x14);
  if (*(int *)(lVar11 + 0xe4) == 0) {
    FUN_021f0574();
    lVar11 = *(long *)puVar3;
  }
  puVar7 = *(undefined4 **)(lVar11 + 0xb8);
  auStack_a0 = LitMotion_LMotion__Create_2eaa1b4
                         (uVar15,uVar16,uVar17,*puVar7,puVar7[1],puVar7[2],_UNK_013aa8dc,0);
  puVar3 = PTR_DAT_049c2288;
  lVar11 = *(long *)PTR_DAT_049c2288;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    FUN_021f0574();
    lVar11 = *(long *)puVar3;
  }
  auVar18 = FUN_02526574(auStack_a0,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x60),
                         *(undefined8 *)PTR_DAT_049c2bc0);
  auStack_a0 = auVar18;
  auVar18 = FUN_024f4e50(auStack_a0,0x1b,*(undefined8 *)PTR_DAT_049c1680);
  if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar12 = UnityEngine_GameObject__get_transform_3c1ca74(*(long *)(param_1 + 0xc),0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar18 = Extensions__BindToLocalScaleNonNegative___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25eebec
                      (auVar18._0_8_,auVar18._8_8_,uVar12,*(undefined8 *)PTR_DAT_049c2bd8);
  auVar18 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                      (auVar18._0_8_,auVar18._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 8),0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_d0 = auVar18;
  thunk_FUN_021f190c(auStack_d0,0);
  auStack_90 = auStack_d0;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar12 = auStack_90._0_8_;
  auVar18 = auStack_a0;
  if ((long *)auStack_90._0_8_ != (long *)0x0) {
    lVar11 = *(long *)auStack_90._0_8_;
    uVar14 = auStack_90._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02595f88;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02595f88:
    iVar4 = (*(code *)*puVar5)(uVar12,uVar14,puVar5[1]);
    auVar18 = auStack_a0;
    if (iVar4 == 0) {
      *param_1 = 3;
      *(undefined1 (*) [16])(param_1 + 0x10) = auStack_90;
      thunk_FUN_021f190c(param_1 + 0x10,0);
      FUN_0235c25c(param_1 + 2,auStack_90,param_1,*(undefined8 *)PTR_DAT_049c6020);
      return;
    }
  }
LAB_02595f9c:
  auStack_a0 = auVar18;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar12 = auStack_90._0_8_;
  if ((long *)auStack_90._0_8_ != (long *)0x0) {
    lVar11 = *(long *)auStack_90._0_8_;
    uVar14 = auStack_90._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02596058;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02596058:
    (*(code *)*puVar5)(uVar12,uVar14,puVar5[1]);
  }
  *param_1 = -2;
  piVar9 = param_1 + 0xe;
  piVar9[0] = 0;
  piVar9[1] = 0;
  thunk_FUN_021f190c(piVar9,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02596100;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b56d0,2);
LAB_02596100:
    (*(code *)*puVar5)(plVar10,puVar5[1]);
  }
  return;
}

