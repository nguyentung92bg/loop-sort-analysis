/* IL2CPP: Grid$$PopulateCellElements
void Grid__PopulateCellElements (Grid_o* __this, GridSheet_Cell_array* cells, System_Nullable_CellElementType__o allowedType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Grid$$PopulateCellElements
   void Grid__PopulateCellElements (Grid_o* __this, GridSheet_Cell_array* cells,
   System_Nullable_CellElementType__o allowedType, const MethodInfo* method); */

void Grid__PopulateCellElements_2506e84(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((bRam0000000004f4bd96 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b61a0);
    bRam0000000004f4bd96 = 1;
  }
  uVar2 = Grid__GetLayoutSize_2506dbc(param_1);
  puVar1 = PTR_DAT_049b61a0;
  if (0 < (int)uVar2) {
    uVar6 = 0;
    do {
      if (0 < (int)(uVar2 >> 0x20)) {
        if (param_2 == 0) {
LAB_02606fa8:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar7 = 0;
        do {
          if ((**(uint **)(param_2 + 0x10) <= uVar6) ||
             (uVar3 = *(ulong *)(*(uint **)(param_2 + 0x10) + 4), (uVar3 & 0xffffffff) <= uVar7)) {
LAB_02606fa4:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          uVar5 = *(undefined8 *)(param_2 + (uVar7 + uVar6 * uVar3) * 8 + 0x20);
          uVar3 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)puVar1,0);
          if ((uVar3 & 1) == 0) {
            lVar4 = *(long *)(param_1 + 0xb8);
            if (lVar4 == 0) goto LAB_02606fa8;
            if ((**(uint **)(lVar4 + 0x10) <= uVar6) ||
               (uVar3 = *(ulong *)(*(uint **)(lVar4 + 0x10) + 4), (uVar3 & 0xffffffff) <= uVar7))
            goto LAB_02606fa4;
            Grid__PopulateCellWithElement_25078fc
                      (param_1,*(undefined8 *)(lVar4 + (uVar7 + uVar6 * uVar3) * 8 + 0x20),uVar5,
                       param_3);
          }
          uVar7 = uVar7 + 1;
        } while (uVar2 >> 0x20 != uVar7);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != (uVar2 & 0xffffffff));
  }
  return;
}

