/* IL2CPP: ConveyorSlot$$RemoveBlock
void ConveyorSlot__RemoveBlock (ConveyorSlot_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSlot$$RemoveBlock
   void ConveyorSlot__RemoveBlock (ConveyorSlot_o* __this, Block_o* block, const MethodInfo*
   method); */

void ConveyorSlot__RemoveBlock_24b398c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lStack_40;
  long lStack_38;
  
                    /* try { // try from 025b3998 to 026b39a3 has its CatchHandler @ 025b3fec */
                    /* try { // try from 025b39a4 to 026b39af has its CatchHandler @ 025b3fbc */
  if ((bRam0000000004f4bb78 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6bf8);
                    /* try { // try from 025b39bc to 026b39c3 has its CatchHandler @ 025b3fb8 */
    FUN_021f03f8(PTR_DAT_049c2360);
    bRam0000000004f4bb78 = 1;
  }
  lStack_40 = 0;
  lStack_38 = 0;
                    /* try { // try from 025b39d4 to 026b3a03 has its CatchHandler @ 025b3ff0 */
  if (param_2 != 0) {
    Block__ClearContainer_23dc3e8(param_2,0);
    if (*(long *)(param_1 + 0xf8) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove_28d00fc
                (*(long *)(param_1 + 0xf8),param_2,*(undefined8 *)PTR_DAT_049c2360);
      plVar7 = *(long **)(param_1 + 0xd8);
      lStack_38 = 0;
      lStack_40 = param_1;
                    /* try { // try from 025b3a10 to 026b3a1b has its CatchHandler @ 025b3fb4 */
      thunk_FUN_021f190c(&lStack_40,param_1);
      lStack_38 = param_2;
                    /* try { // try from 025b3a1c to 026b3a37 has its CatchHandler @ 025b3fe8 */
      thunk_FUN_021f190c(&lStack_38,param_2);
      lVar2 = lStack_38;
      lVar1 = lStack_40;
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 025b3a44 to 026b3a4f has its CatchHandler @ 025b3fb0 */
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049c6bf8) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_025b3a84;
            }
            uVar5 = uVar5 - 1;
                    /* try { // try from 025b3a60 to 026b3a8b has its CatchHandler @ 025b3fcc */
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049c6bf8,0);
LAB_025b3a84:
        (*(code *)*puVar3)(plVar7,lVar1,lVar2,puVar3[1]);
                    /* try { // try from 025b3aa0 to 026b3aa3 has its CatchHandler @ 025b3f00 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

