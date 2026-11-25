/* IL2CPP: TournamentModule.<End>d__3$$MoveNext
void TournamentModule__End_d__3__MoveNext (TournamentModule__End_d__3_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TournamentModule.<End>d__3$$MoveNext
   void TournamentModule__End_d__3__MoveNext (TournamentModule__End_d__3_o __this, const MethodInfo*
   method); */

void TournamentModule__End_d__3__MoveNext_254b720(int *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4c048 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caa18);
    FUN_021f03f8(PTR_DAT_049b5c98);
    FUN_021f03f8(PTR_DAT_049c9750);
    FUN_021f03f8(PTR_DAT_049c9758);
    FUN_021f03f8(PTR_DAT_049caa20);
    FUN_021f03f8(PTR_DAT_049c9768);
    bRam0000000004f4c048 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  auVar1 = ZEXT816(0);
  if (*param_1 == 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0xe);
    uStack_50 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar8 = *(long **)(*(long *)(param_1 + 8) + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = *plVar8;
    uVar9 = *(undefined8 *)(param_1 + 10);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049caa20) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0264b828;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049caa20,2);
LAB_0264b828:
    auStack_60 = (*(code *)*puVar4)(plVar8,uVar9,puVar4[1]);
    FUN_0235b0c0(auStack_60,&uStack_40,*(undefined8 *)PTR_DAT_049c9768);
    uStack_50 = CONCAT44(uStack_3c,uStack_40);
    lVar10 = *(long *)PTR_DAT_049c9758;
    uStack_48 = uStack_38;
    lVar5 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    uVar9 = thunk_FUN_0224e54c(&uStack_50,
                               *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80));
    lVar5 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    iVar3 = FUN_0235b2a0(uVar9,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
    auVar1 = auStack_60;
    if (iVar3 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = uStack_48;
      *(undefined8 *)(param_1 + 0xc) = uStack_50;
      thunk_FUN_021f190c(param_1 + 0xc,0);
      FUN_0235bb44(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049caa18);
      return;
    }
  }
  auStack_60 = auVar1;
  FUN_0235b3fc(&uStack_50,&uStack_40,*(undefined8 *)PTR_DAT_049c9750);
  puVar2 = PTR_DAT_049b5c98;
  *param_1 = -2;
  FUN_0235bed4(param_1 + 2,&uStack_40,*(undefined8 *)puVar2);
  return;
}

