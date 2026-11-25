/* IL2CPP: UIMotionExtensions.<ApplyOrderedOpen>d__6$$MoveNext
void UIMotionExtensions__ApplyOrderedOpen_d__6__MoveNext (UIMotionExtensions__ApplyOrderedOpen_d__6_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02513550) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: UIMotionExtensions.<ApplyOrderedOpen>d__6$$MoveNext
   void UIMotionExtensions__ApplyOrderedOpen_d__6__MoveNext
   (UIMotionExtensions__ApplyOrderedOpen_d__6_o __this, const MethodInfo* method); */

void UIMotionExtensions__ApplyOrderedOpen_d__6__MoveNext_2412df8(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  int iVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_e0;
  int iStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_b8 [16];
  long lStack_a8;
  int iStack_9c;
  int *piStack_98;
  undefined1 auStack_90 [16];
  
  piStack_98 = param_1;
  if ((bRam0000000004f4b730 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2bd0);
    FUN_021f03f8(PTR_DAT_049c1b58);
    FUN_021f03f8(PTR_DAT_049c1b60);
    FUN_021f03f8(PTR_DAT_049c2bd8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c1b88);
    FUN_021f03f8(PTR_DAT_049c2808);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c2bc0);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049c1b90);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4b730 = 1;
  }
  iStack_9c = *param_1;
  auStack_b8._8_8_ = 0;
  lStack_a8 = 0;
  auStack_b8._0_8_ = 0;
  auStack_d0._0_8_ = 0;
  auStack_d0._8_8_ = 0;
  iStack_d8 = 0;
  if (iStack_9c == 0) {
LAB_02513258:
    iStack_9c = -1;
    auStack_d0._8_8_ = *(undefined8 *)(piStack_98 + 0x12);
    auStack_d0._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(piStack_98 + 0x10);
    auVar24 = *(undefined1 (*) [16])(piStack_98 + 0x10);
    piStack_98[0x10] = 0;
    piStack_98[0x11] = 0;
    piStack_98[0x12] = 0;
    piStack_98[0x13] = 0;
    *piStack_98 = -1;
  }
  else {
    lVar8 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                      (*(undefined8 *)(param_1 + 6),param_1[8],0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = UnityEngine_GameObject__get_transform_3c1ca74(*(long *)(lVar8 + 0x20),0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar7 = UnityEngine_Transform__get_childCount_3c2ef3c(lVar8,0);
    if (*(int *)(*(long *)PTR_DAT_049c1b60 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar24 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                        (&lStack_a8,*(undefined8 *)PTR_DAT_049c1b58);
    *(undefined1 (*) [16])(piStack_98 + 0xc) = auVar24;
    thunk_FUN_021f190c((undefined1 (*) [16])(piStack_98 + 0xc),0);
    puVar4 = PTR_DAT_049c2288;
    puVar3 = PTR_DAT_049c1b88;
    puVar2 = PTR_DAT_049c1690;
    puVar1 = PTR_DAT_049bbf90;
    if (iStack_9c == 0) goto LAB_02513258;
    if (0 < iVar7) {
      fVar19 = 0.0;
      iVar18 = 0;
      do {
        lVar9 = UnityEngine_Transform__GetChild_3c2f8bc(lVar8,iVar18,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar10 = UnityEngine_Component__get_transform_3c18724(lVar9,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        puVar12 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
        UnityEngine_Transform__set_localScale_3c2ddfc(*puVar12,puVar12[1],puVar12[2],lVar10,0);
        puVar12 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
        uVar20 = *puVar12;
        uVar22 = puVar12[1];
        uVar23 = puVar12[2];
        if (cRam0000000004f4a190 == '\0') {
          FUN_021f03f8(puVar1);
          cRam0000000004f4a190 = '\x01';
        }
        lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
        auVar24 = LitMotion_LMotion__Create_2eaa1b4
                            (uVar20,uVar22,uVar23,*(undefined4 *)(lVar10 + 0xc),
                             *(undefined4 *)(lVar10 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                             piStack_98[9],0);
        auStack_b8 = auVar24;
        auVar24 = FUN_024f4e50(auStack_b8,0x1b,*(undefined8 *)PTR_DAT_049c1680);
        lVar10 = *(long *)puVar4;
        auStack_b8 = auVar24;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          FUN_021f0574();
          lVar10 = *(long *)puVar4;
        }
        auVar24 = FUN_02526574(auStack_b8,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x60),
                               *(undefined8 *)PTR_DAT_049c2bc0);
        auStack_b8 = auVar24;
        auVar24 = FUN_024f6e90(fVar19,auStack_b8,0,1,*(undefined8 *)PTR_DAT_049c2808);
        if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auVar24 = Extensions__BindToLocalScaleNonNegative___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25eebec
                            (auVar24._0_8_,auVar24._8_8_,lVar9,*(undefined8 *)PTR_DAT_049c2bd8);
        auVar24 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                            (auVar24._0_8_,auVar24._8_8_ & 0xffffffff,
                             *(undefined8 *)(piStack_98 + 10),0);
        if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        fVar21 = (float)piStack_98[9];
        auStack_90 = auVar24;
        FUN_02333498(lStack_a8,auStack_90,*(undefined8 *)puVar3);
        fVar19 = fVar19 + fVar21;
        iVar18 = iVar18 + 1;
      } while (iVar7 != iVar18);
    }
    lVar8 = lStack_a8;
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar24 = Cysharp_Threading_Tasks_UniTask__WhenAll_37cc4d0(lVar8,0);
    auStack_90 = auVar24;
    thunk_FUN_021f190c(auStack_90,0);
    auStack_d0 = auStack_90;
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
    uVar15 = auStack_d0._0_8_;
    auVar24 = auStack_d0;
    if ((long *)auStack_d0._0_8_ != (long *)0x0) {
      lVar8 = *(long *)auStack_d0._0_8_;
      uVar16 = auStack_d0._8_8_ & 0xffff;
      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02513284;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_02229a4c(auStack_d0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02513284:
      iVar7 = (*(code *)*puVar11)(uVar15,uVar16,puVar11[1]);
      auVar24 = auStack_d0;
      if (iVar7 == 0) {
        iStack_9c = 0;
        *piStack_98 = 0;
        *(undefined1 (*) [16])(piStack_98 + 0x10) = auStack_d0;
        thunk_FUN_021f190c(piStack_98 + 0x10,0);
        FUN_0235c25c(piStack_98 + 2,auStack_d0,piStack_98,*(undefined8 *)PTR_DAT_049c2bd0);
        iVar7 = 7;
        goto LAB_02513334;
      }
    }
  }
  auStack_d0 = auVar24;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar15 = auStack_d0._0_8_;
  if ((long *)auStack_d0._0_8_ != (long *)0x0) {
    lVar8 = *(long *)auStack_d0._0_8_;
    uVar16 = auStack_d0._8_8_ & 0xffff;
    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_0251331c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar11 = (undefined8 *)FUN_02229a4c(auStack_d0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0251331c:
    (*(code *)*puVar11)(uVar15,uVar16,puVar11[1]);
  }
  iVar7 = 8;
LAB_02513334:
  if (iStack_9c < 0) {
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (piStack_98 + 0xc,*(undefined8 *)PTR_DAT_049c1b90);
  }
  piVar14 = piStack_98;
  cVar6 = cRam0000000004f49bfa;
  cVar5 = cRam0000000004f49bf9;
  if (iVar7 == 8) {
    *piStack_98 = -2;
    piStack_98[0xc] = 0;
    piStack_98[0xd] = 0;
    piStack_98[0xe] = 0;
    piStack_98[0xf] = 0;
    if (cVar6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b56d0);
      cRam0000000004f49bfa = '\x01';
    }
    plVar17 = *(long **)(piVar14 + 2);
    if (plVar17 != (long *)0x0) {
      lVar8 = *plVar17;
      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b56d0) {
            puVar11 = (undefined8 *)(lVar8 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_02513510;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)PTR_DAT_049b56d0,2);
LAB_02513510:
      (*(code *)*puVar11)(plVar17,puVar11[1]);
    }
  }
  else if (iVar7 == 0) {
    uVar15 = (&uStack_e0)[iStack_d8 + -1];
    *piStack_98 = -2;
    piStack_98[0xc] = 0;
    piStack_98[0xd] = 0;
    piStack_98[0xe] = 0;
    piStack_98[0xf] = 0;
    if (cVar5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b56d0);
      cRam0000000004f49bf9 = '\x01';
    }
    plVar17 = *(long **)(piVar14 + 2);
    if (plVar17 == (long *)0x0) {
      *(undefined8 *)(piVar14 + 4) = uVar15;
      thunk_FUN_021f190c(piVar14 + 4,uVar15);
    }
    else {
      lVar8 = *plVar17;
      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b56d0) {
            puVar11 = (undefined8 *)(lVar8 + (long)(*piVar14 + 3) * 0x10 + 0x138);
            goto LAB_025134e8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar11 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)PTR_DAT_049b56d0,3);
LAB_025134e8:
      (*(code *)*puVar11)(plVar17,uVar15,puVar11[1]);
    }
  }
  return;
}

