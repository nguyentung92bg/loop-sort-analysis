/* IL2CPP: WinStandartVariant.<HandleContinueClickAsync>d__29$$MoveNext
void WinStandartVariant__HandleContinueClickAsync_d__29__MoveNext (WinStandartVariant__HandleContinueClickAsync_d__29_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinStandartVariant.<HandleContinueClickAsync>d__29$$MoveNext
   void WinStandartVariant__HandleContinueClickAsync_d__29__MoveNext
   (WinStandartVariant__HandleContinueClickAsync_d__29_o __this, const MethodInfo* method); */

void WinStandartVariant__HandleContinueClickAsync_d__29__MoveNext_2496378(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4ba9d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230);
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c6030);
    FUN_021f03f8(PTR_DAT_049c2f20);
    FUN_021f03f8(PTR_DAT_049c6038);
    FUN_021f03f8(PTR_DAT_049c6040);
    FUN_021f03f8(PTR_DAT_049c6048);
    FUN_021f03f8(PTR_DAT_049c6050);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c4e98);
    FUN_021f03f8(PTR_DAT_049c5f58);
    FUN_021f03f8(PTR_DAT_049c6058);
    bRam0000000004f4ba9d = 1;
  }
  puVar2 = PTR_DAT_049b5230;
  lVar10 = *(long *)(param_1 + 4);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_02596670:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar6 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_60._0_8_;
      uVar13 = auStack_60._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_025966f0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025966f0:
      (*(code *)*puVar5)(uVar6,uVar13,puVar5[1]);
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar10 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar3 = *(int *)(*(long *)(lVar10 + 0xd0) + 0x10);
    lVar7 = *(long *)(param_1 + 6);
    iVar4 = CloudPrefsInt__get_Value_24e99c0(lVar10 + 0x88,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    puVar5 = (undefined8 *)PTR_DAT_049c4e98;
    if (iVar4 + 1 <= iVar3) {
      puVar5 = (undefined8 *)PTR_DAT_049c5f58;
    }
    puVar11 = (undefined8 *)(lVar7 + 0x20);
    *puVar11 = *puVar5;
    thunk_FUN_021f190c(puVar11);
    lVar7 = *(long *)(param_1 + 6);
    if (*(int *)(*(long *)PTR_DAT_049c2f20 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar6 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__Create_37c14c4(0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    puVar5 = (undefined8 *)(lVar7 + 0x10);
    *puVar5 = uVar6;
    thunk_FUN_021f190c(puVar5);
    lVar7 = *(long *)(lVar10 + 0x70);
    uVar14 = *(undefined8 *)(param_1 + 6);
    uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar6,uVar14,*(undefined8 *)PTR_DAT_049c6038,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar8 = AnalyticsModule__TryToShowAppRater_253f9c0(lVar7,uVar6,0);
    if ((uVar8 & 1) == 0) {
      if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar7 = *(long *)(*(long *)(param_1 + 6) + 0x10);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__TrySetResult_37c2bac(lVar7,0);
      goto LAB_025969f0;
    }
    if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__RestoreRaycaster_256eafc(*(long *)(lVar10 + 0x28),0,0);
    if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = *(long *)(*(long *)(param_1 + 6) + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar16 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__get_Task_37c1658(lVar7,0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = auVar16;
    thunk_FUN_021f190c(auStack_50,0);
    auStack_60 = auStack_50;
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
    uVar6 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_60._0_8_;
      uVar13 = auStack_60._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02596934;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02596934:
      iVar3 = (*(code *)*puVar5)(uVar6,uVar13,puVar5[1]);
      if (iVar3 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_60;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c6030);
        return;
      }
    }
  }
  else {
    if (*param_1 != 1) {
      lVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c6050);
      System_Object___ctor_3142338(lVar7,0);
      plVar12 = (long *)(param_1 + 6);
      *plVar12 = lVar7;
      thunk_FUN_021f190c(plVar12,lVar7);
      if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      *(undefined8 *)(*plVar12 + 0x18) = *(undefined8 *)(param_1 + 4);
      thunk_FUN_021f190c();
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Monitors__DisableRaycaster_256ea20(*(long *)(lVar10 + 0x28),0,0);
      lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                        (lVar10,0x99f4e89d,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar7 = UnityEngine_Component__get_gameObject_3c187f4(lVar7,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar7,0,0);
      lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetButton_335183c
                        (lVar10,0x4c676fd6,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar7 = UnityEngine_Component__get_gameObject_3c187f4(lVar7,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar7,0,0);
      WinStandartVariant__HandleEconomyUpdate_2494fc4(lVar10);
      if (*(long *)(lVar10 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      CloudSaveModule__MarkDirty_24ed184(*(long *)(lVar10 + 0x80),0);
      puVar1 = PTR_DAT_049b5138;
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_50 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(0x6a4,1,8,0,0,0);
      thunk_FUN_021f190c(auStack_50,0);
      auStack_60 = auStack_50;
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
      uVar6 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_60._0_8_;
        uVar13 = auStack_60._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0259665c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0259665c:
        iVar3 = (*(code *)*puVar5)(uVar6,uVar13,puVar5[1]);
        if (iVar3 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 8) = auStack_60;
          thunk_FUN_021f190c(param_1 + 8,0);
          FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c6030);
          return;
        }
      }
      goto LAB_02596670;
    }
    auStack_60 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar6 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_60._0_8_;
    uVar13 = auStack_60._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_025969c8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025969c8:
    (*(code *)*puVar5)(uVar6,uVar13,puVar5[1]);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Monitors__DisableRaycaster_256ea20(*(long *)(lVar10 + 0x28),0,0);
LAB_025969f0:
  lVar10 = *(long *)(lVar10 + 0x60);
  piVar9 = param_1 + 6;
  uVar14 = *(undefined8 *)piVar9;
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar6,uVar14,*(undefined8 *)PTR_DAT_049c6040,0);
  uVar15 = *(undefined8 *)piVar9;
  uVar14 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
  System_Action___ctor_306b98c(uVar14,uVar15,*(undefined8 *)PTR_DAT_049c6048,0);
  if (lVar10 != 0) {
    AdsModule__WatchInterstitial_253d3a8(lVar10,*(undefined8 *)PTR_DAT_049c6058,uVar6,uVar14,0);
    *param_1 = -2;
    param_1[6] = 0;
    param_1[7] = 0;
    thunk_FUN_021f190c(piVar9,0);
    FUN_0235afc8(param_1 + 2,0);
                    /* try { // try from 02596aa0 to 02696c17 has its CatchHandler @ 02596aa0
                       catch() { ... } // from try @ 02596aa0 with catch @ 02596aa0
                       catch() { ... } // from try @ 02596ce0 with catch @ 02596aa0
                       catch() { ... } // from try @ 02596dbc with catch @ 02596aa0
                       catch() { ... } // from try @ 02596e1c with catch @ 02596aa0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

