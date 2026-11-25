/* IL2CPP: BlockTransferSystem$$HasBetterCarrier
bool BlockTransferSystem__HasBetterCarrier (BlockTransferSystem_o* __this, Carrier_o* referenceCarrier, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockTransferSystem$$HasBetterCarrier
   bool BlockTransferSystem__HasBetterCarrier (BlockTransferSystem_o* __this, Carrier_o*
   referenceCarrier, Block_o* block, const MethodInfo* method); */

uint BlockTransferSystem__HasBetterCarrier_23e7870(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *aplStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f4b5ff & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c1580);
    FUN_021f03f8(PTR_DAT_049c1588);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c1590);
    bRam0000000004f4b5ff = 1;
  }
  puVar2 = PTR_DAT_049b3b98;
  lVar7 = *(long *)(param_1 + 0xa0);
  uStack_a0 = 0;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  if (lVar7 == 0) {
LAB_024e7b30:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_80 = 0;
  uStack_78 = 0;
  aplStack_70[0] = (long *)0x0;
  lVar8 = *(long *)PTR_DAT_049c1590;
  puVar4 = (undefined8 *)
           thunk_FUN_0224e54c(lVar7,*(long *)(**(long **)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x80) +
                                    0x60);
  uStack_60 = *puVar4;
  uStack_58 = 0;
  thunk_FUN_021f190c(&uStack_60);
  uStack_58 = 0;
  uStack_78 = 0;
  uStack_80 = uStack_60;
  thunk_FUN_021f190c(&uStack_80,0);
  puVar4 = (undefined8 *)
           thunk_FUN_0224e54c(lVar7,*(long *)(**(long **)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x80) +
                                    0x80);
  aplStack_70[0] = (long *)*puVar4;
  thunk_FUN_021f190c(aplStack_70);
  uStack_98 = uStack_78;
  uStack_a0 = uStack_80;
  plStack_90 = aplStack_70[0];
  uVar5 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_a0,0);
  lVar7 = 0;
  if ((uVar5 & 1) != 0) {
    iVar10 = 0;
    lVar8 = 0;
    do {
      lVar9 = *(long *)((long)plStack_90 +
                       (ulong)*(uint *)(*plStack_90 + 0x104) * (long)uStack_98._4_4_ + 0x20);
      if (lVar9 == 0) goto LAB_024e7b30;
      uVar5 = Carrier__CanTransferBlock_24097e8(lVar9,param_3,0);
      lVar7 = lVar8;
      if ((uVar5 & 1) != 0) {
        uVar5 = Carrier__IsBetterCarrier_2409a44(lVar9,param_3,0);
        lVar7 = lVar9;
        if ((uVar5 & 1) != 0) break;
        if (*(long *)(param_1 + 0xd8) == 0) goto LAB_024e7b30;
        lVar7 = lVar8;
        if ((((*(char *)(*(long *)(param_1 + 0xd8) + 0x10) == '\0') &&
             (uVar5 = Carrier__IsFull_2409500(lVar9,0), (uVar5 & 1) == 0)) &&
            (uVar5 = Carrier__CanBeginTransferEnter_23fad1c(lVar9,0), (uVar5 & 1) != 0)) &&
           (uVar5 = Carrier__AreAllBlocksSameColor_23fad40(lVar9,0), (uVar5 & 1) != 0)) {
          uVar6 = Carrier__GetNextColorType_24095f4(lVar9,0);
          if (param_3 == 0) goto LAB_024e7b30;
          uVar5 = ColorType__op_Inequality_24f9dbc(*(undefined8 *)(param_3 + 0xe4),uVar6,0);
          if ((uVar5 & 1) == 0) {
            if (*(long *)(lVar9 + 0x1e0) == 0) goto LAB_024e7b30;
            iVar1 = *(int *)(*(long *)(lVar9 + 0x1e0) + 0x18);
            if (iVar10 <= iVar1) {
              if (iVar10 == iVar1) {
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar5 = UnityEngine_Object__op_Inequality_3c1b96c(param_2,lVar9,0);
                if ((uVar5 & 1) != 0) goto LAB_024e7aac;
              }
              lVar7 = lVar9;
              iVar10 = iVar1;
            }
          }
        }
      }
LAB_024e7aac:
      uVar5 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_a0,0);
      lVar8 = lVar7;
    } while ((uVar5 & 1) != 0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = UnityEngine_Object__op_Inequality_3c1b96c(lVar7,0,0);
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(lVar7,param_2,0);
  }
  return uVar3 & 1;
}

