/* IL2CPP: CellBase$$GetNeighborAt
CellBase_o* CellBase__GetNeighborAt (CellBase_o* __this, UnityEngine_Vector3Int_o offsetDirection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CellBase$$GetNeighborAt
   CellBase_o* CellBase__GetNeighborAt (CellBase_o* __this, UnityEngine_Vector3Int_o
   offsetDirection, const MethodInfo* method); */

undefined8 CellBase__GetNeighborAt_2505c00(long param_1,int param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0xd8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar2 = *(long *)(param_1 + 0xa8) + (param_3 << 0x20);
  uVar1 = (int)*(long *)(param_1 + 0xa8) + param_2;
  if ((int)uVar1 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if ((-1 < (long)uVar2) && ((int)uVar1 < *(int *)(lVar4 + 0xc0))) {
      uVar5 = (uint)(uVar2 >> 0x20);
      if ((int)uVar5 < *(int *)(lVar4 + 0xc4)) {
        lVar4 = *(long *)(lVar4 + 0xb8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0(0);
        }
        if ((**(uint **)(lVar4 + 0x10) <= uVar1) ||
           (lVar6 = *(long *)(*(uint **)(lVar4 + 0x10) + 4), (uint)lVar6 <= uVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        uVar3 = *(undefined8 *)
                 (lVar4 + ((uVar2 >> 0x20) + lVar6 * ((ulong)uVar1 & 0x7fffffff)) * 8 + 0x20);
      }
    }
  }
  return uVar3;
}

