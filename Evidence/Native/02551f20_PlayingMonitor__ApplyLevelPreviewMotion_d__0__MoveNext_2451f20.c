/* IL2CPP: PlayingMonitor.<ApplyLevelPreviewMotion>d__0$$MoveNext
void PlayingMonitor__ApplyLevelPreviewMotion_d__0__MoveNext (PlayingMonitor__ApplyLevelPreviewMotion_d__0_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: PlayingMonitor.<ApplyLevelPreviewMotion>d__0$$MoveNext
   void PlayingMonitor__ApplyLevelPreviewMotion_d__0__MoveNext
   (PlayingMonitor__ApplyLevelPreviewMotion_d__0_o __this, const MethodInfo* method); */

void PlayingMonitor__ApplyLevelPreviewMotion_d__0__MoveNext_2451f20(int *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  ulong uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  if ((bRam0000000004f4b8de & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c48f0);
    FUN_021f03f8(PTR_DAT_049c2d48);
    FUN_021f03f8(PTR_DAT_049c2f70);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c2be8);
    FUN_021f03f8(PTR_DAT_049c2d70);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049bc0c8);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4b8de = 1;
  }
  puVar9 = PTR_DAT_049c2f70;
  puVar8 = PTR_DAT_049c2d70;
  puVar7 = PTR_DAT_049c2be8;
  puVar6 = PTR_DAT_049c1690;
  puVar5 = PTR_DAT_049c1680;
  puVar4 = PTR_DAT_049c1670;
  auStack_a0._8_8_ = 0;
  auStack_a0._0_8_ = 0;
  auVar2 = ZEXT816(0);
  auStack_b0._8_8_ = 0;
  iVar11 = *param_1;
  auStack_c0._8_8_ = 0;
  auStack_b0._0_8_ = 0;
  auVar26 = ZEXT816(0);
  auStack_c0._0_8_ = 0;
  if (iVar11 == 0) {
    auStack_c0 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_025523cc:
    auStack_b0 = auVar26;
    auStack_a0 = auVar2;
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar10 = auStack_c0._0_8_;
    if ((long *)auStack_c0._0_8_ != (long *)0x0) {
      lVar15 = *(long *)auStack_c0._0_8_;
      uVar19 = auStack_c0._8_8_ & 0xffff;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
            goto LAB_0255244c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)FUN_02229a4c(auStack_c0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0255244c:
      (*(code *)*puVar12)(uVar10,uVar19,puVar12[1]);
    }
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar26 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(500,0,8,0,0,0);
    auStack_90 = auVar26;
    thunk_FUN_021f190c(auStack_90,0);
    auStack_c0 = auStack_90;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar10 = auStack_c0._0_8_;
    auVar26 = auStack_b0;
    auVar2 = auStack_a0;
    if ((long *)auStack_c0._0_8_ != (long *)0x0) {
      lVar15 = *(long *)auStack_c0._0_8_;
      uVar19 = auStack_c0._8_8_ & 0xffff;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_02552560;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar12 = (undefined8 *)FUN_02229a4c(auStack_c0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02552560:
      iVar11 = (*(code *)*puVar12)(uVar10,uVar19,puVar12[1]);
      auVar26 = auStack_b0;
      auVar2 = auStack_a0;
      if (iVar11 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0xc) = auStack_c0;
        thunk_FUN_021f190c(param_1 + 0xc,0);
        FUN_0235c25c(param_1 + 2,auStack_c0,param_1,*(undefined8 *)PTR_DAT_049c48f0);
        return;
      }
    }
  }
  else {
    if (iVar11 != 1) {
      if (iVar11 == 2) {
        auStack_c0 = *(undefined1 (*) [16])(param_1 + 0xc);
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = -1;
        auStack_b0 = auVar26;
        auStack_a0 = auVar2;
        goto LAB_02552880;
      }
      if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar15 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 6),0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar15,1,0);
      if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                (*(long *)(param_1 + 6),auStack_90,*(undefined8 *)PTR_DAT_049c2d48);
      piVar17 = param_1 + 8;
      *(undefined8 *)piVar17 = auStack_90._0_8_;
      thunk_FUN_021f190c(piVar17);
      auVar26 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,_UNK_013aa838,0);
      LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                (auVar26._0_8_,auVar26._8_8_,*(undefined8 *)piVar17,*(undefined8 *)puVar7);
      lVar15 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                         (*(undefined8 *)(param_1 + 6),0xcc7bdb6e,0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar18 = (long *)StatefulUI_Runtime_References_ObjectReference__get_Transform_3345dec
                                  (lVar15,0);
      if (plVar18 == (long *)0x0) {
        plVar18 = (long *)0x0;
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
      else {
        lVar15 = *(long *)PTR_DAT_049bc0c8;
        plVar1 = plVar18;
        if (*plVar18 != lVar15) {
          plVar1 = (long *)0x0;
        }
        *(long **)(param_1 + 10) = plVar1;
        if (*plVar18 != lVar15) {
          plVar18 = (long *)0x0;
        }
      }
      piVar17 = param_1 + 10;
      thunk_FUN_021f190c(piVar17,plVar18);
      lVar15 = *(long *)puVar6;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        FUN_021f0574();
        lVar15 = *(long *)puVar6;
      }
      puVar13 = *(undefined4 **)(lVar15 + 0xb8);
      uVar20 = *puVar13;
      uVar22 = puVar13[1];
      uVar24 = puVar13[2];
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      lVar15 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      auStack_a0 = LitMotion_LMotion__Create_2eaa1b4
                             (uVar20,uVar22,uVar24,*(undefined4 *)(lVar15 + 0xc),
                              *(undefined4 *)(lVar15 + 0x10),*(undefined4 *)(lVar15 + 0x14),
                              _UNK_013aa8f4,0);
      auVar26 = FUN_024f4e50(auStack_a0,0x1b,*(undefined8 *)puVar5);
      LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                (auVar26._0_8_,auVar26._8_8_,*(undefined8 *)piVar17,*(undefined8 *)puVar4);
      if (cRam0000000004f4a196 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8a18);
        cRam0000000004f4a196 = '\x01';
      }
      puVar3 = PTR_DAT_049b8a18;
      puVar13 = *(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8);
      fVar21 = (float)puVar13[4];
      fVar23 = (float)puVar13[5];
      if (cRam0000000004f49d57 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8a18);
        cRam0000000004f49d57 = '\x01';
        puVar13 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
      }
      auStack_b0 = LitMotion_LMotion__Create_2eaa148
                             (fVar21 * 1000.0,fVar23 * 1000.0,*puVar13,puVar13[1],_UNK_013aa4b8,0);
      auVar26 = FUN_024f4e50(auStack_b0,0x1b,*(undefined8 *)puVar8);
      LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                (auVar26._0_8_,auVar26._8_8_,*(undefined8 *)piVar17,*(undefined8 *)puVar9);
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_90 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(700,0,8,0,0,0);
      thunk_FUN_021f190c(auStack_90,0);
      auStack_c0 = auStack_90;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar10 = auStack_c0._0_8_;
      auVar26 = auStack_b0;
      auVar2 = auStack_a0;
      if ((long *)auStack_c0._0_8_ != (long *)0x0) {
        lVar15 = *(long *)auStack_c0._0_8_;
        uVar19 = auStack_c0._8_8_ & 0xffff;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_025523b8;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)FUN_02229a4c(auStack_c0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025523b8:
        iVar11 = (*(code *)*puVar12)(uVar10,uVar19,puVar12[1]);
        auVar26 = auStack_b0;
        auVar2 = auStack_a0;
        if (iVar11 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0xc) = auStack_c0;
          thunk_FUN_021f190c(param_1 + 0xc,0);
          FUN_0235c25c(param_1 + 2,auStack_c0,param_1,*(undefined8 *)PTR_DAT_049c48f0);
          return;
        }
      }
      goto LAB_025523cc;
    }
    auStack_c0 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  auStack_b0 = auVar26;
  auStack_a0 = auVar2;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar10 = auStack_c0._0_8_;
  if ((long *)auStack_c0._0_8_ != (long *)0x0) {
    lVar15 = *(long *)auStack_c0._0_8_;
    uVar19 = auStack_c0._8_8_ & 0xffff;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
          goto LAB_025525f4;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(auStack_c0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025525f4:
    (*(code *)*puVar12)(uVar10,uVar19,puVar12[1]);
  }
  if (cRam0000000004f49d57 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a18);
    cRam0000000004f49d57 = '\x01';
  }
  puVar3 = PTR_DAT_049b8a18;
  puVar13 = *(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8);
  uVar20 = *puVar13;
  uVar22 = puVar13[1];
  if (cRam0000000004f4a196 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a18);
    cRam0000000004f4a196 = '\x01';
    puVar13 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
  }
  uVar24 = _UNK_013aa4b8;
  auVar26 = LitMotion_LMotion__Create_2eaa148
                      (uVar20,uVar22,(float)puVar13[4] * 1000.0,(float)puVar13[5] * 1000.0,
                       _UNK_013aa4b8,0);
  auStack_b0 = auVar26;
  auVar26 = FUN_024f4e50(auStack_b0,0x1b,*(undefined8 *)puVar8);
  LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
            (auVar26._0_8_,auVar26._8_8_,*(undefined8 *)(param_1 + 10),*(undefined8 *)puVar9);
  auVar26 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0,_UNK_013aa8fc,0);
  LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
            (auVar26._0_8_,auVar26._8_8_,*(undefined8 *)(param_1 + 8),*(undefined8 *)puVar7);
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  lVar15 = *(long *)puVar6;
  lVar14 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  uVar20 = *(undefined4 *)(lVar14 + 0xc);
  uVar22 = *(undefined4 *)(lVar14 + 0x10);
  uVar25 = *(undefined4 *)(lVar14 + 0x14);
  if (*(int *)(lVar15 + 0xe4) == 0) {
    FUN_021f0574();
    lVar15 = *(long *)puVar6;
  }
  puVar13 = *(undefined4 **)(lVar15 + 0xb8);
  auVar26 = LitMotion_LMotion__Create_2eaa1b4
                      (uVar20,uVar22,uVar25,*puVar13,puVar13[1],puVar13[2],uVar24,0);
  auStack_a0 = auVar26;
  auVar26 = FUN_024f4e50(auStack_a0,0x19,*(undefined8 *)puVar5);
  LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
            (auVar26._0_8_,auVar26._8_8_,*(undefined8 *)(param_1 + 10),*(undefined8 *)puVar4);
  if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar26 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(600,0,8,0,0,0);
  auStack_90 = auVar26;
  thunk_FUN_021f190c(auStack_90,0);
  auStack_c0 = auStack_90;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar10 = auStack_c0._0_8_;
  if ((long *)auStack_c0._0_8_ != (long *)0x0) {
    lVar15 = *(long *)auStack_c0._0_8_;
    uVar19 = auStack_c0._8_8_ & 0xffff;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0255286c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(auStack_c0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0255286c:
    iVar11 = (*(code *)*puVar12)(uVar10,uVar19,puVar12[1]);
    if (iVar11 == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0xc) = auStack_c0;
      thunk_FUN_021f190c(param_1 + 0xc,0);
      FUN_0235c25c(param_1 + 2,auStack_c0,param_1,*(undefined8 *)PTR_DAT_049c48f0);
      return;
    }
  }
LAB_02552880:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar10 = auStack_c0._0_8_;
  if ((long *)auStack_c0._0_8_ != (long *)0x0) {
    lVar15 = *(long *)auStack_c0._0_8_;
    uVar19 = auStack_c0._8_8_ & 0xffff;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
          goto LAB_02552900;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(auStack_c0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02552900:
    (*(code *)*puVar12)(uVar10,uVar19,puVar12[1]);
  }
  if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar15 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 6),0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__SetActive_3c1ce34(lVar15,0,0);
  *param_1 = -2;
  piVar17 = param_1 + 8;
  piVar17[0] = 0;
  piVar17[1] = 0;
  thunk_FUN_021f190c(piVar17,0);
  piVar17 = param_1 + 10;
  piVar17[0] = 0;
  piVar17[1] = 0;
  thunk_FUN_021f190c(piVar17,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar18 = *(long **)(param_1 + 2);
  if (plVar18 != (long *)0x0) {
    lVar15 = *plVar18;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
          goto LAB_025529d8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(plVar18,*(long *)PTR_DAT_049b56d0,2);
LAB_025529d8:
    (*(code *)*puVar12)(plVar18,puVar12[1]);
  }
  return;
}

