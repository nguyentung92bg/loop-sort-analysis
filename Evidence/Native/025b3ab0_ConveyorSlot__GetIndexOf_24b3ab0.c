/* IL2CPP: ConveyorSlot$$GetIndexOf
int32_t ConveyorSlot__GetIndexOf (ConveyorSlot_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSlot$$GetIndexOf
   int32_t ConveyorSlot__GetIndexOf (ConveyorSlot_o* __this, Block_o* block, const MethodInfo*
   method); */

void ConveyorSlot__GetIndexOf_24b3ab0(long param_1,undefined8 ****param_2)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
                    /* try { // try from 025b3ac8 to 026b3ad3 has its CatchHandler @ 025b3f24 */
  if ((bRam0000000004f4bb79 & 1) == 0) {
                    /* try { // try from 025b3ad4 to 026b3adf has its CatchHandler @ 025b3f20 */
    FUN_021f03f8(PTR_DAT_049c23c0);
    bRam0000000004f4bb79 = 1;
  }
  lVar5 = *(long *)(param_1 + 0xf8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 025b3aec to 026b3b17 has its CatchHandler @ 025b3f10 */
  lVar4 = tpidr_el0;
  lStack_68 = *(long *)(lVar4 + 0x28);
  lVar12 = *(long *)(*(long *)(*(long *)PTR_DAT_049c23c0 + 0x20) + 0xc0);
  lVar6 = *(long *)(lVar12 + 0x48);
  uVar9 = (ulong)*(uint *)(lVar6 + 0xfc);
  uVar7 = uVar9 + 0xf & 0x1fffffff0;
  plVar11 = (long *)((long)&pppuStack_70 - uVar7);
  lVar8 = (long)plVar11 - uVar7;
  iVar2 = *(int *)(lVar6 + 0x28);
  uVar10 = *(undefined8 *)(lVar5 + 0x10);
  ppppuVar1 = param_2;
  if (-1 < iVar2) {
    ppppuVar1 = &pppuStack_70;
  }
  pppuStack_70 = param_2;
  func_0x04608620(plVar11,ppppuVar1,uVar9);
  uVar3 = *(undefined4 *)(lVar5 + 0x18);
  if (iVar2 < 0) {
    func_0x04608620(lVar8,ppppuVar1,uVar9);
  }
  else {
    lVar8 = *plVar11;
  }
  System_Array__IndexOf___Il2CppFullySharedGenericType__25a87b4
            (uVar10,lVar8,0,uVar3,*(undefined8 *)(lVar12 + 0x158));
  if (*(long *)(lVar4 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

