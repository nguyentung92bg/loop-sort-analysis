/* IL2CPP: LockCarrierGroup.<OnLevelAnimationEnd>d__19$$MoveNext
void LockCarrierGroup__OnLevelAnimationEnd_d__19__MoveNext (LockCarrierGroup__OnLevelAnimationEnd_d__19_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LockCarrierGroup.<OnLevelAnimationEnd>d__19$$MoveNext
   void LockCarrierGroup__OnLevelAnimationEnd_d__19__MoveNext
   (LockCarrierGroup__OnLevelAnimationEnd_d__19_o __this, const MethodInfo* method); */

void LockCarrierGroup__OnLevelAnimationEnd_d__19__MoveNext_24a75a4(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *unaff_x21;
  ulong unaff_x22;
  ulong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  if ((bRam0000000004f4bb20 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c67a0);
    FUN_021f03f8(PTR_DAT_049c67a8);
    FUN_021f03f8(PTR_DAT_049c2978);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2ac0);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4bb20 = 1;
  }
  puVar1 = PTR_DAT_049b5138;
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  auVar16 = ZEXT816(0);
  iVar3 = *param_1;
  auStack_b0._8_4_ = 0;
  lVar11 = *(long *)(param_1 + 4);
  auStack_b0._0_8_ = 0;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      auStack_a0 = *(undefined1 (*) [16])(param_1 + 6);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      *param_1 = -1;
      goto LAB_025a790c;
    }
    if (iVar3 != 1) goto LAB_025a76d4;
    auStack_a0 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    if (iVar3 == 2) {
      auStack_a0 = *(undefined1 (*) [16])(param_1 + 6);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      *param_1 = -1;
      goto LAB_025a7e50;
    }
    if (iVar3 == 3) {
      auStack_b0 = *(undefined1 (*) [12])(param_1 + 0xb);
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
      goto LAB_025a7fe0;
    }
LAB_025a76d4:
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = UnityEngine_Component__get_transform_3c18724(lVar11,0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    lVar6 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    uVar13 = *(undefined4 *)(lVar6 + 0xc);
    uVar14 = *(undefined4 *)(lVar6 + 0x10);
    uVar15 = *(undefined4 *)(lVar6 + 0x14);
    if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
      FUN_021f0574();
    }
    Extensions__WithY_3f0d5ec(uVar13,uVar14,uVar15,0,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__set_localScale_3c2ddfc(lVar7,0);
    auVar16 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,0x3e800000,0);
    uVar5 = UnityEngine_Component__get_transform_3c18724(lVar11,0);
    auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScaleY___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672670
                        (auVar16._0_8_,auVar16._8_8_,uVar5,*(undefined8 *)PTR_DAT_049c2ac0);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar16 = Extensions__AddTo_24d83f4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,lVar11,0);
    auStack_90 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                           (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,*(undefined8 *)(lVar11 + 0x98),
                            0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_90,0);
    auStack_a0 = auStack_90;
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
    uVar5 = auStack_a0._0_8_;
    if ((long *)auStack_a0._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_a0._0_8_;
      uVar12 = auStack_a0._8_8_ & 0xffff;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_025a78f8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025a78f8:
      iVar3 = (*(code *)*puVar4)(uVar5,uVar12,puVar4[1]);
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_a0;
        thunk_FUN_021f190c(param_1 + 6,0);
        FUN_0235c420(param_1 + 2,auStack_a0,param_1,*(undefined8 *)PTR_DAT_049c67a0);
        return;
      }
    }
LAB_025a790c:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar5 = auStack_a0._0_8_;
    if ((long *)auStack_a0._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_a0._0_8_;
      uVar12 = auStack_a0._8_8_ & 0xffff;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_025a798c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025a798c:
      (*(code *)*puVar4)(uVar5,uVar12,puVar4[1]);
    }
    auVar16 = LitMotion_LMotion__Create_2ea9f9c(0x42c80000,0,_UNK_013aa8dc,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = *(undefined8 *)(lVar11 + 0xc0);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar16 = Extensions__BindToBlendShape___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee300
                        (auVar16._0_8_,auVar16._8_8_,uVar5,0,*(undefined8 *)PTR_DAT_049c2978);
    auVar16 = Extensions__AddTo_24d83f4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,lVar11,0);
    auVar16 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                        (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,*(undefined8 *)(lVar11 + 0x98),0);
    unaff_x22 = auVar16._8_8_;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_90 = auVar16;
    thunk_FUN_021f190c(auStack_90,0);
    auStack_a0 = auStack_90;
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
    uVar5 = auStack_a0._0_8_;
    if ((long *)auStack_a0._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_a0._0_8_;
      unaff_x22 = auStack_a0._8_8_ & 0xffff;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_025a7b00;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025a7b00:
      iVar3 = (*(code *)*puVar4)(uVar5,unaff_x22,puVar4[1]);
      if (iVar3 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_a0;
        thunk_FUN_021f190c(param_1 + 6,0);
        FUN_0235c420(param_1 + 2,auStack_a0,param_1,*(undefined8 *)PTR_DAT_049c67a0);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  unaff_x21 = (long *)auStack_a0._0_8_;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_a0._0_8_;
    unaff_x22 = auStack_a0._8_8_ & 0xffff;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_025a7b94;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025a7b94:
    (*(code *)*puVar4)(unaff_x21,unaff_x22,puVar4[1]);
  }
  iVar3 = 0;
  param_1[10] = 0;
  while (puVar2 = PTR_DAT_049c1690, iVar3 < 7) {
    auVar16 = LitMotion_LMotion__Create_2ea9f9c(0x42c80000,0,_UNK_013aa978,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = *(undefined8 *)(lVar11 + 0xb8);
    iVar3 = param_1[10];
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar16 = Extensions__BindToBlendShape___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee300
                        (auVar16._0_8_,auVar16._8_8_,uVar5,iVar3,*(undefined8 *)PTR_DAT_049c2978);
    unaff_x22 = unaff_x22 & 0xffffffff00000000 | auVar16._8_8_ & 0xffffffff;
    auVar16 = Extensions__AddTo_24d83f4(auVar16._0_8_,unaff_x22,lVar11,0);
    unaff_x21 = (long *)((ulong)unaff_x21 & 0xffffffff00000000 | auVar16._8_8_ & 0xffffffff);
    auVar16 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                        (auVar16._0_8_,unaff_x21,*(undefined8 *)(lVar11 + 0x98),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_90 = auVar16;
    thunk_FUN_021f190c(auStack_90,0);
    auStack_a0 = auStack_90;
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
    uVar5 = auStack_a0._0_8_;
    if ((long *)auStack_a0._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_a0._0_8_;
      uVar12 = auStack_a0._8_8_ & 0xffff;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_025a7e3c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025a7e3c:
      iVar3 = (*(code *)*puVar4)(uVar5,uVar12,puVar4[1]);
      if (iVar3 == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_a0;
        thunk_FUN_021f190c(param_1 + 6,0);
        FUN_0235c420(param_1 + 2,auStack_a0,param_1,*(undefined8 *)PTR_DAT_049c67a0);
        return;
      }
    }
LAB_025a7e50:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar5 = auStack_a0._0_8_;
    if ((long *)auStack_a0._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_a0._0_8_;
      uVar12 = auStack_a0._8_8_ & 0xffff;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_025a7ed0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025a7ed0:
      (*(code *)*puVar4)(uVar5,uVar12,puVar4[1]);
    }
    iVar3 = param_1[10] + 1;
    param_1[10] = iVar3;
  }
  lVar7 = *(long *)PTR_DAT_049c1690;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
    lVar7 = *(long *)puVar2;
  }
  puVar8 = *(undefined4 **)(lVar7 + 0xb8);
  uVar13 = *puVar8;
  uVar14 = puVar8[1];
  uVar15 = puVar8[2];
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  auVar16 = LitMotion_LMotion__Create_2eaa1b4
                      (uVar13,uVar14,uVar15,*(undefined4 *)(lVar7 + 0xc),
                       *(undefined4 *)(lVar7 + 0x10),*(undefined4 *)(lVar7 + 0x14),_UNK_013aa810,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                      (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(lVar11 + 0xa0),
                       *(undefined8 *)PTR_DAT_049c1670);
  if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar16 = Extensions__AddTo_24d83f4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,lVar11,0);
  auStack_b0 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                         (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,0);
  uVar9 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_b0,0);
  puVar1 = PTR_DAT_049c67a8;
  auVar16 = auStack_a0;
  if ((uVar9 & 1) == 0) {
    *param_1 = 3;
    uVar5 = *(undefined8 *)puVar1;
    *(undefined1 (*) [12])(param_1 + 0xb) = auStack_b0;
    FUN_0235c420(param_1 + 2,auStack_b0,param_1,uVar5);
    return;
  }
LAB_025a7fe0:
  auStack_a0 = auVar16;
  LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_b0,0);
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

