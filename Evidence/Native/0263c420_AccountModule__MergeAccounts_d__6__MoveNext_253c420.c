/* IL2CPP: AccountModule.<MergeAccounts>d__6$$MoveNext
void AccountModule__MergeAccounts_d__6__MoveNext (AccountModule__MergeAccounts_d__6_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AccountModule.<MergeAccounts>d__6$$MoveNext
   void AccountModule__MergeAccounts_d__6__MoveNext (AccountModule__MergeAccounts_d__6_o __this,
   const MethodInfo* method); */

void AccountModule__MergeAccounts_d__6__MoveNext_253c420(int *param_1)

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
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bf8b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca400);
    FUN_021f03f8(PTR_DAT_049b55f8);
    FUN_021f03f8(PTR_DAT_049c4f00);
    FUN_021f03f8(PTR_DAT_049c4f08);
    FUN_021f03f8(PTR_DAT_049ca3e0);
    FUN_021f03f8(PTR_DAT_049c4f10);
    bRam0000000004f4bf8b = 1;
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
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049ca3e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_0263c524;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049ca3e0,5);
LAB_0263c524:
    auStack_60 = (*(code *)*puVar4)(plVar8,uVar9,puVar4[1]);
    FUN_0235b0c0(auStack_60,&uStack_40,*(undefined8 *)PTR_DAT_049c4f10);
    uStack_50 = CONCAT44(uStack_3c,uStack_40);
    lVar10 = *(long *)PTR_DAT_049c4f08;
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
      FUN_0235bb44(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049ca400);
      return;
    }
  }
  auStack_60 = auVar1;
  FUN_0235b3fc(&uStack_50,&uStack_40,*(undefined8 *)PTR_DAT_049c4f00);
  puVar2 = PTR_DAT_049b55f8;
  *param_1 = -2;
  uStack_24 = uStack_40;
  FUN_0235bed4(param_1 + 2,&uStack_24,*(undefined8 *)puVar2);
  return;
}

