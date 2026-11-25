/* IL2CPP: CellElementBase$$SetCell
void CellElementBase__SetCell (CellElementBase_o* __this, CellBase_o* cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CellElementBase$$SetCell
   void CellElementBase__SetCell (CellElementBase_o* __this, CellBase_o* cell, const MethodInfo*
   method); */

void CellElementBase__SetCell_2505890(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if ((bRam0000000004f4bd8a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8d98);
    bRam0000000004f4bd8a = 1;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_02333498(*(long *)(param_1 + 0xd0),param_2,*(undefined8 *)PTR_DAT_049c8d98);
    puVar1 = (undefined8 *)(param_1 + 200);
    *puVar1 = param_2;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                   ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

