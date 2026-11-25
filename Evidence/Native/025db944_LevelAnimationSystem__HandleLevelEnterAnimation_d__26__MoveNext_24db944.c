/* IL2CPP: LevelAnimationSystem.<HandleLevelEnterAnimation>d__26$$MoveNext
void LevelAnimationSystem__HandleLevelEnterAnimation_d__26__MoveNext (LevelAnimationSystem__HandleLevelEnterAnimation_d__26_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelAnimationSystem.<HandleLevelEnterAnimation>d__26$$MoveNext
   void LevelAnimationSystem__HandleLevelEnterAnimation_d__26__MoveNext
   (LevelAnimationSystem__HandleLevelEnterAnimation_d__26_o __this, const MethodInfo* method); */

void LevelAnimationSystem__HandleLevelEnterAnimation_d__26__MoveNext_24db944(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4bc4c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7850);
    FUN_021f03f8(PTR_DAT_049c7858);
    FUN_021f03f8(PTR_DAT_049c77c8);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bc4c = 1;
  }
  lVar8 = *(long *)(param_1 + 4);
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar8 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    InteractionModule__EnableRestriction_2535cc8(*(long *)(lVar8 + 0x80),lVar8,0);
    if (*(long *)(lVar8 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__DisableRaycaster_256ea20(*(long *)(lVar8 + 0x88),lVar8,0);
    plVar9 = *(long **)(lVar8 + 0x40);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c7858) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_025dba50;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049c7858,0);
LAB_025dba50:
    (*(code *)*puVar4)(plVar9,0,puVar4[1]);
    auStack_40 = LevelAnimationSystem__ApplyLevelEnter_24d8d20(lVar8);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_40,0);
    auStack_50 = auStack_40;
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
    uVar2 = auStack_50._0_8_;
    if ((long *)auStack_50._0_8_ != (long *)0x0) {
      lVar5 = *(long *)auStack_50._0_8_;
      uVar10 = auStack_50._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_025dbb50;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_50._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025dbb50:
      iVar3 = (*(code *)*puVar4)(uVar2,uVar10,puVar4[1]);
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_50;
        thunk_FUN_021f190c(param_1 + 6,0);
        FUN_0235c420(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_049c7850);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar2 = auStack_50._0_8_;
  if ((long *)auStack_50._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_50._0_8_;
    uVar10 = auStack_50._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_025dbbe8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_50._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025dbbe8:
    (*(code *)*puVar4)(uVar2,uVar10,puVar4[1]);
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar9 = *(long **)(lVar8 + 0x48);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar5 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c77c8) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_025dbc58;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049c77c8,0);
LAB_025dbc58:
  (*(code *)*puVar4)(plVar9,0,puVar4[1]);
  if (*(long *)(lVar8 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  InteractionModule__DisableRestriction_2535d30(*(long *)(lVar8 + 0x80),lVar8,0);
  if (*(long *)(lVar8 + 0x88) != 0) {
    Monitors__RestoreRaycaster_256eafc(*(long *)(lVar8 + 0x88),lVar8,0);
    *param_1 = -2;
    FUN_0235afc8(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

