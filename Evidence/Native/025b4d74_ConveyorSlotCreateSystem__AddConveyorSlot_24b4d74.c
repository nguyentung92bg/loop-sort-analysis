/* IL2CPP: ConveyorSlotCreateSystem$$AddConveyorSlot
void ConveyorSlotCreateSystem__AddConveyorSlot (ConveyorSlotCreateSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSlotCreateSystem$$AddConveyorSlot
   void ConveyorSlotCreateSystem__AddConveyorSlot (ConveyorSlotCreateSystem_o* __this, const
   MethodInfo* method); */

void ConveyorSlotCreateSystem__AddConveyorSlot_24b4d74(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  int iVar7;
  
  if ((bRam0000000004f4bb89 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6c70);
    bRam0000000004f4bb89 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar7 = *(int *)(*(long *)(param_1 + 0x30) + 0x158);
                    /* try { // try from 025b4db0 to 026b4dc3 has its CatchHandler @ 025b49e8 */
    if (0 < iVar7) {
      do {
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_025b4e58;
        uVar1 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 0x40),0);
                    /* try { // try from 025b4dc4 to 026b4dc7 has its CatchHandler @ 025b4e2c */
                    /* try { // try from 025b4dc8 to 026b4df3 has its CatchHandler @ 025b49e8 */
        ConveyorSlotCreateSystem__CreateConveyorSlot_24b4cc4(param_1,uVar1);
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    Scellecs_Morpeh_WorldExtensions__Commit_32baedc(*(undefined8 *)(param_1 + 0x18),0);
    plVar6 = *(long **)(param_1 + 0x68);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
                    /* try { // try from 025b4df4 to 026b4df7 has its CatchHandler @ 025b4e34 */
                    /* try { // try from 025b4df8 to 026b4dfb has its CatchHandler @ 025b4e28 */
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 025b4dfc to 026b4dff has its CatchHandler @ 025b49e8 */
                    /* try { // try from 025b4e00 to 026b4e03 has its CatchHandler @ 025b4e14 */
      if (uVar4 != 0) {
                    /* try { // try from 025b4e04 to 026b4e0b has its CatchHandler @ 025b4e1c */
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
                    /* try { // try from 025b4e0c to 026b4e57 has its CatchHandler @ 025b49e8 */
                    /* catch() { ... } // from try @ 025b4b68 with catch @ 025b4e10 */
                    /* catch() { ... } // from try @ 025b4e00 with catch @ 025b4e14 */
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c6c70) {
                    /* catch() { ... } // from try @ 025b4df4 with catch @ 025b4e34 */
                    /* catch() { ... } // from try @ 025b4bb8 with catch @ 025b4e38 */
                    /* catch() { ... } // from try @ 025b4d64 with catch @ 025b4e3c */
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_025b4e40;
          }
                    /* catch() { ... } // from try @ 025b4b30 with catch @ 025b4e18 */
          uVar4 = uVar4 - 1;
                    /* catch() { ... } // from try @ 025b4cc8 with catch @ 025b4e1c
                       catch() { ... } // from try @ 025b4e04 with catch @ 025b4e1c */
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
                    /* catch() { ... } // from try @ 025b4df8 with catch @ 025b4e28 */
                    /* catch() { ... } // from try @ 025b4dc4 with catch @ 025b4e2c */
      puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049c6c70,0);
                    /* catch() { ... } // from try @ 025b4d44 with catch @ 025b4e30 */
LAB_025b4e40:
                    /* WARNING: Could not recover jumptable at 0x025b4e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar6,0,puVar2[1]);
      return;
    }
  }
LAB_025b4e58:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025b4e58 to 026b4e5b has its CatchHandler @ 025b4e74 */
  FUN_021f06a0();
}

