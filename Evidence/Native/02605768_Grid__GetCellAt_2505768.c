/* IL2CPP: Grid$$GetCellAt
CellBase_o* Grid__GetCellAt (Grid_o* __this, UnityEngine_Vector2Int_o offsetCoordinate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Grid$$GetCellAt
   CellBase_o* Grid__GetCellAt (Grid_o* __this, UnityEngine_Vector2Int_o offsetCoordinate, const
   MethodInfo* method); */

undefined8 Grid__GetCellAt_2505768(long param_1,ulong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = (uint)(param_2 >> 0x20);
  uVar2 = (uint)param_2;
  if ((int)uVar2 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (((-1 < (long)param_2) && ((int)uVar2 < *(int *)(param_1 + 0xc0))) &&
       ((int)uVar3 < *(int *)(param_1 + 0xc4))) {
      lVar4 = *(long *)(param_1 + 0xb8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0(0);
      }
      if ((**(uint **)(lVar4 + 0x10) <= uVar2) ||
         (lVar5 = *(long *)(*(uint **)(lVar4 + 0x10) + 4), (uint)lVar5 <= uVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      uVar1 = *(undefined8 *)(lVar4 + ((ulong)uVar3 + lVar5 * (param_2 & 0x7fffffff)) * 8 + 0x20);
    }
  }
  return uVar1;
}

