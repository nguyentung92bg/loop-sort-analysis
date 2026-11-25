/* IL2CPP: Conveyor$$ComputeSlotCounts
void Conveyor__ComputeSlotCounts (Conveyor_o* __this, Scellecs_Morpeh_Filter_o* filter, int32_t* occupied, int32_t* noSpace, int32_t* total, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$ComputeSlotCounts
   void Conveyor__ComputeSlotCounts (Conveyor_o* __this, Scellecs_Morpeh_Filter_o* filter, int32_t*
   occupied, int32_t* noSpace, int32_t* total, const MethodInfo* method); */

void Conveyor__ComputeSlotCounts_24b0e80
               (long param_1,long param_2,int *param_3,int *param_4,int *param_5)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  if ((bRam0000000004f4bb5f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1a08);
    FUN_021f03f8(PTR_DAT_049c1ad0);
    bRam0000000004f4bb5f = 1;
  }
  uStack_70 = 0;
  lStack_68 = 0;
  lStack_60 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  puVar1 = PTR_DAT_049c1ad0;
  if (param_2 != 0) {
    lStack_50 = 0;
    lStack_48 = 0;
    lStack_58 = (ulong)*(uint *)(param_2 + 0x30) << 0x20;
    thunk_FUN_021f190c(&lStack_50,0);
    lStack_48 = *(long *)(param_2 + 0x28);
    thunk_FUN_021f190c(&lStack_48);
    lStack_68 = lStack_50;
    uStack_70 = lStack_58;
    lStack_60 = lStack_48;
    while( true ) {
      iVar5 = (int)uStack_70 + -1;
      uStack_70 = CONCAT44(uStack_70._4_4_,iVar5);
      if (iVar5 < 0) {
        uStack_70._4_4_ = uStack_70._4_4_ - 1;
        if ((int)uStack_70._4_4_ < 0) {
          return;
        }
        lVar6 = *(long *)(lStack_60 + (ulong)uStack_70._4_4_ * 8 + 0x20);
        lStack_68 = *(long *)(lVar6 + 0x18);
        uStack_70._0_4_ = iVar5;
        thunk_FUN_021f190c((ulong)&uStack_70 | 8);
        iVar5 = *(int *)(lVar6 + 0x30) + -1;
        uStack_70 = CONCAT44(uStack_70._4_4_,iVar5);
      }
      lVar6 = *(long *)(param_1 + 0x108);
      uVar4 = *(undefined8 *)(lStack_68 + (long)iVar5 * 8 + 0x20);
      *param_5 = *param_5 + 1;
      if (lVar6 == 0) break;
      plVar2 = (long *)FUN_024f6008(lVar6,uVar4,*(undefined8 *)puVar1);
      lVar6 = *plVar2;
      if (lVar6 == 0) break;
      uVar3 = ConveyorSlot__HasElement_24b100c(lVar6);
      if ((uVar3 & 1) != 0) {
        *param_3 = *param_3 + 1;
      }
      uVar3 = ConveyorSlot__HasSpace_24b105c(lVar6);
      if (((uVar3 & 1) == 0) && (*(int *)(lVar6 + 0xe8) < 1)) {
        *param_4 = *param_4 + 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

