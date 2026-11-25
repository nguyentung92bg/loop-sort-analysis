/* IL2CPP: AreasMonitor.<PlayUnlock>d__65$$MoveNext
void AreasMonitor__PlayUnlock_d__65__MoveNext (AreasMonitor__PlayUnlock_d__65_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: AreasMonitor.<PlayUnlock>d__65$$MoveNext
   void AreasMonitor__PlayUnlock_d__65__MoveNext (AreasMonitor__PlayUnlock_d__65_o __this, const
   MethodInfo* method); */

void AreasMonitor__PlayUnlock_d__65__MoveNext_2439514(uint *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  long lStack_f0;
  uint *puStack_e8;
  uint **ppuStack_e0;
  long *plStack_d8;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  long lStack_80;
  uint uStack_74;
  undefined1 auStack_70 [16];
  uint *puStack_58;
  
  puStack_58 = param_1;
  if ((bRam0000000004f4b80d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3c70);
    FUN_021f03f8(PTR_DAT_049c2bb8);
    FUN_021f03f8(PTR_DAT_049c16a0);
    FUN_021f03f8(PTR_DAT_049c3c78);
    FUN_021f03f8(PTR_DAT_049c3b78);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c2f70);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1678);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049c2d70);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b80d = 1;
  }
  puVar5 = PTR_DAT_049c3b78;
  auStack_90._8_8_ = 0;
  auStack_a0._8_8_ = 0;
  auStack_90._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  auStack_a0._0_8_ = 0;
  auStack_b0._0_8_ = 0;
  uStack_74 = *param_1;
  lStack_80 = *(long *)(param_1 + 4);
  auStack_c0._0_8_ = 0;
  auStack_c0._8_8_ = 0;
  uStack_c8 = 0;
  if (2 < uStack_74) {
    if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar7 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(lStack_80,0);
    *(undefined8 *)(puStack_58 + 8) = uVar7;
    thunk_FUN_021f190c(puStack_58 + 8,0);
    if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_80 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(lStack_80 + 0xc0),*(undefined8 *)(puStack_58 + 6),&lStack_f0,
               *(undefined8 *)puVar5);
    if (lStack_f0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined8 *)(puStack_58 + 10) = *(undefined8 *)(lStack_f0 + 0x10);
    thunk_FUN_021f190c();
    lVar8 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                      (*(undefined8 *)(puStack_58 + 6),0x39740faf,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar7 = *(undefined8 *)(lVar8 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
      FUN_021f0574(*(long *)PTR_DAT_049b5480);
    }
    uVar7 = Extensions__GetRectTransform_3f0c498(uVar7,0);
    *(undefined8 *)(puStack_58 + 0xc) = uVar7;
    thunk_FUN_021f190c();
    if (*(long *)(puStack_58 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (*(long *)(puStack_58 + 0xc),&lStack_f0,*(undefined8 *)PTR_DAT_049c2bb8);
    *(long *)(puStack_58 + 0xe) = lStack_f0;
    thunk_FUN_021f190c();
    uVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                      (*(undefined8 *)(puStack_58 + 6),0xa59d6ffe,0);
    *(undefined8 *)(puStack_58 + 0x10) = uVar7;
    thunk_FUN_021f190c();
    uVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c16a0);
    LitMotion_CompositeMotionHandle___ctor_2e8ad94(uVar7,0);
    *(undefined8 *)(puStack_58 + 0x12) = uVar7;
    thunk_FUN_021f190c(puStack_58 + 0x12,uVar7);
  }
  puVar4 = PTR_DAT_049c1680;
  puVar3 = PTR_DAT_049c1670;
  puVar2 = PTR_DAT_049b5138;
  puStack_e8 = &uStack_74;
  plStack_d8 = &lStack_80;
  lStack_f0 = 0;
  ppuStack_e0 = &puStack_58;
  if (uStack_74 == 0) {
    uStack_74 = 0xffffffff;
    auStack_90 = *(undefined1 (*) [16])(puStack_58 + 0x14);
    puStack_58[0x14] = 0;
    puStack_58[0x15] = 0;
    puStack_58[0x16] = 0;
    puStack_58[0x17] = 0;
    *puStack_58 = 0xffffffff;
    goto LAB_0253998c;
  }
  if (uStack_74 == 1) {
    uStack_74 = 0xffffffff;
    auStack_90 = *(undefined1 (*) [16])(puStack_58 + 0x14);
    puStack_58[0x14] = 0;
    puStack_58[0x15] = 0;
    puStack_58[0x16] = 0;
    puStack_58[0x17] = 0;
    *puStack_58 = 0xffffffff;
    goto LAB_02539b44;
  }
  if (uStack_74 == 2) {
    uStack_74 = 0xffffffff;
    auStack_90 = *(undefined1 (*) [16])(puStack_58 + 0x14);
    puStack_58[0x14] = 0;
    puStack_58[0x15] = 0;
    puStack_58[0x16] = 0;
    puStack_58[0x17] = 0;
    *puStack_58 = 0xffffffff;
  }
  else {
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    auStack_a0 = LitMotion_LMotion__Create_2eaa1b4(0);
    auVar16 = FUN_024f4e50(auStack_a0,5,*(undefined8 *)puVar4);
    auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                        (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(puStack_58 + 0xc),
                         *(undefined8 *)puVar3);
    auStack_70 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                           (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,*(undefined8 *)(puStack_58 + 8)
                            ,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_70,0);
    auStack_90 = auStack_70;
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
    uVar7 = auStack_90._0_8_;
    if ((long *)auStack_90._0_8_ != (long *)0x0) {
      lVar8 = *(long *)auStack_90._0_8_;
      uVar13 = auStack_90._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02539978;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02539978:
      iVar6 = (*(code *)*puVar9)(uVar7,uVar13,puVar9[1]);
      if (iVar6 != 0) goto LAB_0253998c;
      uStack_74 = 0;
      *puStack_58 = 0;
      *(undefined1 (*) [16])(puStack_58 + 0x14) = auStack_90;
      thunk_FUN_021f190c(puStack_58 + 0x14,0);
      FUN_0235c420(puStack_58 + 2,auStack_90,puStack_58,*(undefined8 *)PTR_DAT_049c3c70);
LAB_0253a038:
      iVar6 = 8;
      goto LAB_0253a03c;
    }
LAB_0253998c:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar7 = auStack_90._0_8_;
    if ((long *)auStack_90._0_8_ != (long *)0x0) {
      lVar8 = *(long *)auStack_90._0_8_;
      uVar13 = auStack_90._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar9 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_02539a0c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02539a0c:
      (*(code *)*puVar9)(uVar7,uVar13,puVar9[1]);
    }
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (*(undefined8 *)(puStack_58 + 6),0xbc956f6,0);
    uVar7 = *(undefined8 *)(puStack_58 + 8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar16 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(0x78,0,8,uVar7,0,0);
    auStack_70 = auVar16;
    thunk_FUN_021f190c(auStack_70,0);
    auStack_90 = auStack_70;
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
    uVar7 = auStack_90._0_8_;
    if ((long *)auStack_90._0_8_ != (long *)0x0) {
      lVar8 = *(long *)auStack_90._0_8_;
      uVar13 = auStack_90._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02539b30;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02539b30:
      iVar6 = (*(code *)*puVar9)(uVar7,uVar13,puVar9[1]);
      if (iVar6 == 0) {
        uStack_74 = 1;
        *puStack_58 = 1;
        *(undefined1 (*) [16])(puStack_58 + 0x14) = auStack_90;
        thunk_FUN_021f190c(puStack_58 + 0x14,0);
        FUN_0235c420(puStack_58 + 2,auStack_90,puStack_58,*(undefined8 *)PTR_DAT_049c3c70);
        goto LAB_0253a038;
      }
    }
LAB_02539b44:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar7 = auStack_90._0_8_;
    if ((long *)auStack_90._0_8_ != (long *)0x0) {
      lVar8 = *(long *)auStack_90._0_8_;
      uVar13 = auStack_90._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar9 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_02539bc4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02539bc4:
      (*(code *)*puVar9)(uVar7,uVar13,puVar9[1]);
    }
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    uVar1 = _UNK_013aa8dc;
    lVar8 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    auVar16 = LitMotion_LMotion__Create_2eaa1b4
                        (*(float *)(lVar8 + 0xc) * _UNK_013aa6a8,
                         *(float *)(lVar8 + 0x10) * _UNK_013aa6a8,
                         *(float *)(lVar8 + 0x14) * _UNK_013aa6a8,
                         *(float *)(lVar8 + 0xc) * _UNK_013aa7ac,
                         *(float *)(lVar8 + 0x10) * _UNK_013aa7ac,
                         *(float *)(lVar8 + 0x14) * _UNK_013aa7ac,_UNK_013aa8dc,0);
    auStack_a0 = auVar16;
    auVar16 = FUN_024f4e50(auStack_a0,8,*(undefined8 *)puVar4);
    auVar16 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                        (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(puStack_58 + 0xc),
                         *(undefined8 *)puVar3);
    LitMotion_MotionHandleExtensions__AddTo_2eacb44
              (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,*(undefined8 *)(puStack_58 + 0x12),0);
    if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar14 = *(float *)(lStack_80 + 0x10c);
    fVar15 = *(float *)(lStack_80 + 0x110);
    if (cRam0000000004f4a196 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8a18);
      cRam0000000004f4a196 = '\x01';
    }
    auStack_b0 = LitMotion_LMotion__Create_2eaa148
                           (fVar14,fVar15,
                            fVar14 + *(float *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x10)
                                     * 60.0,
                            fVar15 + *(float *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x14)
                                     * 60.0,uVar1,0);
    auVar16 = FUN_024f4e50(auStack_b0,8,*(undefined8 *)PTR_DAT_049c2d70);
    auVar16 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                        (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(puStack_58 + 0xc),
                         *(undefined8 *)PTR_DAT_049c2f70);
    LitMotion_MotionHandleExtensions__AddTo_2eacb44
              (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,*(undefined8 *)(puStack_58 + 0x12),0);
    if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_c0 = LitMotion_LMotion__Create_2ea9f9c(*(undefined4 *)(lStack_80 + 0x114),0,uVar1,0);
    puVar3 = PTR_DAT_049c1358;
    auVar16 = FUN_024f4e50(auStack_c0,5,*(undefined8 *)PTR_DAT_049c1358);
    puVar4 = PTR_DAT_049c1678;
    auVar16 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToColorA___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673a8c
                        (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(puStack_58 + 0x10),
                         *(undefined8 *)PTR_DAT_049c1678);
    LitMotion_MotionHandleExtensions__AddTo_2eacb44
              (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,*(undefined8 *)(puStack_58 + 0x12),0);
    auVar16 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0,uVar1,0);
    auStack_c0 = auVar16;
    auVar16 = FUN_024f4e50(auStack_c0,4,*(undefined8 *)puVar3);
    auVar16 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToColorA___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673a8c
                        (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(puStack_58 + 0xe),
                         *(undefined8 *)puVar4);
    auVar16 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                        (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,*(undefined8 *)(puStack_58 + 8),0)
    ;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_70 = auVar16;
    thunk_FUN_021f190c(auStack_70,0);
    auStack_90 = auStack_70;
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
    uVar7 = auStack_90._0_8_;
    if ((long *)auStack_90._0_8_ != (long *)0x0) {
      lVar8 = *(long *)auStack_90._0_8_;
      uVar13 = auStack_90._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02539ec8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02539ec8:
      iVar6 = (*(code *)*puVar9)(uVar7,uVar13,puVar9[1]);
      if (iVar6 == 0) {
        uStack_74 = 2;
        *puStack_58 = 2;
        *(undefined1 (*) [16])(puStack_58 + 0x14) = auStack_90;
        thunk_FUN_021f190c(puStack_58 + 0x14,0);
        FUN_0235c420(puStack_58 + 2,auStack_90,puStack_58,*(undefined8 *)PTR_DAT_049c3c70);
        goto LAB_0253a038;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar7 = auStack_90._0_8_;
  if ((long *)auStack_90._0_8_ != (long *)0x0) {
    lVar8 = *(long *)auStack_90._0_8_;
    uVar13 = auStack_90._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar9 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_02539f5c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02539f5c:
    (*(code *)*puVar9)(uVar7,uVar13,puVar9[1]);
  }
  iVar6 = 0xb;
LAB_0253a03c:
  FUN_02019e4c(&lStack_f0);
  if ((iVar6 == 0xb) || (iVar6 == 0)) {
    if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_80 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(lStack_80 + 0xc0),*(undefined8 *)(puStack_58 + 6),&lStack_f0,
               *(undefined8 *)puVar5);
    if (lStack_f0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_f0 + 0x10) == *(long *)(puStack_58 + 10)) {
      if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      AreasMonitor__PlayComplete_24377ac(_UNK_013aa908,lStack_80,*(undefined8 *)(puStack_58 + 6));
    }
    puStack_58[8] = 0;
    puStack_58[9] = 0;
    *puStack_58 = 0xfffffffe;
    puVar10 = puStack_58 + 10;
    puVar10[0] = 0;
    puVar10[1] = 0;
    thunk_FUN_021f190c(puVar10,0);
    puVar10 = puStack_58 + 0xc;
    puVar10[0] = 0;
    puVar10[1] = 0;
    thunk_FUN_021f190c(puVar10,0);
    puVar10 = puStack_58 + 0xe;
    puVar10[0] = 0;
    puVar10[1] = 0;
    thunk_FUN_021f190c(puVar10,0);
    puVar10 = puStack_58 + 0x10;
    puVar10[0] = 0;
    puVar10[1] = 0;
    thunk_FUN_021f190c(puVar10,0);
    puVar10 = puStack_58 + 0x12;
    puVar10[0] = 0;
    puVar10[1] = 0;
    thunk_FUN_021f190c(puVar10,0);
    FUN_0235afc8(puStack_58 + 2,0);
  }
  return;
}

