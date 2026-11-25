/* IL2CPP: CellMesh$$IsCreateValueValid
bool CellMesh__IsCreateValueValid (CellMesh_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CellMesh$$IsCreateValueValid
   bool CellMesh__IsCreateValueValid (CellMesh_o* __this, System_String_o* value, const MethodInfo*
   method); */

uint CellMesh__IsCreateValueValid_25065fc(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  if ((bRam0000000004f4bd90 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b61a0);
    bRam0000000004f4bd90 = 1;
  }
  if (param_2 != 0) {
    uVar1 = System_String__Contains_2f8242c(param_2,*(undefined8 *)PTR_DAT_049b61a0,3,0);
    return (uVar1 ^ 0xffffffff) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

