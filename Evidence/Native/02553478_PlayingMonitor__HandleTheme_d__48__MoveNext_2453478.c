/* IL2CPP: PlayingMonitor.<HandleTheme>d__48$$MoveNext
void PlayingMonitor__HandleTheme_d__48__MoveNext (PlayingMonitor__HandleTheme_d__48_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0255380c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: PlayingMonitor.<HandleTheme>d__48$$MoveNext
   void PlayingMonitor__HandleTheme_d__48__MoveNext (PlayingMonitor__HandleTheme_d__48_o __this,
   const MethodInfo* method); */

void PlayingMonitor__HandleTheme_d__48__MoveNext_2453478(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 auStack_60 [16];
  long lStack_48;
  undefined1 auStack_40 [16];
  int iStack_24;
  
  if ((bRam0000000004f4b8e0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4908);
    FUN_021f03f8(PTR_DAT_049c2f20);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b8e0 = 1;
  }
  iStack_24 = *param_1;
  lStack_48 = *(long *)(param_1 + 4);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (iStack_24 == 0) {
LAB_02553678:
    auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    iStack_24 = -1;
    *param_1 = -1;
LAB_025536b4:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar3 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar5 = *(long *)auStack_60._0_8_;
      uVar9 = auStack_60._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_02553738;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02553738:
      (*(code *)*puVar4)(uVar3,uVar9,puVar4[1]);
    }
    uVar8 = 8;
  }
  else {
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_48 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    InteractionModule__EnableRestriction_2535cc8(*(long *)(lStack_48 + 0xe0),lStack_48,0);
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_48 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__DisableRaycaster_256ea20(*(long *)(lStack_48 + 0x30),lStack_48,0);
    lVar5 = lStack_48;
    if (*(int *)(*(long *)PTR_DAT_049c2f20 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar3 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__Create_37c14c4(0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined8 *)(lVar5 + 0x1a8) = uVar3;
    thunk_FUN_021f190c(lVar5 + 0x1a8);
    if (iStack_24 == 0) goto LAB_02553678;
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    PlayingMonitor__ApplyThemeMotion_2450a98(lStack_48,0);
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_48 + 0x1a8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_40 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__get_Task_37c1658
                           (*(long *)(lStack_48 + 0x1a8),0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_40,0);
    auStack_60 = auStack_40;
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
    uVar3 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ == (long *)0x0) goto LAB_025536b4;
    lVar5 = *(long *)auStack_60._0_8_;
    uVar9 = auStack_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_025536a0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025536a0:
    iVar2 = (*(code *)*puVar4)(uVar3,uVar9,puVar4[1]);
    if (iVar2 != 0) goto LAB_025536b4;
    iStack_24 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
    thunk_FUN_021f190c(param_1 + 6,0);
    FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c4908);
    uVar8 = 5;
  }
  if (-1 < iStack_24) {
LAB_0255378c:
    if ((uVar8 | 8) == 8) {
      *param_1 = -2;
      FUN_0235afc8(param_1 + 2,0);
    }
    return;
  }
  if ((lStack_48 != 0) && (*(long *)(lStack_48 + 0xe0) != 0)) {
    InteractionModule__DisableRestriction_2535d30(*(long *)(lStack_48 + 0xe0),lStack_48,0);
    if ((lStack_48 != 0) && (*(long *)(lStack_48 + 0x30) != 0)) {
      Monitors__RestoreRaycaster_256eafc(*(long *)(lStack_48 + 0x30),lStack_48,0);
      goto LAB_0255378c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

