/* IL2CPP: SandFlowRenderer$$RebaseSplit
void SandFlowRenderer__RebaseSplit (SandFlowRenderer_o* __this, SandFlowPacket_o* packet, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$RebaseSplit
   void SandFlowRenderer__RebaseSplit (SandFlowRenderer_o* __this, SandFlowPacket_o* packet, const
   MethodInfo* method); */

void SandFlowRenderer__RebaseSplit_24c0fc8(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  
  uVar4 = SandFlowRenderer__SplitSlotOf_24c0f28();
  if (-1 < (int)uVar4) {
    SandFlowRenderer__CompleteDeposit_24bef9c(param_1,1);
    uVar3 = *(uint *)(param_1 + 0x2a8);
    uVar5 = (ulong)uVar3;
    if ((int)uVar3 < 1) {
      fVar9 = 0.0;
    }
    else {
      iVar6 = uVar3 * uVar4;
      fVar9 = 0.0;
      uVar8 = uVar5;
      iVar1 = iVar6;
      do {
        lVar7 = (long)iVar1;
        uVar8 = uVar8 - 1;
        iVar1 = iVar1 + 1;
        fVar9 = fVar9 + *(float *)(*(long *)(param_1 + 0x290) + lVar7 * 4);
      } while (uVar8 != 0);
      uVar2 = uVar3;
      if ((int)uVar3 < 2) {
        uVar2 = 1;
      }
      fVar9 = fVar9 / (float)(int)uVar2;
      if (0 < (int)uVar3) {
        lVar7 = *(long *)(param_1 + 0x290);
        do {
          uVar5 = uVar5 - 1;
          *(float *)(lVar7 + (long)iVar6 * 4) = *(float *)(lVar7 + (long)iVar6 * 4) - fVar9;
          iVar6 = iVar6 + 1;
        } while (uVar5 != 0);
      }
    }
    lVar7 = *(long *)(param_1 + 0x280);
    *(float *)(param_2 + 0x88) = fVar9 + *(float *)(param_2 + 0x88);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    *(undefined1 *)(lVar7 + (ulong)uVar4 + 0x20) = 1;
  }
  return;
}

