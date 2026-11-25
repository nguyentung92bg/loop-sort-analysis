/* IL2CPP: StreakTournament.<ApplyHomeAction>d__43$$MoveNext
void StreakTournament__ApplyHomeAction_d__43__MoveNext (StreakTournament__ApplyHomeAction_d__43_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament.<ApplyHomeAction>d__43$$MoveNext
   void StreakTournament__ApplyHomeAction_d__43__MoveNext (StreakTournament__ApplyHomeAction_d__43_o
   __this, const MethodInfo* method); */

void StreakTournament__ApplyHomeAction_d__43__MoveNext_2527738(int *param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000004f4bea6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9a18);
    FUN_021f03f8(PTR_DAT_049c4698);
    FUN_021f03f8(PTR_DAT_049c46a0);
    FUN_021f03f8(PTR_DAT_049c46b0);
    bRam0000000004f4bea6 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  if (*param_1 == 0) {
    uStack_30 = *(undefined8 *)(param_1 + 0xc);
    uStack_38 = *(undefined8 *)(param_1 + 10);
    uStack_40 = *(undefined8 *)(param_1 + 8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    lVar8 = *(long *)(param_1 + 6);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if ((*(char *)(lVar8 + 0x90) == '\0') ||
       (uVar3 = StreakTournament__CanClaim_2524f94(lVar8), (uVar3 & 1) == 0)) goto LAB_026278f0;
    if (*(long *)(lVar8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    LiveOpsModule__Show_253e230(&uStack_88,*(long *)(lVar8 + 0x30),0x16,1,0);
    uStack_58 = uStack_80;
    uStack_60 = uStack_88;
    uStack_50 = uStack_78;
    FUN_0235b0c0(&uStack_60,&uStack_88,*(undefined8 *)PTR_DAT_049c46b0);
    lVar9 = *(long *)PTR_DAT_049c46a0;
    uStack_38 = uStack_80;
    uStack_40 = uStack_88;
    uStack_30 = uStack_78;
    lVar8 = *(long *)(lVar9 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar4 = thunk_FUN_0224e54c(&uStack_40,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0x80));
    lVar8 = *(long *)(lVar9 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    iVar2 = FUN_0235b2a0(uVar4,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18));
    if (iVar2 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_38;
      *(undefined8 *)(param_1 + 8) = uStack_40;
      *(undefined8 *)(param_1 + 0xc) = uStack_30;
      thunk_FUN_021f190c(param_1 + 8,0);
      FUN_0235c25c(param_1 + 2,&uStack_40,param_1,*(undefined8 *)PTR_DAT_049c9a18);
      return;
    }
  }
  FUN_0235b3fc(&uStack_40,&uStack_88,*(undefined8 *)PTR_DAT_049c4698);
LAB_026278f0:
  cVar1 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar7 = *(long **)(param_1 + 2);
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
                    /* try { // try from 02627948 to 02727b73 has its CatchHandler @ 02627948
                       catch() { ... } // from try @ 02627948 with catch @ 02627948
                       catch() { ... } // from try @ 02627be0 with catch @ 02627948
                       catch() { ... } // from try @ 02627e90 with catch @ 02627948
                       catch() { ... } // from try @ 02627ed4 with catch @ 02627948
                       catch() { ... } // from try @ 02627ef0 with catch @ 02627948
                       catch() { ... } // from try @ 02627f64 with catch @ 02627948
                       catch() { ... } // from try @ 02627f88 with catch @ 02627948 */
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_02627978;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049b56d0,2);
LAB_02627978:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  return;
}

