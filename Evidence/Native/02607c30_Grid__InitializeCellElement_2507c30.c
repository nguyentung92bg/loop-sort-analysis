/* IL2CPP: Grid$$InitializeCellElement
void Grid__InitializeCellElement (Grid_o* __this, CellBase_o* cell, GridSheet_Cell_o layoutCell, int32_t cellElementType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Grid$$InitializeCellElement
   void Grid__InitializeCellElement (Grid_o* __this, CellBase_o* cell, GridSheet_Cell_o layoutCell,
   int32_t cellElementType, const MethodInfo* method); */

void Grid__InitializeCellElement_2507c30
               (long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  ulong uVar2;
  
  if ((bRam0000000004f4bd98 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8eb0);
    bRam0000000004f4bd98 = 1;
  }
  if ((*(long *)(param_1 + 0xb0) != 0) &&
     (plVar1 = (long *)CellElements__Get_2506544(*(long *)(param_1 + 0xb0),param_4),
     plVar1 != (long *)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 0x218))(plVar1,param_3,*(undefined8 *)(*plVar1 + 0x220));
    if ((uVar2 & 1) == 0) {
      return;
    }
    plVar1 = (long *)PrefabModuleExtensions__Rent_object__269ed94
                               (*(undefined8 *)(param_1 + 0x30),plVar1,
                                *(undefined8 *)PTR_DAT_049c8eb0);
    if ((param_2 != 0) && (CellBase__AddElement_2504f34(param_2,plVar1,0), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02607cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x228))(plVar1,param_3,*(undefined8 *)(*plVar1 + 0x230));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

