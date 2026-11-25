/* IL2CPP: ConveyorSlotCreateSystem$$NormalizeSlotCount
int32_t ConveyorSlotCreateSystem__NormalizeSlotCount (ConveyorSlotCreateSystem_o* __this, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSlotCreateSystem$$NormalizeSlotCount
   int32_t ConveyorSlotCreateSystem__NormalizeSlotCount (ConveyorSlotCreateSystem_o* __this, int32_t
   count, const MethodInfo* method); */

int ConveyorSlotCreateSystem__NormalizeSlotCount_24b4e5c(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
                    /* try { // try from 025b4e5c to 026b4e77 has its CatchHandler @ 025b49e8 */
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x158);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = param_2 / iVar1;
    }
    iVar2 = param_2 - iVar2 * iVar1;
    iVar1 = iVar1 - iVar2;
                    /* catch() { ... } // from try @ 025b4e58 with catch @ 025b4e74 */
                    /* try { // try from 025b4e78 to 026b4e7f has its CatchHandler @ 025b4efc */
    if (iVar2 < iVar1) {
      iVar1 = -iVar2;
    }
                    /* try { // try from 025b4e80 to 026b4ea3 has its CatchHandler @ 025b49e8 */
    return iVar1 + param_2;
  }
                    /* catch() { ... } // from try @ 025b4bd8 with catch @ 025b4e84 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 025b4c4c with catch @ 025b4e88
                       catch() { ... } // from try @ 025b4cb0 with catch @ 025b4e88 */
  FUN_021f06a0();
}

