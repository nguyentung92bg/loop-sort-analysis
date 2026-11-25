/* IL2CPP: GameMainMenuState.<HandleAreaComplete>d__16$$MoveNext
void GameMainMenuState__HandleAreaComplete_d__16__MoveNext (GameMainMenuState__HandleAreaComplete_d__16_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameMainMenuState.<HandleAreaComplete>d__16$$MoveNext
   void GameMainMenuState__HandleAreaComplete_d__16__MoveNext
   (GameMainMenuState__HandleAreaComplete_d__16_o __this, const MethodInfo* method); */

void GameMainMenuState__HandleAreaComplete_d__16__MoveNext_24fec88(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_60 [16];
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4bd65 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8ba0);
    FUN_021f03f8(PTR_DAT_049c8ba8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bd65 = 1;
  }
  puVar1 = PTR_DAT_049b5310;
  uStack_48 = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    lVar12 = *(long *)(param_1 + 6);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar12 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = *(long *)(*(long *)(lVar12 + 0x90) + 0x50);
    lVar6 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar1;
    }
    iVar5 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar6 + 0xb8) + 0x60);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar7 = AreaSheet__TryGetCompletedArea_2558114(lVar11,iVar5 + 1,&uStack_48,0);
    if ((uVar7 & 1) == 0) goto LAB_025fef1c;
    if (*(long *)(lVar12 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar12 = Monitors__Get_object__26889d0(*(long *)(lVar12 + 0x70),*(undefined8 *)PTR_DAT_049c8ba8)
    ;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_40 = AreaCompletedMonitor__Complete_2433554(lVar12,uStack_48,0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_40,0);
    uVar4 = auStack_40._8_8_;
    uVar3 = auStack_40._0_8_;
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
    if ((long *)uVar3 != (long *)0x0) {
      lVar12 = *(long *)uVar3;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_025fee74;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(uVar3,*(long *)PTR_DAT_049b54e0,0);
LAB_025fee74:
      iVar5 = (*(code *)*puVar8)(uVar3,uVar4 & 0xffffffff,puVar8[1]);
      if (iVar5 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_60;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c25c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c8ba0);
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
    lVar12 = *(long *)auStack_60._0_8_;
    uVar13 = auStack_60._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_025fef0c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025fef0c:
    (*(code *)*puVar8)(uVar3,uVar13,puVar8[1]);
  }
LAB_025fef1c:
  cVar2 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar12 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_025fefa4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b56d0,2);
LAB_025fefa4:
    (*(code *)*puVar8)(plVar10,puVar8[1]);
  }
  return;
}

