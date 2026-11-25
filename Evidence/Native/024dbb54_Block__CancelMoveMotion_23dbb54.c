/* IL2CPP: Block$$CancelMoveMotion
void Block__CancelMoveMotion (Block_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Block$$CancelMoveMotion
   void Block__CancelMoveMotion (Block_o* __this, const MethodInfo* method); */

void Block__CancelMoveMotion_23dbb54(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  long *plVar10;
  long *aplStack_38 [2];
  
  uVar2 = FUN_024f7208(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8),0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0xa0);
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  if (cRam0000000004f4b662 == '\0') {
    FUN_021f03f8(&DAT_04baabc0,uVar1,1,0);
    FUN_021f03f8(&DAT_04b77408);
    FUN_021f03f8(&DAT_04b88908);
    FUN_021f03f8(&DAT_04b8b0c8);
    cRam0000000004f4b662 = '\x01';
  }
  uVar9 = (uint)uVar2;
  if (-1 < (int)uVar9) {
    if (cRam0000000004f4b661 == '\0') {
      FUN_021f03f8(&DAT_04b8b0c8);
      cRam0000000004f4b661 = '\x01';
    }
    plVar10 = *(long **)(_DAT_04b8b0c8 + 0xb8);
    if ((int)uVar9 < (int)plVar10[2]) {
      if (*(int *)(_DAT_04b77408 + 0xe4) == 0) {
        FUN_021f0574();
        plVar10 = *(long **)(_DAT_04b8b0c8 + 0xb8);
      }
      lVar3 = *(long *)(_DAT_04baabc0 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02229718();
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) {
        if (*(uint *)(plVar10 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        func_0x04608620(aplStack_38,
                        (long)plVar10 +
                        (uVar2 & 0xffffffff) * (ulong)*(uint *)(*plVar10 + 0x104) + 0x20,
                        *(undefined4 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x28) + 0xfc));
        if (aplStack_38[0] != (long *)0x0) {
          lVar3 = *aplStack_38[0];
          uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049c22a0) {
                puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                goto LAB_024f7540;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_02229a4c(aplStack_38[0],*(long *)PTR_DAT_049c22a0,4);
LAB_024f7540:
                    /* WARNING: Could not recover jumptable at 0x024f7564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar4)(aplStack_38[0],uVar2,uVar1,1,puVar4[1]);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  thunk_FUN_02256840(&DAT_04b83480);
  uVar5 = thunk_FUN_0222ca34();
  uVar6 = thunk_FUN_02256840(&DAT_04c07048);
  System_ArgumentException___ctor_306c238(uVar5,uVar6,0);
  uVar6 = thunk_FUN_02256840(&DAT_04bd5e60);
                    /* WARNING: Subroutine does not return */
  FUN_021f0564(uVar5,uVar6);
}

