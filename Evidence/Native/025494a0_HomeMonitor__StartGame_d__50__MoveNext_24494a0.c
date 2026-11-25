/* IL2CPP: HomeMonitor.<StartGame>d__50$$MoveNext
void HomeMonitor__StartGame_d__50__MoveNext (HomeMonitor__StartGame_d__50_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor.<StartGame>d__50$$MoveNext
   void HomeMonitor__StartGame_d__50__MoveNext (HomeMonitor__StartGame_d__50_o __this, const
   MethodInfo* method); */

void HomeMonitor__StartGame_d__50__MoveNext_24494a0(int *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4b885 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c44c0);
    FUN_021f03f8(PTR_DAT_049c3d48);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b885 = 1;
  }
  lVar10 = *(long *)(param_1 + 4);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
LAB_025495d4:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar3 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_60._0_8_;
      uVar11 = auStack_60._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_02549658;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02549658:
      (*(code *)*puVar6)(uVar3,uVar11,puVar6[1]);
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar10 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__RestoreRaycaster_256eafc(*(long *)(lVar10 + 0x30),lVar10,0);
    auVar1 = auStack_60;
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar1 = ZEXT816(0);
    if (*(char *)(lVar10 + 0x198) != '\0') goto LAB_025496a0;
    *(undefined1 *)(lVar10 + 0x198) = 1;
    if (*(long *)(lVar10 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar1 = ZEXT816(0);
    if (*(char *)(*(long *)(lVar10 + 0x1a0) + 0x10) != '\0') {
      if (*(long *)(lVar10 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Monitors__DisableRaycaster_256ea20(*(long *)(lVar10 + 0x30),lVar10,0);
      auStack_50 = HomeMonitor__ApplyAreaStartAnimation_24480a0(lVar10);
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
        lVar7 = *(long *)uVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02549738;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(uVar3,*(long *)PTR_DAT_049b54e0,0);
LAB_02549738:
        iVar5 = (*(code *)*puVar6)(uVar3,uVar4 & 0xffffffff,puVar6[1]);
        if (iVar5 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
          thunk_FUN_021f190c(param_1 + 6,0);
          FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c44c0);
          return;
        }
      }
      goto LAB_025495d4;
    }
  }
  auStack_60 = auVar1;
  if (*(long *)(lVar10 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar8 = GameMachine__RequestStateChange_object__261a650
                    (*(long *)(lVar10 + 0xa0),*(undefined8 *)PTR_DAT_049c3d48);
  auVar1 = auStack_60;
  if ((uVar8 & 1) == 0) {
    *(undefined1 *)(lVar10 + 0x198) = 0;
  }
LAB_025496a0:
  *param_1 = -2;
  auStack_60 = auVar1;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

