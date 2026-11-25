/* IL2CPP: SandFlowRenderer$$SplitSlotOf
int32_t SandFlowRenderer__SplitSlotOf (SandFlowRenderer_o* __this, SandFlowPacket_o* packet, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$SplitSlotOf
   int32_t SandFlowRenderer__SplitSlotOf (SandFlowRenderer_o* __this, SandFlowPacket_o* packet,
   const MethodInfo* method); */

uint SandFlowRenderer__SplitSlotOf_24c0f28(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  if ((0.5 <= *(float *)(param_2 + 0x2c)) && (fVar4 = *(float *)(param_2 + 4), 1.0 <= fVar4)) {
    uVar1 = 0x7fffffff;
    if (fVar4 != INFINITY) {
      uVar1 = (int)fVar4 - 1;
    }
    if (uVar1 < 0x100) {
      lVar3 = *(long *)(param_1 + 0x278);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        iVar2 = -0x80000000;
        if (*(float *)(param_2 + 0x80) != INFINITY) {
          iVar2 = (int)*(float *)(param_2 + 0x80);
        }
                    /* try { // try from 025c0fa8 to 026c0fc3 has its CatchHandler @ 025c10c4 */
        if (*(int *)(lVar3 + (ulong)uVar1 * 4 + 0x20) == iVar2) {
          return uVar1;
        }
        return 0xffffffff;
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025c0fc4 to 026c10df has its CatchHandler @ 025c0ef8 */
      FUN_021f06a8();
    }
  }
  return 0xffffffff;
}

