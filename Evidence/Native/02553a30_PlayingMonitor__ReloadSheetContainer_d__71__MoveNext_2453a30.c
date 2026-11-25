/* IL2CPP: PlayingMonitor.<ReloadSheetContainer>d__71$$MoveNext
void PlayingMonitor__ReloadSheetContainer_d__71__MoveNext (PlayingMonitor__ReloadSheetContainer_d__71_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor.<ReloadSheetContainer>d__71$$MoveNext
   void PlayingMonitor__ReloadSheetContainer_d__71__MoveNext
   (PlayingMonitor__ReloadSheetContainer_d__71_o __this, const MethodInfo* method); */

void PlayingMonitor__ReloadSheetContainer_d__71__MoveNext_2453a30(int *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4b8e1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4910);
    FUN_021f03f8(PTR_DAT_049c3d48);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b8e1 = 1;
  }
  lVar11 = *(long *)(param_1 + 4);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *(long *)(lVar11 + 0xa0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar1 = ZEXT816(0);
    if (*(char *)(lVar6 + 0x20) != '\0') goto LAB_02553bf0;
    auStack_50 = SheetContainer__Reload_2565938(lVar6,0);
    puVar2 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_50,0);
    uVar4 = auStack_50._8_8_;
    uVar3 = auStack_50._0_8_;
    auStack_60 = auStack_50;
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
    if ((long *)uVar3 != (long *)0x0) {
      lVar6 = *(long *)uVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02553c88;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02229a4c(uVar3,*(long *)PTR_DAT_049b54e0,0);
LAB_02553c88:
      iVar5 = (*(code *)*puVar7)(uVar3,uVar4 & 0xffffffff,puVar7[1]);
      if (iVar5 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
        thunk_FUN_021f190c(param_1 + 6,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c4910);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar3 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_60._0_8_;
    uVar10 = auStack_60._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02553bc4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02553bc4:
    (*(code *)*puVar7)(uVar3,uVar10,puVar7[1]);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar11 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  GameMachine__RequestStateChange_object__261a650
            (*(long *)(lVar11 + 0x98),*(undefined8 *)PTR_DAT_049c3d48);
  auVar1 = auStack_60;
LAB_02553bf0:
  *param_1 = -2;
  auStack_60 = auVar1;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

