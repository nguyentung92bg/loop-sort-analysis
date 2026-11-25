/* IL2CPP: TransitionMonitor.<Close>d__15$$MoveNext
void TransitionMonitor__Close_d__15__MoveNext (TransitionMonitor__Close_d__15_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TransitionMonitor.<Close>d__15$$MoveNext
   void TransitionMonitor__Close_d__15__MoveNext (TransitionMonitor__Close_d__15_o __this, const
   MethodInfo* method); */

void TransitionMonitor__Close_d__15__MoveNext_2466f04(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  if ((bRam0000000004f4b96e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5380);
    FUN_021f03f8(PTR_DAT_049c5388);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2be8);
    FUN_021f03f8(PTR_DAT_049c2bf0);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b96e = 1;
  }
  puVar3 = PTR_DAT_049c2bf0;
  puVar2 = PTR_DAT_049c2288;
  puVar1 = PTR_DAT_049b5138;
  auStack_70._8_8_ = 0;
  iVar5 = *param_1;
  lVar11 = *(long *)(param_1 + 6);
  auStack_80._8_8_ = 0;
  auStack_70._0_8_ = 0;
  auStack_80._0_8_ = 0;
  auVar14 = ZEXT816(0);
  if (iVar5 == 0) {
    auStack_70 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_02567138:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar12 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar6 = *(long *)auStack_70._0_8_;
      uVar13 = auStack_70._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_025671b8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025671b8:
      (*(code *)*puVar7)(uVar12,uVar13,puVar7[1]);
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_80 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,*(undefined4 *)(lVar11 + 0x98),0);
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar2;
    }
    auVar14 = FUN_02526574(auStack_80,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60),
                           *(undefined8 *)puVar3);
    auVar14 = LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
                        (auVar14._0_8_,auVar14._8_8_,*(undefined8 *)(lVar11 + 0xd8),
                         *(undefined8 *)PTR_DAT_049c2be8);
    auVar14 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                        (auVar14._0_8_,auVar14._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 8),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_60 = auVar14;
    thunk_FUN_021f190c(auStack_60,0);
    auStack_70 = auStack_60;
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
    uVar12 = auStack_70._0_8_;
    auVar14 = auStack_80;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar6 = *(long *)auStack_70._0_8_;
      uVar13 = auStack_70._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02567314;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02567314:
      iVar5 = (*(code *)*puVar7)(uVar12,uVar13,puVar7[1]);
      auVar14 = auStack_80;
      if (iVar5 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_70;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c25c(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c5380);
        return;
      }
    }
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        auStack_70 = *(undefined1 (*) [16])(param_1 + 10);
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *param_1 = -1;
        auStack_80 = auVar14;
        goto LAB_02567544;
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar6 = UnityEngine_Component__get_gameObject_3c187f4(lVar11,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar6,1,0);
      uVar12 = *(undefined8 *)(param_1 + 8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_60 = Cysharp_Threading_Tasks_UniTask__NextFrame_37c8914(uVar12,0,0);
      thunk_FUN_021f190c(auStack_60,0);
      auStack_70 = auStack_60;
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
      uVar12 = auStack_70._0_8_;
      if ((long *)auStack_70._0_8_ != (long *)0x0) {
        lVar6 = *(long *)auStack_70._0_8_;
        uVar13 = auStack_70._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02567124;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02567124:
        iVar5 = (*(code *)*puVar7)(uVar12,uVar13,puVar7[1]);
        if (iVar5 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 10) = auStack_70;
          thunk_FUN_021f190c(param_1 + 10,0);
          FUN_0235c25c(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c5380);
          return;
        }
      }
      goto LAB_02567138;
    }
    auStack_70 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  auStack_80 = auVar14;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar12 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_70._0_8_;
    uVar13 = auStack_70._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_025673a8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025673a8:
    (*(code *)*puVar7)(uVar12,uVar13,puVar7[1]);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar14 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0,*(undefined4 *)(lVar11 + 0x9c),0);
  lVar6 = *(long *)puVar2;
  auStack_80 = auVar14;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar2;
  }
  auVar14 = FUN_02526574(auStack_80,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60),
                         *(undefined8 *)puVar3);
  uVar12 = *(undefined8 *)(lVar11 + 0xd0);
  if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar14 = Extensions__BindToTransitionRate___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ef0b8
                      (auVar14._0_8_,auVar14._8_8_,uVar12,*(undefined8 *)PTR_DAT_049c5388);
  auVar14 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                      (auVar14._0_8_,auVar14._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 8),0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_60 = auVar14;
  thunk_FUN_021f190c(auStack_60,0);
  auStack_70 = auStack_60;
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
  uVar12 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar11 = *(long *)auStack_70._0_8_;
    uVar13 = auStack_70._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02567530;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02567530:
    iVar5 = (*(code *)*puVar7)(uVar12,uVar13,puVar7[1]);
    if (iVar5 == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 10) = auStack_70;
      thunk_FUN_021f190c(param_1 + 10,0);
      FUN_0235c25c(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c5380);
      return;
    }
  }
LAB_02567544:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar12 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar11 = *(long *)auStack_70._0_8_;
    uVar13 = auStack_70._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_025675c4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025675c4:
    (*(code *)*puVar7)(uVar12,uVar13,puVar7[1]);
  }
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
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0256765c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b56d0,2);
LAB_0256765c:
    (*(code *)*puVar7)(plVar10,puVar7[1]);
  }
  return;
}

