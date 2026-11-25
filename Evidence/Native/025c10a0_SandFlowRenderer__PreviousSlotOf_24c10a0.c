/* IL2CPP: SandFlowRenderer$$PreviousSlotOf
int32_t SandFlowRenderer__PreviousSlotOf (SandFlowRenderer_o* __this, SandFlowPacket_o* packet, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$PreviousSlotOf
   int32_t SandFlowRenderer__PreviousSlotOf (SandFlowRenderer_o* __this, SandFlowPacket_o* packet,
   const MethodInfo* method); */

uint SandFlowRenderer__PreviousSlotOf_24c10a0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  if ((3.0 < *(float *)(param_2 + 0x2c)) && (fVar4 = *(float *)(param_2 + 8), 1.0 <= fVar4)) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c0fa8 with catch @ 025c10c4
                        */
    uVar1 = 0x7fffffff;
    if (fVar4 != INFINITY) {
      uVar1 = (int)fVar4 - 1;
    }
                    /* try { // try from 025c10e0 to 026c10e3 has its CatchHandler @ 025c10ec */
    if (uVar1 < 0x100) {
      lVar3 = *(long *)(param_1 + 0x278);
                    /* catch() { ... } // from try @ 025c10e0 with catch @ 025c10ec */
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 025c10f0 to 026c10f7 has its CatchHandler @ 025c1100 */
                    /* try { // try from 025c10f8 to 026c1103 has its CatchHandler @ 025c0ef8 */
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025c10f0 with catch @ 025c1100
                        */
        iVar2 = -0x80000000;
        if (*(float *)(param_2 + 0x80) != INFINITY) {
          iVar2 = (int)*(float *)(param_2 + 0x80);
        }
        if (*(int *)(lVar3 + (ulong)uVar1 * 4 + 0x20) == iVar2) {
          return uVar1;
        }
        return 0xffffffff;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
  }
  return 0xffffffff;
}

