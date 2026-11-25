/* IL2CPP: ElevatorHoleSystem.<Move>d__23$$MoveNext
void ElevatorHoleSystem__Move_d__23__MoveNext (ElevatorHoleSystem__Move_d__23_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025a46f8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: ElevatorHoleSystem.<Move>d__23$$MoveNext
   void ElevatorHoleSystem__Move_d__23__MoveNext (ElevatorHoleSystem__Move_d__23_o __this, const
   MethodInfo* method); */

void ElevatorHoleSystem__Move_d__23__MoveNext_24a441c(int *param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  long *plStack_50;
  ulong uStack_48;
  long lStack_40;
  int iStack_34;
  long *plStack_30;
  ulong uStack_28;
  
  if ((bRam0000000004f4bafc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6670);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bafc = 1;
  }
  puVar1 = PTR_DAT_049b5138;
  iStack_34 = *param_1;
  lStack_40 = *(long *)(param_1 + 4);
  uStack_48 = 0;
  plStack_50 = (long *)0x0;
  if (iStack_34 == 0) {
    uStack_48 = *(ulong *)(param_1 + 0xc);
    plStack_50 = *(long **)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    iStack_34 = -1;
    *param_1 = -1;
  }
  else {
    if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = *(long *)PTR_DAT_049b5138;
    *(int *)(lStack_40 + 0x90) = *(int *)(lStack_40 + 0x90) + 1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uStack_28 = *(ulong *)(param_1 + 8);
    plStack_30 = *(long **)(param_1 + 6);
    thunk_FUN_021f190c(&plStack_30,0);
    uStack_48 = uStack_28;
    plStack_50 = plStack_30;
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
    plVar2 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar4 = *plStack_50;
      uVar8 = uStack_48 & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_025a45ac;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(plStack_50,*(long *)PTR_DAT_049b54e0,0);
LAB_025a45ac:
      iVar3 = (*(code *)*puVar5)(plVar2,uVar8,puVar5[1]);
      if (iVar3 == 0) {
        iStack_34 = 0;
        *param_1 = 0;
        *(ulong *)(param_1 + 0xc) = uStack_48;
        *(long **)(param_1 + 10) = plStack_50;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c420(param_1 + 2,&plStack_50,param_1,*(undefined8 *)PTR_DAT_049c6670);
        iVar3 = 5;
        goto LAB_025a465c;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  plVar2 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    lVar4 = *plStack_50;
    uVar8 = uStack_48 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_025a4644;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plStack_50,*(long *)PTR_DAT_049b54e0,2);
LAB_025a4644:
    (*(code *)*puVar5)(plVar2,uVar8,puVar5[1]);
  }
  iVar3 = 6;
LAB_025a465c:
  if (iStack_34 < 0) {
    if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(int *)(lStack_40 + 0x90) = *(int *)(lStack_40 + 0x90) + -1;
  }
  if ((iVar3 == 0) || (iVar3 == 6)) {
    *param_1 = -2;
    FUN_0235afc8(param_1 + 2,0);
  }
  return;
}

