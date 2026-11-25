/* IL2CPP: Conveyor$$EnsureSlotCountsCached
void Conveyor__EnsureSlotCountsCached (Conveyor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$EnsureSlotCountsCached
   void Conveyor__EnsureSlotCountsCached (Conveyor_o* __this, const MethodInfo* method); */

void Conveyor__EnsureSlotCountsCached_24b0de8(long param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar7 = *(long *)(param_1 + 0x100);
  piVar1 = (int *)(param_1 + 0x114);
  piVar2 = (int *)(param_1 + 0x118);
  piVar3 = (int *)(param_1 + 0x11c);
  if ((bRam0000000004f4bb5f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1a08);
    FUN_021f03f8(PTR_DAT_049c1ad0);
    bRam0000000004f4bb5f = 1;
  }
  uStack_70 = 0;
  lStack_68 = 0;
  lStack_60 = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  *piVar3 = 0;
  puVar4 = PTR_DAT_049c1ad0;
  if (lVar7 != 0) {
    lStack_50 = 0;
    lStack_48 = 0;
    lStack_58 = (ulong)*(uint *)(lVar7 + 0x30) << 0x20;
    thunk_FUN_021f190c(&lStack_50,0);
    lStack_48 = *(long *)(lVar7 + 0x28);
    thunk_FUN_021f190c(&lStack_48);
    lStack_68 = lStack_50;
    uStack_70 = lStack_58;
    lStack_60 = lStack_48;
    while( true ) {
      iVar9 = (int)uStack_70 + -1;
      uStack_70 = CONCAT44(uStack_70._4_4_,iVar9);
      if (iVar9 < 0) {
        uStack_70._4_4_ = uStack_70._4_4_ - 1;
        if ((int)uStack_70._4_4_ < 0) {
          return;
        }
        lVar7 = *(long *)(lStack_60 + (ulong)uStack_70._4_4_ * 8 + 0x20);
        lStack_68 = *(long *)(lVar7 + 0x18);
        uStack_70._0_4_ = iVar9;
        thunk_FUN_021f190c((ulong)&uStack_70 | 8);
        iVar9 = *(int *)(lVar7 + 0x30) + -1;
        uStack_70 = CONCAT44(uStack_70._4_4_,iVar9);
      }
      uVar8 = *(undefined8 *)(lStack_68 + (long)iVar9 * 8 + 0x20);
      *piVar3 = *piVar3 + 1;
      if (*(long *)(param_1 + 0x108) == 0) break;
      plVar5 = (long *)FUN_024f6008(*(long *)(param_1 + 0x108),uVar8,*(undefined8 *)puVar4);
      lVar7 = *plVar5;
      if (lVar7 == 0) break;
      uVar6 = ConveyorSlot__HasElement_24b100c(lVar7);
      if ((uVar6 & 1) != 0) {
        *piVar1 = *piVar1 + 1;
      }
      uVar6 = ConveyorSlot__HasSpace_24b105c(lVar7);
      if (((uVar6 & 1) == 0) && (*(int *)(lVar7 + 0xe8) < 1)) {
        *piVar2 = *piVar2 + 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

