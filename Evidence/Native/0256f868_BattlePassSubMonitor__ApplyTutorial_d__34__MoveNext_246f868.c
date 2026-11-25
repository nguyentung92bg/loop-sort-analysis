/* IL2CPP: BattlePassSubMonitor.<ApplyTutorial>d__34$$MoveNext
void BattlePassSubMonitor__ApplyTutorial_d__34__MoveNext (BattlePassSubMonitor__ApplyTutorial_d__34_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0256fe4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: BattlePassSubMonitor.<ApplyTutorial>d__34$$MoveNext
   void BattlePassSubMonitor__ApplyTutorial_d__34__MoveNext
   (BattlePassSubMonitor__ApplyTutorial_d__34_o __this, const MethodInfo* method); */

void BattlePassSubMonitor__ApplyTutorial_d__34__MoveNext_246f868(uint *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_70 [16];
  long lStack_58;
  undefined1 auStack_50 [16];
  uint uStack_34;
  
  if ((bRam0000000004f4b99b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5550);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b99b = 1;
  }
  uStack_34 = *param_1;
  lStack_58 = *(long *)(param_1 + 4);
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  if (1 < uStack_34) {
    if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_58 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__DisableRaycaster_256ea20(*(long *)(lStack_58 + 0x28),lStack_58,0);
    if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_58 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    CloudPrefsBool__Set_24eb1bc(*(long *)(lStack_58 + 0x50) + 0x88,1,0);
  }
  puVar2 = PTR_DAT_049b6128;
  puVar1 = PTR_DAT_049b5138;
  if (uStack_34 == 0) {
    auStack_70 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uStack_34 = 0xffffffff;
    *param_1 = 0xffffffff;
    goto LAB_0256fadc;
  }
  if (uStack_34 == 1) {
    auStack_70 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uStack_34 = 0xffffffff;
    *param_1 = 0xffffffff;
  }
  else {
    lVar7 = *(long *)(param_1 + 6);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_UI_LoopScrollRectBase__RefillCells_2ebe22c(0,lVar7,*(int *)(lVar7 + 0x28) + -1,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = System_TimeSpan__FromSeconds_311711c(_UNK_013a86c0,0);
    if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(lStack_58,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar4,0,8,uVar5,0,0);
    thunk_FUN_021f190c(auStack_50,0);
    auStack_70 = auStack_50;
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
    uVar4 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_70._0_8_;
      uVar11 = auStack_70._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0256fac8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0256fac8:
      iVar3 = (*(code *)*puVar6)(uVar4,uVar11,puVar6[1]);
      if (iVar3 != 0) goto LAB_0256fadc;
      uStack_34 = 0;
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = auStack_70;
      thunk_FUN_021f190c(param_1 + 8,0);
      FUN_0235c420(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c5550);
LAB_0256fde0:
      uVar10 = 6;
      goto LAB_0256fde8;
    }
LAB_0256fadc:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar4 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_70._0_8_;
      uVar11 = auStack_70._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0256fb5c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0256fb5c:
      (*(code *)*puVar6)(uVar4,uVar11,puVar6[1]);
    }
    if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_UI_LoopScrollRectBase__ScrollToCellWithinTime_2ebcf80
              (_UNK_013aa724,0,*(long *)(param_1 + 6),0,1,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = System_TimeSpan__FromSeconds_311711c(0x4008000000000000,0);
    if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = UnityEngine_MonoBehaviour__get_destroyCancellationToken_3c1edb4(lStack_58,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar12 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar4,0,8,uVar5,0,0);
    auStack_50 = auVar12;
    thunk_FUN_021f190c(auStack_50,0);
    auStack_70 = auStack_50;
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
    uVar4 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_70._0_8_;
      uVar11 = auStack_70._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0256fcb8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0256fcb8:
      iVar3 = (*(code *)*puVar6)(uVar4,uVar11,puVar6[1]);
      if (iVar3 == 0) {
        uStack_34 = 1;
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_70;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c420(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c5550);
        goto LAB_0256fde0;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar4 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_70._0_8_;
    uVar11 = auStack_70._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0256fd4c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0256fd4c:
    (*(code *)*puVar6)(uVar4,uVar11,puVar6[1]);
  }
  uVar10 = 8;
LAB_0256fde8:
  if ((int)uStack_34 < 0) {
    if ((lStack_58 == 0) || (*(long *)(lStack_58 + 0x28) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__RestoreRaycaster_256eafc(*(long *)(lStack_58 + 0x28),lStack_58,0);
  }
  if ((uVar10 | 8) == 8) {
    *param_1 = 0xfffffffe;
    FUN_0235afc8(param_1 + 2,0);
  }
  return;
}

