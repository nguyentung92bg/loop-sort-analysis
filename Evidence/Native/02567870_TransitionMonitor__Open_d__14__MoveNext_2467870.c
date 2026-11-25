/* IL2CPP: TransitionMonitor.<Open>d__14$$MoveNext
void TransitionMonitor__Open_d__14__MoveNext (TransitionMonitor__Open_d__14_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TransitionMonitor.<Open>d__14$$MoveNext
   void TransitionMonitor__Open_d__14__MoveNext (TransitionMonitor__Open_d__14_o __this, const
   MethodInfo* method); */

void TransitionMonitor__Open_d__14__MoveNext_2467870(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  if ((bRam0000000004f4b96f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5390);
    FUN_021f03f8(PTR_DAT_049c5388);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2be8);
    FUN_021f03f8(PTR_DAT_049c2bf0);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b96f = 1;
  }
  puVar3 = PTR_DAT_049c2bf0;
  puVar2 = PTR_DAT_049c2288;
  puVar1 = PTR_DAT_049b5138;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  iVar5 = *param_1;
  lVar11 = *(long *)(param_1 + 8);
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  auVar16 = ZEXT816(0);
  if (iVar5 < 2) {
    if (iVar5 == 0) {
      auStack_80 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
LAB_02567ab8:
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar14 = auStack_80._0_8_;
      if ((long *)auStack_80._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_80._0_8_;
        uVar13 = auStack_80._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_02567b38;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02567b38:
        (*(code *)*puVar6)(uVar14,uVar13,puVar6[1]);
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar15 = *(float *)(lVar11 + 0xa0);
      if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar14 = System_TimeSpan__FromSeconds_311711c((double)fVar15,0);
      uVar12 = *(undefined8 *)(param_1 + 6);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar16 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar14,0,8,uVar12,0,0);
      auStack_70 = auVar16;
      thunk_FUN_021f190c(auStack_70,0);
      auStack_80 = auStack_70;
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
      uVar14 = auStack_80._0_8_;
      if ((long *)auStack_80._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_80._0_8_;
        uVar13 = auStack_80._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02567c70;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02567c70:
        iVar5 = (*(code *)*puVar6)(uVar14,uVar13,puVar6[1]);
        if (iVar5 == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 10) = auStack_80;
          thunk_FUN_021f190c(param_1 + 10,0);
          FUN_0235c25c(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c5390);
          return;
        }
      }
    }
    else {
      if (iVar5 != 1) goto LAB_02567988;
      auStack_80 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
    }
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar14 = auStack_80._0_8_;
    if ((long *)auStack_80._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_80._0_8_;
      uVar13 = auStack_80._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_02567d04;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02567d04:
      (*(code *)*puVar6)(uVar14,uVar13,puVar6[1]);
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_90 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,*(undefined4 *)(lVar11 + 0x9c),0);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar2;
    }
    auVar16 = FUN_02526574(auStack_90,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x60),
                           *(undefined8 *)puVar3);
    uVar14 = *(undefined8 *)(lVar11 + 0xd0);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar16 = Extensions__BindToTransitionRate___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ef0b8
                        (auVar16._0_8_,auVar16._8_8_,uVar14,*(undefined8 *)PTR_DAT_049c5388);
    auVar16 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                        (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 6),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_70 = auVar16;
    thunk_FUN_021f190c(auStack_70,0);
    auStack_80 = auStack_70;
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
    uVar14 = auStack_80._0_8_;
    auVar16 = auStack_90;
    if ((long *)auStack_80._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_80._0_8_;
      uVar13 = auStack_80._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02567e8c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02567e8c:
      iVar5 = (*(code *)*puVar6)(uVar14,uVar13,puVar6[1]);
      auVar16 = auStack_90;
      if (iVar5 == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_80;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c25c(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c5390);
        return;
      }
    }
  }
  else {
    if (iVar5 != 2) {
      if (iVar5 == 3) {
        auStack_80 = *(undefined1 (*) [16])(param_1 + 10);
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *param_1 = -1;
        goto LAB_02568090;
      }
LAB_02567988:
      uVar14 = *(undefined8 *)(param_1 + 6);
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_70 = Cysharp_Threading_Tasks_UniTask__NextFrame_37c8914(uVar14,0,0);
      thunk_FUN_021f190c(auStack_70,0);
      auStack_80 = auStack_70;
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
      uVar14 = auStack_80._0_8_;
      if ((long *)auStack_80._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_80._0_8_;
        uVar13 = auStack_80._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02567aa4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02567aa4:
        iVar5 = (*(code *)*puVar6)(uVar14,uVar13,puVar6[1]);
        if (iVar5 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 10) = auStack_80;
          thunk_FUN_021f190c(param_1 + 10,0);
          FUN_0235c25c(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c5390);
          return;
        }
      }
      goto LAB_02567ab8;
    }
    auStack_80 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  auStack_90 = auVar16;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar14 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_80._0_8_;
    uVar13 = auStack_80._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02567f20;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02567f20:
    (*(code *)*puVar6)(uVar14,uVar13,puVar6[1]);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar16 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0,*(undefined4 *)(lVar11 + 0x9c),0);
  lVar7 = *(long *)puVar2;
  auStack_90 = auVar16;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
    lVar7 = *(long *)puVar2;
  }
  auVar16 = FUN_02526574(auStack_90,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x60),
                         *(undefined8 *)puVar3);
  auVar16 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                      (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)(lVar11 + 0xd8),
                       *(undefined8 *)PTR_DAT_049c2be8);
  auVar16 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                      (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 6),0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_70 = auVar16;
  thunk_FUN_021f190c(auStack_70,0);
  auStack_80 = auStack_70;
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
  uVar14 = auStack_80._0_8_;
  auVar16 = auStack_90;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_80._0_8_;
    uVar13 = auStack_80._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0256807c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0256807c:
    iVar5 = (*(code *)*puVar6)(uVar14,uVar13,puVar6[1]);
    auVar16 = auStack_90;
    if (iVar5 == 0) {
      *param_1 = 3;
      *(undefined1 (*) [16])(param_1 + 10) = auStack_80;
      thunk_FUN_021f190c(param_1 + 10,0);
      FUN_0235c25c(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c5390);
      return;
    }
  }
LAB_02568090:
  auStack_90 = auVar16;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar14 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_80._0_8_;
    uVar13 = auStack_80._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0256814c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0256814c:
    (*(code *)*puVar6)(uVar14,uVar13,puVar6[1]);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar11 = UnityEngine_Component__get_gameObject_3c187f4(lVar11,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__SetActive_3c1ce34(lVar11,0,0);
  cVar4 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar4 == '\0') {
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
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02568204;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b56d0,2);
LAB_02568204:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  return;
}

