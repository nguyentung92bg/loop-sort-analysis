/* IL2CPP: GarageSaleSubMonitor.<UpdateProgressView>d__15$$MoveNext
void GarageSaleSubMonitor__UpdateProgressView_d__15__MoveNext (GarageSaleSubMonitor__UpdateProgressView_d__15_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025784cc) */
/* WARNING: Removing unreachable block (ram,0x02578af8) */
/* WARNING: Removing unreachable block (ram,0x02578b0c) */
/* IL2CPP: GarageSaleSubMonitor.<UpdateProgressView>d__15$$MoveNext
   void GarageSaleSubMonitor__UpdateProgressView_d__15__MoveNext
   (GarageSaleSubMonitor__UpdateProgressView_d__15_o __this, const MethodInfo* method); */

void GarageSaleSubMonitor__UpdateProgressView_d__15__MoveNext_2478248(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined1 auVar22 [16];
  ulong uStack_108;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  long *plStack_e0;
  int *piStack_d8;
  int **ppiStack_d0;
  long lStack_c8;
  int *piStack_c0;
  int **ppiStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  int iStack_6c;
  int *piStack_68;
  
  piStack_68 = param_1;
  if ((bRam0000000004f4b9d8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c5838);
    FUN_021f03f8(PTR_DAT_049c1b58);
    FUN_021f03f8(PTR_DAT_049c1b60);
    FUN_021f03f8(PTR_DAT_049c5840);
    FUN_021f03f8(PTR_DAT_049c32e0);
    FUN_021f03f8(PTR_DAT_049c5848);
    FUN_021f03f8(PTR_DAT_049c32e8);
    FUN_021f03f8(PTR_DAT_049c5850);
    FUN_021f03f8(PTR_DAT_049c32f0);
    FUN_021f03f8(PTR_DAT_049c1b88);
    FUN_021f03f8(PTR_DAT_049c32f8);
    FUN_021f03f8(PTR_DAT_049c5858);
    FUN_021f03f8(PTR_DAT_049c5860);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c1b90);
    FUN_021f03f8(PTR_DAT_049c5868);
    FUN_021f03f8(PTR_DAT_049c5870);
    FUN_021f03f8(PTR_DAT_049c5878);
    FUN_021f03f8(PTR_DAT_049c5880);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b9d8 = 1;
  }
  puVar8 = PTR_DAT_049c5860;
  uStack_80 = 0;
  lStack_78 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  iStack_6c = *param_1;
  lVar18 = *(long *)(param_1 + 4);
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  iStack_a8 = 0;
  if (iStack_6c == 0) {
LAB_02578778:
    lStack_c8 = 0;
    ppiStack_b8 = &piStack_68;
    piStack_c0 = &iStack_6c;
  }
  else {
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar18 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(lVar18 + 0x68),&lStack_c8,*(undefined8 *)PTR_DAT_049c32f8);
    puVar6 = PTR_DAT_049c32f0;
    puVar4 = PTR_DAT_049c32e8;
    uStack_88 = piStack_c0;
    lStack_90 = lStack_c8;
    uStack_80 = ppiStack_b8;
    piStack_c0 = &iStack_6c;
    lStack_c8 = 0;
    ppiStack_b8 = (int **)&lStack_90;
    while (uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&lStack_90,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
      lVar19 = *(long *)puVar6;
      lVar12 = *(long *)(lVar19 + 0x20);
      uVar3 = *(ushort *)(lVar12 + 0x135);
      lVar13 = lVar12;
      if ((uVar3 & 1) == 0) {
        lVar13 = FUN_02229718();
        lVar12 = *(long *)(lVar19 + 0x20);
        uVar3 = *(ushort *)(lVar12 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar12 = FUN_02229718();
      }
      uVar14 = thunk_FUN_0224e54c(&lStack_90,
                                  *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&plStack_e0,uVar14,uVar1);
      if (plStack_e0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar13 = UnityEngine_Component__get_gameObject_3c187f4(plStack_e0,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar13,0,0);
    }
    if (iStack_6c < 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (ppiStack_b8,*(undefined8 *)PTR_DAT_049c32e0);
    }
    if (*(int *)(*(long *)PTR_DAT_049c1b60 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar22 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                        (&lStack_78,*(undefined8 *)PTR_DAT_049c1b58);
    *(undefined1 (*) [16])(piStack_68 + 8) = auVar22;
    thunk_FUN_021f190c((undefined1 (*) [16])(piStack_68 + 8),0);
    piStack_c0 = &iStack_6c;
    lStack_c8 = 0;
    ppiStack_b8 = &piStack_68;
    if (iStack_6c == 0) goto LAB_02578778;
    if (*(long *)(lVar18 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_Queue___Il2CppFullySharedGenericType___GetEnumerator_291fd54
              (*(long *)(lVar18 + 0x70),auStack_100,*(undefined8 *)PTR_DAT_049c5868);
    piStack_d8 = (int *)auStack_100._8_8_;
    plStack_e0 = (long *)auStack_100._0_8_;
    ppiStack_d0 = (int **)uStack_f0;
    *(undefined8 *)(piStack_68 + 0xe) = auStack_100._8_8_;
    *(undefined8 *)(piStack_68 + 0xc) = auStack_100._0_8_;
    *(undefined8 *)(piStack_68 + 0x10) = uStack_f0;
    thunk_FUN_021f190c(piStack_68 + 0xc,0);
    puVar9 = PTR_DAT_049c5880;
    puVar7 = PTR_DAT_049c5850;
    puVar6 = PTR_DAT_049c5848;
    puVar4 = PTR_DAT_049b3b98;
    piStack_d8 = &iStack_6c;
    plStack_e0 = (long *)0x0;
    ppiStack_d0 = &piStack_68;
    if (iStack_6c != 0) {
      iVar10 = 0;
      while( true ) {
        uVar11 = System_Collections_Generic_Queue_Enumerator___Il2CppFullySharedGenericType___MoveNext_28477dc
                           (piStack_68 + 0xc,*(undefined8 *)puVar6);
        lVar13 = lStack_78;
        puVar5 = PTR_DAT_049b5138;
        if ((uVar11 & 1) == 0) break;
        lVar13 = thunk_FUN_0222ca34(*(undefined8 *)puVar9);
        System_Object___ctor_3142338(lVar13,0);
        System_Collections_Generic_Queue_Enumerator___Il2CppFullySharedGenericType___get_Current_2847bf0
                  (piStack_68 + 0xc,auStack_100,*(undefined8 *)puVar7);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        puVar21 = (undefined8 *)(lVar13 + 0x10);
        *puVar21 = auStack_100._0_8_;
        thunk_FUN_021f190c(puVar21);
        uVar14 = *puVar21;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar11 = UnityEngine_Object__op_Equality_3c1eeb4(uVar14,0,0);
        if ((uVar11 & 1) == 0) {
          lVar12 = *(long *)(lVar18 + 0x68);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          if (iVar10 < *(int *)(lVar12 + 0x18)) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar12,iVar10,auStack_100,*(undefined8 *)puVar8);
          }
          else {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar12,*(int *)(lVar12 + 0x18) + -1,auStack_100,*(undefined8 *)puVar8);
          }
          uVar14 = auStack_100._0_8_;
          uVar1 = 0x39740faf;
          if (iVar10 < 1) {
            uVar1 = 0xcbb1848a;
          }
          lVar12 = *(long *)(lVar13 + 0x10);
          *(undefined4 *)(lVar13 + 0x18) = uVar1;
          if ((char)piStack_68[6] == '\0') {
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            lVar12 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0(lVar12,0);
            if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            UnityEngine_RectTransform__get_anchoredPosition_3c2be98(uVar14,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(lVar12,0);
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                      (*(undefined8 *)(lVar13 + 0x10),*(undefined4 *)(lVar13 + 0x18),0);
          }
          else {
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            uVar15 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0(lVar12,0);
            uVar16 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
            System_Action___ctor_306b98c(uVar16,lVar13,*(undefined8 *)PTR_DAT_049c5878,0);
            auVar22 = GarageSaleSubMonitor__ApplyProgressViewMotion_2477be8
                                (lVar18,uVar15,uVar14,uVar16);
            lVar13 = lStack_78;
            uStack_108 = uStack_108 & 0xffffffff00000000 | auVar22._8_8_ & 0xffffffff;
            auVar22 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                                (auVar22._0_8_,uStack_108,0,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            auStack_100 = auVar22;
            FUN_02333498(lVar13,auStack_100,*(undefined8 *)PTR_DAT_049c1b88);
          }
          iVar10 = iVar10 + 1;
        }
      }
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar22 = Cysharp_Threading_Tasks_UniTask__WhenAll_37cc4d0(lVar13,0);
      auStack_100 = auVar22;
      thunk_FUN_021f190c(auStack_100,0);
      auStack_a0 = auStack_100;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar14 = auStack_a0._0_8_;
      auVar22 = auStack_a0;
      if ((long *)auStack_a0._0_8_ != (long *)0x0) {
        lVar13 = *(long *)auStack_a0._0_8_;
        uVar20 = auStack_a0._8_8_ & 0xffff;
        uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar11 != 0) {
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar21 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_02578a80;
            }
            uVar11 = uVar11 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar11 != 0);
        }
        puVar21 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02578a80:
        iVar10 = (*(code *)*puVar21)(uVar14,uVar20,puVar21[1]);
        auVar22 = auStack_a0;
        if (iVar10 == 0) {
          iStack_6c = 0;
          *piStack_68 = 0;
          *(undefined1 (*) [16])(piStack_68 + 0x12) = auStack_a0;
          thunk_FUN_021f190c(piStack_68 + 0x12,0);
          FUN_0235c420(piStack_68 + 2,auStack_a0,piStack_68,*(undefined8 *)PTR_DAT_049c5838);
          iVar10 = 0x11;
LAB_0257898c:
          if (iStack_6c < 0) {
            System_Collections_Generic_Queue_Enumerator___Il2CppFullySharedGenericType___Dispose_2847728
                      (*ppiStack_d0 + 0xc,*(undefined8 *)PTR_DAT_049c5840);
          }
          if (*piStack_c0 < 0) {
            UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                      (*ppiStack_b8 + 8,*(undefined8 *)PTR_DAT_049c1b90);
          }
          if (lStack_c8 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f0698();
          }
          if (iVar10 == 0x14) {
            *piStack_68 = -2;
            piStack_68[0x10] = 0;
            piStack_68[0x11] = 0;
            piStack_68[10] = 0;
            piStack_68[0xb] = 0;
            piStack_68[8] = 0;
            piStack_68[9] = 0;
            piStack_68[0xe] = 0;
            piStack_68[0xf] = 0;
            piStack_68[0xc] = 0;
            piStack_68[0xd] = 0;
            FUN_0235afc8(piStack_68 + 2,0);
          }
          else if (iVar10 == 0) {
            *piStack_68 = -2;
            uVar14 = (&uStack_b0)[iStack_a8 + -1];
            piStack_68[0x10] = 0;
            piStack_68[0x11] = 0;
            piStack_68[10] = 0;
            piStack_68[0xb] = 0;
            piStack_68[8] = 0;
            piStack_68[9] = 0;
            piStack_68[0xe] = 0;
            piStack_68[0xf] = 0;
            piStack_68[0xc] = 0;
            piStack_68[0xd] = 0;
            FUN_0235aea8(piStack_68 + 2,uVar14,0);
          }
          return;
        }
      }
      goto LAB_025787a0;
    }
  }
  ppiStack_d0 = &piStack_68;
  piStack_d8 = &iStack_6c;
  plStack_e0 = (long *)0x0;
  iStack_6c = -1;
  auStack_a0._8_8_ = *(undefined8 *)(piStack_68 + 0x14);
  auStack_a0._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(piStack_68 + 0x12);
  auVar22 = *(undefined1 (*) [16])(piStack_68 + 0x12);
  piStack_68[0x12] = 0;
  piStack_68[0x13] = 0;
  piStack_68[0x14] = 0;
  piStack_68[0x15] = 0;
  *piStack_68 = -1;
LAB_025787a0:
  auStack_a0 = auVar22;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar14 = auStack_a0._0_8_;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar13 = *(long *)auStack_a0._0_8_;
    uVar20 = auStack_a0._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar11 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar21 = (undefined8 *)(lVar13 + (long)(*piVar17 + 2) * 0x10 + 0x138);
          goto LAB_02578908;
        }
        uVar11 = uVar11 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar11 != 0);
    }
    puVar21 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02578908:
    (*(code *)*puVar21)(uVar14,uVar20,puVar21[1]);
  }
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar13 = *(long *)(lVar18 + 0x68);
  if (lVar13 != 0) {
    iVar10 = 0;
    do {
      if (*(int *)(lVar13 + 0x18) <= iVar10) {
        iVar10 = 0x14;
        goto LAB_0257898c;
      }
      if (*(long *)(lVar18 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      iVar2 = *(int *)(*(long *)(lVar18 + 0x70) + 0x20);
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar13,iVar10,auStack_100,*(undefined8 *)puVar8);
      if (auStack_100._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar13 = UnityEngine_Component__get_gameObject_3c187f4(auStack_100._0_8_,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar13,iVar10 < iVar2,0);
      lVar13 = *(long *)(lVar18 + 0x68);
      iVar10 = iVar10 + 1;
    } while (lVar13 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

