/* IL2CPP: PlayingMonitor.<ApplyThemeMotion>d__49$$MoveNext
void PlayingMonitor__ApplyThemeMotion_d__49__MoveNext (PlayingMonitor__ApplyThemeMotion_d__49_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor.<ApplyThemeMotion>d__49$$MoveNext
   void PlayingMonitor__ApplyThemeMotion_d__49__MoveNext (PlayingMonitor__ApplyThemeMotion_d__49_o
   __this, const MethodInfo* method); */

void PlayingMonitor__ApplyThemeMotion_d__49__MoveNext_2452c68(int *param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4b8df & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c48f8);
    FUN_021f03f8(PTR_DAT_049c4900);
    FUN_021f03f8(PTR_DAT_049c4230);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b8df = 1;
  }
  puVar1 = PTR_DAT_049b5138;
  iVar3 = *param_1;
  lVar9 = *(long *)(param_1 + 4);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (iVar3 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
LAB_02552da4:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    plVar10 = (long *)auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar6 = *(long *)auStack_60._0_8_;
      uVar11 = auStack_60._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) goto LAB_02552f3c;
          uVar8 = uVar8 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
      goto LAB_02552f4c;
    }
    goto LAB_02552f5c;
  }
  if (iVar3 == 1) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
LAB_02552d20:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    plVar10 = (long *)auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar6 = *(long *)auStack_60._0_8_;
      uVar11 = auStack_60._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) goto LAB_02552f3c;
          uVar8 = uVar8 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
      goto LAB_02552f4c;
    }
    goto LAB_02552f5c;
  }
  if (iVar3 == 2) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
    goto LAB_02553090;
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  FUN_0235c744(*(undefined8 *)(lVar9 + 0x100),auStack_50,*(undefined8 *)PTR_DAT_049c4230);
  auVar12._8_8_ = auStack_50._8_8_;
  auVar12._0_8_ = auStack_50._0_8_;
  if (auStack_50._0_4_ == 1) {
    uVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                      (lVar9,0x3207eac9,0);
    auStack_50 = PlayingMonitor__ApplyLevelPreviewMotion_244f144(lVar9,uVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
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
    uVar4 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar6 = *(long *)auStack_60._0_8_;
      uVar11 = auStack_60._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_025532fc;
          }
          uVar8 = uVar8 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025532fc:
      iVar3 = (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
        thunk_FUN_021f190c(param_1 + 6,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c48f8);
        return;
      }
    }
    goto LAB_02552da4;
  }
  bVar2 = auStack_50._0_4_ == 2;
  auStack_50 = auVar12;
  if (bVar2) {
    uVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                      (lVar9,0xb7d0b56e,0);
    auStack_50 = PlayingMonitor__ApplyLevelPreviewMotion_244f144(lVar9,uVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
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
    uVar4 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar6 = *(long *)auStack_60._0_8_;
      uVar11 = auStack_60._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_025532a0;
          }
          uVar8 = uVar8 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025532a0:
      iVar3 = (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
      if (iVar3 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
        thunk_FUN_021f190c(param_1 + 6,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c48f8);
        return;
      }
    }
    goto LAB_02552d20;
  }
LAB_02552f60:
  lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (lVar9,0x46e6cf5d,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (lVar6,auStack_50,*(undefined8 *)PTR_DAT_049c4900);
  if (auStack_50._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar12 = CoreStreakPlayingElement__ApplyItemMotion_2418e28(auStack_50._0_8_,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_50 = auVar12;
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
  uVar4 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_60._0_8_;
    uVar11 = auStack_60._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0255307c;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0255307c:
    iVar3 = (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
    if (iVar3 == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
      thunk_FUN_021f190c(param_1 + 6,0);
      FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c48f8);
      return;
    }
  }
LAB_02553090:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar4 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_60._0_8_;
    uVar11 = auStack_60._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0255314c;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0255314c:
    (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
  }
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x1a8) != 0) {
      Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__TrySetResult_37c2bac
                (*(long *)(lVar9 + 0x1a8),0);
    }
    *param_1 = -2;
    FUN_0235afc8(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
LAB_02552f3c:
  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
  plVar10 = (long *)auStack_60._0_8_;
LAB_02552f4c:
  (*(code *)*puVar5)(plVar10,uVar11,puVar5[1]);
LAB_02552f5c:
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  goto LAB_02552f60;
}

